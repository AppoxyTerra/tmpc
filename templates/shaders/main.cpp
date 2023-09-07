#include <raylib/raylib.h>
#include <raylib/raymath.h>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

RenderTexture renderer;
Shader shader;


int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	renderer = LoadRenderTexture(XMAX, YMAX);
	shader = LoadShader(0, "res/shader.fs");

	while (!WindowShouldClose()) {
		BeginTextureMode(renderer);
			ClearBackground(BLACK);
			
		EndTextureMode();

		BeginDrawing();
			BeginShaderMode(shader);
				DrawTexturePro(renderer.texture, {0.0f, 0.0f, XMAX, -YMAX}, {0.0f, 0.0f, XMAX, YMAX}, {0.0f, 0.0f}, 0.0f, WHITE);
			EndShaderMode();
			
			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	UnloadRenderTexture(renderer);
	UnloadShader(shader);

	CloseWindow();
}


