extern "C" {
#define NO_METHODS
#define EXPORT __declspec(dllexport)
#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <cstdio>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

	// Returns 1 when the loop is supposed to stop.
	EXPORT int update() {
		if (WindowShouldClose()) {
			return 1;
		}
		puts("A");
		BeginDrawing();
		puts("B");
			ClearBackground(BLACK);



		puts("C");
			DrawFPS(0, 0);
		puts("D");
		EndDrawing();

		puts("E");
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		puts("F");
		return 0;
	}

	// Only ran once
	EXPORT int init() {
		SetTargetFPS(60);
		InitWindow(XMAX, YMAX, "Live window !");
		return 0;
	}

	// Only ran once
	EXPORT int close() {
		CloseWindow();
		return 0;
	}

}