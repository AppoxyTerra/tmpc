#include <cstdio>
#include <cstdlib>

#define NBNET_IMPL

#define NBN_LogInfo(...) printf(__VA_ARGS__)
#define NBN_LogError(...) printf(__VA_ARGS__)
#define NBN_LogDebug(...) printf(__VA_ARGS__)
#define NBN_LogTrace(...) printf(__VA_ARGS__)

#define NBN_Allocator malloc
#define NBN_Reallocator realloc
#define NBN_Deallocator free

#include "nbnet.h"


int main() {
	
}








