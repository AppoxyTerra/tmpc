#include <lua/lua.hpp>

lua_State* L;

bool checkLua(int r) {
	if (r == LUA_OK) {
		return true;
	}
	printf("[LUA] %s\n", lua_tostring(L, -1));
	return false;
}

int main() {
	const char* str = "a = 3 + 4";

	L = luaL_newstate();
	luaL_openlibs(L);

	int r = luaL_dofile(L, "test.lua");

	if (checkLua(r)) {
		for (size_t i = 0; i < 10; i++)
		{
		
		lua_getglobal(L, "b");
		if (lua_isfunction(L, -1)) {
			if (checkLua(lua_pcall(L, 0, 0, 0))) {
				lua_getglobal(L, "t");
				if (lua_isnumber(L, -1)) {
					printf("t=%f\n", lua_tonumber(L, -1));
				}
			}
		}

		}
	}

	lua_close(L);
	return 0;
}







