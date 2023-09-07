#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <vector>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;
bool mld = false;

Vector2 GRAVITY = {0.0f, 9.8f};

struct Point;

Point* selected = 0;
Vector2 offset_select = {0};

struct Point {
	float m;
	bool moveable;
	Vector2 pos;
	Vector2 vel = {0};
	Vector2 force = {0};

	float _anim_select = 0.0f;

	Point(Vector2 pos, float mass = 1.0f, bool moveable = true)
	:	m(mass),
		moveable(moveable),
		pos(pos)
		{}

	inline void push(Vector2 F) {
		force = Vector2Add(force, F);
	}

	void update() {

		DrawCircleV(pos, 2.0f, WHITE);

		const float mdst = Vector2Distance(pos, mpo);
		
		if (moveable) {
			force = Vector2Add(force, GRAVITY);

			vel = Vector2Add(vel, force);
			pos = Vector2Add(pos, Vector2Scale(vel, dt));
			force = Vector2Zero();

			if (pos.y > YMAX) {
				force.y = (YMAX - pos.y)/dt;
			}
		}

		if (mdst <= 50.0f) {
			_anim_select += (50.0f-_anim_select)/10.0f;
			if (mdst < _anim_select && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
				selected = this;
				offset_select = Vector2Subtract(mpo, pos);
			}
			if (selected == this) {
				pos = Vector2Add(mpo, offset_select);
				vel = Vector2Scale(mdt, 1.0f/dt);
			}
		} else {
			_anim_select += (0.0f-_anim_select)/10.0f;
		}
		DrawCircleLines(pos.x, pos.y, _anim_select, RED);
		// DrawLineV(pos, Vector2Add(pos, vel), GREEN);
	}

};


std::vector<Point> pts;
inline int addPoint(float x, float y, float m = 1.0f, bool moveable = true) {
	pts.push_back(Point({x, y}, m, moveable));
	return pts.size()-1;
}

struct HardConstraint {
	int ia,ib;
	float len;
	HardConstraint(int ia, int ib) : ia(ia), ib(ib) {
		len = Vector2Distance(pts[ia].pos, pts[ib].pos);
	}

	void update() {
		Point& a = pts[ia];
		Point& b = pts[ib];
		DrawLineV(a.pos, b.pos, WHITE);

		if (a.moveable && b.moveable) {
			
			const float dst = b.pos.dist(a.pos);
			
			Vector2 temp_vel = b.vel;
			const Vector2 norm_a2b = Vector2Normalize(Vector2Subtract(b.pos, a.pos));
			const Vector2 ideal_a_pos = Vector2Add(b.pos, Vector2Scale(norm_a2b, len - dst));
			b.force = Vector2Add(a.force, Vector2Scale(Vector2Subtract(ideal_a_pos, a.pos), 1.0f/dt));
			temp_vel = Vector2Subtract(b.vel, Vector2Scale(norm_a2b, Vector2DotProduct(b.vel, norm_a2b)));

			const Vector2 norm_b2a = Vector2Normalize(Vector2Subtract(a.pos, b.pos));
			const Vector2 ideal_a_pos = Vector2Add(a.pos, Vector2Scale(norm_b2a, len - dst));
			a.force = Vector2Add(a.force, Vector2Scale(Vector2Subtract(ideal_a_pos, a.pos), 1.0f/dt));
			a.vel = Vector2Subtract(a.vel, Vector2Scale(norm_b2a, Vector2DotProduct(a.vel, norm_b2a)));

			b.vel = temp_vel;

		} else if (a.moveable || b.moveable) {
			Point& mov = a.moveable ? a : b;
			Point& fix = a.moveable ? b : a;
			const float dst = mov.pos.dist(fix.pos);
			const Vector2 norm_f2m = Vector2Normalize(Vector2Subtract(mov.pos, fix.pos));
			mov.pos = Vector2Add(mov.pos, Vector2Scale(norm_f2m, len - dst));
			mov.vel = Vector2Subtract(mov.vel, Vector2Scale(norm_f2m, Vector2DotProduct(mov.vel, norm_f2m)));
			mov.vel = Vector2Scale(mov.vel, 0.5f);
		}
	}
};
std::vector<HardConstraint> hcsts;
inline void addHardConstraint(int ia, int ib) {
	hcsts.push_back(HardConstraint(ia, ib));
}

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	int ia = addPoint(XMAX/2.0f, 200.0f, 1.0f, false);
	int ib = addPoint(XMAX/2.0f, 400.0f);
	int ic = addPoint(XMAX/2.0f, 600.0f);
	int id = addPoint(200.0f, 600.0f);
	int ie = addPoint(300.0f, 500.0f);

	addHardConstraint(ia, ib);
	addHardConstraint(ib, ic);
	addHardConstraint(id, ie);


	while (!WindowShouldClose()) {
		mld = IsMouseButtonDown(MOUSE_BUTTON_LEFT);
		BeginDrawing();
			ClearBackground(BLACK);

			for (size_t i = 0; i < pts.size(); i++)
			{
				pts[i].update();
			}
			for (size_t i = 0; i < hcsts.size(); i++)
			{
				hcsts[i].update();
			}

			if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
				selected = 0;
			}

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	CloseWindow();
}


