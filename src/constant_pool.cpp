#include <bit.hpp>
#include "constant_pool.hpp"

namespace jvm {

	ConstantPool::ConstantPool() = default;

	ConstantPool::ConstantPool(Reader &reader, size_type size) : vector(size) {
		for (auto i = size; i > 0; --i) {
			push_back(getNextEntry(reader));
		}
	}

	CP_Entry * ConstantPool::getNextEntry(Reader &reader) {
		uint16_t tag = reader.getNextHalfWord().value.number;
		switch (tag) {
			case CP_TAGS::Class:              return new CP_Class(reader);
			case CP_TAGS::FieldRef:           return new CP_Fieldref(reader);
			case CP_TAGS::MethodRef:          return new CP_Methodref(reader);
			case CP_TAGS::InterfaceMethodRef: return new CP_InterfaceMethodref(reader);
			case CP_TAGS::String:             return new CP_String(reader);
			case CP_TAGS::Integer:            return new CP_Integer(reader);
			case CP_TAGS::Float:              return new CP_Float(reader);
			case CP_TAGS::Long:               return new CP_Long(reader);
			case CP_TAGS::Double:             return new CP_Double(reader);
			case CP_TAGS::NameAndType:        return new CP_NameAndType(reader);
			case CP_TAGS::Utf8:               return new CP_Utf8(reader);
			case CP_TAGS::MethodHandle:       return new CP_MethodHandle(reader);
			case CP_TAGS::MethodType:         return new CP_MethodType(reader);
			case CP_TAGS::InvokeDynamic:      return new CP_InvokeDynamic(reader);
			default:                          throw "Invalid Constant Pool Tag";
		}
	}

	// TAGS

	inline CP_TAGS CP_Class::getTag() {
		return CP_TAGS::Class;
	}

	inline CP_TAGS CP_Fieldref::getTag() {
		return CP_TAGS::FieldRef;
	}

	inline CP_TAGS CP_Methodref::getTag() {
		return CP_TAGS::MethodRef;
	}

	inline CP_TAGS CP_InterfaceMethodref::getTag() {
		return CP_TAGS::InterfaceMethodRef;
	}

	inline CP_TAGS CP_String::getTag() {
		return CP_TAGS::String;
	}

	inline CP_TAGS CP_Integer::getTag() {
		return CP_TAGS::Integer;
	}

	inline CP_TAGS CP_Float::getTag() {
		return CP_TAGS::Float;
	}

	inline CP_TAGS CP_Long::getTag() {
		return CP_TAGS::Long;
	}

	inline CP_TAGS CP_Double::getTag() {
		return CP_TAGS::Double;
	}

	inline CP_TAGS CP_NameAndType::getTag() {
		return CP_TAGS::NameAndType;
	}

	inline CP_TAGS CP_Utf8::getTag() {
		return CP_TAGS::Utf8;
	}

	inline CP_TAGS CP_MethodHandle::getTag() {
		return CP_TAGS::MethodHandle;
	}

	inline CP_TAGS CP_MethodType::getTag() {
		return CP_TAGS::MethodType;
	}

	inline CP_TAGS CP_InvokeDynamic::getTag() {
		return CP_TAGS::InvokeDynamic;
	}

	// END TAGS

	// CONSTRUCTORS AND DESTRUCTORS

	CP_Fieldref::CP_Fieldref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_class_index = reader.getNextHalfWord();
	}

	CP_Methodref::CP_Methodref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_class_index = reader.getNextHalfWord();
	}

	CP_Float::CP_Float(Reader &reader) {
		_bytes = reader.getNextWord();
	}

	CP_Long::CP_Long(Reader &reader) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	CP_Double::CP_Double(Reader &reader) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	CP_MethodHandle::CP_MethodHandle(Reader &reader) {
		reference_kind = reader.getNextByte();
		reference_index = reader.getNextHalfWord();
	}

	CP_InterfaceMethodref::CP_InterfaceMethodref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_class_index = reader.getNextHalfWord();
	}

	CP_String::CP_String(Reader &reader) {
		string_index = reader.getNextHalfWord();
	}
	CP_Integer::CP_Integer(Reader &reader) {
		_bytes = reader.getNextWord();
	}

	CP_NameAndType::CP_NameAndType(Reader &reader) {
		name_index = reader.getNextHalfWord();
		descriptor_index = reader.getNextHalfWord();
	}

	CP_InvokeDynamic::CP_InvokeDynamic(Reader &reader) {
		bootstrap_method_attr_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	CP_Utf8::CP_Utf8(Reader &reader) {
		_length = reader.getNextHalfWord();
		_bytes = new Byte[_length.value.number];
	}

	CP_Utf8::~CP_Utf8() {
		delete[] _bytes;
	}

	CP_Class::CP_Class(Reader &reader) {
		name_index = reader.getNextHalfWord();
	}

	CP_MethodType::CP_MethodType(Reader &reader) {
		descriptor_index = reader.getNextHalfWord();
	}

	// END CONSTRUCTORS AND DESTRUCTORS

}