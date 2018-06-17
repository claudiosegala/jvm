#pragma once

#include <cstdint>
#include "util/bit.hpp"
#include <vector>
#include "_class/constant_pool.hpp"
#include "_class/attribute.hpp"
#include "_class/_class.hpp"

namespace jvm {

	class Frame {
	public:
		/**
		* Constructor
		*/
		Frame() = default;

	private:
		//> Operands Stack
		std::vector<u4> operands;

		//> Local Variables
		std::vector<u4> variables;

	};

}
