// #pragma once
// #include <raylib/raylib.h>
// #include <raylib/raymath.h>
// #include <vector>

// struct Capture {
// 	std::vector<Vector3> vs;
// 	std::vector<Model> models;

// 	Capture() {}

// 	inline void preinit(size_t verticies_count) {
// 		vs.reserve(verticies_count);
// 	}

// 	inline void addVertex(Vector3 v) {
// 		vs.push_back(v);
// 	}

// 	inline Model& initModelFrom(
// 		std::vector<std::tuple<int, int, int>> tris
// 	) {
// 		models.push_back(Model{});
// 		Model& res = models.back();
// 		Mesh mesh;
		
// 		res = LoadModelFromMesh();
// 	}

// 	~Capture() {
// 		for (size_t i = 0; i < models.size(); i++)
// 		{
// 			UnloadModel(models[i]);
// 		}
// 	}
// };





