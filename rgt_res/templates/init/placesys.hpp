#pragma once
struct Place {
	const char* name;
	void(*_load)();
	void(*_update)();
	void(*_unload)();

	Place(
		const char* name,
		void(*_load)(),
		void(*_update)(),
		void(*_unload)()
	) : name(name),
		_load(_load),
		_update(_update),
		_unload(_unload)
	{}

	void load() {
		TraceLog(LOG_DEBUG, "Loading place '%s'...", name);
		if (_load) _load();
		TraceLog(LOG_DEBUG, "Place '%s' loaded.", name);
	}

	void update() {
		if (_update) _update();
	}

	void unload() {
		TraceLog(LOG_DEBUG, "Unloading place '%s'...", name);
		if (_unload) _unload();
		TraceLog(LOG_DEBUG, "Place '%s' unloaded.", name);
	}
} current_place;


void place_goto(Place p) {
	current_place.unload();
	current_place = p;
	current_place.load();
}

