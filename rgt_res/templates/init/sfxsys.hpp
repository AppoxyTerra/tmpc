#pragma once
std::vector<Sound> sfxs;

// Allocate the right amount of Sfxs
void preloadSfxs(size_t count) {
	sfxs.reserve(count);
}

index_t loadSfx(const char* filename) {
	sfxs.push_back(Sound());
	sfxs.back() = LoadSound(filename);
	return sfxs.size()-1;
}

Sound& sfx(index_t index) {
	return sfxs[index];
}

void unloadSfxs() {
	for (auto &s : sfxs)
	{
		UnloadSound(s);
	}
	sfxs.clear();
}

void play(Sound& s) {
	PlaySound(s);
}
