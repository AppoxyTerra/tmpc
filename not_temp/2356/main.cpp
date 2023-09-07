#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <cmath>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

Camera3D cam;

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	cam.fovy = 90.0f;
	cam.position = {0.0f, 1.0f, 0.0f};
	cam.projection = CAMERA_PERSPECTIVE;
	cam.target = {0.0f, 0.0f, 3.0f};
	cam.up = {0.0f, 1.0f, 0.0f};

	float rot = 0.0f;

	while (!WindowShouldClose()) {
		BeginDrawing();
			UpdateCamera(&cam, CAMERA_ORBITAL);
			ClearBackground(SKYBLUE);

			BeginMode3D(cam);
				DrawCubeV({0.0f, 0.0f, 3.0f}, {1.0f-0.4f*sinf(rot), 1.0f-0.4f*sinf(rot), 1.0f-0.4f*sinf(rot)}, RED);
				DrawCubeV({0.0f, 0.0f, 3.0f+0.4f*sinf(rot)}, {0.4f*sinf(rot), 0.4f*sinf(rot), 0.4f*sinf(rot)}, BLUE);

				// DrawLine3D({-0.5f, -0.5f, 2.5f}, {-0.2f, -0.2f, 2.8f}, RED);
				// DrawLine3D({-0.5f, 0.5f, 2.5f}, {-0.2f, 0.2f, 2.8f}, RED);
				// DrawLine3D({0.5f, -0.5f, 2.5f}, {0.2f, -0.2f, 2.8f}, RED);
				// DrawLine3D({0.5f, 0.5f, 2.5f}, {0.2f, 0.2f, 2.8f}, RED);

				// DrawLine3D({-0.5f, -0.5f, 3.5f}, {-0.2f, -0.2f, 3.2f}, RED);
				// DrawLine3D({-0.5f, 0.5f, 3.5f}, {-0.2f, 0.2f, 3.2f}, RED);
				// DrawLine3D({0.5f, -0.5f, 3.5f}, {0.2f, -0.2f, 3.2f}, RED);
				// DrawLine3D({0.5f, 0.5f, 3.5f}, {0.2f, 0.2f, 3.2f}, RED);
			EndMode3D();

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		rot += dt;
	}

	CloseWindow();
}


