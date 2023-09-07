#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <array>
#include <vector>

struct ivec2 {
	int x, y;

	static inline ivec2 zero() {
		return ivec2{0, 0};
	}
};

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

enum Sfx {
	SFX_SELECT,
	SFX_COUNT
};
Sound sfxs[SFX_COUNT];
Texture rope_tex;

enum CellStatus {
	NONE,
	START_BLUE,
	START_RED,
	START_GREEN,
	PATH_BLUE,
	PATH_RED,
	PATH_GREEN,
	END_BLUE,
	END_RED,
	END_GREEN
};

Color PALETTE[3] = {
	BLUE,
	RED,
	GREEN
};
constexpr float CS = 100.f;

Vector2 mouse_pressure = Vector2Zero();

struct String {
	static constexpr float maxd = 3.f;
	Vector2 origin;
	Vector2 target;
	Color color;
	struct Node;
	std::vector<Node> nodes;

	struct Node {
		Vector2 pos;
		Vector2 vel;

		void update(const Color color, Vector2 prev) {
			const float size = 10.f;
			// DrawCircleV(pos, size, color);
			Vector2 draw = pos;
			const float dist = Vector2Distance(prev, pos);
			const float align_angle = Vector2Normalize(Vector2Subtract(pos, prev)).angle() - 90.f;
			DrawTexturePro(
				rope_tex,
				{.0f, .0f, 60.f, 60.f},
				{pos.x, pos.y, size, size},
				{size/2.f, size/2.f},
				align_angle,
				WHITE
			);
			for (float i = 0; i < dist/(size/2.f); i++)
			{
				draw = Vector2MoveTowards(draw, prev, size/2.f);
				// DrawCircleV(draw, size, color);
				DrawTexturePro(
					rope_tex,
					{.0f, .0f, 60.f, 60.f},
					{draw.x, draw.y, size, size},
					{size/2.f, size/2.f},
					align_angle,
					WHITE
				);
			}
			
			pos = Vector2Add(pos, vel);
			vel = Vector2Add(vel, Vector2Scale(Vector2Subtract(Vector2Zero(), vel), .5f));
			vel.clamp(-3.f, 3.f);
			vel = Vector2Add(vel, {0.f, 3.0f});
			if (pos.y >= YMAX - size) {
				pos.y = YMAX - size;
				vel.y = .0f;
			}
			const float mdist = Vector2Distance(pos, mpo);
			if (mdist < 60.f) {
				const Vector2 normsub = Vector2Normalize(Vector2Subtract(pos, mpo));
				const Vector2 ideal_pos = Vector2Add(mpo, Vector2Scale(normsub, 60.f));
				pos = ideal_pos;
				mouse_pressure = Vector2Add(mouse_pressure, Vector2Scale(normsub, -1.f));
				mouse_pressure = Vector2Add(mouse_pressure, Vector2Scale(vel, 0.2f));
			}
		}
	};

	void init(size_t node_count) {
		nodes.reserve(node_count);
		Vector2 loc = origin;
		const float dist = Vector2Distance(origin, target);
		const float distep = dist/node_count;
		for (size_t i = 0; i < node_count; i++)
		{
			loc = Vector2MoveTowards(loc, target, distep);
			nodes.push_back(Node{loc, Vector2Zero()});
		}
	}

	void close() {
		nodes.clear();
	}

	inline void update() {
		if (nodes.size() > 1) {
			nodes[0].update(color, nodes[1].pos);
			nodes.back().pos = target;
			for (size_t i = 1; i < nodes.size(); i++)
			{
				Node& n = nodes[i-1];
				Node& m = nodes[i];
				const float dist = Vector2Distance(n.pos, m.pos);
				if (dist > maxd) {
					const Vector2 normsub = Vector2Normalize(Vector2Subtract(n.pos, m.pos));
					const Vector2 ideal_pos = Vector2Add(m.pos, Vector2Scale(normsub, maxd));
					n.vel = Vector2Add(n.vel, Vector2Scale(Vector2Subtract(ideal_pos, n.pos), 0.3f));
				}
				n.update(color, m.pos);
			}
		}
	}
} string;

struct CellInfo;

CellInfo* selected = 0;
CellInfo* previously_hovered = 0;

ivec2 deduceCellIposFromPointer(CellInfo*);

struct CellInfo {
	CellStatus status;
	ivec2 next;
	bool hovered;

