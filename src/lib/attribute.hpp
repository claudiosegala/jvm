#pragma once
#include <cstdint>
#include <vector>
#include <map>
#include "bit.hpp"
#include "constant_pool.hpp"
#include "macros.hpp"

namespace jvm {

	class Attr_Entry;

	// This maps a string to a function that returns an instance of the corresponding attribute
	typedef std::map<std::string, Attr_Entry*(*)(Reader&, ConstantPool&)> AttributeMap;

	class AttributeInfo : public std::vector<Attr_Entry*> {
	public:
		void fill(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix);
		~AttributeInfo();
	};

	class Attr_Entry {
	protected:
		Attr_Entry() = default;
	public:
		uint16_t name_index;                             ///< Valid index into the constant pool table

		uint32_t length;                                 ///< Length of info

		std::vector<uint8_t > info;                      ///< Info

		typedef std::map<int, std::string> Instructions; ///< struct for static
		static Instructions instructions;                ///<  All instructions

		/**
		 * Default constructor.
		 */
		AttributeInfo ();

		/**
		 * Constructor that calls Read() method.
		 * @param reader The current reading method.
		 */
		explicit AttributeInfo(Reader& reader);


		/**
		 * Prints the index, length and the bytes of this AttributeInfo.
		 */
		void printToStream(std::ostream&, ConstantPool&, std::string);

		/**
		 * Reads the whole AttributeInfo from the class file.
		 * @param reader
		 */
		void Read(Reader &reader);

	};

}
