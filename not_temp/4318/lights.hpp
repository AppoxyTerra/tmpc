#pragma once
#include <raylib/raylib.h>

#define MAX_LIGHTS 4

enum LightType {
	LIGHT_POINT,
	LIGHT_DIRECTIONAL
};

struct Light {
	LightType type;
	Vector3 pos;
	Vector3 direction;
	float intensity;
	Color color;
};

Light lights[MAX_LIGHTS];
int light_count = 0;

inline Light& addLightPoint(Vector3 pos, Color color, float intensity) {
	lights[light_count++] = Light{
		LIGHT_POINT,
		pos,
		{.0f, .0f, .0f},
		intensity,
		color
	};
	return lights[light_count-1];
}

inline Light& addDirectionalLight(Vector3 pos, Vector3 direction, Color color, float intensity) {
	lights[light_count++] = Light{
		LIGHT_DIRECTIONAL,
		pos,
		direction,
		intensity,
		color
	};
	return lights[light_count-1];
}


