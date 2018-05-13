#pragma once
#include <cstdint>
#include <vector>
#include "bit.hpp"

namespace jvm {

	class AttributeInfo {
	public:
		/**
		 *  Valid index into the constant pool table
		 */
		HalfWord name_index;

		/**
		 * Length of info
		 */
		Word length;

		/**
		 * Info
		 */
		std::vector<uint8_t> info;
	};

}