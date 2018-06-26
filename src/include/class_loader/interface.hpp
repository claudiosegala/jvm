#pragma once

#include <cstdint>
#include <vector>
#include "attribute.hpp"
#include "constant_pool.hpp"

namespace jvm {

	class InterfaceInfo {
	public:
		uint16_t info; ///< An index in the constant pool

		/**
		 * Default constructor
		 */
		InterfaceInfo ();

		/**
		 * Constructor with a reader, wich calls Read method, setting the value of the info index
		 * @param Reference to a Reader
		 */
		explicit InterfaceInfo (Reader&);

		/**
		 * Print the content of the info
		 * @param Reference to std::ostream
		 * @param Reference to the ConstantPool entity
		 */
		void PrintToStream(std::ostream &, ConstantPool &);

		/**
		 * Read the value of info from a file
		 * @param Reference to the Reader
		 */
		void Read(Reader&);
	};

}
