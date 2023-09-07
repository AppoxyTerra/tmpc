#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <cmath>
#include <vector>

#define PREC 1

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
// Vector2 mdt;
float dt;

void drawArrow(Vector2 origin, Vector2 dir, Color color) {
	DrawLineV(origin, Vector2Add(origin, dir), color);
	// Letting the compiler compute the rotation matrix
	const float angle = 30.0f*DEG2RAD;
	DrawTriangle(
		Vector2Add(origin, {(dir.x*cosf(angle) - dir.y*sinf(angle))*0.7f, (dir.x*sinf(angle) + dir.y*cosf(angle))*0.7f}),
		Vector2Add(origin, {(dir.x*cosf(-angle) - dir.y*sinf(-angle))*0.7f, (dir.x*sinf(-angle) + dir.y*cosf(-angle))*0.7f}),
		Vector2Add(origin, dir),
		color
	);
}

template <class T>
struct DerivateOf {
	T& lookup;
	T save[PREC] = {0};
	T value = {0};

	DerivateOf(T& lookup) : lookup(lookup) {}

	inline void update() {
		value = {0};
		for (size_t i = 0; i < PREC-1; i++)
		{
			value += save[i] - save[i+1];
		}
		value = (value + (lookup - save[0])) * 1.0f;
		
		for (size_t i = PREC; i > 0; i--) {
			save[i] = save[i-1];
		}
		save[0] = lookup;
	}
};
template<>
struct DerivateOf<Vector2> {
	static constexpr float smoother = 0.1f;
	Vector2& lookup;
	Vector2 save = {INFINITY, 0.0f};
	Vector2 value = {0};

	DerivateOf(Vector2& lookup) : lookup(lookup) {}
	inline void update() {
		if (save.x == INFINITY) {
			save = lookup;
			return;
		}
		if (isinf(dt))
			return;
		value = Vector2Subtract(lookup, save);
		save = Vector2Add(save, Vector2Scale(Vector2Subtract(lookup, save), smoother));
	}
};

std::vector<DerivateOf<Vector2>> dvs = {};

const int dvsc = 2;
Color palette[10] = {
	WHITE,
	RED,
	GREEN,
	BLUE,
	PURPLE,
	ORANGE,
	YELLOW,
	BEIGE,
	LIME,
	SKYBLUE
};

bool use_derivates = false;

Camera2D camera;

RenderTexture renderer;
Shader shader;

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");
	dvs.reserve(dvsc);
	dvs.push_back(DerivateOf<Vector2>(mpo));
	for (size_t i = 1; i < dvsc; i++)
	{
		dvs.push_back(DerivateOf<Vector2>(dvs.back().value));
	}
	
	camera.offset = {XMAX/2.0f, YMAX/2.0f};
	camera.rotation = 0.0f;
	camera.target = {0};
	camera.zoom = 1.0f;
	
	renderer = LoadRenderTexture(XMAX, YMAX);	
	shader = LoadShader(0, 0);

	while (!WindowShouldClose()) {
		const Vector2 cam_mov_vec = Vector2Scale(Vector2Subtract(mpo, camera.target), 0.1f);
		camera.target =  Vector2Add(camera.target, cam_mov_vec);
		BeginTextureMode(renderer);
			DrawTexturePro(
				renderer.texture,
				{0.0f, 0.0f, XMAX, -YMAX},
				{-cam_mov_vec.x*10.0f, -cam_mov_vec.y*10.0f, XMAX, YMAX},
				{0.0f, 0.0f},
				0.0f,
				rgba(255, 255, 255, 1)
			);
			DrawRectangle(0, 0, XMAX, YMAX, rgba(0, 0, 0, 10));
			BeginMode2D(camera);


			DrawCircleV(mpo, 10.0f, WHITE);
			Vector2 dd = {0};
			Vector2 dp = mpo;
			for (size_t i = 0; i < dvsc; i++)
			{
				dp = Vector2Add(dp, dd);
				dd = Vector2Scale(dvs[i].value, 1.0f);
				drawArrow(dp, dd, palette[i%10]);
			}

			EndMode2D();
		EndTextureMode();

		BeginDrawing();
			ClearBackground(BLACK);

			BeginShaderMode(shader);
				DrawTexturePro(
					renderer.texture,
					{0.0f, 0.0f, XMAX, -YMAX},
					{0.0f, 0.0f, XMAX, YMAX},
					{0.0f, 0.0f},
					0.0f,
					WHITE
				);
			EndShaderMode();

			DrawFPS(0, 0);
		EndDrawing();


		if (IsKeyPressed(KEY_SPACE)) {
			use_derivates = !use_derivates;
		}

		if (use_derivates) {
			for (int i = (int)dvsc-2; i >= 0; i--)
			{
				dvs[i+1].value.clamp({-10.0f, -10.0f}, {10.0f, 10.0f});
				dvs[i].value = Vector2Add(dvs[i].value, Vector2Scale(dvs[i+1].value, dt));
			}
			dvs[0].value.clamp({-10.0f, -10.0f}, {10.0f, 10.0f});
			mpo = Vector2Add(mpo, dvs[0].value);
		} else {
			for (size_t i = 0; i < dvsc; i++)
			{
				dvs[i].update();
			}
			mpo = GetScreenToWorld2D(GetMousePosition(), camera);
		}
		if (IsKeyDown(KEY_LEFT)) {
			dt = -GetFrameTime();
		} else {
			dt = GetFrameTime();
		}
	}

	CloseWindow();
}


