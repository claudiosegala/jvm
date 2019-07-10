#pragma once

#include "attribute.hpp"

namespace jvm {

	class FieldInfo {
	public:
		/**
		 *  Access permission to and properties of this field
		 */
		uint16_t access_flags;

		/**
		 *  Valid index into the constant pool table
		 */
		uint16_t name_index;

		//TODO THIS IS NOT RIGHT, BUT IT WORKS FOR SIMPLE CLASSES

		union field_value {
			uint8_t ui1;
			uint16_t ui2;
			uint32_t ui4;
			int8_t i1;
			int16_t i2;
			int32_t i4;
			float f;
			double d;
		};

		field_value value;

		/**
		 * Type of a class, instance, or local variable
		 */
		uint16_t descriptor_index;

		/**
		 * The number of additional attributes
		 */
		uint16_t attributes_count;

		/**
		 * An attribute structure
		 */
		AttributeInfo attributes;

		/**
		 * Constructor default
		 */
		FieldInfo () = default;

		/**
		 * Constructor that calls Read() method
		 * @param reader an instance of the class file reader
		 * @param cp a reference to the constant pool
		 * @see Read()
		 */
		explicit FieldInfo(Reader &, ConstantPool &cp);

		/**
		 * Print the content of the class
		 * @param os used to output data
		 * @param cp a reference to the constant pool
		 */
		void PrintToStream (std::ostream&, ConstantPool&);

		/**
		 * Read from a class file
		 * @param reader an instance of the class file reader
		 * @param cp a reference to the constant pool
		 */
		void Read(Reader &, ConstantPool &cp);

	private:

		/**
		 * Print the content the flags of the method
		 * @param os used to output data
		 * @param flag a code that identifyes the flag of this field
		 */
		void PrintFlags(std::ostream &, uint32_t);
	};

	namespace fields {

		enum Flags : uint32_t {
			PUBLIC    = 0x0001,    // Declared public; may be accessed from outside its package.
			PRIVATE   = 0x0002,    // Declared private; usable only within the defining class.
			PROTECTED = 0x0004,    // Declared protected; may be accessed within subclasses.
			STATIC    = 0x0008,    // Declared static.
			FINAL     = 0x0010,    // Declared final; never directly assigned to after object construction (JLS §17.5).
			VOLATILE  = 0x0040,    // Declared volatile; cannot be cached.
			TRANSIENT = 0x0080,    // Declared transient; not written or read by a persistent object manager.
			SYNTHETIC = 0x1000,    // Declared synthetic; not present in the source code.
			ENUM      = 0x4000     // Declared as an element of an enum.
		};
		
	}
}
