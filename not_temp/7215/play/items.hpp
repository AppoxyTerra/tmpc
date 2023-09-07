

enum ItemId : int8_t {
	ITEM_NONE = -1,
	ITEM_BLOOD_PATCH = 0,
	ITEM_DESCR_COUNT
};
 
struct ItemDescriptor {
	void(*draw_func)(const ItemDescriptor&, Rectangle);
	index_t texid;
};

void default_draw_func(const ItemDescriptor& descr, Rectangle rect) {
	DrawTexturePro(
		tex(descr.texid),
		{.0f, .0f, 16.f, 16.f},
		rect,
		{.0f, .0f},
		.0f,
		WHITE
	);
}

// ITEM_DESCR_COUNT - 1 because ITEM_NONE doesn't need a descriptor
ItemDescriptor item_descrs[ITEM_DESCR_COUNT] = {
	ItemDescriptor{default_draw_func}
};

const ItemDescriptor& getItemDescr(ItemId id) {
	return item_descrs[id];
}

struct ItemEntity {
	ItemId id;
	Vector2 pos;
	float t_off;

	inline const Vector2 center() const;

	ArrayUpdateMsg update();
};

std::vector<ItemEntity> items;

inline const Vector2 ItemEntity::center() const {
	return {pos.x + ui.scale/4.f, pos.y + ui.scale/4.f};
}

ArrayUpdateMsg ItemEntity::update() {
	const ItemDescriptor& descr = getItemDescr(id);
	DrawTexturePro(
		tex(descr.texid),
		{.0f, .0f, 16.f, 16.f},
		{pos.x, pos.y + sinf(t * 2.f + t_off) * 10.f, ui.scale/2.f, ui.scale/2.f},
		{.0f, .0f},
		.0f,
		WHITE
	);

	// GRAPLING
	if (Vector2Distance(hook.pos, this->center()) < ui.scale/2.f) {
		hook.grab(this, GraplingHook::GRAB_ITEM);
	}


	const float dst = Vector2Distance(this->center(), player.center());
	if (dst <= ui.scale*2.f) {
		pos = Vector2Add(pos, Vector2Scale(Vector2Subtract(player.center(), this->center()), 0.1f ));
		if (dst < ui.scale/2.f) {
			if (player.tryToAddToInventory(*this)) {
				hook.checkAndUngrabSelf(this); //NOTE - VERY FUCKING IMPORTANT
				return AUM_REMOVE;
			}
		}
	}
	return AUM_NONE;
}

inline void summonItemEntity(ItemId id, Vector2 pos) {
	items.push_back(ItemEntity{id, pos, t});
}

struct ItemInventory;

void ItemInventory::drawIn(Rectangle rect) {
	if (id < 0) return; // Safety
	const ItemDescriptor& descr = getItemDescr(id);
	descr.draw_func(descr, rect);
}

