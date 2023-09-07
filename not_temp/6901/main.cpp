#include <raylib/raylib.h>
#include <raylib/raymath.h>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;
float t = .0;
float speed = 0.f;

int main() {
	SetTargetFPS(60);
	SetConfigFlags(FLAG_MSAA_4X_HINT);
	InitAudioDevice();
	InitWindow(XMAX, YMAX, "Name of the window here.");

	Texture d = LoadTexture("res/disc.png");
	Music music = LoadMusicStream("res/xillax.wav");
	HideCursor();

	while (!WindowShouldClose()) {
		UpdateMusicStream(music);

		if (IsKeyPressed(KEY_SPACE)) {
			speed = 5.f;
			PlayMusicStream(music);
		}

		BeginDrawing();
			ClearBackground(BLACK);

			DrawTexturePro(
				d,
				{.0f, .0f, float(d.width), float(d.height)},
				{XMAX/2.f, YMAX/2.f, YMAX, YMAX},
				{YMAX/2.f, YMAX/2.f},
				t,
				WHITE
			);

			speed += float(
				IsKeyDown(KEY_UP)
			-	IsKeyDown(KEY_DOWN)
			)*0.5f;
			// DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		t += dt*speed;
	}
	ShowCursor();
	StopMusicStream(music);
	UnloadMusicStream(music);

	UnloadTexture(d);

	CloseWindow();
}


