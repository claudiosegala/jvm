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
		 * Reader
		 */
		explicit FieldInfo(Reader &, ConstantPool &cp);

		/**
		 * Print the content of the class
		 */
		void PrintToStream (std::ostream&, ConstantPool&);

		/**
		 * Read from a file
		 */
		void Read(Reader &, ConstantPool &cp);

	private:

		/**
		 * Print the content the flags of the method
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
