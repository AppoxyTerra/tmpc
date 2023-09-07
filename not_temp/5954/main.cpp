#include <raylib/raylib.h>
#include <raylib/raymath.h>

const float XMAX = 1920.0f;
const float YMAX = 1080.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

size_t social_credit_score = 1000;

int main() {
	SetTargetFPS(60);
	SetConfigFlags(FLAG_FULLSCREEN_MODE | FLAG_MSAA_4X_HINT | FLAG_WINDOW_TOPMOST);
	InitWindow(XMAX, YMAX, "Name of the window here.");
	SetWindowPosition(0, 0);
	InitAudioDevice();

	Texture flag = LoadTexture("res/flag.png");
	Texture ico = LoadTexture("res/ico.png");
	Sound snd = LoadSound("res/startup.mp3");
	Sound sfx = LoadSound("res/sfx.mp3");
	Font font = LoadFont("res/PROPAGAN.ttf");
	Music music = LoadMusicStream("res/music.mp3");

	SetSoundVolume(sfx, 100.0f);

	PlaySound(snd);

	PlayMusicStream(music);
	float intro = 0.0f;

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(rgb(204, 0, 0));

			if (intro <= 2.0f) {
				DrawTexturePro(
					flag,
					{.0f, .0f, 1600.f, 800.f},
					{.0f, .0f, XMAX, YMAX},
					{0.0f, .0f},
					.0f, grayscale(intro * 127.0f)
				);
				
			} else {
				UpdateMusicStream(music);
				social_credit_score += 1;
				const Rectangle rect = {.0f, YMAX - 48.f, 48.f, 48.f};
				Color ico_color = WHITE;
				if (CheckCollisionPointRec(mpo, rect)) {
					ico_color = LIGHTGRAY;
					if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
						social_credit_score += 10;
						PlaySound(sfx);
					}
				}
				DrawTexturePro(
					ico,
					{.0f, .0f, 1024.f, 1024.f},
					rect,
					{0.0f, 0.0f},
					.0f, ico_color
				);

				DrawText(TextFormat("%i SCS", (int)social_credit_score), 0, 0, 30, YELLOW);
			}
			const Vector2 m = MeasureTextEx(font, "COMMUNISM OS", 72.0f, 2.0f);
			DrawTextPro(
					font,
					"COMMUNISM OS",
					{XMAX/2.0f - m.x/2.0f, YMAX/2.0f - m.y/2.0f},
					{0.0f, 0.0f},
					0.0f, 72.0f, 2.0f, YELLOW
				);

			// DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		intro += dt;
	}

	UnloadFont(font);
	UnloadSound(snd);
	UnloadSound(sfx);
	UnloadTexture(flag);
	UnloadTexture(ico);

	CloseWindow();
}


