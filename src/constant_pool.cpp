#include "constant_pool.hpp"

namespace jvm {
	CP_TAGS CP_Class::getTag() {
		return CP_TAGS ::Class;
	}
}