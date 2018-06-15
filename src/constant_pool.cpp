#include <bit.hpp>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "constant_pool.hpp"

namespace jvm {

	ConstantPool::ConstantPool() = default;

	ConstantPool::ConstantPool(Reader &reader, size_type cp_count) : vector(cp_count) {
		fill(reader, cp_count);
	}

	ConstantPool::~ConstantPool() {
		for (auto& entry : *this) {
			delete entry;
		}
	}

	void ConstantPool::fill(Reader &reader, size_type cp_count) {
		reserve(cp_count);

		for (auto i = cp_count; i > 0; --i) {
			auto tag = reader.getNextByte();
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
		auto i = 0;
		for (CP_Entry* entry : *this) {
			os << std::endl;
			os << "\t[" << std::setfill('0') << std::setw(2) << ++i << "] ";
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

	CP_Entry* ConstantPool::operator[](size_t index) {
		return vector::operator[](index - 1);
	}

	std::ostream& operator<<(std::ostream &os, CP_Entry &entry) {
		auto& utf8 = entry.as<CP_Utf8>();
		os << utf8;
		return os;
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
		name_and_type_index = reader.getNextHalfWord();
	}

	void CP_Fieldref::printToStream(std::ostream &os, ConstantPool &cp) {

		auto _class = cp[class_index];
		auto _nameAndType = cp[name_and_type_index];
		os << "Field Reference" << std::endl;
		os << "\t\tClass index: " << class_index << std::endl << "\t";
		_class->printToStream(os, cp);
		os << "\t\tName and Type index: " << name_and_type_index << std::endl << "\t";
		_nameAndType->printToStream(os, cp);
	}

	CP_Methodref::CP_Methodref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	void CP_Methodref::printToStream(std::ostream &os, ConstantPool &cp) {
		auto _class = cp[class_index];
		auto _nameAndType = cp[name_and_type_index];
		os << "Method Reference" << std::endl;
		os << "\t\tClass index: " << class_index << std::endl << "\t";
		_class->printToStream(os, cp);
		os << "\t\tName and type index: " << name_and_type_index << std::endl << "\t";
		_nameAndType->printToStream(os, cp);
	}

	CP_Float::CP_Float(Reader &reader) {
		_bytes = reader.getNextWord();
	}

	void CP_Float::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Float" << std::endl;
		os << "\t\t" << reinterpret_cast<float&>(_bytes) << std::endl;
	}

	CP_Long::CP_Long(Reader &reader) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	void CP_Long::printToStream(std::ostream &os, ConstantPool &cp) {
		uint64_t number = high_bytes;
		number = (number << 32) | low_bytes;
		os << "Long" << std::endl;
		os << "\t\t" << number << std::endl;
	}

	CP_Double::CP_Double(Reader &reader) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	void CP_Double::printToStream(std::ostream &os, ConstantPool &cp) {
		uint64_t number = high_bytes;
		number = (number << 32) | low_bytes;
		double d_number = reinterpret_cast<double&>(number);
		os << "Double" << std::endl;
		os << "\t\t" << d_number << std::endl;
	}

	CP_MethodHandle::CP_MethodHandle(Reader &reader) {
		reference_kind = reader.getNextByte();
		reference_index = reader.getNextHalfWord();
	}

	void CP_MethodHandle::printToStream(std::ostream &os, ConstantPool &cp) {
	    CP_Entry* name1  = cp[reference_index];
	    auto& nam1 = name1->as<CP_MethodHandle>();
		os << "Method Handle" << std::endl;
		os << "\tReference Kind: ";

		switch(nam1.reference_kind) {
			case 0x01: os << "REF_getField"<< std::endl;         break;
			case 0x02: os << "REF_getStatic"<< std::endl;        break;
			case 0x03: os << "REF_putField"<< std::endl;         break;
			case 0x04: os << "REF_putStatic"<< std::endl;        break;
			case 0x05: os << "REF_invokeVirtual"<< std::endl;    break;
			case 0x06: os << "REF_invokeStatic"<< std::endl;     break;
			case 0x07: os << "REF_invokeSpecial"<< std::endl;    break;
			case 0x08: os << "REF_newInvokeSpecial"<< std::endl; break;
			case 0x09: os << "REF_invokeInterface"<< std::endl;  break;
			default:   os << "REF_Unknown"<< std::endl;
		}

		os << "\tReference: " << nam1.reference_index << std::endl;
	}

	CP_InterfaceMethodref::CP_InterfaceMethodref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_class_index = reader.getNextHalfWord();
	}

	void CP_InterfaceMethodref::printToStream(std::ostream &os, ConstantPool &cp) {
		CP_Entry* name1 = cp[class_index];
		CP_Entry* name2 = cp[name_and_class_index];
		auto& nam1 = name1->as<CP_Utf8>();
		auto& nam2 = name2->as<CP_Utf8>();

		os << "Interface Method Reference" << std::endl;
		os << "\tClass name: " << nam1 << std::endl;
		os << "\tName and type: " << nam2 << std::endl;
	}

	CP_String::CP_String(Reader &reader) {
		string_index = reader.getNextHalfWord();
	}

	void CP_String::printToStream(std::ostream &os, ConstantPool &cp) {
			os << "String" << std::endl;
			CP_Entry* name1 = cp[string_index];
			auto& nam1 = name1->as<CP_Utf8>();
			os << "\t\t" << nam1 << std::endl;
	}

	CP_Integer::CP_Integer(Reader &reader) {
		_bytes = reader.getNextWord();
	}

	void CP_Integer::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Integer" << std::endl;
		os << "\t\t" << reinterpret_cast<int32_t&>(_bytes) << std::endl;
	}

