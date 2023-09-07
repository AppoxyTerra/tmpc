#pragma once

// All menu data
namespace menu {
	const float title_size = 120.f;
	Vector2 title_pos;

	const float button_size = 90.f;

	bool select_spring = true;
	int selected = 0;

	template <int index>
	bool drawButton(const char* text, float y) {
		const Vector2 measure = MeasureTextEx(font, text, button_size, 2.f);
		const Rectangle rect = Rectangle{
			XMAX/2.f - (measure.x + 10.f)/2.f, y,
			measure.x + 10.f, measure.y + 10.f
		};

		if (selected == index) {
			DrawRectangleLinesEx(rect, 1.f, WHITE);
			if (control::accept())
				return true;
		}

		DrawTextEx(
			font,
			text,
			{XMAX/2.f - (measure.x + 10.f)/2.f + 5.f, y + 5.f},
			button_size,
			2.f,
			WHITE
		);

		return false;
	}
};

void menu_load() {
	using namespace menu;
	title_pos = MeasureTextEx(font, "Hordes", title_size, 2.f);
	title_pos = Vector2Subtract({XMAX/2.f, YMAX/2.f - 200.f}, Vector2Scale(title_pos, .5f));
}

void menu_unload() {
	using namespace menu;

}

void menu_update() {
	using namespace menu;

	ClearBackground(BLACK);

	DrawTextEx(font, "Hordes", title_pos, title_size, 2.f, rgb(255, sinf(t*3.f)*27.f+227.f, 255));


	if (drawButton<0>("Play", title_pos.y + 150.f)) {
		place_goto(place_game);
	}
	if (drawButton<1>("Options", title_pos.y + button_size + 160.f)) {
		// pass //
	}
	if (drawButton<2>("Quit", title_pos.y + 2.f * button_size + 170.f)) {
		run = false; // The unloading is handled in main.cpp
	}

	float select_move = control::moveY();
	if (select_move) {
		if (select_spring) {
			selected += int(select_move);
			select_spring = false;

			if (selected < 0) selected = 2;
			if (selected > 2) selected = 0;
		}
	} else {
		select_spring = true;
	}
}


DECL_PLACE(menu);




