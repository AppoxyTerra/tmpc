#pragma pack(0)
#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <vector>
#include <stdio.h>
#include <type_traits>
#define LEN(C_STYLE_ARRAY) sizeof(C_STYLE_ARRAY)/sizeof(std::remove_pointer<decltype(C_STYLE_ARRAY)>::type) 

/*
	h = hand
	e = elbow
	k = knee
	f = foot
*/

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 wmpo;
Vector2 mdt;
float dt;

const Vector2 GRAVITY = {0.f, 9.8f};


float max(float init, std::initializer_list<float> comp) {
	for (auto &&i : comp)
	{
		if (i > init)
			init = i;
	}
	return init;
}
float min(float init, std::initializer_list<float> comp) {
	for (auto &&i : comp)
	{
		if (i < init)
			init = i;
	}
	return init;
}

struct Stand {
	// a_X : angle for X
	// l_X : length factor for X
	float a_head = .0f, l_head = 1.f;
	float a_h_left = .0f, l_h_left = 1.f;
	float a_h_right = .0f, l_h_right = 1.f;
	float a_e_left = .0f, l_e_left = 1.f;
	float a_e_right = .0f, l_e_right = 1.f;
	float a_k_left = .0f, l_k_left = 1.f;
	float a_k_right = .0f, l_k_right = 1.f;
	float a_f_left = .0f, l_f_left = 1.f;
	float a_f_right = .0f, l_f_right = 1.f;

	float* operator[](int bodypart) {
		return &(((float*)this)[bodypart*2]);
	}
};

enum StandId {
	IDLE,
	RUN_L0,
	RUN_L1,
	RUN_R0,
	RUN_R1,
	JUMP,
	FALL,
	FALL_LEFT,
	FALL_RIGHT,
	STAND_COUNT
};

Stand stands[STAND_COUNT];

void loadStand(StandId name, const char* file) {
	static auto readFloat = [](FILE* f) {
		float temp;
		fread(&temp, sizeof(float), 1, f);
		TraceLog(LOG_DEBUG, "readFloat() loaded value: %f", temp);
		return temp;
	};

	FILE* f = fopen(file, "rb");
	if (!f) {
		TraceLog(LOG_ERROR, "loadStand(%i, %s): Couldn't open file.", name, file);
		return;
	}

	// size_t out = fread(&(stands[name]), 1,  f);
	// if (out < sizeof(Stand)) {
	// 	TraceLog(LOG_ERROR, "loadStand(%i, %s): File size error, read %llu bytes instead of %llu.", name, file, out, (size_t)sizeof(Stand));
	// }

	Stand& s = stands[name];
	s = Stand{
		/* a_head */ readFloat(f),
		/* l_head */ readFloat(f),
		/* a_h_left */ readFloat(f),
		/* l_h_left */ readFloat(f),
		/* a_h_right */ readFloat(f),
		/* l_h_right */ readFloat(f),
		/* a_e_left */ readFloat(f),
		/* l_e_left */ readFloat(f),
		/* a_e_right */ readFloat(f),
		/* l_e_right */ readFloat(f),
		/* a_k_left */ readFloat(f),
		/* l_k_left */ readFloat(f),
		/* a_k_right */ readFloat(f),
		/* l_k_right */ readFloat(f),
		/* a_f_left */ readFloat(f),
		/* l_f_left */ readFloat(f),
		/* a_f_right */ readFloat(f),
		/* l_f_right */ readFloat(f)
	};

	fclose(f);
	TraceLog(LOG_INFO, "'%s' loaded succesfuly in stand %i.", file, (int)name);
}

struct Stickman {
	static constexpr float head_size = 15.f;
	static constexpr float body_size = 5.f;
	static constexpr float length_max = 40.f;
	static constexpr float ass_to_shoulder_ratio = 2.f/3.f;
	static constexpr float draw_threshold = 1.f;
	static constexpr float physx_threshold = 1.5f;
	static constexpr float transition_speed = 0.2f;
	struct BodyPart {
		float angle = .0f;
		float lenfactor = 1.f;
	};

	Vector2 pos;
	Vector2 vel;
	enum BodyPartName : int { head, h_left, h_right, e_left, e_right, k_left, k_right, f_left, f_right };
	BodyPart bp[9];
	StandId stand;
	Color color;
	float bottom;
	float top;
	float left;
	float right;

	float on_groud = .0f;

	inline Rectangle getRect() const {
		return {left, top, right-left, bottom-top};
	}

