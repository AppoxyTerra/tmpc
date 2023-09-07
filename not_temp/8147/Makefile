

run: main.cpp
	g++ "server.cpp" -o server.exe -O0 -lraylib -lopengl32 -lgdi32 -lwinmm -lws2_32 -static --fast-math
	g++ "main.cpp" -o a.exe -O0 -Wall -Wno-unknown-pragmas -Wno-missing-braces -std=c++17 -lraylib -lopengl32 -lgdi32 -lwinmm -lws2_32 -static --fast-math
	.\a.exe

final: main.cpp
	g++ "main.cpp" -o a.exe -O3 -Wall -Wno-unknown-pragmas -Wno-missing-braces -std=c++17 -I include -L lib -lraylib -lopengl32 -lgdi32 -lwinmm -static --fast-math


