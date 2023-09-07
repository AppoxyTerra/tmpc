#include <vector>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <initializer_list>
using std::max;
using std::min;

//! FIRST LAYER IS INPUTS ONLY (NO NEURONES)
constexpr size_t NDEEP = 4;
constexpr size_t NSIZE[NDEEP] = {6*3, 6*3, 6*3, 3*3};
constexpr size_t MAX_SIZE = 6*3;
constexpr float draw_neur_radius = 10.0f;
const float SPC = 60.0f;

float sigmoid(float x) {
	return 1.f / (1.f + expf(-x));
}
float ReLU(float x) {
	if (x > 0.0f) {
		return x;
	}
	return 0.01f*x;
}
float(*activation_func)(float) = abs;

float random() {
	return float(rand())/float(RAND_MAX);
}

Color mix(Color a, Color b, float a0_to_b1) {
	a0_to_b1 = min(max(a0_to_b1, 0.0f), 1.0f);
	return rgb(
		a.r*(1.0f-a0_to_b1) + b.r*a0_to_b1,
		a.g*(1.0f-a0_to_b1) + b.g*a0_to_b1,
		a.b*(1.0f-a0_to_b1) + b.b*a0_to_b1
	);
}

Color fromValue(float x) {
	return mix(PURPLE, GREEN, x);
}

struct Neur {
	std::vector<float> factors;
	std::vector<float> delta_f;
	float bias;
	float delta_b;

	Neur(size_t f_c) {
		factors.reserve(f_c);
		delta_f.reserve(f_c);
		for (size_t i = 0; i < f_c; i++)
		{
			factors.push_back(random());
			delta_f.push_back(0.0f);
		}
		bias = random();
		delta_b = 0.0f;
	}

	// len(inputs) == len(factors)
	float forward(float *inputs) {
		float sum = 0.0f;
		for (size_t i = 0; i < factors.size(); i++)
		{
			sum += factors[i] * inputs[i];
		}
		return activation_func(sum+bias);
	}

	inline void learn(float rate) {
		for (size_t i = 0; i < factors.size(); i++)
		{
			factors[i] -= rate * delta_f[i];
		}
		bias -= rate * delta_b;
	}

	inline void draw(Vector2 pos) {
		DrawCircleV(pos, draw_neur_radius, fromValue(bias));
	}
};

struct NeurSys {
	float inputs[MAX_SIZE] = {0};
	std::vector<Neur> neurs[NDEEP-1];

	NeurSys() {
		for (size_t i = 1; i < NDEEP; i++)
		{
			neurs[i-1] = std::vector<Neur>({});
			neurs[i-1].reserve(NSIZE[i]);
			for (size_t j = 0; j < NSIZE[i]; j++)
			{
				neurs[i-1].push_back(Neur(NSIZE[i-1]));
			}
		}
	}

	// You have to set inputs before using this function.
	void forward() {
		static float buf[MAX_SIZE];
		for (size_t i = 1; i < NDEEP; i++)
		{
			for (size_t j = 0; j < NSIZE[i]; j++)
			{
				buf[j] = neurs[i-1][j].forward(inputs);
			}
			memcpy(inputs, buf, NSIZE[i-1]*sizeof(float));
		}
	}

	float* forward(float* inp) {
		memcpy(inputs, inp, NSIZE[0]*sizeof(float));
		forward();
		return inputs;
	}

	inline float* outputs() const {
		return (float*)inputs;
	}

	float cost(
		float** train_i,
		float** train_o,
		const size_t train_c
	) {
		float result = 0.0f;
		for (size_t i = 0; i < train_c; i++)
		{
			memcpy(inputs, train_i[i], NSIZE[0]*sizeof(float)); // Load inputs
			forward();
			float sum_distances = 0.0f;
			for (size_t j = 0; j < NSIZE[NDEEP-1]; j++)
			{
				sum_distances += outputs()[j] - train_o[i][j];
			}
			sum_distances /= NSIZE[NDEEP-1];
			result += sum_distances*sum_distances;
		}
		return result / train_c;
	}

	void learn(float rate) {
		for (size_t i = 1; i < NDEEP; i++)
		{
			for (size_t j = 0; j < NSIZE[i]; j++)
			{
				neurs[i-1][j].learn(rate);
			}
		}
	}

	// <=> finite_diff
	void computeDeltas(
		float** train_i,
		float** train_o,
		const size_t train_c,
		const float eps
	) {
		const float c = cost(train_i, train_o, train_c);
		float saved;

		for (size_t i = 1; i < NDEEP; i++)
		{
			for (size_t j = 0; j < NSIZE[i]; j++)
			{
				Neur& neur = neurs[i-1][j];
				for (size_t k = 0; k < neur.factors.size(); k++)
				{
					saved = neur.factors[i];
					neur.factors[i] += eps;
					neur.delta_f[i] = (cost(train_i,train_o,train_c) - c)/eps;
					neur.factors[i] = saved;
				}
				saved = neur.bias;
				neur.bias += eps;
				neur.delta_b = (cost(train_i,train_o,train_c) - c)/eps;
				neur.bias = saved;
			}
		}
	}

	void draw(Vector2 pos) {
		const float MAX_HEIGHT = SPC*MAX_SIZE;
		for (size_t i = 1; i < NDEEP; i++)
		{
			const float yoffset = MAX_HEIGHT/2.0f-(NSIZE[i]/2.0f*SPC);
			const float before_yoffset = MAX_HEIGHT/2.0f-(NSIZE[i-1]/2.0f*SPC);
			for (size_t j = 0; j < NSIZE[i]; j++)
			{
				const Vector2 neur_pos = Vector2Add(pos, {i*SPC*2.0f, yoffset+j*SPC});
				for (size_t k = 0; k < NSIZE[i-1]; k++)
				{
					DrawLineV(
						Vector2Add(pos, {(i-1)*SPC*2.0f, before_yoffset+k*SPC}),
						neur_pos,
						fromValue(neurs[i-1][j].factors[k])
					);
				}
				neurs[i-1][j].draw(neur_pos);
			}
		}
	}
} neur_sys;





