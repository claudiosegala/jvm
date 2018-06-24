#pragma once

#include <stack>
#include <vector>
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

	};

	class Operands : public std::stack<u4> {
	public:
		/**
		* Default constructor
		*/
		Operands() = default;

		u4 pop4();

		u8 pop8();

		void push4(u4 value);

		void push8(u8 value);
	};

}
