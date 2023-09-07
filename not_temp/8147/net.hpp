#define NBNET_IMPL

#define NBN_LogInfo(...) TraceLog(LOG_INFO, __VA_ARGS__)
#define NBN_LogError(...) TraceLog(LOG_ERROR, __VA_ARGS__)
#define NBN_LogDebug(...) TraceLog(LOG_DEBUG, __VA_ARGS__)
#define NBN_LogTrace(...) TraceLog(LOG_TRACE, __VA_ARGS__)

#define NBN_Allocator malloc
#define NBN_Reallocator realloc
#define NBN_Deallocator free

#include "includes/nbnet.h"
#include "includes/net_drivers/udp.h"

