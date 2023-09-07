#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <vector>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;
const int count = 10;

float random() {
	return float(rand())/float(RAND_MAX);
}

void drawTriangle(Vector2 pos, Vector2 dir, Color color) {
	const float t = 120.f*DEG2RAD;
	DrawTriangle(
		Vector2Add(pos, dir),
		Vector2Add(pos, {
			dir.x*cosf(-t) - dir.y*sinf(-t),
			dir.x*sinf(-t) + dir.y*cosf(-t)
		}),
		Vector2Add(pos, {
			dir.x*cosf(t) - dir.y*sinf(t),
			dir.x*sinf(t) + dir.y*cosf(t)
		}),
		color
	);
}

struct Bird {
	Vector2 pos;
	Vector2 vel = {0, -1};
	Vector2 real_vel = {0, -1};
	Bird* target = 0;

	Bird() {
		pos = {random() * XMAX, random() * YMAX};
		vel = Vector2Scale({random()*2.0f-1.0f, -random()}, 5.0f);
		real_vel = vel;
	}

	void update();
};

std::vector<Bird> birds;

void Bird::update() {
	float magn = vel.magn();
	if (magn == 0.0f) {
		DrawCircleV(pos, 10.0f, WHITE);
	} else {
		drawTriangle(pos, vel.setMagn(10.0f), WHITE);
		vel.setMagn(magn);
	}
	// DrawCircleV(pos, 3.0f, RED);

	if (magn > 1.0f) {
		vel.setMagn(1.0f);
	}
	real_vel = Vector2Add(
		real_vel,
		Vector2Scale(Vector2Subtract(vel, real_vel), 0.01f)
	);

	pos = Vector2Add(pos, real_vel);

	for (size_t i = 0; i < birds.size(); i++)
	{
		Bird& b = birds[i];
		if (&b == this) continue;
		const float dst = pos.dist(b.pos);
		if (dst <= 0.0f) continue;
		if (dst <= 50.0f && rand()%10 == 0) {
			target = &b;
		}
	}

	if (target) {
		vel = target->vel;
		// if (rand()%30 == 0) {
		// 	target = 0;
		// }
	} else {
		// vel.setAngle(vel.angle() + (random() * 2.0f - 1.0f)*0.001f);
	}


	if (pos.x < 0.0f) {
		pos.x = 0.0f;
		vel.x = 0.0f;
	} else if (pos.x > XMAX) {
		pos.x = XMAX;
		vel.x = 0.0f;
	}
	if (pos.y < 0.0f) {
		pos.y = 0.0f;
		vel.y = 0.0f;
	} else if (pos.y > YMAX) {
		pos.y = YMAX;
		vel.y = 0.0f;
	}
	if (pos.x > 10.0f || pos.x < XMAX-10.0f)
		vel.x += (0.0f - pos.x) / 1000.0f + (XMAX - pos.x) / 1000.0f;
	if (pos.y > 10.0f || pos.y < YMAX-10.0f)
		vel.y += (0.0f - pos.y) / 1000.0f + (YMAX - pos.y) / 1000.0f;
}

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	birds.reserve(count);
	for (size_t i = 0; i < count; i++)
	{
		birds.push_back(Bird());
	}

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);

			for (size_t i = 0; i < birds.size(); i++)
			{
				birds[i].update();
			}

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	CloseWindow();
}


