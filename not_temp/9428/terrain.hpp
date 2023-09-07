
typedef int owner_id_t;

inline Color getColorFromId(owner_id_t id) {
	expect(id < (int)MAX_AIS, "You're trying to get the color of something that doesn't exist.");
	if (id == -1) return WHITE;
	return AIs_colors[id];
}

struct Cell {
	owner_id_t owner = -2;

	inline bool isOwned() const {
		return owner > -2;
	}

	inline void draw(int cx, int cy) const {
		if (isOwned()) {
			DrawRectangle(cx * CELL_SIZE, cy * CELL_SIZE, CELL_SIZE, CELL_SIZE, getColorFromId(owner).setAlpha(0.8f));
		} else {
			DrawRectangleLines(cx * CELL_SIZE, cy * CELL_SIZE, CELL_SIZE, CELL_SIZE, WHITE.setAlpha(0.3f));
		}
	}
};


std::array<Cell, GRID_SIZE.first * GRID_SIZE.second> terrain;

void drawTerrain() {
	for (size_t x = 0; x < GRID_SIZE.first; x++)
	{
		for (size_t y = 0; y < GRID_SIZE.second; y++)
		{
			terrain[y+x*GRID_SIZE.second].draw(x,y);
		}
	}
}

inline Cell& getCellAt(int x, int y) {
	return terrain[min(max(y+x*GRID_SIZE.second, 0), int(terrain.size()-1))];
}

inline void forEveryCellInRadius(int cx, int cy, int r, std::function<void(int,int,Cell&)> func) {
	// Fuck math optimization, why has no one found what I'm looking for already ?
	// Is is so rare to parse a grid in an absolute distance.
	for (int x = cx-r; x <= cx+r; x++)
	{
		for (int y = cy-r; y <= cy+r; y++)
		{
			if (abs(x-cx)+abs(y-cy) <= r) {
				func(x, y, terrain[y+x*GRID_SIZE.second]);
			}
		}
	}
}
inline void forEveryCellInRadiusBounds(int cx, int cy, int r, std::function<void(int,int,Cell&)> func) {
	// Fuck math optimization, why has no one found what I'm looking for already ?
	// Is is so rare to parse a grid in an absolute distance.
	for (int x = cx-r; x <= cx+r; x++)
	{
		for (int y = cy-r; y <= cy+r; y++)
		{
			if (abs(x-cx)+abs(y-cy) == r) {
				func(x, y, terrain[y+x*GRID_SIZE.second]);
			}
		}
	}
}
// Nice