#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <ctrlx/ctrlx.hpp>
#define __WINDOWS_MM__
#include "includes/RtMidi.cpp"
#include <synchapi.h>
#include <string>
#include <array>
#include <initializer_list>
using std::string;


bool startswith(string& a, const char* s) {
	size_t minlen = strlen(s);
	if (minlen > a.size()) return false;
	for (size_t i = 0; i < minlen; i++)
	{
		if (a[i] != s[i])
			return false;
	}
	return true;
}

struct Launchpad {
	RtMidiIn midiin;
	RtMidiOut midiout;
	uint32_t port_in = UINT32_MAX;
	uint32_t port_out = UINT32_MAX;

	std::array<bool, 16*16> in_state = {false};
	int last_pressed = -1;

	Launchpad() {}

	enum InitErrMsg {
		OK,
		INPUT_NOT_FOUND_ERR,
		OUTPUT_NOT_FOUND_ERR,
		SYSTEM_ERROR
	};

	// Returns 0 if OK, or 1 if ERR
	InitErrMsg init() {
		try {
			uint32_t nports = midiin.getPortCount();
			string namebuf;
			for (uint32_t i = 0; i < nports; i++)
			{
				namebuf = midiin.getPortName(i);
				printf("INPUT[%i]: %s\n", (int)i, namebuf.c_str());
				if (startswith(namebuf, "Launchpad Mini")) {
					port_in = i;
					break;
				}
			}
			if (port_in == UINT32_MAX)
				return INPUT_NOT_FOUND_ERR;
			nports = midiout.getPortCount();
			for (uint32_t i = 0; i < nports; i++)
			{
				namebuf = midiout.getPortName(i);
				printf("OUTPUT[%i]: %s\n", (int)i, namebuf.c_str());
				if (startswith(namebuf, "Launchpad Mini")) {
					port_out = i;
					break;
				}
			}
			if (port_out == UINT32_MAX)
				return OUTPUT_NOT_FOUND_ERR;
			
			midiin.openPort(port_in);
			midiout.openPort(port_out);

			return OK;
		} catch (RtMidiError& err) {
			err.printMessage();
			return SYSTEM_ERROR;
		}
	}

	void update() {
		std::vector<uint8_t> msg;
		do {
			if (msg.size() == 3) {
				if (msg[0] == 144) {
					const bool res = (msg[2] == 127);
					in_state[msg[1]] = res;
					if (res) {
						// printf("Pressed %i\n", (int)msg[1]);
						last_pressed = msg[1];
					}
					try {
						const uint8_t COLORS[] = {127, 79, 60, 107, 125, 4};
						msg[2] = COLORS[GetRandomValue(0, 5)];
						midiout.sendMessage(&msg);
					} catch (RtMidiError& err) {
						err.printMessage();
					}
				}
			}
			msg.clear();
			midiin.getMessage(&msg);
		} while (msg.size() != 0);
	}

	bool isPressed(int index) {
		return in_state[index];
	}

	// Returns -1 if no key was pressed in between the last call of this method.
	int getLastPressed() {
		int o = last_pressed;
		last_pressed = -1;
		return o;
	}

	~Launchpad() {
		midiin.closePort();
		midiout.closePort();
	}
};

Vector2 mpo = {0};

enum Mode {
	NONE,
	LINKING,
	UP,
	DOWN,
	MODE_COUNT
};

Color modes[MODE_COUNT] = {
	GRAY,
	ORANGE,
	RED,
	GREEN
};

Mode keymap_modes[8*8] = {NONE};
int keymap_links[8*8] = {-1};

void tryToLoadLinks() {
	FILE* f = fopen("links", "rb");
	if (f == 0) return;
	fread(keymap_links, 4, 8*8, f);
	fclose(f);
	TraceLog(LOG_INFO, "Links loaded successfuly !");
}
void saveLinks() {
	FILE* f = fopen("links", "wb");
	if (f == 0) {
		TraceLog(LOG_ERROR, "Coudln't save links.");
		return;
	}
	fwrite(keymap_links, 4, 8*8, f);
	fclose(f);
}
bool run = true;
void finished(int) {
	run = false;
}

int main() {
	for (auto &i : keymap_links) { i = -1; }
	signal(SIGINT, finished);
	Launchpad lp;
	if (lp.init() != Launchpad::OK) {
		puts("error");
		return 1;
	}

	InitWindow(1600, 900, "Launchpad test.");
	SetTargetFPS(60);

	tryToLoadLinks();

	const int S = 50;

	moveMouseOf(1, 1);

	while (!WindowShouldClose() &&   run) {
		lp.update();
		int last_pressed = lp.getLastPressed();

		BeginDrawing();
			ClearBackground(BLACK);
			for (int y = 0; y < 8; y++)
			{
				for (int x = 0; x < 8; x++) {
					const int stdidx = x+y*8;
					const Rectangle rect = {
						x*(S+10) + 550, y*(S+10) + 200,
						S, S
					};
					if (keymap_links[stdidx] != -1) {
						keymap_modes[stdidx] = (Mode) (UP + lp.isPressed(keymap_links[stdidx]));
					}
					DrawRectangleRec(rect, modes[keymap_modes[stdidx]]);
					if (CheckCollisionPointRec(mpo, rect)) {
						if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
							keymap_modes[stdidx] = LINKING;
							keymap_links[stdidx] = -1;
						} else if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) {
							// Let user choose an audio file.
						}
					}
					if (keymap_modes[stdidx] == LINKING && last_pressed != -1) {
						keymap_links[stdidx] = last_pressed;
					}
				}
			}
			DrawFPS(0, 0);
		EndDrawing();

		mpo = GetMousePosition();
	}
	saveLinks();

	CloseWindow();
	puts("Finished.");
	return 0;
}