	inline Vector2 getHead() const {
		return Vector2Add(pos, Vector2Scale({cosf(bp[head].angle), -sinf(bp[head].angle)}, length_max*bp[head].lenfactor));
	}
	
	inline Vector2 getHandLeft() const {
		return Vector2Add(getElbowLeft(), Vector2Scale({cosf(bp[h_left].angle), -sinf(bp[h_left].angle)}, length_max/2.f*bp[h_left].lenfactor));
	}
	inline Vector2 getHandRight() const {
		return Vector2Add(getElbowRight(), Vector2Scale({cosf(bp[h_right].angle), -sinf(bp[h_right].angle)}, length_max/2.f*bp[h_right].lenfactor));
	}
	
	inline Vector2 getKneeLeft() const {
		return Vector2Add(pos, Vector2Scale({cosf(bp[k_left].angle), -sinf(bp[k_left].angle)}, length_max/2.f*bp[k_left].lenfactor));
	}
	inline Vector2 getKneeRight() const {
		return Vector2Add(pos, Vector2Scale({cosf(bp[k_right].angle), -sinf(bp[k_right].angle)}, length_max/2.f*bp[k_right].lenfactor));
	}

	inline Vector2 getFootLeft() const {
		return Vector2Add(getKneeLeft(), Vector2Scale({cosf(bp[f_left].angle), -sinf(bp[f_left].angle)}, length_max/2.f*bp[f_left].lenfactor));
	}
	inline Vector2 getFootRight() const {
		return Vector2Add(getKneeRight(), Vector2Scale({cosf(bp[f_right].angle), -sinf(bp[f_right].angle)}, length_max/2.f*bp[f_right].lenfactor));
	}
	
	inline Vector2 getElbowLeft() const {
		return Vector2Add(shoulders(), Vector2Scale({cosf(bp[e_left].angle), -sinf(bp[e_left].angle)}, length_max/2.f*bp[e_left].lenfactor));
	}
	inline Vector2 getElbowRight() const {
		return Vector2Add(shoulders(), Vector2Scale({cosf(bp[e_right].angle), -sinf(bp[e_right].angle)}, length_max/2.f*bp[e_right].lenfactor));
	}

	Stickman(Vector2 pos, Color color) : pos(pos), stand(IDLE), color(color) {}

	inline Vector2 shoulders() const {
		return Vector2Add(pos, Vector2Scale(Vector2Subtract(getHead(), pos), ass_to_shoulder_ratio));
	}

	inline void drawLimb(BodyPartName name) {
		Vector2 start;
		float len = length_max;

		switch (name) {
		case h_left:
			start = getElbowLeft();
			len = length_max/2.f;
			break;
		case h_right:
			start = getElbowRight();
			len = length_max/2.f;
			break;
		case e_left:
		case e_right:
			start = shoulders();
			len = length_max/2.f;
			break;
		case f_left:
			start = getKneeLeft();
			len = length_max/2.f;
			break;
		case f_right:
			start = getKneeRight();
			len = length_max/2.f;
			break;
		case k_left:
		case k_right:
			len = length_max/2.f;
		default:
			start = pos;
			break;
		}

		const Vector2 norm = {cosf(bp[name].angle), -sinf(bp[name].angle)};
		for (float i = .0f; i < bp[name].lenfactor*len; i++)
		{
			DrawCircleV(Vector2Add(start, Vector2Scale(norm, i)), body_size, color);
		}
	}

	inline void computeSides() {
		bottom = max(bottom, {
			getHead().y,
			getElbowLeft().y,
			getElbowRight().y,
			getHandLeft().y,
			getHandRight().y,
			getKneeLeft().y,
			getKneeRight().y,
			getFootLeft().y,
			getFootRight().y
		});
		right = max(right, {
			getHead().x,
			getElbowLeft().x,
			getElbowRight().x,
			getHandLeft().x,
			getHandRight().x,
			getKneeLeft().x,
			getKneeRight().x,
			getFootLeft().x,
			getFootRight().x
		});

		top = min(top, {
			getHead().y,
			getElbowLeft().y,
			getElbowRight().y,
			getHandLeft().y,
			getHandRight().y,
			getKneeLeft().y,
			getKneeRight().y,
			getFootLeft().y,
			getFootRight().y
		});
		left = min(left, {
			getHead().x,
			getElbowLeft().x,
			getElbowRight().x,
			getHandLeft().x,
			getHandRight().x,
			getKneeLeft().x,
			getKneeRight().x,
			getFootLeft().x,
			getFootRight().x
		});
	}

