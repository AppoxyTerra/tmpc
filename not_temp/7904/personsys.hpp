#include <unordered_map>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <utility>
using std::min;
using std::max;

typedef size_t index_t;


struct FWP {
	char name[48] = {0};

	FWP(const char* name_) {
		const size_t len = strnlen_s(name_, 48);
		memcpy(name, name_, min(len, 48ULL));
	}
};

struct Framework {
	using FWP_ref_t = index_t;
	std::vector<FWP> FWPs;
	std::unordered_multimap<FWP_ref_t, FWP_ref_t> FWLs;

	Framework() {}

	inline FWP_ref_t addConcept(const char* name) {
		FWPs.push_back(FWP(name));
		return FWPs.size()-1;
	}

	inline void linkConcepts(FWP_ref_t from_, FWP_ref_t to_) {
		FWLs.insert({from_, to_});
	}

};


