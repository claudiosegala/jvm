#pragma once
#include <cstdint>
#include <vector>
#include "bit.hpp"
#include "constant_pool.hpp"

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
		std::vector<uint8_t > info;

		AttributeInfo() = default;

		explicit AttributeInfo(Reader &reader);

		void printToStream(std::ostream&, ConstantPool&, std::string);

		void Read(Reader &reader);

	};

}