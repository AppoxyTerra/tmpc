#pragma once
#include <raylib/raylib.h>
#include <raylib/raymath.h>


Camera3D camera;

void camera_init() {
	const float height = 10.f;

	camera.fovy = 90.f;
	camera.position = {.0f, height, .0f};
	camera.projection = CAMERA_PERSPECTIVE;
	camera.target = {.0f, height, 1.f};
	camera.up = {.0f, 1.f, .0f};
}




