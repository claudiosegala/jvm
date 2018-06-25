#pragma once

#include "util/macros.hpp"

namespace jvm {

	union op4 {
		uint8_t ui1;
		uint16_t ui2;
		uint32_t ui4;
		int8_t i1;
		int16_t i2;
		int32_t i4;
		float f;
	};

	union op8 {
		double lf;
		uint64_t ull;
		int64_t ll;
	};

}