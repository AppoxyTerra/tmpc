#include "shared.hpp"

const float XMAX = 1600.0f;
const float YMAX = 900.0f;
Vector2 mpo;
Vector2 mdt;
float dt;

bool connect_phase = false;
bool connected = false;

char ip_entry[16] = {0};
size_t ip_entry_idx = 0;

struct Player {
	bool spawned = false;
	Vector2 pos = {0};
	Color color;
	Player() {
		color = Color::random();
	}

	void update() {
		if (!spawned)
			return;
		DrawRectangleV(pos, {50.0f, 50.0f}, color);
	}
};


void initClient() {

	int k = GetKeyPressed();
	if (ip_entry_idx < 16 && (isdigit(k) || k == '.')) {
		ip_entry[ip_entry_idx++] = k;
	} else if (k == KEY_BACKSPACE) {
		ip_entry[--ip_entry_idx] = 0;
	} else if (k == KEY_ENTER) {
		NBN_GameClient_Init(protocol_name, ip_entry, port, false, NULL);
		if (NBN_GameClient_Start() < 0) {
			connect_phase = false;
			memset(ip_entry, 0, 16);
			TraceLog(LOG_ERROR, "Failed to start client.");
		}
		CLIENT_REGISTER_MESSAGE(AllPositions);
	}
	DrawLine(200, 230, 200+30*16, 230, GRAY);
	DrawText(ip_entry, 200, 200, 30, WHITE);
}

Player local_player;

std::vector<Player> pls;

#include "main_net.hpp"

int main() {
	SetTargetFPS(60);
	InitWindow(XMAX, YMAX, "Name of the window here.");

	NBN_UDP_Register();

	local_player.spawned = true;

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(BLACK);

			if (connect_phase) {
				initClient();
			} else {
				local_player.update();

				local_player.pos = Vector2Add(
					local_player.pos,
					Vector2Scale(
						{
							float(IsKeyDown(KEY_D) - IsKeyDown(KEY_A)),
							float(IsKeyDown(KEY_S) - IsKeyDown(KEY_W))
						},
						3.0f
					)
				);

				DrawText("Press C to connect to a server.", 0, 30, 30, WHITE);
				if (IsKeyDown(KEY_C)) {
					connect_phase = true;
				}
			}

			DrawFPS(0, 0);
		EndDrawing();
		if (connected) {
			NBN_GameClient_AddTime((double)dt);
			int ev;
			while ((ev = NBN_GameClient_Poll()) != NBN_NO_EVENT) {
				if (ev < 0) {
					TraceLog(LOG_WARNING, "Weird event.");
					break;
				}
				handleGameClientEvent(ev);
			}

			if (SendUpdates() < 0) {
				TraceLog(LOG_WARNING, "Failed to send client updates.");
			}
		}

		mpo = GetMousePosition();
		mdt = GetMouseDelta();
		dt = GetFrameTime();
	}

	if (connected) {
		NBN_GameClient_Disconnect();
	}

	NBN_GameClient_Stop();

	CloseWindow();
}


