

enum WeaponId : uint8_t;

// NOTE: Declaration is needed from here.
struct WeaponDescriptor  {
	float reload_time;
	float range;
	float bullet_speed;
	float bullet_damage;
	float precision; // In (0,1] (result value will be cannon_axis+random()/precision)
	int bullets; // Count of bullets shot per shot.

	// I put these at the end because they are assigned at loading
	index_t texid;
	index_t shoot_sfxid;
	index_t reload_sfxid;
};

inline const WeaponDescriptor& getWeaponDescr(WeaponId id);

struct WeaponHeld {
	WeaponId id;
	float reloading = 0.0f;

	const WeaponDescriptor& getDescr() const;
	void update(const Vector2 pos, const Vector2 cannon_axis);
};

enum ItemId : int8_t;

struct ItemInventory {
	ItemId id;
	uint8_t count;

	inline void drawIn(Rectangle rect);
};

struct ItemEntity;

struct Player {

	Vector2 	pos;
	Vector2 	vel;
	float		speed;
	WeaponHeld 	weapon;

	std::vector<ItemInventory> inventory;

	float run_anim = .0f;
	float run_sign = 1.f;

	Player();

	inline const Vector2 center() const;

	void update();

	void GUI_update();

	// Returns true if the item was succesfuly added to inventory.
	bool tryToAddToInventory(ItemEntity entity);
};

Player player;
