#pragma once

#include <stack>
#include <vector>
#include "util/macros.hpp"

namespace jvm {

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
