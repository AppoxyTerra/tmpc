#pragma once
#include <raylib/raylib.h>
#include <raylib/raymath.h>
#include <vector>
#include <cstdio>
#include <utility>
#include "lights.hpp"

typedef uint16_t Index_T;

struct ColorTri {
	Color color;
	Index_T indices[3];
};

struct World {
	std::vector<Vector3> vs;
	std::vector<ColorTri> tris;

	World() : vs(), tris() {}

	inline void preinit(size_t verticies_count, size_t tris_count) {
		TraceLog(LOG_DEBUG, "World preinit %llu verticies, and %llu colored tiangles.", verticies_count, tris_count);
		vs.reserve(verticies_count);
		tris.reserve(tris_count);
	}

	inline void addVertex(Vector3 vertex) {
		TraceLog(LOG_DEBUG, "World added vertex: vec3(%f, %f, %f)", vertex.x, vertex.y, vertex.z);
		vs.push_back(vertex);
	}

	inline void addTri(ColorTri &&ct) {
		TraceLog(
			LOG_DEBUG,
			"World added colored triangle: tri(%i, %i, %i)+RGB(%i, %i, %i)",
			(int)ct.indices[0], (int)ct.indices[1], (int)ct.indices[2],
			(int)ct.color.r, (int)ct.color.g, (int)ct.color.b
		);
		tris.push_back(ct);
	}

	void showVerticies(Color color) const {
		for (auto &&vertex : vs)
		{
			DrawSphere(vertex, 0.3f, color);
		}
	}

	void transform(Matrix mat) {
		for (auto &vertex : vs)
		{
			vertex = Vector3Transform(vertex, mat);
		}
	}

	void translate(Vector3 translation) {
		for (auto &vertex : vs)
		{
			vertex = Vector3Add(vertex, translation);
		}
	}

	void draw() const {
		for (const ColorTri &ct : tris)
		{
			// CPU handled lights, I know it's terrible.
			Color color = ct.color;
			const Vector3 A = Vector3Subtract(vs[ct.indices[1]], vs[ct.indices[0]]);
			const Vector3 B = Vector3Subtract(vs[ct.indices[2]], vs[ct.indices[0]]);
			/*
			Nx = Ay * Bz - Az * By
			Ny = Az * Bx - Ax * Bz
			Nz = Ax * By - Ay * Bx
			*/
			Vector3 normale = {
				A.y*B.z - A.z*B.y,
				A.z*B.x - A.x*B.z,
				A.x*B.y - A.y*B.x
			};

			const Vector3 middle = Vector3Scale(
				Vector3Add(
					Vector3Add(
						vs[ct.indices[0]],
						vs[ct.indices[1]]
					),
					vs[ct.indices[2]]
				),
				1.f/3.f
			);

			for (int i = 0; i < light_count; i++)
			{
				const Light& l = lights[i];
				float specular; // Terrible naming, I know it's not that
				if (l.type == LIGHT_POINT) {
					specular = std::max(l.intensity-Vector3Distance(middle, l.pos),.0f)/l.intensity;
				} else if (l.type == LIGHT_DIRECTIONAL) {
					specular = std::max(l.intensity-Vector3Distance(middle, l.pos),.0f)/l.intensity
								* std::max(Vector3DotProduct(Vector3Normalize(normale), l.direction), 0.0f);
				}
				color = rgba(
					specular * l.color.r + (1.f - specular) * color.r,
					specular * l.color.g + (1.f - specular) * color.g,
					specular * l.color.b + (1.f - specular) * color.b,
					color.a
				);
			}

			const float camnorm_dot = Vector3DotProduct(Vector3Normalize(normale), Vector3Subtract(camera.target, camera.position));
			if (camnorm_dot <= 0.6f) {
				DrawTriangle3D(vs[ct.indices[0]], vs[ct.indices[1]], vs[ct.indices[2]], color);
			}
			if (camnorm_dot >= -0.6f) {
				DrawTriangle3D(vs[ct.indices[2]], vs[ct.indices[1]], vs[ct.indices[0]], color);
			}
		}
	}
};

template <class T>
inline size_t readd(T& dst, FILE* f) {
	return fread(&dst, sizeof(T), 1, f);
}

inline World loadWorld(const char* filename) {
	World res;	
	Vector3 temp_v;
	Index_T temp_i[3];
	Color temp_c;

	FILE* f = fopen(filename, "rb");
	if (!f) {
		TraceLog(LOG_ERROR, "Loading world '%s' failed (can't read file).", filename);
		return res;
	}
	
	Index_T vc,tc;
	readd(vc, f); readd(tc, f);

	res.preinit((size_t)vc, (size_t)tc);
	for (uint16_t i = 0; i < vc; i++)
	{
		readd(temp_v, f);
		res.addVertex(temp_v);
	}
	for (uint16_t i = 0; i < tc; i++)
	{
		readd(temp_i, f);
		readd(temp_c, f);
		temp_c.a = (unsigned char)(255);
		res.addTri({temp_c, {temp_i[0], temp_i[1], temp_i[2]}});
	}

	fclose(f);

	TraceLog(LOG_INFO, "World '%s' loaded successfuly !", filename);
	return res;
}


