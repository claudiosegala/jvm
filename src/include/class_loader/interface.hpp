#pragma once

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
		 * Constructor with a reader, wich calls Read() method, setting the value of the info index
		 * @param reader an instance of the class file reader
		 * @see Read()
		 */
		explicit InterfaceInfo (Reader&);

		/**
		 * Print the content of the info
		 * @param os used to output data
		 * @param cp a reference to the constant pool
		 */
		void PrintToStream(std::ostream &, ConstantPool &);

		/**
		 * Read the value of info from a file
		 * @param reader an instance of the class file reader
		 */
		void Read(Reader&);
	};

}
