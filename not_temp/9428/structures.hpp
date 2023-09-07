

enum StructId {
	STRUCT_DOG_FOOD,
	STRUCT_COUNT
};

struct Struct {
	const char* name;
	void(*onCollision)(Character&);
};

Struct STRUCTS[STRUCT_COUNT] = {
	Struct()
};

struct PlacedStruct {
	int x,y;


	PlacedStruct(int x, int y) : x(x), y(y) {}
};



