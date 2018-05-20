#pragma once

#include <cstdint>
#include <vector>
#include "bit.hpp"
#include "attribute.hpp"
#include "constant_pool.hpp"

namespace jvm {

	class InterfaceInfo {
	public:
		/**
		 * An index in the constant pool
		 */
		uint16_t info;

		/**
		 * Constructor default
		 */
		InterfaceInfo () = default;

		/**
		 * Reader
		 */
		explicit InterfaceInfo (Reader&);

		/**
		 * Print the content of the class
		 */
		void PrintToStream(std::ostream &, ConstantPool &);

		/**
		 * Read from a file
		 */
		void Read(Reader&);
	};

}