	void update();
};

std::vector<Stickman> sms;

void Stickman::update()  {
	drawLimb(head);
	drawLimb(h_left);
	drawLimb(h_right);
	drawLimb(k_left);
	drawLimb(k_right);
	drawLimb(e_left);
	drawLimb(e_right);
	drawLimb(f_left);
	drawLimb(f_right);
	DrawCircleV(getHead(), head_size, color);

	
	bottom = pos.y;
	top = pos.y;
	right = pos.x;
	left = pos.x;
	computeSides();

	pos = Vector2Add(pos, Vector2Scale(vel, dt));
	vel = Vector2Add(vel, GRAVITY);
	// const Rectangle rect = getRect();
	if (bottom > YMAX) {
		const float diff = bottom - pos.y;
		pos.y = YMAX - diff;
		vel.y = .0f;
		on_groud = 1.f;
	} else {
		if (on_groud > .0f) {
			on_groud -= dt*2.f;
		}
	}
	

	for (size_t i = 0; i < 9; i++)
	{
		Vector2 origin;
		if (i == h_left || i == h_right) {
			origin = shoulders();
		} else {
			origin = pos;
		}
		const float* tuple = stands[stand][i];
		const float angle = tuple[0];
		const float lenfactor = tuple[1];
		bp[i].angle += (angle - bp[i].angle)*transition_speed;
		bp[i].lenfactor += (lenfactor - bp[i].lenfactor)*transition_speed;
	}
}

inline void addStickman(Vector2 pos, Color color) {
	sms.push_back(Stickman(pos, color));
}

Camera2D camera;
float t= .0f;
int t_frame = 0;

int main() {
	SetTraceLogLevel(LOG_DEBUG);
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	addStickman({.0f, .0f}, BLUE);
	camera.offset = {XMAX/2.f, YMAX/2.f};
	camera.target = {.0f, YMAX/2.f};
	camera.rotation = .0f;
	camera.zoom = 1.f;

	loadStand(IDLE, "idle");
	loadStand(RUN_L0, "runL0");
	loadStand(RUN_L1, "runL1");
	loadStand(RUN_R0, "runR0");
	loadStand(RUN_R1, "runR1");
	loadStand(JUMP, "jump");
	loadStand(FALL, "fall");
	loadStand(FALL_LEFT, "fall_left");
	loadStand(FALL_RIGHT, "fall_right");

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);

			camera.target = Vector2Add(
				camera.target,
				Vector2Scale(
					Vector2Subtract(
						sms[0].pos,
						camera.target
					),
					.1f
				)
			);
			BeginMode2D(camera);
				DrawRectangleLines(0, YMAX - 100, 100, 100, WHITE);
				for (auto &&s : sms)
				{
					s.update();
				}
			EndMode2D();
			const float y_ground = GetWorldToScreen2D({0.f, YMAX}, camera).y;
			DrawLineV({0.f, y_ground}, {XMAX, y_ground}, WHITE);


			if (IsKeyDown(KEY_D)) {
				if (sms[0].on_groud > .5f) {
					if ((t_frame/10) % 2)
						sms[0].stand = RUN_L0;
					else
						sms[0].stand = RUN_L1;
				} else {
					sms[0].stand = FALL_RIGHT;
				}
				sms[0].pos.x += 5.f;
			} else if (IsKeyDown(KEY_A)) {
				if (sms[0].on_groud > .5f) {
					if ((t_frame/10) % 2)
						sms[0].stand = RUN_R0;
					else
						sms[0].stand = RUN_R1;
				} else {
					sms[0].stand = FALL_LEFT;
				}
				sms[0].pos.x -= 5.f;
			} else {
				sms[0].stand = IDLE;
				if (sms[0].vel.y < .0f) {
					sms[0].stand = JUMP;
				} else if (sms[0].vel.y > 600.f && sms[0].pos.y < YMAX - 300.f) {
					sms[0].stand = FALL;
				}
			}
			if (IsKeyPressed(KEY_SPACE)) {
				sms[0].pos.y -= 3.f;
				sms[0].vel.y -= 500.f;
			}
			if (IsKeyPressed(KEY_S)) {
				sms[0].vel.y += 1000.f;
			}
			
			DrawText(TextFormat("%.3f", sms[0].vel.y), 0, 30, 30, WHITE);

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		wmpo = GetScreenToWorld2D(mpo, camera);
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		t += dt;
		t_frame++;
	}

	CloseWindow();
}


