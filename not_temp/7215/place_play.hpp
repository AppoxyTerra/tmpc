

namespace game
{
	Camera2D camera;
	index_t TEX_PLAYER_IDLE;
	index_t TEX_PLAYER_RUN;
	index_t TEX_PLAYER_SLIDE;
	index_t TEX_ITEM_SLOT;
	index_t TEX_GRAPLING_HOOK;
	index_t TEX_BG;
	uint64_t game_frame;
}

#include "play/protos.hpp"
#include "play/grapling_hook.hpp"
#include "play/bullets.hpp"
#include "play/weapons.hpp"
#include "play/items.hpp"
#include "play/player.hpp"
#include "play/enemies.hpp"

void game_load() {
	using namespace game;
	camera.offset = { XMAX/2.f, YMAX/2.f };
	camera.target = { 0.f, 0.f };
	camera.rotation = .0f;
	camera.zoom = 1.f;

	TEX_PLAYER_IDLE = loadTexture("res/imgs/player_idle.png");
	TEX_PLAYER_RUN = loadTexture("res/imgs/player_run.png");
	TEX_PLAYER_SLIDE = loadTexture("res/imgs/player_slide.png");
	TEX_GRAPLING_HOOK = loadTexture("res/imgs/hook.png");
	TEX_ITEM_SLOT = loadTexture("res/imgs/slot.png");
	TEX_BG = loadTexture("res/imgs/bg.png");

	weapon_descrs[WEAPON_PUMP].texid = loadTexture("res/imgs/gun_pump.png");

	enemy_descrs[ENEMY_ZOMBIE].texid = loadTexture("res/imgs/zom.png");

	item_descrs[ITEM_BLOOD_PATCH].texid = loadTexture("res/imgs/blood_patch.png");
}



void game_update() {
	using namespace game;
	
	if (game_frame % 60 == 0) {
		summonEnemy(ENEMY_ZOMBIE, {random()*2000.f-1000.f + player.pos.x, random()*2000.f-1000.f + player.pos.y});
	}
	
	ClearBackground(BLACK);
	BeginMode2D(camera);

		// DrawTexturePro(
		// 	tex(TEX_BG),
		// 	{.0f, .0f, float(tex(TEX_BG).width), float(tex(TEX_BG).height)},
		// 	{-XMAX/2.f, -YMAX/2.f, XMAX, YMAX},
		// 	{.0f, .0f},
		// 	.0f, WHITE
		// );
		
		for (int i = 0; i < (int)items.size(); i++)
		{
			if (items[i].update() == AUM_REMOVE) {
				items.erase(items.begin() + i);
				i--;
			}
		}

		player.update();


		for (int i = 0; i < (int)bullets.size(); i++)
		{
			if (bullets[i].update() == AUM_REMOVE) {
				bullets.erase(bullets.begin() + i);
				i--;
			}
		}

		for (int i = 0; i < (int)enemies.size(); i++)
		{
			if (enemies[i].update() == AUM_REMOVE) {
				enemies.erase(enemies.begin() + i);
				i--;
			}
		}
		hook.update();
	EndMode2D();

#if LOG_LEVEL == LOG_DEBUG

	if (IsKeyDown(KEY_TAB)) {
		DrawText(
			TextFormat(
				"bullets count: %llu\nenemies count: %llu\nitems (entity) count:%llu",
				bullets.size(), enemies.size(), items.size()
			), 0, 30, 30, WHITE
		);
	}

#endif

	player.GUI_update();

	camera.target = Vector2Add(
		camera.target,
		Vector2Scale(
			Vector2Subtract(Vector2Add(player.pos, {ui.scale/2.f, ui.scale/2.f}), camera.target),
			0.03f
		)
	);

	game_frame++;
}


void game_unload() {
	using namespace game;
	
	unloadTextures();
}

DECL_PLACE(game);

