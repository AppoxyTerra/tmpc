#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <array>
#include <vector>
#include <cstdio>
#include <utils/macro_tools.hpp>
#include <utils/result.hpp>
#include <utility>
#include <functional>
#include <optional>
using std::max;
using std::min;

typedef std::pair<int, int> Size;

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
Vector2 wmpo;
float dt;
Font font;

// Define constants for grid size and cell size
constexpr Size GRID_SIZE = {30, 20};
const int CELL_SIZE = 32;
const float CAM_MOV_TIME = 0.1f;

Camera2D camera;

size_t t = 0;


const size_t MAX_AIS = 8;
Color AIs_colors[MAX_AIS] = {
	RED,
	BLUE,
	GREEN,
	PURPLE,
	ORANGE,
	LIME,
	SKYBLUE,
	YELLOW
};

#include "terrain.hpp"
#include "character.hpp"
#include "UI.hpp"
#include "structures.hpp"


int main()
{
    // Initialization
    SetTargetFPS(60);
    InitWindow(XMAX, YMAX, "Grid Game");


    loadNames();

    loadRessources();

    camera.offset = {XMAX/2.0f, YMAX/2.0f};
    camera.rotation = 0.0f;
    camera.target = {(CELL_SIZE*GRID_SIZE.first)/2.0f, (CELL_SIZE*GRID_SIZE.second)/2.0f};
    camera.zoom = 1.0f;

    float cam_mov_time = CAM_MOV_TIME;
    
    loop (MAX_AIS)
        AIs.push_back(Character());

    // Main game loop
    while (!WindowShouldClose())
    {
        if (mpo.y < YMAX - UI_BOTTOM_HEIGHT) {
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                cam_mov_time = CAM_MOV_TIME;
            } else if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
                if (cam_mov_time > 0.0f) {
                    cam_mov_time -= dt;
                } else {
                    camera.target = Vector2Subtract(camera.target, Vector2Scale(mdt, 1.0f/camera.zoom));
                }
            }
        }
        camera.zoom += GetMouseWheelMove()/10.0f;


        // Draw
        BeginDrawing();
            ClearBackground(BLACK);
            BeginMode2D(camera);
                drawTerrain();
                updatePlayer();
                updateAIs();
            EndMode2D();
            updateUI();
            DrawFPS(0, 0);
        EndDrawing();

        dt = GetFrameTime();
        mpo = GetMousePosition();
        wmpo = GetScreenToWorld2D(mpo, camera);
        mdt = GetMouseDelta();
        t++;
    }

    unloadRessources();
    CloseWindow();

    return 0;
}
