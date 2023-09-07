#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <raylib/rlgl.h>
#include <cmath>
#include <vector>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

Camera3D camera;

float t = 0.0f;
Vector3 rotfactor = {0.0f, 0.01f, 1.0f};
Vector3 initrot = {0.0f, PI/2.0f, 0.0f};
Vector3 pos = Vector3Zero();

float xRot(Vector3 radius, Vector3 rot) {
	return (
		radius.x*cos(rot.z)*cos(rot.y)
	+	radius.y*sin(rot.z)*cos(rot.y)
	+	radius.z*-sin(rot.y)
	);
}
float yRot(Vector3 radius, Vector3 rot) {
	return (
		radius.x*(sin(rot.x)*sin(rot.y)*cos(rot.z)-cos(rot.x)*sin(rot.z))
	+	radius.y*(sin(rot.x)*sin(rot.y)*sin(rot.z)+cos(rot.x)*cos(rot.z))
	+	radius.z*sin(rot.x)*cos(rot.y)
	);
}
float zRot(Vector3 radius, Vector3 rot) {
	return (
		radius.x*(cos(rot.x)*sin(rot.y)*cos(rot.z)+sin(rot.x)*sin(rot.z))
	+	radius.y*(cos(rot.x)*sin(rot.y)*sin(rot.z)-sin(rot.x)*cos(rot.z))
	+	radius.z*cos(rot.x)*cos(rot.y)
	);
}
Vector3 rot3(Vector3 radius, Vector3 rot) {
	return Vector3{xRot(radius, rot), yRot(radius, rot), zRot(radius, rot)};
}

inline void Vertex3f(Vector3 v) {
	rlVertex3f(v.x, v.y, v.z);
}
inline void Line3(Vector3 a, Vector3 b) {
	Vertex3f(a); Vertex3f(b);
}
std::vector<Mesh> meshes;



int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	camera.fovy = 90.0f;
	camera.position = {0.0f, -1.0f, -10.0f};
	camera.projection = CAMERA_PERSPECTIVE;
	camera.target = {0.0f, 0.0f, 1.0f};
	camera.up = {0.0f, -1.0f, 0.0f};

	float fovy_vel = 0.0f;
	
	SetMousePosition(XMAX/2, YMAX/2);
	HideCursor();
	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);

			UpdateCamera(&camera, CAMERA_FIRST_PERSON);
			SetMousePosition(XMAX/2, YMAX/2);

			fovy_vel -= GetMouseWheelMove();
			camera.fovy += fovy_vel;
			fovy_vel += (-fovy_vel)/5.0f;

			BeginMode3D(camera);

			DrawCubeV({0.0f, 0.5f, 0.0f}, {100.0f, 0.1f, 100.0f}, DARKGRAY);
			DrawCubeV({0.0f, -0.5f, 0.0f}, {1.0f, 1.0f, 1.0f}, GRAY);
			
			EndMode3D();

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		t += dt;
	}

	for (size_t i = 0; i < meshes.size(); i++)
	{
		UnloadMesh(meshes[i]);
	}
	

	CloseWindow();
}


