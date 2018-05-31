#pragma once
#include <cstdint>
#include <vector>
#include <map>
#include "bit.hpp"
#include "constant_pool.hpp"

namespace jvm {

	class AttributeInfo {
	public:
		uint16_t name_index;                             ///< Valid index into the constant pool table

		uint32_t length;                                 ///< Length of info

		std::vector<uint8_t > info;                      ///< Info

		typedef std::map<int, std::string> Instructions; ///< struct for static
		static Instructions instructions;                ///<  All instructions

		AttributeInfo() = default;

		/**
		 * Constructor
		 * @param reader The current reading method
		 */
		explicit AttributeInfo(Reader& reader);


		/**
		 *
		 */
		void printToStream(std::ostream&, ConstantPool&, std::string);

		/**
		 *
		 * @param reader
		 */
		void Read(Reader &reader);

	};

}