

enum EnemyId {
	ENEMY_ZOMBIE,
	ENEMY_DESCR_COUNT
};

struct EnemyDescriptor {
	const char* name;
	float move_speed;
	float life;
	bool ghost_mode; // Does not collide anything

	index_t texid;
};

EnemyDescriptor enemy_descrs[ENEMY_DESCR_COUNT] = {
	EnemyDescriptor{
		.name = "zom",
		.move_speed = 1.5f,
		.life = 2.f,
		.ghost_mode = false
	},
};

struct EnemyEntity {
	Vector2 pos;
	float life;
	EnemyId id;
	float anim = .0f;

	ArrayUpdateMsg update();
	void onDeath();
};

std::vector<EnemyEntity> enemies;

inline void summonEnemy(EnemyId id, Vector2 pos) {
	const EnemyDescriptor& descr = enemy_descrs[id];
	enemies.push_back(EnemyEntity{
		.pos = pos,
		.life = descr.life,
		.id = id,
		.anim = .0f
	});
}

ArrayUpdateMsg EnemyEntity::update() {
	const EnemyDescriptor& descr = enemy_descrs[id];

	// float direction = sign();

	DrawTexturePro(
		tex(descr.texid),
		{floorf(anim)*16.f, .0f, 16.f, 16.f},
		{pos.x, pos.y, ui.scale, ui.scale},
		{.0f, .0f},
		.0f,
		WHITE
	);

	anim += dt*3.f;
	if (anim >= 2.f) {
		anim = 0.f;
	}

	if (id == ENEMY_ZOMBIE) {
		pos = Vector2MoveTowards(pos, player.pos, descr.move_speed * (anim+1.f)/2.f);
	} else {
		pos = Vector2MoveTowards(pos, player.pos, descr.move_speed);
	}


	for (int i = 0; i < (int)bullets.size(); i++)
	{
		const Bullet& b = bullets[i];
		if (Vector2Distance(b.pos, {pos.x + ui.scale/2.f, pos.y + ui.scale/2.f}) <= ui.scale/2.f) {
			life -= getWeaponDescr(b.weapon).bullet_damage;
			bullets.erase(bullets.begin() + i);
			i--;
		}
		// Might crash here because of previous const&, idk anymore.
	}

	if (life <= .0f) {
		onDeath();
		return AUM_REMOVE;
	}

	if (life < descr.life) {
		DrawRectangleRec(
			{
				pos.x, pos.y - 20.f,
				ui.scale, 10.f
			},
			RED
		);
		DrawRectangleRec(
			{
				pos.x, pos.y - 20.f,
				ui.scale * (life / descr.life), 10.f
			},
			GREEN
		);
	}

	return AUM_NONE;
}

void EnemyEntity::onDeath() {
	switch (id)
	{
	case ENEMY_ZOMBIE:
		if (GetRandomValue(0, 100) <= 30)
			summonItemEntity(ITEM_BLOOD_PATCH, pos);
		break;
	
	default:
		break;
	}
}

