

run: main.cpp
	g++ "main.cpp" -g -o a.exe -O0 -Wall -Wno-missing-braces -std=c++20 -I include -L lib -lraylib -lopengl32 -lgdi32 -lwinmm -static --fast-math
	.\a.exe

asm:
	g++ -S "main.cpp" -fverbose-asm -g -o main.asm -O0 -Wall -Wno-missing-braces -std=c++20 -I include -L lib -lraylib -lopengl32 -lgdi32 -lwinmm -static --fast-math

final: main.cpp
	g++ "main.cpp" -o a.exe -O3 -Wall -Wno-missing-braces -std=c++17 -I include -L lib -lraylib -lopengl32 -lgdi32 -lwinmm -static --fast-math


