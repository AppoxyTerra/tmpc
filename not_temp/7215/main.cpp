#include "common.hpp"
#include "controlsys.hpp"
#include "fontsys.hpp"
#include "configsys.hpp"
#include "texsys.hpp"
#include "sfxsys.hpp"
#include "musicsys.hpp"
#include "placesys.hpp"
#include <raylib/raylib.h>

#define DECL_PLACE(name) Place place_ ## name(#name, name ## _load, name ## _update, name ## _unload)

#include "place_play.hpp"
#include "place_menu.hpp"

int main() {
#if LOG_LEVEL == LOG_DEBUG
	SetTraceLogCallback(logCallback);
#endif

	SetTraceLogLevel(LOG_LEVEL);


	common_init();
	font_init();

	current_place = place_menu;
	current_place.load();

	while (!WindowShouldClose() && run) {
		BeginTextureMode(renderer);
			current_place.update();
		EndTextureMode();

		BeginDrawing();
			BeginShaderMode(postprocess);
				DrawTexturePro(renderer.texture, {0.0f, 0.0f, XMAX, -YMAX}, {0.0f, 0.0f, XMAX, YMAX}, {0.0f, 0.0f}, 0.0f, WHITE);
			EndShaderMode();
			
			if (LOG_LEVEL <= LOG_DEBUG) {
				DrawFPS(0, 0);
				logUpdate();
			}
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		t += dt;
	}
	current_place.unload();
	font_close();
	common_close();
}


