

enum WeaponId : uint8_t {
	WEAPON_PUMP,
	WEAPON_COUNT
};

struct WeaponDescriptor;


WeaponDescriptor weapon_descrs[WEAPON_COUNT] = {
	WeaponDescriptor{
		.reload_time = 0.5f,
		.range = 450.f,
		.bullet_speed = 30.f,
		.bullet_damage = 1.5f,
		.precision = 0.01f,
		.bullets = 10,
	}
};

inline const WeaponDescriptor& getWeaponDescr(WeaponId id) {
	return weapon_descrs[id];
}

struct WeaponHeld;

const WeaponDescriptor& WeaponHeld::getDescr() const {
	return weapon_descrs[id];
}

void WeaponHeld::update(const Vector2 pos, const Vector2 cannon_axis) {
	const WeaponDescriptor& descr = getDescr();
	if (reloading > 0.0f) {
		DrawTexturePro(
			tex(descr.texid),
			{.0f, .0f, 16.f, 16.f},
			{pos.x, pos.y, ui.scale, ui.scale},
			{ui.scale/2.f, ui.scale/2.f},
			cannon_axis.angle()+180.f+reloading*360.f*2.f,
			WHITE
		);
		reloading -= dt;
	} else {
		DrawTexturePro(
			tex(descr.texid),
			{.0f, .0f, 16.f, 16.f},
			{pos.x, pos.y, ui.scale, ui.scale},
			{ui.scale/2.f, ui.scale/2.f},
			cannon_axis.angle()+180.f,
			WHITE
		);
		if (control::fire1()) {
			reloading = descr.reload_time;
			for (int i = 0; i < descr.bullets; i++)
			{
				shootBullet(
					id, 0,
					pos,
					Vector2Negate(Vector2Add(cannon_axis, {random()/descr.precision, random()/descr.precision}))
				);
			}
			
		}
	}
}


// Might add struct WeaponEntity


