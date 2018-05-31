#pragma once

#include <cstdint>
#include <vector>
#include "bit.hpp"
#include "attribute.hpp"
#include "constant_pool.hpp"

namespace jvm {

	class InterfaceInfo {
	public:
		uint16_t info; ///< An index in the constant pool

		/**
		 * Constructor default
		 */
		InterfaceInfo () = default;

		/**
		 * Reader
		 * @param
		 */
		explicit InterfaceInfo (Reader&);

		/**
		 * Print the content of the class
		 * @param
		 * @param
		 */
		void PrintToStream(std::ostream &, ConstantPool &);

		/**
		 * Read from a file
		 * @param
		 */
		void Read(Reader&);
	};

}