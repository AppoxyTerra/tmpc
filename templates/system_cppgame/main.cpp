#include "common.hpp"
#include "configsys.hpp"
#include "texsys.hpp"
#include "sfxsys.hpp"
#include "musicsys.hpp"
#include "placesys.hpp"


/* Import here your places */


int main() {
	SetTraceLogLevel(LOG_LEVEL);

	common_init();

	current_place = /* Initial place. */;

	while (!WindowShouldClose() && run) {
		BeginTextureMode(renderer);
			current_place.update();
		EndTextureMode();

		BeginDrawing();
			BeginShaderMode(postprocess);
				DrawTexturePro(renderer.texture, {0.0f, 0.0f, XMAX, -YMAX}, {0.0f, 0.0f, XMAX, YMAX}, {0.0f, 0.0f}, 0.0f, WHITE);
			EndShaderMode();
			
			if (LOG_LEVEL <= LOG_DEBUG)
				DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}
	current_place.unload();
	common_init();
}


