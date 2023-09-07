

run: main.cpp
	g++ "main.cpp" -o a.exe -O0 -Wall -Wno-missing-braces -std=c++17 -I include -L lib -lraylib -lopengl32 -lgdi32 -lwinmm -static --fast-math
	.\a.exe

dbg: main.cpp
	g++ "main.cpp" -g -o a.exe -O0 -Wall -Wno-missing-braces -std=c++17 -I include -L lib -lraylib -lopengl32 -lgdi32 -lwinmm -static --fast-math
	gdb .\a.exe

final: main.cpp
	g++ "main.cpp" -o a.exe -O3 -Wall -Wno-missing-braces -std=c++17 -I include -L lib -lraylib -lopengl32 -lgdi32 -lwinmm -static --fast-math


