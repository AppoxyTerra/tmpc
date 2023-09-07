#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <cstdint>

#include "config.hpp"
#include "lights.hpp"
#include "camera.hpp"
#include "world.hpp"

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;




int main() {
	SetTraceLogLevel(LOG_DEBUG);
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	camera_init();

	World world = loadWorld("res/box");
	world.translate({.0f, 3.f, 10.f});

	Light& light = addDirectionalLight(camera.position, Vector3Subtract(camera.target, camera.position), RED, 10.f);

	HideCursor();

	while (!WindowShouldClose()) {
		light.pos = camera.position;
		light.direction = Vector3Subtract(camera.target, camera.position);
		SetMousePosition(XMAX/2, YMAX/2);
		BeginDrawing();
			ClearBackground(BLACK);

				BeginMode3D(camera);
					DrawGrid(30, 1.f);

					world.draw();
				EndMode3D();

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		UpdateCameraPro(
			&camera,
			Vector3Scale({
				float(IsKeyDown(KEY_W) - IsKeyDown(KEY_S)),
				float(IsKeyDown(KEY_D) - IsKeyDown(KEY_A)),
				float(IsKeyDown(KEY_SPACE) - IsKeyDown(KEY_LEFT_CONTROL))
			}, speed * dt),
			Vector3Scale({
				mdt.x,
				mdt.y,
				.0f
			}, mouse_sensitivity),
			0.f
		);
	}

	ShowCursor();

	CloseWindow();
}


