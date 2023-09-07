#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <cmath>
#include <vector>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt = 0.016666666f;
float G = 60.0f;

struct Point {
	Vector2 pos;
	Vector2 vel;
	float m;

	void update();

	const float radius() const {
		return sqrtf(m);
	}

};
std::vector<Point> pts;

void Point::update() {
	DrawCircleV(pos, radius(), WHITE);

	Vector2 outforces = {0};

	for (auto &i : pts)
	{
		if (&i == this || isnanf(dt) || isinf(dt))
			continue;
		Vector2 sub = Vector2Subtract(i.pos, pos);
		Vector2 norm = Vector2Normalize(sub);
		float dist = Vector2Distance(i.pos, pos);
		vel = Vector2Add(
			vel,
			Vector2Scale(
				norm,
				(i.m*(G*dt))/dist
			)
		);

		if (dist <= radius()+i.radius()) {
			outforces = Vector2Add(
				outforces,
				Vector2Subtract(
					Vector2Add(pos, Vector2Scale(norm, (dist-(radius()+i.radius()) / i.m ))),
					pos
				)
			);
		}
	}
	vel = Vector2Add(vel, Vector2Scale(outforces, 1.0f/dt));

	pos = Vector2Add(pos, Vector2Scale(vel, dt));
}

RenderTexture renderer;
Shader shader;

float time_speed = 1.0f;

int main() {
	SetConfigFlags(FLAG_MSAA_4X_HINT);
	InitWindow(XMAX, YMAX, "Name of the window here.");
	SetTargetFPS(60);

	pts.push_back(Point{{800.0f, 300.0f}, {0.0f, 0.0f}, 10.0f});
	pts.push_back(Point{{800.0f, 600.0f}, {-200.0f, 0.0f}, 10.0f});
	pts.push_back(Point{{800.0f, 450.0f}, {0.0f, 0.0f}, 700.0f});

	renderer = LoadRenderTexture(1600, 900);
	shader = LoadShader(0, 0);

	while (!WindowShouldClose()) {
		BeginTextureMode(renderer);

			DrawTexturePro(renderer.texture, {0.0f, 0.0f, 1600.0f, -900.0f}, {0.0f, 0.0f, 1600.0f, 900.0f}, {0.0f, 0.0f}, 0.0f, rgba(255, 255, 255, 50));

			for (auto &&i : pts)
			{
				i.update();
			}
		EndTextureMode();

		BeginDrawing();
			ClearBackground(BLACK);

			BeginShaderMode(shader);
				DrawTexturePro(renderer.texture, {0.0f, 0.0f, 1600.0f, -900.0f}, {0.0f, 0.0f, 1600.0f, 900.0f}, {0.0f, 0.0f}, 0.0f, WHITE);
			EndShaderMode();
			
			
			DrawText(TextFormat("%.4f", dt), 0, 30, 30, WHITE);

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime()*time_speed;
		if (IsKeyDown(KEY_LEFT)) {
			time_speed += (-1.0f - time_speed)/10.0f;
		} else {
			time_speed += (1.0f - time_speed)/10.0f;
		}
	}

	CloseWindow();
}


