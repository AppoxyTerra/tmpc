
const char* flag_on_names[] = {
	"Located"
};


struct Power {
	enum Flags {
		// Default mode.
		FLAG_NONE = 0b0000,
		// Default: effect is applied on all cells of range.
		USAGE_SELECT_CELL = 0b0001
	};
	const char* name;
	const char* descr;

	Flags flag;

	/*
		Range:
		When positive:
			Max absolute distance from the character.
		When negative:
			Only the outer bound of the previous ability.
		When zero:
			Effect is applied on the user directly (ignoring the mode).
	*/
	int range;
	/*
		Damage:
		When positive:
			Afflict damage in range.
		When negative:
			Heals in range.
		When zero:
			Move character to cell in range.
			If USAGE_SELECT_CELL is enabled:
				Moves character to selected cell.
			Else:
				Moves character randomly in range (where it is possible).
	*/
	int damage;

	/*
		Reload time:
		If null:
			Reloads instantly (can be used multiple time each turns)
		Else:
			You have to wait <reload_turn> to use the power again.
	*/
	uint8_t reload_time;

	Vector2 draw_descr_size;
	const char* getTextFromFlags() {
		const char* output = "";
		for (int i = 0; i < 1; i++)
		{
			const int bit = 1 << i;
			if (flag & bit) {
				output = TextFormat("%s\n%s", flag_on_names[i], output);
			}
		}
		return output;
	}
	Power(
		const char* name,
		const char* descr,
		Flags flag,
		int range,
		int damage,
		uint8_t count_down
	) : name(name),
		descr(descr),
		flag(flag),
		range(range),
		damage(damage),
		reload_time(count_down)
	{}

	void drawDescr(Vector2 pos) {
		draw_descr_size = {10.0f, 10.0f}; // left+right Padding
		draw_descr_size = Vector2Add(draw_descr_size, MeasureTextEx(font, name, 30.0f, 2.0f));
		draw_descr_size.y += 15.0f; // Title line.

		const Vector2 descr_s = MeasureTextEx(font, descr, 30.0f, 2.0f);
		draw_descr_size.y += descr_s.y;
		if (descr_s.x+10.0f > draw_descr_size.x)
			draw_descr_size.x = descr_s.x + 10.0f;

		const Vector2 flags_s = MeasureTextEx(font, getTextFromFlags(), 30.0f, 2.0f);
		draw_descr_size.y += flags_s.y;
		if (flags_s.x+10.0f > draw_descr_size.x)
			draw_descr_size.x = flags_s.x + 10.0f;

		const Vector2 range_s = MeasureTextEx(font, TextFormat("Range: %i\n", range), 30.0f, 2.0f);
		draw_descr_size.y += range_s.y;
		if (range_s.x+10.0f > draw_descr_size.x)
			draw_descr_size.x = range_s.x + 10.0f;

		const Vector2 dmg_s = MeasureTextEx(font, TextFormat("Damage: %i", damage), 30.0f, 2.0f);
		draw_descr_size.y += dmg_s.y;
		if (dmg_s.x+10.0f > draw_descr_size.x)
			draw_descr_size.x = dmg_s.x + 10.0f;


		Rectangle draw_rect = {pos.x, pos.y, draw_descr_size.x, draw_descr_size.y};
		if (pos.y + draw_descr_size.y > YMAX) {
			draw_rect.y -= draw_descr_size.y;
		}

		const Vector2 descr_p = Vector2Add({5.0f, 20.0f+30.0f}, {draw_rect.x, draw_rect.y});
		const Vector2 flags_p = Vector2Add(descr_p, {0.0f, descr_s.y});
		const Vector2 range_p = Vector2Add(flags_p, {0.0f, flags_s.y});
		const Vector2 dmg_p = Vector2Add(range_p, {0.0f, range_s.y});

		DrawRectangleRec(draw_rect, BLACK);
		DrawRectangleLinesEx(draw_rect, 1.0f, WHITE);
		DrawTextEx(font, name, {draw_rect.x + 5.0f, draw_rect.y + 5.0f}, 30.0f, 2.0f, WHITE);
		DrawLineV({draw_rect.x + 5.0f, draw_rect.y + 45.0f}, {draw_rect.x + draw_rect.width - 5.0f, draw_rect.y + 45.0f}, WHITE);
		DrawTextEx(font, descr, descr_p, 30.0f, 2.0f, WHITE);
		DrawTextEx(font, getTextFromFlags(), flags_p, 30.0f, 2.0f, WHITE);
		DrawTextEx(font, TextFormat("Range: %i", range), range_p, 30.0f, 2.0f, WHITE);
		DrawTextEx(font, TextFormat("Damage: %i", damage), dmg_p, 30.0f, 2.0f, WHITE);
	}
};
enum PowerId {
	POWER_NONE = -1,
	POWER_CUT,
	POWER_MUDER,
	POWER_COUNT
};

