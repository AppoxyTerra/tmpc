
const int SHOOTER_GROUP_PLAYER = 0;


struct Bullet {
	WeaponId weapon;
	int shooter_group;
	float dist;
	Vector2 pos;
	Vector2 vel;

	Bullet(WeaponId, int, Vector2, Vector2);

	ArrayUpdateMsg update();
};

std::vector<Bullet> bullets;

Bullet::Bullet(WeaponId wid, int shooter_grp, Vector2 p, Vector2 ax) {
	weapon = wid;
	shooter_group = shooter_grp;
	pos = p;
	dist = .0f;
	vel = ax.setMagn(getWeaponDescr(weapon).bullet_speed);
}

ArrayUpdateMsg Bullet::update() {

	pos = Vector2Add(pos, vel);
	dist += Vector2Length(vel) - 0.3f*random()/getWeaponDescr(weapon).precision;

	if (dist > getWeaponDescr(weapon).range) {
		return AUM_REMOVE;
	}
	
	DrawCircleV(pos, 5.f, GRAY);

	return AUM_NONE;
}


inline void shootBullet(WeaponId wid, int shooter_grp, Vector2 p, Vector2 ax) {
	bullets.push_back(Bullet(wid, shooter_grp, p, ax));
}



