#pragma once
#include <raylib/raylib.h>
#include <vector>

std::vector<Texture> texs;

// Allocate the right amount of textures
void preloadTextures(size_t count) {
	texs.reserve(count);
}

index_t loadTexture(const char* filename) {
	texs.push_back(Texture());
	texs.back() = LoadTexture(filename);
	return texs.size()-1;
}

Texture& tex(index_t index) {
	return texs[index];
}

void unloadTextures() {
	for (auto &t : texs)
	{
		UnloadTexture(t);
	}
	texs.clear();
}

