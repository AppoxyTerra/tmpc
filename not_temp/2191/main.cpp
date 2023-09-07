#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cmath>
#define u32 unsigned int
#define i32 int
#define f32 float
#define i16 short

constexpr int nearestSquare(int x) {
	x--;
	x |= x >> 1;
	x |= x >> 2;
	x |= x >> 4;
	x |= x >> 8;
	x |= x >> 16;
	x++;
	return x;
}

const float XMAX = 1600.f;
const float YMAX = 900.f;
Vector2 mpo;
Vector2 mdt;
float dt;
const int unknown_factor = 4;
constexpr int FRAME_COUNT = 480*unknown_factor;

u32 dump;
Music music;
f32 audiobuf[FRAME_COUNT] = {0};
f32 gomax[FRAME_COUNT] = {0};
u32 frame_counter = 0;
float bufmax = .0f;


void callback(void* buffer, u32 frames) {
	bufmax = -INFINITY;
	// frames should be smaller than FRAME_COUNT
	for (int i = 0; i < frames; i++)
	{
		if ((audiobuf[i] = i[(float*)buffer]) > bufmax) {
			bufmax = audiobuf[i];
		}
	}
}

RenderTexture renderer;
Shader shader;


int main() {
	SetTargetFPS(60);
	InitAudioDevice();
	InitWindow(XMAX, YMAX, "Name of the window here.");

	music = LoadMusicStream("res/fossleigh.mp3");
	AttachAudioMixedProcessor(callback);
	SetMusicVolume(music, 1.0f);

	renderer = LoadRenderTexture(XMAX, YMAX);
	shader = LoadShader(0, 0);

	float t = .0f;
	
	const float GROW = 10.0f;
	const float ROT = 3.0f;


	// transformer.init(FRAME_COUNT);
	// imaginary_bruh = (f32*)malloc(sizeof(f32)*transformer.ComplexSize(FRAME_COUNT));

	while (!WindowShouldClose()) {
		UpdateMusicStream(music);
		
		if (IsKeyPressed(KEY_SPACE)) {	
			PlayMusicStream(music);
		}

		BeginTextureMode(renderer);
			if (IsMusicStreamPlaying(music)) {
				DrawTexturePro(
					renderer.texture,
					{0.0f, 0.0f, XMAX, -YMAX},
					{GROW*sinf(-t) +XMAX/2.0f, GROW*cosf(-t)+YMAX/2.0f, XMAX, YMAX},
					{XMAX/2.0f, YMAX/2.0f},
					ROT, WHITE
				);
			}
			DrawRectangle(0, 0, XMAX, YMAX, rgba(0, 0, 0, 20));

			for (int i = 1; i < FRAME_COUNT/unknown_factor; i++)
			{
				const float r = gomax[i]*2500.0f+100.0f;
				const float angle = float(i)/float(FRAME_COUNT/unknown_factor)*2.f*PI;
				DrawCircle(
					sinf(angle)*r+XMAX/2.0f, cosf(angle)*r+YMAX/2.0f,
					10.0f,
					Color::fromHSV({(angle+t)*RAD2DEG, 1.0f, 1.0f}).setAlpha(1.0f)
				);
				gomax[i] += (audiobuf[i]-gomax[i])/10.0f;
			}
		EndTextureMode();

		BeginDrawing();
			ClearBackground(BLACK);

			BeginShaderMode(shader);
				DrawTexturePro(
					renderer.texture,
					{0.0f, 0.0f, XMAX, -YMAX},
					{0.0f, 0.0f, XMAX, YMAX},
					{0.0f, 0.0f},
					0.0f, WHITE
				);
			EndShaderMode();
			
			DrawText(TextFormat("%f", t), 0, 30, 30, WHITE);

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		t += dt * (60.f * bufmax);
	}

	// free(imaginary_bruh);


	UnloadMusicStream(music);
	CloseWindow();
}


