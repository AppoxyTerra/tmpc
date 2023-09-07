
#include <raylib/raylib.h>
#include <raylib/raymath.h>

#include "net.hpp"
#include <vector>
#include <array>
#include <cstdint>
#include <cstdio>


#define CREATE_MESSAGE_FUNCS(TYPE) \
TYPE* TYPE##_Create() { \
	return (TYPE*)malloc(sizeof(TYPE)); \
} \
void TYPE##_Destroy(TYPE* msg) { \
	free(msg); \
} \
int TYPE##_Serialize(TYPE* msg, NBN_Stream* stream)

#define CREATE_MESSAGE_FUNCS_CONTINUOUS(TYPE) \
CREATE_MESSAGE_FUNCS(TYPE) { \
	NBN_SerializeBytes(stream, msg, sizeof(TYPE)); \
	return 0; \
}

#define SERVER_REGISTER_MESSAGE(TYPE) \
NBN_GameServer_RegisterMessage( \
		MSG_##TYPE, \
		(NBN_MessageBuilder)TYPE##_Create, \
		(NBN_MessageDestructor)TYPE##_Destroy, \
		(NBN_MessageSerializer)TYPE##_Serialize \
)

#define CLIENT_REGISTER_MESSAGE(TYPE) \
NBN_GameClient_RegisterMessage( \
		MSG_##TYPE, \
		(NBN_MessageBuilder)TYPE##_Create, \
		(NBN_MessageDestructor)TYPE##_Destroy, \
		(NBN_MessageSerializer)TYPE##_Serialize \
)

#define CREATE_MESSAGE_CLASS(NAME) \
const int MSG_##NAME = __COUNTER__; \
struct NAME

const char* protocol_name = "test-with-raylib";
const uint16_t port = 5000;

const size_t MAX_CLI = 20;

const int SERVER_FULL_CODE = 503;

CREATE_MESSAGE_CLASS(OnePosition) {
	Vector2 pos;
};

CREATE_MESSAGE_CLASS(AllPositions) {
	size_t count;
	size_t cli_index;
	OnePosition ps[MAX_CLI];
};

CREATE_MESSAGE_FUNCS_CONTINUOUS(OnePosition);
CREATE_MESSAGE_FUNCS_CONTINUOUS(AllPositions);


