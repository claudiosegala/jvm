#pragma once

#include <vector>
#include <stack>
#include "operands.hpp"
#include "variables.hpp"

// TODO: make a reference to the current .class

namespace jvm {

	class Frame {
	public:
		/**
		* Constructor Default
		*/
		Frame() = default;

		//> Operands Stack
		Operands operands;

		//> Local Variables Stack
		Variables variables;

		//> The returned value
		u4 Return_value;

		//> Reference to the constant pool
		//ConstantPool constat_pool_ref;
	};

}