	void update(Vector2 pos, ivec2 ipos) {
		const Rectangle cell = { pos.x, pos.y, CS, CS };
		if (selected && previously_hovered) {
			if (previously_hovered != this) {
				const ivec2 previous_ipos = deduceCellIposFromPointer(previously_hovered);
				const ivec2 direction = ivec2{ipos.x - previous_ipos.x, ipos.y - previous_ipos.y};
				previously_hovered->next = direction;
			}
		}

		if (CheckCollisionPointRec(mpo, cell)) {
			DrawRectangleRec(cell, rgba(255, 255, 255, 20));
			hovered = true;
			if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
				PlaySound(sfxs[SFX_SELECT]);
				if (status >= START_BLUE && status <= START_GREEN) {
					selected = this;
					string.origin = pos;
					string.color = PALETTE[status - START_BLUE];
					string.init(64);
				}
			} else if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
				selected = 0;
				string.close();
			}
		} else {
			if (hovered) {
				previously_hovered = this;
				hovered = false;
			}
		}


		switch (status)
		{
		case NONE:
			if (selected && hovered) {
				status = (CellStatus)(selected->status + 3); // Shift start to path
			}
			break;
		case START_BLUE:
		case START_RED:
		case START_GREEN:
			DrawCircleV(Vector2Add(pos, {CS/2.f, CS/2.f}), CS/3.f, PALETTE[status-START_BLUE]);
			DrawCircleV(Vector2Add(pos, {CS/2.f, CS/2.f}), CS/5.f, BLACK);
			break;
		case PATH_BLUE:
		case PATH_RED:
		case PATH_GREEN:
			DrawLineV(Vector2Add(pos, {CS/2.f, CS/2.f}), Vector2Add(pos, {CS/2.f + next.x*CS, CS/2.f + next.y*CS}), PALETTE[status-PATH_BLUE]);
			DrawCircleV(Vector2Add(pos, {CS/2.f, CS/2.f}), CS/5.f, PALETTE[status-PATH_BLUE]);
			break;
		case END_BLUE:
		case END_RED:
		case END_GREEN:
			DrawRectangleRec({pos.x + 10.f, pos.y + 10.f, CS - 20.f, CS - 20.f}, PALETTE[status-END_BLUE]);
			DrawRectangleRec({pos.x + 20.f, pos.y + 20.f, CS - 40.f, CS - 40.f}, BLACK);
			break;
		default:
			break;
		}
	}
};


struct Game {
	static constexpr int W = 4;
	static constexpr int H = 4;
	std::array<CellInfo, W*H> cells;
	Vector2 pos;

	inline CellInfo& at(int x, int y) {
		return cells[x + y*W];
	}

	Game() {
		pos = {
			XMAX/2.f - (W/2)*CS,
			YMAX/2.f - (H/2)*CS,
		};
	}

	void init() {
		cells.fill(CellInfo{NONE, ivec2::zero()});
		int idx = 0;
		idx = (idx + GetRandomValue(1, W*H-1)) % (W*H);
		cells[idx] = CellInfo{START_BLUE, ivec2::zero()};
		idx = (idx + GetRandomValue(1, W*H-1)) % (W*H);
		cells[idx] = CellInfo{END_BLUE, ivec2::zero()};
	}

	void update() {
		for (int y = 0; y < H; y++)
		{
			for (int x = 0; x < W; x++)
			{
				CellInfo& ci = at(x, y);
				ci.update(Vector2Add(pos, {x*CS, y*CS}), ivec2{x, y});
			}
			DrawLineV(
				Vector2Add(pos, {0.f, y*CS}),
				Vector2Add(pos, {W*CS, y*CS}),
				WHITE
			);
			DrawLineV(
				Vector2Add(pos, {y*CS, 0.f}),
				Vector2Add(pos, {y*CS, H*CS}),
				WHITE
			);
		}
		DrawLineV(
			Vector2Add(pos, {0.f, H*CS}),
			Vector2Add(pos, {W*CS, H*CS}),
			WHITE
		);
		DrawLineV(
			Vector2Add(pos, {W*CS, 0.f}),
			Vector2Add(pos, {W*CS, H*CS}),
			WHITE
		);
	}

} game;


ivec2 deduceCellIposFromPointer(CellInfo* ci) {
	int pd = ci - game.cells.data();
	return ivec2{
		pd % Game::W,
		pd / Game::W
	};
}

int main() {
	SetTargetFPS(60);
	InitAudioDevice();
	InitWindow(XMAX, YMAX, "Name of the window here.");

	SetMasterVolume(0.5f);

	sfxs[SFX_SELECT] = LoadSound("res/select.wav");

	rope_tex = LoadTexture("res/rope.png");
	// game.init();
	string.color = ORANGE;
	string.origin = {XMAX/2.f, 32.f * String::maxd};
	string.target = {XMAX/2.f, 0.f};
	string.init(32);

	while (!WindowShouldClose()) {
		if (IsWindowFocused()) {
			SetMousePosition(mpo.x + mouse_pressure.x, mpo.y + mouse_pressure.y);
		}
		mouse_pressure = Vector2Zero();

		BeginDrawing();
			ClearBackground(BLACK);

			// game.update();
			string.update();

			// DrawText(TextFormat("selected: %p\nlast_hovered: %p", selected, previously_hovered), 0, 30, 30, WHITE);

			DrawCircleLines(mpo.x, mpo.y, 60.f, WHITE);
			DrawFPS(0, 0);
		EndDrawing();

		
		if (IsKeyPressed(KEY_R)) {
			game.init();
		}
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	for (auto &&s : sfxs)
	{
		UnloadSound(s);
	}
	UnloadTexture(rope_tex);
	

	CloseWindow();
}


