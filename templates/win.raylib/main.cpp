#include <raylib/raylib.h>
#include <raylib/raymath.h>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;


int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	CloseWindow();
}


