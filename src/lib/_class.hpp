#pragma once

#include <fstream>
#include <vector>
#include <string>
#include "bit.hpp"
#include "reader.hpp"
#include "constant_pool.hpp"
#include "field.hpp"
#include "method.hpp"
#include "attribute.hpp"

namespace jvm {

	class _Class {
	public:
		Word magic_number;

		HalfWord min_version;

		HalfWord max_version;

		HalfWord cp_count;

		ConstantPool constant_pool;

		HalfWord access_flags;

		HalfWord this_class;

		HalfWord super_class;

		HalfWord interfaces_count;

		std::vector<HalfWord> interfaces;

		HalfWord fields_count;

		std::vector<jvm::FieldInfo> fields;

		HalfWord methods_count;

		std::vector<jvm::MethodInfo> methods;

		HalfWord attributes_count;

		std::vector<jvm::AttributeInfo> attributes;

		_Class ();

		void read (std::basic_string<char>);

		void show ();

	private:
		void print_interfaces ();

		void print_fields ();

		void print_methods ();

		void print_attributes ();

		void print_this_class ();

		void print_super_class ();

		void print_version ();

		void print_cp ();

		void print_class_flags();

		void read_version (jvm::Reader&);

		void read_cp (jvm::Reader&);

		void read_flags(jvm::Reader&);

		void read_interfaces (jvm::Reader&);

		void read_fields (jvm::Reader&);

		void read_methods (jvm::Reader&);

		void read_attributes (jvm::Reader&);

	};

	namespace _class {

		enum Flags : uint16_t {
			PUBLIC     = 0x0001,    // Declared public; may be accessed from outside its package.
			PRIVATE	   = 0x0002,    // Declared private; accessible only within the defining class.
			PROTECTED  = 0x0004,    // Declared protected; may be accessed within subclasses.
			STATIC     = 0x0008,    // Declared static.
			FINAL      = 0x0010,	// Declared final; no subclasses allowed.
			SUPER      = 0x0020,	// Treat superclass methods specially when invoked by the invokespecial instruction.
			VOLATILE   = 0x0040,
			TRANSIENT  = 0x0080,
			INTERFACE  = 0x0200,    // Is an interface, not a class.
			ABSTRACT   = 0x0400,    // Declared abstract; must not be instantiated.
			SYNTHETIC  = 0x1000,    // Declared synthetic; not present in the source code.
			ANNOTATION = 0x2000,    // Declared as an annotation type.
			ENUM       = 0x4000     // Declared as an enum type.
		};

	}

}
