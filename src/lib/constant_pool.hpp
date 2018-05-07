#pragma once

#include "bit.hpp"

namespace jvm {
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
