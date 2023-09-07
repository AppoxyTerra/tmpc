#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <utils/result.hpp>
#include <cstdio>
#include <vector>
#include <array>

#define LOG_LEVEL LOG_DEBUG

typedef int index_t;

bool run = true;

float XMAX = 0.0f;
float YMAX = 0.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

RenderTexture renderer;
Shader postprocess;

void common_init() {
	SetTargetFPS(60);
	SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_FULLSCREEN_MODE);
	InitWindow(XMAX, YMAX, "Name of the window here.");
	XMAX = GetScreenWidth();
	YMAX = GetScreenHeight();

	renderer = LoadRenderTexture(XMAX, YMAX);
	postprocess = LoadShader(0, "res/shaders/postprocess.fs");
}

void common_close() {
	UnloadRenderTexture(renderer);
	UnloadShader(postprocess);
	CloseWindow();
}

