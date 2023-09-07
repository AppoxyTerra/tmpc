#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <utils/result.hpp>
#include <stdint.h>
#include <vector>
#include <map>

#include "optimap.hpp"

#define DECL_ACTION(ACTION_NAME) ActionOutput f_ ## ACTION_NAME(ActionData self) 

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 wmpo;
Vector2 mdt;
float dt;

struct Blorb;

typedef uint8_t ActionOutput;
typedef Blorb& ActionData;
typedef ActionOutput(*ActionFunc)(ActionData);

enum Action {
	ACT_NULL,
	ACT_MOVE_FORWARD,
	ACT_COUNT
};

DECL_ACTION(ACT_NULL);

DECL_ACTION(ACT_MOVE_FORWARD);

ActionFunc actreg[ACT_COUNT] = {
	f_ACT_NULL,
	f_ACT_MOVE_FORWARD
};

// Number of possible outputs per action.
// Outputs must always be consecutive integers from 0
const int act_outc[ACT_COUNT] = {
	1, 1
};

// Dynamic Decision Tree
struct DDT {
	using NodeIndex = int; // Gosh pointers are such a mess, it's hideous (with references being lost all the f time)

	struct Node {
		using Self = Node;
		using RegisterIterator = std::vector<Self>::iterator;
		Action action;
		Optimap<ActionOutput, NodeIndex> next;
		// TODO (future feature)
		// Will help for network optimization
		//	float node_strength = 0.0f;

		// Node() { next.init(1); action = ACT_NULL; }
		Node() {}
		
		void init(Action act) {
			next.init(act_outc[act]);
			action = act;
		}

		void addPath(ActionOutput aout, NodeIndex other) {
			next[aout] = other;
		}

		NodeIndex getNextNode(ActionData data, RegisterIterator begin) {
			ActionOutput output = actreg[action](data);
			if (next.contains(output)) {
				return next[output];
			} else {
				return -1;
			}
		}

		void draw(Vector2 pos) {
			DrawCircleV(pos, 20.f, WHITE);
			DrawText(TextFormat("%i", (int)action), pos.x - 15, pos.y - 15, 30, BLACK);
		}
	};

	std::vector<Node> nodes;
	NodeIndex current = 0;

	DDT() {
		nodes.push_back(Node());
		nodes.back(ACT_NULL);
		current = 0;
	}

	DDT(const DDT& copy) {
		nodes = copy.nodes; // copy
		current = 0;
	}

	// Simply returns self. Can be ignored.
	DDT& mutate_ip() {
		int mutation_count = 0;
		for (int tries = 0; tries < (int)nodes.size(); tries++) {
			Node& selected = nodes[nodes.size() - tries - 1]; // Mutate over last mutations (idk, maybe it won't work)
			const int outc = act_outc[selected.action];
			if ((int)selected.next.size("main.cpp:100") >= outc) {
				assert((int)selected.next.size("main.cpp:101") == outc);
				continue;
			}
			for (ActionOutput aoi = 0; aoi < outc; aoi++) {
				if ((!selected.next.contains(aoi)) && rand()%2) {
					nodes.push_back(Node());
					nodes.back().init((Action)(rand()%ACT_COUNT));
					selected.addPath(aoi, (NodeIndex)(nodes.size()-1));
					mutation_count++;
				}
			}
		}
		printf("Mutated %i time(s).\n", mutation_count);
		return *this;
	}

	inline DDT mutate() {
		DDT copy = *this;
		copy.mutate_ip();
		return copy;
	}

	void update(ActionData data) {
		if (current == -1) {
			current = 0;
		}
		current = nodes[current].getNextNode(data, nodes.begin());
	}

	void draw(Vector2 pos, int index) {
		Node& n = nodes[index];
		for (int i = 0; i < act_outc[n.action]; i++) {
			const Vector2 next_pos = {
				pos.x + (i - act_outc[n.action]/2),
				pos.y + 50.f
			};
			DrawLineV(
				pos,
				next_pos,
				GRAY
			);
			if (n.next.contains((ActionOutput)i)) {
				this->draw(next_pos, n.next[(ActionOutput)i]);
			}
		}
		n.draw(pos);
	}
};

enum AUM {
	AUM_NONE,
	AUM_RMV
};

struct Blorb {
	static constexpr float size = 40.f;
	Vector2 pos = {XMAX/2.f,YMAX/2.f};
	float angle = .0f;
	DDT ddt;

	Blorb() {}

	AUM update();
};

std::vector<Blorb> bs;

int hovered_index = -1;

AUM Blorb::update() {
	ddt.update(*this);
	DrawCircleV(pos, size, RED);
	DrawLineV(
		pos,
		Vector2Add(pos, Vector2Scale({cosf(angle), -sinf(angle)}, size)),
		GREEN
	);
	if (Vector2Distance(pos, wmpo) < size) {
		hovered_index = (int)(this - bs.data());
	}
	return AUM_NONE;
}

DECL_ACTION(ACT_NULL) {
	return 0;
}

DECL_ACTION(ACT_MOVE_FORWARD) {
	const float fwspeed = 2.f;
	self.pos.x += cosf(self.angle) * fwspeed;
	self.pos.y += -sinf(self.angle) * fwspeed;
	return 0;
}

void spawnBlorb(int start_mutation_count) {
	bs.push_back(Blorb());
	for(int i = 0; i < start_mutation_count; i++) {
		bs.back().ddt.mutate_ip();
	}
}

Camera2D camera;

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	camera.offset = {XMAX/2.f, YMAX/2.f};
	camera.target = {XMAX/2.f, YMAX/2.f};
	camera.zoom = 1.f;
	camera.rotation = 0.f;


	for (int i = 0; i < 1; i++) {
		spawnBlorb(3);
	}

	while (!WindowShouldClose()) {
		if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
			camera.target = Vector2Subtract(camera.target, mdt);
		}

		BeginDrawing();
			ClearBackground(BLACK);

			hovered_index = -1;
			BeginMode2D(camera);
				for (int i = 0; i < (int)bs.size(); i++) {
					if (bs[i].update() == AUM_RMV) {
						bs.erase(bs.begin() + i);
						i--;
					}
				}
			EndMode2D();

			if (hovered_index >= 0 && hovered_index < (int)bs.size()) {
				bs[hovered_index].ddt.draw({XMAX/2.f, 50.f}, 0);
			}

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		wmpo = GetScreenToWorld2D(mpo, camera);
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	CloseWindow();
}