Power POWERS[POWER_COUNT] = {
	Power(
		"Cut",
		"Attack with you paw.",
		Power::USAGE_SELECT_CELL,
		1,
		10,
		1
	),
	Power(
		"Murder",
		"It just kills.",
		Power::USAGE_SELECT_CELL,
		3,
		9999,
		0
	)
};
struct Character;
inline void inflictPower(int at_x, int at_y, PowerId power);
inline void inflictPower(Character& character, PowerId power);
Texture powtex[POWER_COUNT];

const size_t NAMES_COUNT = 546;
char NAMES[NAMES_COUNT][9];
Texture dog;

inline void loadNames() {
	FILE* f = fopen("names","r");
	if (!f) {
		puts("Could not read names.");
		return;
	}
	loop (NAMES_COUNT) {
		fread(NAMES[_loop], 1, 8, f);
		NAMES[_loop][8] = 0;
		fgetc(f); // Skip line break
	}
	fclose(f);
	TraceLog(LOG_INFO, "Loaded names successfully.");
}

struct Character {
	static constexpr size_t name_length = 8;
	static constexpr int power_count = 5;
	int x,y;
	Vector2 dpos; // Draw pos
	int life = 100;
	PowerId powers[power_count];
	uint8_t powers_count_down[power_count] = {0};
	int selected_power = -1; // -1 := None selected.
	bool clicked_on_power = false;
	bool moved = false;
	const char* name;

	Character() {
		x = GetRandomValue(0, GRID_SIZE.first-1);
		y = GetRandomValue(0, GRID_SIZE.second-1);
		dpos.x = x*CELL_SIZE;
		dpos.y = y*CELL_SIZE;
		name = NAMES[GetRandomValue(0, NAMES_COUNT-1)];
		
		for (auto &i : powers)
		{
			i = POWER_NONE;
		}
		powers[0] = POWER_CUT;
	}

	void commonDraw(Color dog_color) {
		DrawTextureV(dog, dpos, dog_color);
		if (CheckCollisionPointRec(wmpo, {float(x*CELL_SIZE), float(y*CELL_SIZE), 32.0f, 32.0f})) {
			DrawTextEx(font, name, {wmpo.x, wmpo.y-15.0f}, 15.0f, 2.0f, WHITE);
		}
		DrawRectangleRec({dpos.x+life*0.32f, dpos.y-3.0f, (100-life)*0.32f, 3.0f}, RED);
		DrawRectangleRec({dpos.x, dpos.y-3.0f, life*0.32f, 3.0f}, GREEN);
		dpos = Vector2Add(dpos, Vector2Scale(Vector2Subtract({float(x*CELL_SIZE), float(y*CELL_SIZE)}, dpos), 0.1f));
		
		// It's MEEEEE SPAGETTHI CODEEEEEEE !
		if (selected_power != -1) {
			Power& pw = POWERS[powers[selected_power]];
			if (pw.flag & Power::USAGE_SELECT_CELL) {
				if (pw.range > 0) {
					forEveryCellInRadius(x, y, pw.range, [&](int ix, int iy, Cell& cell) {
						// Drawing cell overlay.
						DrawRectangle(ix*CELL_SIZE, iy*CELL_SIZE, CELL_SIZE, CELL_SIZE, PINK.setAlpha(0.5f));

						// Checking input.
						if (
							CheckCollisionPointRec(wmpo, {(float)ix*CELL_SIZE, (float)iy*CELL_SIZE, CELL_SIZE, CELL_SIZE})
						&&	IsMouseButtonPressed(MOUSE_LEFT_BUTTON)
						) {
							inflictPower(ix, iy, powers[selected_power]);
							powers_count_down[selected_power] = POWERS[powers[selected_power]].reload_time;
						}
					});
				} else if (pw.range < 0) {
					forEveryCellInRadiusBounds(x, y, pw.range, [&](int ix, int iy, Cell& cell) {
						// Drawing cell overlay.
						DrawRectangle(ix*CELL_SIZE, iy*CELL_SIZE, CELL_SIZE, CELL_SIZE, PINK.setAlpha(0.5f));

						// Checking input.
						if (
							CheckCollisionPointRec(wmpo, {(float)ix*CELL_SIZE, (float)iy*CELL_SIZE, CELL_SIZE, CELL_SIZE})
						&&	IsMouseButtonPressed(MOUSE_LEFT_BUTTON)
						) {
							inflictPower(ix, iy, powers[selected_power]);
							powers_count_down[selected_power] = POWERS[powers[selected_power]].reload_time;
						}
					});
				} else {
					inflictPower(*this, powers[selected_power]);
					powers_count_down[selected_power] = POWERS[powers[selected_power]].reload_time;
				}
			} else {
				if (pw.range > 0) {
					forEveryCellInRadius(x, y, pw.range, [&](int ix, int iy, Cell& cell) {
						// Drawing cell overlay.
						DrawRectangle(ix*CELL_SIZE, iy*CELL_SIZE, CELL_SIZE, CELL_SIZE, PINK.setAlpha(0.5f));

						// Checking input.
						if (
							clicked_on_power
						) {
							inflictPower(ix, iy, powers[selected_power]);
							powers_count_down[selected_power] = POWERS[powers[selected_power]].reload_time;
						}
					});
				} else if (pw.range < 0) {
					forEveryCellInRadiusBounds(x, y, pw.range, [&](int ix, int iy, Cell& cell) {
						// Drawing cell overlay.
						DrawRectangle(ix*CELL_SIZE, iy*CELL_SIZE, CELL_SIZE, CELL_SIZE, PINK.setAlpha(0.5f));

						// Checking input.
						if (
							clicked_on_power
						) {
							inflictPower(ix, iy, powers[selected_power]);
							powers_count_down[selected_power] = POWERS[powers[selected_power]].reload_time;
						}
					});
				} else {
					inflictPower(*this, powers[selected_power]);
					powers_count_down[selected_power] = POWERS[powers[selected_power]].reload_time;
				}
			}
		}
		clicked_on_power = false;
		if (powers_count_down[selected_power] > 0) {
			selected_power = -1;
		}
	}
	inline void move(int dx, int dy);
	inline void addToTerritory() const;
};

