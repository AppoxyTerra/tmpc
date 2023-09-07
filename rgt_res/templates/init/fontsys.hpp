#pragma once
#include <raylib/raylib.h>
#include <vector>
#include "common.hpp"

std::vector<Font> fonts;

// Allocate the right amount of textures
void preloadFonts(size_t count) {
	fonts.reserve(count);
}

index_t loadFont(const char* filename) {
	fonts.push_back(Font());
	fonts.back() = LoadFont(filename);
	return fonts.size()-1;
}

index_t loadFont(const char* filename, int max_size) {
	fonts.push_back(Font());
	fonts.back() = LoadFontEx(filename, max_size, 0, 0);
	return fonts.size()-1;
}

Font& ttf(index_t index) {
	return fonts[index];
}

void unloadTextures() {
	for (auto &f : fonts)
	{
		UnloadFont(f);
	}
	fonts.clear();
}


/*{$font_module}*/
