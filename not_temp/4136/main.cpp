#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <vector>
#include <cstdint>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;
int frame = 0; // Frame in time
float time = .0f;
float dt_error = .0f;

float getFrameSumTime() {
	return 1.f/60.f*frame + dt_error;
}

struct State;

State& getPreviousState();
State& getInitialState();

struct State {
	struct P {
		Vector2 pos;
		uint8_t id;
		Vector2 vel = {0.f, 0.f};
		P(float x0, float y0, float vx0, float vy0, uint8_t id) : id(id) {
			pos = {x0, y0};
			vel = {vx0, vy0};
		}
		P(const P& other) {
			pos = other.pos;
			vel = other.vel;
		}

		void update();
	};
	std::vector<P> ps;

	void init_state() {
		ps.push_back(P(
			XMAX/2.f - 50.f, YMAX/2.f,
			.0f, -100.0f,
			0
		));
		ps.push_back(P(
			XMAX/2.f + 50.f, YMAX/2.f,
			.0f, 100.0f,
			1
		));
	}

	void update() {
		for (size_t i = 0; i < ps.size(); i++)
		{
			ps[i].update();
		}
	}
} current_state;
std::vector<State> states;

State& getPreviousState() {
	return states.back();
}

State& getInitialState() {
	return states.back();
}

void initSimulation() {
	current_state.init_state();
	states.push_back(current_state);
}
void addState() {
	// We should be fine, except for the RAM, but who cares 'bout that these days, huh ?
	states.push_back(current_state);
}
const Color PALETTE[2] = {
	RED,
	GREEN
};

void State::P::update()  {
	const State& init = getInitialState();
	const State& prev = getPreviousState();
	Vector2 force = Vector2Zero();
	for (const auto& other_p: prev.ps)
	{
		if (other_p.id == id) continue;

		const Vector2 sub = Vector2Subtract(other_p.pos, pos);
		force = Vector2Add(force, Vector2Scale(sub, powf(Vector2DistanceSqr(other_p.pos, pos), 1.5f)));
	}
	pos = Vector2Add(
		Vector2Scale(force, time * time),
		Vector2Add(
			Vector2Scale(init.ps[id].vel, time),
			init.ps[id].pos
		)
	);
	
	DrawCircleV(pos, 10.0f, PALETTE[id]);
}

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	initSimulation();

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);

			current_state.update();

			DrawText(TextFormat("%llu", states.size()), 0, 30, 30, WHITE);

			DrawFPS(0, 0);
		EndDrawing();

		addState();

		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		if (dt != 1.f/60.f) {
			dt_error += 1.f/60.f - dt;
		}
		frame += 1;
	}

	CloseWindow();
}


