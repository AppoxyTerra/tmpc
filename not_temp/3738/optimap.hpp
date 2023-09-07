#pragma once
#include <vector>
#include <algorithm>

// We will assume that Key_T is an unsigned integer
template <class Key_T, class Value_T>
struct Optimap {
	using Self = Optimap<Key_T, Value_T>;
	std::vector<bool> mapped; // Bool vector optimized by std
 	std::vector<Value_T> val;
	bool inited = false;


	void init(int size) {
		mapped.reserve(size);
		mapped.resize(size, false);
		val.reserve(size);
		val.resize(size);
		inited = true;
	}
	
	Optimap() {}
	Optimap(const Self& copy) {
		printf("Optimap copy (cap: %llu)\n", copy.val.size());
		init(copy.val.size());
		mapped = copy.mapped;
		val = copy.val;
	}

	Self copy(const char* bt) const {
		printf("Optimap .copy(%s) (cap: %llu)\n", bt, this->val.size());
		Self ret;
		assertm(inited, bt);
		ret.init(this->val.size());
		ret.val = this->val;
		ret.mapped = this->mapped;
		return ret;
	}

	inline bool contains(Key_T key) const {
		assert(inited);
		return mapped[key];
	}

	inline Value_T& operator[](Key_T key) {
		assert(inited);
		mapped[key] = true;
		return val[key];
	}

	inline int size(const char* bt) const {
		assertm(inited, bt);
		return std::count(val.begin(), val.end(), true);
	}
};






