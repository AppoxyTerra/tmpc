#pragma once
std::vector<Music> musics;

// Allocate the right amount of musics
void preloadMusics(size_t count) {
	musics.reserve(count);
}

index_t loadMusic(const char* filename) {
	musics.push_back(Music());
	musics.back() = LoadMusicStream(filename);
	return musics.size()-1;
}

Music& music(index_t index) {
	return musics[index];
}

void unloadMusics() {
	for (auto &s : musics)
	{
		UnloadMusicStream(s);
	}
	musics.clear();
}

void play(Music& m) {
	PlayMusicStream(m);
}
