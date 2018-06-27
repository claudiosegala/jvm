#pragma once

#include "base.hpp"

namespace jvm {

	class Operands : public std::stack<op4> {
	public:
		/**
		* Default constructor
		*/
		Operands() = default;

		op4 pop4();

		op8 pop8();

		void push4(u4);

		void push4(op4);

		void push8(u8);

		void push8(op8);
	};

}
