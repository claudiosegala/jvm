#include <bit.hpp>
#include <iostream>
#include "constant_pool.hpp"

namespace jvm {

	ConstantPool::ConstantPool() = default;

	ConstantPool::ConstantPool(Reader &reader, size_type size) : vector(size) {
		fill(reader, size);
	}

	ConstantPool::~ConstantPool() {
		for (auto& entry : *this) {
			delete entry;
		}
	}

	void ConstantPool::fill(Reader &reader, size_type size) {
		reserve(size);
		for (auto i = size; i > 0; --i) {
			auto tag = reader.getNextByte().value.number;
			push_back(getNextEntry(reader, tag));
			if (tag == CP_TAGS::Double || tag == CP_TAGS::Long) {
				// these take two CP entries, the next entry is valid but unusable
				push_back(nullptr);
				--i;
			}
		}
		shrink_to_fit();
	}

	void ConstantPool::printToStream(std::ostream& os) {
		if (empty()) {
			os << "Constant Pool is empty" << std::endl;
			return;
		}
		int i = 0;
		for (CP_Entry* entry : *this) {
			os << '[' << ++i << "] ";
			if (entry == nullptr) {
				os << "Large numeric continued" << std::endl;
			} else {
				entry->printToStream(os, *this);
			}
		}
	}

	CP_Entry * ConstantPool::getNextEntry(Reader &reader, uint8_t tag) {
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

	CP_Entry *&ConstantPool::operator[](unsigned long index) {
		return vector::operator[](index - 1);
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

	void CP_Fieldref::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_Methodref::CP_Methodref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_class_index = reader.getNextHalfWord();
	}

	void CP_Methodref::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_Float::CP_Float(Reader &reader) {
		_bytes = reader.getNextWord();
	}

	void CP_Float::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_Long::CP_Long(Reader &reader) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	void CP_Long::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_Double::CP_Double(Reader &reader) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	void CP_Double::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_MethodHandle::CP_MethodHandle(Reader &reader) {
		reference_kind = reader.getNextByte();
		reference_index = reader.getNextHalfWord();
	}

	void CP_MethodHandle::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_InterfaceMethodref::CP_InterfaceMethodref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_class_index = reader.getNextHalfWord();
	}

	void CP_InterfaceMethodref::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_String::CP_String(Reader &reader) {
		string_index = reader.getNextHalfWord();
	}

	void CP_String::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_Integer::CP_Integer(Reader &reader) {
		_bytes = reader.getNextWord();
	}

	void CP_Integer::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_NameAndType::CP_NameAndType(Reader &reader) {
		name_index = reader.getNextHalfWord();
		descriptor_index = reader.getNextHalfWord();
	}

	void CP_NameAndType::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_InvokeDynamic::CP_InvokeDynamic(Reader &reader) {
		bootstrap_method_attr_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	void CP_InvokeDynamic::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	CP_Utf8::CP_Utf8(Reader &reader) {
		_length = reader.getNextHalfWord();
		_bytes = new uint8_t[_length.value.number];
		for (int i = 0; i < _length.value.number; ++i) {
			_bytes[i] = reader.getNextByte().value.number;
		}
	}

	CP_Utf8::~CP_Utf8() {
		delete[] _bytes;
	}

	void CP_Utf8::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "UTF-8:" << std::endl << "\t" << *this << std::endl;
	}

	CP_Class::CP_Class(Reader &reader) {
		name_index = reader.getNextHalfWord();
	}

	void CP_Class::printToStream(std::ostream &os, ConstantPool &cp) {
		CP_Entry* name = cp[name_index.value.number];
		auto& characters = name->as<CP_Utf8>();
		os << "Class:" << std::endl;
		os << "\tName: " << characters << std::endl;
	}

	CP_MethodType::CP_MethodType(Reader &reader) {
		descriptor_index = reader.getNextHalfWord();
	}

	void CP_MethodType::printToStream(std::ostream &os, ConstantPool &cp) {

	}

	// END CONSTRUCTORS AND DESTRUCTORS

	// STREAM OPERATORS

	std::ostream& operator<< (std::ostream& os, const CP_Utf8& utf8) {
		auto end = utf8._bytes + utf8._length.value.number;
		auto current = utf8._bytes;
		while (current < end) {
			os << *current++;
		}
		return os;
	}

	// END STREAM OPERATORS

}