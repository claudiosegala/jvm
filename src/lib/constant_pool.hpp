#pragma once

#include "bit.hpp"

namespace jvm {
	enum FLAGS : uint16_t {
		PUBLIC     = 0x0001,    // Declared public; may be accessed = from outside its package.
		PRIVATE	   = 0x0002,
		PROTECTED  = 0x0004,
		STATIC     = 0x0008,
		FINAL      = 0x0010,	// Declared final; no subclasses allowed.
		SUPER      = 0x0020,	// Treat superclass methods specially when invoked by the invokespecial instruction.
		VOLATILE   = 0x0040,
		TRANSIENT  = 0x0080,
		INTERFACE  = 0x0200,    // Is an interface, not a class.
		ABSTRACT   = 0x0400,    // Declared abstract; must not be instantiated.
		SYNTHETIC  = 0x1000,    // Declared synthetic; not present in the source code.
		ANNOTATION = 0x2000,    // Declared as an annotation type.
		ENUM       = 0x4000,    // Declared as an enum type.
	};
	
	enum CP_TAGS : uint16_t {
		Class              = 7,
		FieldRef           = 9,
		MethodRef          = 10,
		InterfaceMethodRef = 11,
		String             = 8,
		Integer	           = 3,
		Float              = 4,
		Long               = 5,
		Double             = 6,
		NameAndType        = 12,
		Utf8               = 1,
		MethodHandle       = 15,
		MethodType         = 16,
		InvokeDynamic      = 18
	};

	class CP_Entry {
	public:
		static virtual CP_TAGS tag;
	};

	struct CP_Class : public CP_Entry {
		HalfWord name_index;
	};

	struct CP_Fieldref : public CP_Entry {
		HalfWord class_index;
		HalfWord name_and_class_index;
	};

	struct CP_Methodref : public CP_Entry {
		HalfWord class_index;
		HalfWord name_and_class_index;
	};

	struct CP_InterfaceMethodref : public CP_Entry {
		HalfWord class_index;
		HalfWord name_and_class_index;
	};

	struct CP_String : public CP_Entry {
		HalfWord string_index;
	};

	struct CP_Integer : public CP_Entry {
		Word _bytes;
	};

	struct CP_Float : public CP_Entry {
		Word _bytes;
	};

	struct CP_Long : public CP_Entry {
		Word high_bytes;
		Word low_bytes;
	};

	struct CP_Double : public CP_Entry {
		Word high_bytes;
		Word low_bytes;
	};

	struct CP_NameAndType : public CP_Entry {
		HalfWord name_index;
		HalfWord descriptor_index;
	};

	struct CP_Utf8 : public CP_Entry {
		HalfWord _length;
		Byte _bytes[];
	};

	struct CP_MethodHandle : public CP_Entry {
		Byte reference_kind;
		HalfWord reference_index;
	};

	struct CP_MethodType : public CP_Entry {
		HalfWord descriptor_index;
	};

	struct CP_InvokeDynamic : public CP_Entry {
		HalfWord bootstrap_method_attr_index;
		HalfWord name_and_type_index;
	};

}
