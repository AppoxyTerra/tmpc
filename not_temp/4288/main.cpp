#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <vector>
#include <utility>
using std::max;
using std::min;


const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

float t = 0.0f;
float G = 6.67f * 1e-1f;
float TIME_SPEED = 0.8f;
float FORCE_SCALER = 100.0f;

struct Point {
	float m;
	Vector2 P0;
	Vector2 V0;
	Vector2 pos;

	Point(float x, float y, float vx = 0.0f, float vy = 0.0f, float m = 10.0f) {
		P0 = {x,y};
		V0 = {vx, vy};
		pos = P0;
		this->m = m;
	}

	float radius() const {
		return m;
	}

	void update();
};

std::vector<Point> pts;

void Point::update()  {
	DrawCircleV(pos, radius(), WHITE);

	Vector2 accum = {0.0f, 0.0f};

	for (auto &i : pts)
	{
		if (&i == this)
			continue;
		const Vector2 sub = Vector2Subtract(i.pos, pos);
		const Vector2 norm = Vector2Normalize(sub);
		Vector2 fro = {0.0f, 0.0f};
		if (Vector2Distance(i.pos, pos) > (radius()+i.radius())) {
			// Gravity
			fro = Vector2Add(
				fro,
				Vector2Scale(
					norm,
					(t*m*i.m*G)/Vector2DistanceSqr(i.pos, pos)*FORCE_SCALER
				)
			);
		}
		// Reaction
		accum = Vector2Add(accum, fro);
	}

	DrawLineV(pos, Vector2Add(pos, Vector2Scale(accum, 1.0f/TIME_SPEED)), GREEN);

	pos.x = P0.x + (V0.x*t) + t*accum.x;
	pos.y = P0.y + (V0.y*t) + t*accum.y;
}


int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	pts.push_back(Point(800.0f, 450.0f, 0.0f, 0.0f, 100.0f));
	pts.push_back(Point(800.0f, 200.0f, 10.0f));

	while (!WindowShouldClose()) {
		if (IsKeyDown(KEY_LEFT)) {
			t -= dt*TIME_SPEED;
		} else {
			t += dt*TIME_SPEED;
		}
		BeginDrawing();
			ClearBackground(BLACK);

			for (auto &&i : pts)
			{
				i.update();
			}

			DrawText(TextFormat("Time = %.2f", t), 0, 30, 30, WHITE);

			DrawFPS(0, 0);
		EndDrawing();

		if (IsKeyPressed(KEY_R)) {
			// Reset time.
			t = 0.0f;
		}
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	CloseWindow();
}