	CP_NameAndType::CP_NameAndType(Reader &reader) {
		name_index = reader.getNextHalfWord();
		descriptor_index = reader.getNextHalfWord();
	}

	void CP_NameAndType::printToStream(std::ostream &os, ConstantPool &cp) {
		CP_Entry* name1 = cp[name_index];
		CP_Entry* name2 = cp[descriptor_index];
		auto& nam1 = name1->as<CP_Utf8>();
		auto& nam2 = name2->as<CP_Utf8>();

		os << "Name and Type" << std::endl;
		os << "\t\tName: " <<nam1 << std::endl;
		os << "\t\tDescriptor: " <<nam2 << std::endl;
	}

	CP_InvokeDynamic::CP_InvokeDynamic(Reader &reader) {
		bootstrap_method_attr_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	void CP_InvokeDynamic::printToStream(std::ostream &os, ConstantPool &cp) {
		CP_Entry* name1 = cp[bootstrap_method_attr_index];
		CP_Entry* name2 = cp[name_and_type_index];
		auto& nam1 = name1->as<CP_Utf8>();
		auto& nam2 = name2->as<CP_Utf8>();
		os << "InvokeDynamic" << std::endl;
		os << "\t\tBootstrap_method: " << nam1 <<std::endl;
		os << "\t\tName and Type: " << nam2 <<std::endl;
	}

	CP_Utf8::CP_Utf8(Reader &reader) {
		_length = reader.getNextHalfWord();
		_bytes = new uint8_t[_length];
		for (int i = 0; i < _length; ++i) {
			_bytes[i] = reader.getNextByte();
		}
	}

	CP_Utf8::~CP_Utf8() {
		delete[] _bytes;
	}

	void CP_Utf8::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "UTF-8" << std::endl;
		os << "\t\t" << *this << std::endl;
	}

	std::string CP_Utf8::toString() const {
		std::ostringstream stream;
		stream << *this;
		return stream.str();
	}

	CP_Class::CP_Class(Reader &reader) {
		name_index = reader.getNextHalfWord();
	}

	void CP_Class::printToStream(std::ostream &os, ConstantPool &cp) {
		CP_Entry* name = cp[name_index];
		auto& characters = name->as<CP_Utf8>();
		os << "Class" << std::endl;
		os << "\t\t Name index:" << name_index;
		os << "\t\t Name: "  <<characters << std::endl;
	}

	CP_MethodType::CP_MethodType(Reader &reader) {
		descriptor_index = reader.getNextHalfWord();
	}

	void CP_MethodType::printToStream(std::ostream &os, ConstantPool &cp) {
		CP_Entry* name1 = cp[descriptor_index];
		auto& characters = name1->as<CP_Utf8>();
		os << "Method Type" << std::endl;
		os << "\t\t Descriptor_index: " << descriptor_index;
		os << "\t\t Descriptor_name: " << characters << std::endl;

	}

	// END CONSTRUCTORS AND DESTRUCTORS

	// OPERATORS

	std::ostream& operator<< (std::ostream& os, const CP_Utf8& utf8) {
		auto end = utf8._bytes + utf8._length;
		auto current = utf8._bytes;
		while (current < end) {
			os << *current++;
		}
		return os;
	}

	bool operator==(const std::string& str, const CP_Utf8& utf8) {
		return str == utf8.toString();
	}

	bool operator==(const CP_Utf8& utf8, const std::string& str) {
		return str == utf8;
	}

	// END OPERATORS

}
