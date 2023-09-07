#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <vector>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;
const float SPEED = 3.0f;
struct Player {
	Color color;
	Vector2 pos;

	Player() {
		color = Color::random();
		pos = {XMAX/2.0f, YMAX/2.0f};
	}

	Player(Color color, Vector2 pos)
	:	color(color),
		pos(pos)
		{}
	
	void setPos(Vector2 pos) {
		this->pos = pos;
	}

	void update() {
		DrawCircleV(pos, 20.0f, color);
	}
};

std::vector<Player> players;

Player* me;



int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	players.push_back(Player());
	me = &*players.begin();

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);

			me->pos = Vector2Add(
				me->pos,
				Vector2Scale(
					{
						float(IsKeyDown(KEY_D)-IsKeyDown(KEY_A)),
						float(IsKeyDown(KEY_S)-IsKeyDown(KEY_W))
					},SPEED
				)
			);

			for (size_t i = 0; i < players.size(); i++)
			{
				players[i].update();
			}

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	CloseWindow();
}


