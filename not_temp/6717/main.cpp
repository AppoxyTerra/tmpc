#include <iterator>
#include <utils/result.hpp>



template <class Yield_T>
struct BasicGenerator {
	using Self = BasicGenerator<Yield_T>;
	int step = 0;

	// You should put your stack frame here.

	BasicGenerator() {}
	Yield_T next();
	// Use this to start over the generator.
	inline void rewind() { step = 0; }
	// Use this to tell the iterators that the generator terminated. 
	inline void finish() { step = -1; }
	inline bool finished() { return step == -1; }

	template <class GeneratorType = BasicGenerator<Yield_T>>
	struct Iterator {
		using iterator_category = std::forward_iterator_tag;
		using difference_type   = std::ptrdiff_t;
		using value_type        = Yield_T;
		using pointer           = Yield_T*;  // or also value_type*
		using reference         = Yield_T&;  // or also value_type&

		Iterator() {}
		Iterator(int step) {
			gen_instance.step = -1;
		}
		Iterator(GeneratorType gen_instance, value_type current)
		:	gen_instance(gen_instance),
			current(current)
			{}

		reference operator*() { return current; }
		pointer operator->() { return current; }

		// Prefix increment
		Iterator& operator++() { current = gen_instance.next(); gen_instance.step++; return *this; }  

		// Postfix increment
		Iterator operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }

		friend bool operator== (const Iterator& a, const Iterator& b) { return a.gen_instance.step == b.gen_instance.step; };
		friend bool operator!= (const Iterator& a, const Iterator& b) { return a.gen_instance.step != b.gen_instance.step; };

	private:
		GeneratorType gen_instance;
		value_type current;

	};


	Iterator<Self> begin();
	Iterator<Self> end();
};


struct range : BasicGenerator<int> {
	using Self = range;
	using super = BasicGenerator<int>;
	using Iterator = super::Iterator<Self>;

	int start = 1;
	int end_ = 0;
	int step = 1;
	range() {}
	range(int end) : start(0), end_(end), step(1) {}
	range(int start, int end) : start(start), end_(end), step(1) {}
	range(int start, int end, int step) : start(start), end_(end), step(step) {}
	range(const range& other) :  {}

	int next() {
		// ! This is not how it's supposed to be done ! //
		if (start >= end_) {
			finish();
			return 0; // This is a dummy value.
		}
		const int temp = start;
		start += step;
		return temp;
	}
	
	Iterator begin() {
		assert(start < end_);
		return Iterator(*this, start);
	}
	Iterator end() {
		return Iterator(-1);
	}
};

int main(int argc, char const *argv[])
{
	for (auto i : range(10))
	{
		printf("%i\n", i);
	}
	
	return 0;
}





