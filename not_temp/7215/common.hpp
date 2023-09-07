#include <deque>
#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <utils/result.hpp>
#include <vector>
#include <array>
#include <queue>

#define loop(C) for (int __loop_count = 0; __loop_count < C; __loop_count++)

#define LOG_LEVEL LOG_DEBUG

typedef int index_t;

bool run = true;

float XMAX = 0.0f;
float YMAX = 0.0f;
Vector2 mpo;
Vector2 mdt;
float dt;
float t = 0.f;

RenderTexture renderer;
Shader postprocess;

#if LOG_LEVEL == LOG_DEBUG

struct LogString {
	static constexpr size_t MAX_LEN = 1024;
	char* ptr = 0;
	uint8_t lifetime = 255;
	Color color = WHITE;

	LogString() {}

	void init() {
		ptr = (char*)malloc(MAX_LEN);
		memset(ptr, 0, MAX_LEN);
	}

	~LogString() {
		if (ptr) {
			memset(ptr, 0, MAX_LEN);
			free(ptr);
			ptr = 0;
		}
	}
};

std::deque<LogString> log_queue;

void logCallback(int loglevel, const char* format, va_list vargs) {
	log_queue.push_back(LogString());
	LogString& ref = log_queue.back();
	ref.init();
	ref.lifetime = 255;
	vsprintf_s(
		ref.ptr,
		LogString::MAX_LEN - 1,
		format,
		vargs
	);
	switch (loglevel) {
	case LOG_TRACE:
		ref.color = BEIGE;
		printf("TRACE: %s\n", ref.ptr);
		break;
	case LOG_DEBUG:
		ref.color = YELLOW;
		printf("DEBUG: %s\n", ref.ptr);
		break;
	case LOG_WARNING:
		ref.color = ORANGE;
		printf("WARNING: %s\n", ref.ptr);
		break;
	case LOG_ERROR:
		ref.color = RED;
		printf("ERROR: %s\n", ref.ptr);
		break;
	case LOG_FATAL:
		ref.color = MAROON;
		printf("FATAL: %s\n", ref.ptr);
		break;
	case LOG_INFO:
	default:
		ref.color = WHITE;
		printf("INFO: %s\n", ref.ptr);
		break;
	}
}

void logUpdate() {
	int y_pos = ((int)YMAX) - 30;
	int max_width = 0;
	int count_to_pop = 0;
	for (LogString& log: log_queue) {
		int m = MeasureText(log.ptr, 30);
		if (m > max_width) {
			m = max_width;
		}
		DrawText(log.ptr, 0, y_pos, 30, rgba(log.color.r, log.color.g, log.color.b, log.lifetime));
		log.lifetime--;
		if (log.lifetime < 10) {
			count_to_pop++;
		}
		y_pos -= 35;
	}
	
	loop(count_to_pop) log_queue.pop_front();

	DrawRectangle(0, y_pos, max_width, ((int)YMAX) - y_pos, rgba(0, 0, 0, 10));
}

#endif


void common_init() {
	SetTargetFPS(60);
#if LOG_LEVEL == LOG_DEBUG
	XMAX = 1600.f;
	YMAX = 900.f;
	SetConfigFlags(FLAG_MSAA_4X_HINT);
	// De-activate fullscreen because it's shitty with gdb
#else
	SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_FULLSCREEN_MODE);
#endif
	InitWindow(XMAX, YMAX, "Name of the window here.");
	XMAX = GetScreenWidth();
	YMAX = GetScreenHeight();

	renderer = LoadRenderTexture(XMAX, YMAX);
	postprocess = LoadShader(0, "res/shaders/postprocess.fs");
}

void common_close() {
	UnloadRenderTexture(renderer);
	UnloadShader(postprocess);
	CloseWindow();
}


enum ArrayUpdateMsg {
	AUM_NONE,
	AUM_REMOVE
};

float random() {
	return float(rand())/float(RAND_MAX);
}
