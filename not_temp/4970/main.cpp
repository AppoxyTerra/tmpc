#include <raylib/raylib.h>
#include <raylib/raymath.h>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;



Texture tex[3*3];
enum P_COLOR { P_PURPLE, P_GREEN, P_RED };
enum P_NUMBER { ONE, TWO, THREE };
enum P_SHAPE { ROUND, SQUIGGLE, DIAMOND };
enum P_FILL { EMPTY, STRIPES, SOLID };


int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			tex[i*3+j] = LoadTexture(TextFormat("00%i%i", i, j));
		}
	}

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);



			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	for (auto &&i : tex)
	{
		UnloadTexture(i);
	}

	CloseWindow();
}