std::vector<Character> AIs;

Character player;
const int PLAYER_TURN = -1;

int turn = -1;


inline void nextTurn() {
	if (turn == -1) {
		player.moved = false;
		for (size_t i = 0; i < Character::power_count; i++)
		{
			if (player.powers_count_down[i] > 0)
				player.powers_count_down[i]--;
		}
	} else {
		AIs[turn].moved = false;
		for (size_t i = 0; i < Character::power_count; i++)
		{
			if (AIs[turn].powers_count_down[i] > 0)
				AIs[turn].powers_count_down[i]--;
		}
	}
	if (++turn >= int(AIs.size())) {
		turn = -1;
	}
}

inline void updatePlayer() {
	player.commonDraw(WHITE);
	if (turn == PLAYER_TURN) {
		if (IsKeyPressed(KEY_LEFT)) {
			player.move(-1, 0);
		} else if (IsKeyPressed(KEY_RIGHT)) {
			player.move(1, 0);
		} else if (IsKeyPressed(KEY_UP)) {
			player.move(0, -1);
		} else if (IsKeyPressed(KEY_DOWN)) {
			player.move(0, 1);
		} else if (IsKeyPressed(KEY_SPACE)) {
			player.addToTerritory();
		}
		if (player.moved)
			nextTurn();
	}
}

inline void updateAIs() {
	for (int i = AIs.size()-1; i < AIs.size(); i--)
	{
		Character& ai = AIs[i];
		if (ai.life <= 0) {
			AIs.erase(AIs.begin() + i);
			i++;
			continue;
		}
		ai.commonDraw(AIs_colors[i%MAX_AIS]);

		if (turn == i && t%2==0) {
			if (GetRandomValue(0, 1)) {
				ai.addToTerritory();
			}
			const int dx = GetRandomValue(-1, 1);
			const int dy = dx == 0 ? GetRandomValue(-1, 1) : 0;
			ai.move(dx, dy);
			nextTurn();
		}
	}
}

Character* getCharacterAt(int x, int y) {
	if (player.x == x && player.y == y)
		return &player;
	for (auto &i : AIs)
	{
		if (i.x == x && i.y == y)
			return &i;
	}
	return nullptr;
}

inline void inflictPower(int at_x, int at_y, PowerId power) {
	auto has_character = getCharacterAt(at_x, at_y);
	if (has_character) {
		inflictPower(*has_character, power);
	} else {
		TraceLog(LOG_WARNING, "Effect of power on empty cells has not been implemented yet.");
	}
}
inline void inflictPower(Character& character, PowerId power) {
	character.life -= POWERS[power].damage;
}

inline void Character::move(int dx, int dy) {
	if (moved) return;
	const int nx = x + dx;
	const int ny = y + dy;
	if (nx < 0 || ny < 0 || nx >= GRID_SIZE.first || ny >= GRID_SIZE.second)
		return;
	for (auto &&i : AIs)
	{
		if (&i == this) continue;
		if (i.x == nx && i.y == ny)
			return;
	}
	// First condition for auto-opti clarity
	if (this != &player) {
		if (nx == player.x && ny == player.y) {
			return;
		}
	}
	x = nx;
	y = ny;
	moved = true;
}

// Use it when it's your turn.
inline void Character::addToTerritory() const {
	getCellAt(x, y).owner = turn;
}

void loadRessources() {
	dog = LoadTexture("res/dog.png");
	powtex[POWER_CUT] = LoadTexture("res/icons/cut.png");
	powtex[POWER_MUDER] = LoadTexture("res/icons/muder.png");
    font = LoadFont("res/font.ttf");

	player.powers[1] = POWER_MUDER;
}

void unloadRessources() {
	UnloadTexture(dog);
	for (auto &&i : powtex)
	{
		UnloadTexture(i);
	}
	UnloadFont(font);
}
