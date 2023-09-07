





struct GraplingHook {
	Vector2 pos;
	Vector2 vel;
	enum GrabbedType {
		GRAB_ITEM
	} grabbed_type;
	void* grabbed = NULL;

	inline const Vector2 center() const {
		return {pos.x + ui.scale/2.f, pos.y + ui.scale/2.f};
	}

	void update();

	void grab(void*, GrabbedType);
	void ungrab();
	void checkAndUngrabSelf(void*);
} hook;

// Methods defined in player.hpp

