#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <vector>
#include <unordered_map>
#include <utils/result.hpp>
#include <pthread.h>
#include <synchapi.h>
#include <ctime>
#include <stdio.h>
#include <inttypes.h>


const float XMAX = 1600.0f;
const float YMAX = 900.0f;
struct ivec2 {
	int x,y;
	ivec2() {}
	ivec2(Vector2 v) {
		x = int(v.x);
		y = int(v.y); 
	}
	ivec2(int x, int y) : x(x), y(y) {}

	ivec2& rescale(ivec2 size) {
		x = x/size.x;
		y = y/size.y;
		return *this;
	}
};
bool operator == (ivec2 a, ivec2 b) {
	return (a.x == b.x && a.y == b.y);
}
bool operator != (ivec2 a, ivec2 b) {
	return !(a == b);
}

ivec2 hashsize = {100, 100};
// La fonction de hachage spécialisée pour les clés `unordered_map`
struct hash_fn
{
    std::size_t operator() (const ivec2 &node) const
    {
        return *(size_t*)&node;
    }
};


Vector2 mpo;
Vector2 mdt;
float dt;
bool run = true;

std::unordered_map<ivec2, std::vector<int>, hash_fn> hashmap;

struct S {
	static constexpr float r = 10.0f;
	Vector2 pos;
	ivec2 last_loc;
	Vector2 vel = {0};
	Vector2 acc = {0};
	
	S(Vector2 pos) : pos(pos) {
		last_loc = getHashLoc();
	}

	void init();

	void draw();
	void update();
	void putInHashMap();
	ivec2 getHashLoc() {
		return ivec2(pos).rescale(hashsize);
	}
};

std::vector<S> bs;

void S::init()  {
	hashmap[last_loc].push_back(int(this - bs.data()));
}
const auto c = RED.setAlpha(0.1f);
void S::draw() {
	DrawCircleV(pos, r, BLUE);
}
void S::update()  {
	acc.y += 9.8f;
	pos = Vector2Add(pos, Vector2Scale(vel, dt));
	vel = Vector2Add(vel, Vector2Scale(acc, 1));
	acc = Vector2Zero();


	if (last_loc != getHashLoc()) {
		auto& l = hashmap[last_loc];
		int self_idx = int(this - bs.data());
		int err_idx = -1;
		for (size_t i = 0; i < l.size(); i++)
		{
			if (l[i] == self_idx) {
				err_idx = i;
				break;
			}
		}
		assert(err_idx != -1);
		l.erase(l.begin() + err_idx);
		last_loc = getHashLoc();
		hashmap[last_loc].push_back(self_idx);
	}

	for (int x = -1; x < 2; x++)
	{
		for (int y = -1; y < 2; y++) {
			auto loc = getHashLoc();
			loc.x += x;
			loc.y += y;
			if (hashmap.find(loc) == hashmap.end()) {
				continue;
			}
			// DrawRectangleLines(loc.x*hashsize.x, loc.y*hashsize.y, hashsize.x, hashsize.y, c);
			for (int idx : hashmap[loc])
			{
				S& i = bs[idx];
				if (&i == this) continue;
				const float dist = Vector2Distance(pos, i.pos);
				if (dist < 2.f*r) {
					const Vector2 itos = Vector2Normalize(Vector2Subtract(pos, i.pos));
					pos = Vector2Add(pos, Vector2Scale(itos, (2.f*r - dist)/2.0f+0.5f));
					i.pos = Vector2Subtract(i.pos, Vector2Scale(itos, (2.f*r - dist)/2.0f+0.5f));
					acc = Vector2Add(acc, Vector2Scale(i.vel, 0.5f));
					i.acc = Vector2Add(i.acc, Vector2Scale(vel, 0.5f));
					vel = Vector2Scale(itos, vel.magn()*0.5f);
					i.vel = Vector2Scale(itos, -i.vel.magn()*0.5f);
				}
			}
		}
	}
	
	
	if (pos.y > YMAX-r) {
		pos.y = YMAX-r;
		vel.y *= -0.5f;
	}
	if (pos.x < r) {
		pos.x = r;
		vel.x *= -0.5f;
	} else if (pos.x > XMAX - r) {
		pos.x = XMAX - r;
		vel.x *= -.5f;
	}
	const float mdst = Vector2Distance(pos, mpo);
	
	if (IsMouseButtonDown(MOUSE_RIGHT_BUTTON) && mdst < 200.0f) {
		vel = Vector2Add(vel, Vector2Scale(Vector2Subtract(pos, mpo), 2.0f));
	}
}

void* mathread(void*) {
	while (run) {
		double s = GetTime();
		for (size_t i = 0; i < bs.size(); i++)
		{
			bs[i].update();
		}
		auto duration = GetTime() - s;
		if (duration < 0.016) {
			Sleep(16 - DWORD(duration*1000.0));
		}
	}
	return 0;
}

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	for (int y = 0; y <= YMAX/hashsize.y; y++)
	{
		for (int x = 0; x <= XMAX/hashsize.x; x++)
		{
			hashmap[ivec2(x, y)] = {};
		}
	}
	const int MAX_COUNT = 4000;
	bs.reserve(MAX_COUNT);
	pthread_t thread_id;
	pthread_create(&thread_id, NULL, mathread, NULL);
	
	

	while (!WindowShouldClose() && run) {
		BeginDrawing();
			ClearBackground(BLACK);

			if (GetFPS() > 50 && IsMouseButtonDown(MOUSE_LEFT_BUTTON) && bs.size() < MAX_COUNT) {
				bs.push_back(S{mpo});
				bs.back().init();
			}

			for (size_t i = 0; i < bs.size(); i++)
			{
				bs[i].draw();
			}

			DrawText(TextFormat("%llu", bs.size()), 0, 30, 30, WHITE);

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}
	run = false;
	pthread_join(thread_id, NULL);

	CloseWindow();
	puts("Finished.");
}


