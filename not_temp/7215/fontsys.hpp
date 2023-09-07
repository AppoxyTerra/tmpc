

Font font;


void font_init() {
	font = LoadFontEx("res/font.ttf", 200, 0, 0);
}

void font_close() {
	UnloadFont(font);
}



