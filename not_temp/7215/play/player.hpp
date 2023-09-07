

#include <raylib/raymath.h>
struct Player;
// Player player // in protos.hpp


float sign(float x, float* buf = 0) {
	if (x < 0.0f) {
		if (buf) *buf = -1.f;
		return -1.f; 
	} else if (x > 0.0f) {
		if (buf) *buf = 1.f;
		return 1.f;
	} else {
		return 0.f;
	}
}


Player::Player()  {
	pos = {.0f, .0f};
	vel = {.0f, .0f};
	speed = 3.f;
	weapon = WeaponHeld{ WEAPON_PUMP };

	weapon = WeaponHeld{ WEAPON_PUMP };
	inventory.reserve(4);
	inventory.resize(4, ItemInventory{ITEM_NONE, 0});
}

inline const Vector2 Player::center() const {
	return {pos.x + ui.scale/2.f, pos.y + ui.scale/2.f};
}

void Player::update() {
	using namespace game;
	if (Vector2Length(vel) < 1.0f) {
		DrawTexturePro(
			tex(TEX_PLAYER_IDLE),
			{.0f, .0f, 16.f, 16.f},
			{pos.x, pos.y, ui.scale, ui.scale},
			{.0f, .0f},
			.0f, WHITE
		);
	} else if (control::isSliding()) {
		sign(vel.x, &run_sign);
		DrawTexturePro(
			tex(TEX_PLAYER_SLIDE),
			{.0f, .0f, 16.f * run_sign, 16.f},
			{pos.x, pos.y, ui.scale, ui.scale},
			{.0f, .0f},
			.0f, WHITE
		);
	} else {
		sign(vel.x, &run_sign);
		DrawTexturePro(
			tex(TEX_PLAYER_RUN),
			{floorf(run_anim)*16.f * run_sign, .0f, 16.f * run_sign, 16.f},
			{pos.x, pos.y, ui.scale, ui.scale},
			{.0f, .0f},
			.0f, WHITE
		);
		run_anim += dt*5.f;
		if (run_anim >= 2.f) {
			run_anim = .0f;
		}
	}
	if (control::isSliding()) {
		vel = Vector2Scale(vel, 10.f).clamp(-speed*4.f, speed*4.f);
	} else {
		vel = Vector2Add(
			vel,
			Vector2Scale({control::moveX(), control::moveY()}, speed)
		);
	}
	pos = Vector2Add(pos, vel);
	vel = Vector2Subtract(vel, Vector2Scale(vel, 0.7f));
	const Vector2 pos_on_screen = GetWorldToScreen2D(pos, camera);
	const Vector2 sight_axis = Vector2{control::sightX(pos_on_screen.x), control::sightY(pos_on_screen.y)};
	weapon.update(Vector2AddValue(pos, 2.f*ui.scale/3.f), sight_axis);
}

void Player::GUI_update() {
	for (int i = 0; i < (int)inventory.size(); i++)
	{
		const Vector2 draw_pos = {
			XMAX/2.f-(inventory.size()*ui.scale/2.f) + ui.scale * i,
			YMAX - ui.scale
		};
		DrawTexturePro(
			tex(game::TEX_ITEM_SLOT),
			{.0f, .0f, 16.f, 16.f},
			{
				draw_pos.x, draw_pos.y,
				ui.scale, ui.scale
			},
			{.0f, .0f},
			.0f,
			WHITE
		);

		ItemInventory& inv = inventory[i];

		if (inv.id >= 0) {
			inv.drawIn(
				{
					draw_pos.x, draw_pos.y,
					ui.scale, ui.scale
				}
			);
			if (inv.count > 1) {
				DrawTextEx(
					font,
					TextFormat("%i",(int)inv.count),
					{draw_pos.x + ui.scale/8.f, draw_pos.y},
					30.f, 2.f, WHITE
				);
			}
		}
	}
}

bool Player::tryToAddToInventory(ItemEntity entity) {
	// First check for alread present entities with the same id.
	for (int i = 0; i < (int)inventory.size(); i++)
	{
		ItemInventory& slot = inventory[i];
		if (slot.id == entity.id) {
			slot.count++;
			return true;
		}
	}

	// Only then check for empty slots
	for (int i = 0; i < (int)inventory.size(); i++)
	{
		ItemInventory& slot = inventory[i];
		if (slot.id == ITEM_NONE) {
			slot.id = entity.id;
			slot.count = 1;
			return true;
		}
	}
	return false;
}


// Grapling hook

void GraplingHook::update() {
	using namespace game;
	if (!Vector2Equals(vel, Vector2Zero())) {
		pos = Vector2Add(pos, vel);
		vel = Vector2Add(vel, Vector2Scale(Vector2Negate(vel), 0.03f));
		vel = Vector2Add(vel, Vector2Scale(Vector2Subtract(player.center(), pos), 0.005f));
		DrawLineV(pos, player.center(), GRAY);
		DrawTexturePro(
			tex(TEX_GRAPLING_HOOK),
			{.0f, .0f, 16.f, 16.f},
			{pos.x, pos.y, ui.scale/2.f, ui.scale/2.f},
			{ui.scale/4.f, ui.scale/4.f},
			vel.angle() + 90.f,
			WHITE
		);
		if (grabbed) {
			switch (grabbed_type) {
			case GRAB_ITEM: {
				ItemEntity& item_entity = *(ItemEntity*)grabbed;
				item_entity.pos = Vector2Add(pos, {-ui.scale/4.f, -ui.scale/4.f});
				break;
			}
			}
		}

		if (Vector2Distance(pos, player.center()) < ui.scale/2.f) {
			vel = Vector2Zero();
		}
	} else if (control::fire2()) {
		const Vector2 pos_on_screen = GetWorldToScreen2D(player.pos, camera);
		pos = player.center();
		const Vector2 norm = Vector2Normalize(Vector2{control::sightX(pos_on_screen.x), control::sightY(pos_on_screen.y + ui.scale/2.f)});
		vel = Vector2Scale(norm, -50.f);
		pos = Vector2Add(pos, Vector2Scale(norm, -ui.scale));
	}
}

void GraplingHook::grab(void* item, GraplingHook::GrabbedType type) {
	grabbed = item;
	grabbed_type = type;
}

void GraplingHook::ungrab() {
	grabbed = NULL;
}

void GraplingHook::checkAndUngrabSelf(void* ptr) {
	if (ptr == grabbed) {
		this->ungrab();
	}
}

