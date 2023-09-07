

start:
	g++ -g "_start.cpp" -o a.exe -O0 -std=c++17 -lraylib -lopengl32 -lgdi32 -lwinmm -static
	.\a.exe

reload:
	g++ "main.cpp" -shared -o module.dll -O0 -std=c++17 -lraylib -lopengl32 -lgdi32 -lwinmm -static

final: main.cpp
	g++ "main.cpp" -o a.exe -O3 -Wall -Wno-missing-braces -std=c++17 -lraylib -lopengl32 -lgdi32 -lwinmm -static --fast-math


