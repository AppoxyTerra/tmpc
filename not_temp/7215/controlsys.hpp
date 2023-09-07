

// This is here to help for controller integration
namespace control
{
	inline bool accept() {
		return (
			IsKeyPressed(KEY_ENTER)
		);
	}
	inline float moveX() {
		return float(
			IsKeyDown(KEY_D) - IsKeyDown(KEY_A)
		);
	}
	inline float moveY() {
		return float(
			IsKeyDown(KEY_S) - IsKeyDown(KEY_W)
		);
	}
	inline float sightX(const float rel_x) {
		return rel_x - mpo.x;
	}
	inline float sightY(const float rel_y) {
		return rel_y - mpo.y;
	}
	inline bool fire1() {
		return IsMouseButtonDown(MOUSE_LEFT_BUTTON);
	}
	inline bool fire2() {
		return IsMouseButtonDown(MOUSE_RIGHT_BUTTON);
	}
	inline bool isSliding() {
		return IsKeyDown(KEY_LEFT_CONTROL);
	}
}






