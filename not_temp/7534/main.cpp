#include <raylib/raylib.h>
#include <raylib/raymath.h>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

const int anch_count = 16;

Vector2 src_anchors[anch_count] = {
	// His right hand
	{212.f, 169.f}, // 0
	{72.f, 166.f},

	// His right elbow
	{430.f, 177.f},
	{212.f, 169.f},

	// His body
	{430.f, 177.f},
	{406.f, 456.f}, // 5

	// His head
	{430.f, 177.f},
	{442.f, 71.f},

	// His left elbow
	{430.f, 177.f},
	{623.f, 166.f},

	// His left hand
	{623.f, 166.f},
	{792.f,161.f},

	// His right leg
	{406.f, 456.f}, // 12
	{351.f, 826.f},

	// His left leg
	{406.f, 456.f}, // 14
	{453.f, 832.f}
};

Vector2 dst_anchors[anch_count] = { 0 };

float t = 0.0f;

// RenderTexture renderer;
Shader shader;
int selected = -1;

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	Texture src = LoadTexture("res/body.png");

	for (Vector2& i: src_anchors) {	i = Vector2Scale(i, 1.f/860.f); }
	for (int i=0;i<anch_count;i++) {dst_anchors[i] = src_anchors[i];}

	// renderer = LoadRenderTexture(XMAX, YMAX);
	shader = LoadShader(0, "res/shader.fs");

	int loc_src_anch = GetShaderLocation(shader, "src_anch");
	int loc_dst_anch = GetShaderLocation(shader, "dst_anch");
	SetShaderValueV(shader, loc_src_anch, src_anchors, SHADER_UNIFORM_VEC2, anch_count);
	SetShaderValueV(shader, loc_dst_anch, dst_anchors, SHADER_UNIFORM_VEC2, anch_count);

	const auto off = Vector2{XMAX/2.f - 860.f/2.f, YMAX/2.f - 860.f/2.f};

	while (!WindowShouldClose()) {

		BeginDrawing();
			ClearBackground(BLACK);
			
			BeginShaderMode(shader);
				DrawTexturePro(
					src,
					{0.0f, 0.0f, 860.f, 860.f},
					{off.x, off.y, 860.f, 860.f},
					{0.0f, 0.0f},
					0.0f,
					WHITE
				);
			EndShaderMode();

			// for (int i = 0; i < anch_count; i+=2)
			// {
			// 	const Vector2 bone_join = {off.x + dst_anchors[i].x*860.f, off.y + dst_anchors[i].y*860.f};
			// 	const Vector2 bone_tip = {off.x + dst_anchors[i+1].x*860.f, off.y + dst_anchors[i+1].y*860.f};
				
			// 	const Vector2 src_bone_join = {off.x + src_anchors[i].x*860.f, off.y + src_anchors[i].y*860.f};
			// 	const Vector2 src_bone_tip = {off.x + src_anchors[i+1].x*860.f, off.y + src_anchors[i+1].y*860.f};
				

			// 	DrawLineEx(
			// 		src_bone_join,
			// 		src_bone_tip,
			// 		3.f,PINK
			// 	);
			// 	DrawLineEx(
			// 		bone_join,
			// 		bone_tip,
			// 		10.f,PURPLE
			// 	);
			// 	DrawCircleV(bone_join, 10.f, GREEN);
			// 	DrawCircleV(bone_tip, 10.f, LIME);
			// 	if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
			// 		if (Vector2Distance(mpo, bone_join) < 10.f || selected == i) {
			// 			dst_anchors[i] = { (mpo.x - off.x) / 860.f, (mpo.y - off.y) / 860.f };
						
			// 			SetShaderValueV(shader, loc_dst_anch, dst_anchors, SHADER_UNIFORM_VEC2, anch_count);
			// 			selected = i;
			// 		} else if (Vector2Distance(mpo, bone_tip) < 10.f || selected == i+1) {
			// 			dst_anchors[i+1] = { (mpo.x - off.x) / 860.f, (mpo.y - off.y) / 860.f };
			// 			SetShaderValueV(shader, loc_dst_anch, dst_anchors, SHADER_UNIFORM_VEC2, anch_count);
			// 			selected = i+1;
			// 		}
			// 	}
			// }

			const Vector2 ass = {
				src_anchors[5].x + 0.1f * cosf(sinf(2.f * t) - PI/2.f),
				src_anchors[5].y + 0.01f * -sinf(sinf(2.f * t) - PI/2.f)
			};

			dst_anchors[5] = ass;
			dst_anchors[12] = ass;
			dst_anchors[14] = ass;
			SetShaderValueV(shader, loc_dst_anch, dst_anchors, SHADER_UNIFORM_VEC2, anch_count);


			if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
				selected = -1;
			}
			
			
			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		t += dt;
	}

	UnloadTexture(src);
	UnloadShader(shader);

	CloseWindow();
}


