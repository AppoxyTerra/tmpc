#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <cstdio>
#include <cstdint>
#include <ctime>

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

#include "neur.hpp"

const int img_side = 18; 
const size_t train_c = 36;
float** inputs = (float*[train_c]){
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}
};

float** outputs = (float*[train_c]){
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0},
	(float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}, (float[NSIZE[0]]){0}
};

float value(Color color) {
	return (float(color.r)+float(color.g)+float(color.b))/3.0f/255.0f;
}

inline void loadImg(const char* filename) {
	Image img = LoadImage(filename);
	for (size_t smpli = 0; smpli < train_c; smpli++)
	{
		const int xcoord = (smpli*3*3)%img_side;
		const int ycoord = (smpli*3*3)/img_side;
		for (size_t y = 0; y < 2; y++)
		{
			for (size_t x = 0; x < 3; x++)
			{
				const Color color = GetImageColor(img, xcoord+x, ycoord+y);
				inputs[smpli][x*3 + y*3*3 + 0] = color.r/255.0f;
				inputs[smpli][x*3 + y*3*3 + 1] = color.g/255.0f;
				inputs[smpli][x*3 + y*3*3 + 2] = color.b/255.0f;
			}
		}
		for (size_t i = 0; i < 3; i++)
		{
			const Color color = GetImageColor(img, xcoord+i, ycoord+2);
			outputs[smpli][i*3 + 0] = color.r/255.0f;
			outputs[smpli][i*3 + 1] = color.g/255.0f;
			outputs[smpli][i*3 + 2] = color.b/255.0f;
		}
	}
	UnloadImage(img);
}

inline void computeAndDraw(int rel_x, int rel_y) {
	for (size_t smpli = 0; smpli < train_c; smpli++)
	{
		float *outs = neur_sys.forward(inputs[smpli]);
		const int xcoord = (smpli*3*3)%img_side;
		const int ycoord = (smpli*3*3)/img_side;
		for (size_t y = 0; y < 2; y++)
		{
			for (size_t x = 0; x < 3; x++)
			{
				const Color color = rgb(
					inputs[smpli][x*3 + y*3*3 + 0]*255.0f,
					inputs[smpli][x*3 + y*3*3 + 1]*255.0f,
					inputs[smpli][x*3 + y*3*3 + 2]*255.0f
				);
				DrawRectangle(rel_x+(xcoord+x)*50, rel_y+(ycoord+y)*50, 50, 50, color);
			}
		}
		for (size_t i = 0; i < 3; i++)
		{
			const Color color = rgb(
				outs[i*3 + 0]*255.0f,
				outs[i*3 + 1]*255.0f,
				outs[i*3 + 2]*255.0f
			);
			DrawRectangle(rel_x+(xcoord+i*3)*50, rel_y+(ycoord+2)*50, 50, 50, color);
		}
	}
}


uint64_t t = 0;
const size_t graph_recall = 60;
const int graph_slices_s = 5;
const uint64_t graph_sample_s = 2;
float cost_graph[graph_recall] = {0};

// Auto rate
const float rate_ch_speed = 0.001f;
float cost = 1.0f;
float last_cost = 1.0f; // To set rate based on derivate
float rate_direction = 1.0f;

NeurSys neursys;
float rate = 1e-1;

const float stop_evolution_thresh = 0.0015f;

Camera2D camera;

int main() {
	srand(time(NULL));
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	loadImg("res/sample.png");
	TraceLog(LOG_INFO, "SAMPLE LOADED");

	camera.offset = {XMAX/2.0f,YMAX/2.0f};
	camera.rotation = 0.0f;
	camera.target = {XMAX/2.0f,YMAX/2.0f};
	camera.zoom = 1.0f;

	while (!WindowShouldClose()) {
		if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
			camera.target = Vector2Subtract(camera.target, Vector2Scale(mdt, 1.0f/camera.zoom));
		}
		camera.zoom += GetMouseWheelMove()/10.0f;

		BeginDrawing();
			ClearBackground(DARKBROWN);

			BeginMode2D(camera);
			

			if (cost <= stop_evolution_thresh) {
				rate = 0.0f;
			} else {
				DrawRectangleLines(0, 0, graph_slices_s*graph_recall, 800, BLACK);
				for (size_t i = 1; i < graph_recall; i++)
				{
					DrawLine((i-1)*graph_slices_s, 800.0f - cost_graph[i-1], i*graph_slices_s, 800.0f - cost_graph[i], RED);
				}

				neur_sys.computeDeltas(
					inputs,
					outputs,
					train_c,
					0.1f
				);
				neur_sys.learn(rate);
				for (size_t i = 0; i < NSIZE[0]; i++)
				{
					const float y = 200.0f + i * SPC;
					DrawCircleV({600.0f, y}, draw_neur_radius, fromValue(inputs[t%train_c][i]));
				}

				last_cost = cost;
				cost = neur_sys.cost(inputs, outputs, train_c);
				if (t % graph_sample_s == 0) {
					// Move data
					for (size_t i = 0; i < graph_recall-1; i++)
					{
						cost_graph[i] = cost_graph[i+1];
					}
					// Set last value;
					cost_graph[graph_recall-1] = cost*800.0f;
				}
			}
			neur_sys.draw({600.0f, 200.0f});

			computeAndDraw(1000, 200);

			EndMode2D();

			DrawText(TextFormat("Cost: %.3f", cost), 0, 30, 30, WHITE);
			DrawText(TextFormat("Rate: %.3f", rate), 0, 60, 30, WHITE);

			DrawLine(10, 850, 1590, 850, RED);
			DrawCircleV({10.0f + rate*1580.0f/2.0f, 850.0f}, 10.0f, RED);
			if (
				IsMouseButtonDown(MOUSE_LEFT_BUTTON)
			&& CheckCollisionPointRec(mpo, {10.f, 840.f, 1580.f, 20.f})
			) {
				rate = ((mpo.x - 10.0f)/1580.0f)*2.f;
			}

			DrawFPS(0, 0);
		EndDrawing();
		
		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
		t++;
	}

	CloseWindow();
}


