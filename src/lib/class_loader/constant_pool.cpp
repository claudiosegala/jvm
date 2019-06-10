#include "class_loader/constant_pool.hpp"
#include "util/JvmException.hpp"

namespace jvm {

	ConstantPool::ConstantPool() = default;

	ConstantPool::ConstantPool(Reader &reader, size_type cp_count) : vector(cp_count) {
		fill(reader, cp_count);
	}

	ConstantPool::~ConstantPool() {
//		for (auto& entry : *this) {
//			delete entry;
//		}
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
		for (std::shared_ptr<CP_Entry> ptr : *this) {
			auto entry = ptr.get();
			os << std::endl;
			os << "\t[" << std::setfill('0') << std::setw(2) << ++i << "] ";
			if (entry == nullptr) {
				os << "Large numeric continued" << std::endl;
			} else {
				entry->printToStream(os, *this);
			}
		}
	}

	std::shared_ptr<CP_Entry> ConstantPool::getNextEntry(Reader &reader, uint8_t tag) {
		switch (tag) {
			case CP_TAGS::Class:              return std::make_shared<CP_Class>(reader);
			case CP_TAGS::FieldRef:           return std::make_shared<CP_Fieldref>(reader);
			case CP_TAGS::MethodRef:          return std::make_shared<CP_Methodref>(reader);
			case CP_TAGS::InterfaceMethodRef: return std::make_shared<CP_InterfaceMethodref>(reader);
			case CP_TAGS::String:             return std::make_shared<CP_String>(reader);
			case CP_TAGS::Integer:            return std::make_shared<CP_Integer>(reader);
			case CP_TAGS::Float:              return std::make_shared<CP_Float>(reader);
			case CP_TAGS::Long:               return std::make_shared<CP_Long>(reader);
			case CP_TAGS::Double:             return std::make_shared<CP_Double>(reader);
			case CP_TAGS::NameAndType:        return std::make_shared<CP_NameAndType>(reader);
			case CP_TAGS::Utf8:               return std::make_shared<CP_Utf8>(reader);
			case CP_TAGS::MethodHandle:       return std::make_shared<CP_MethodHandle>(reader);
			case CP_TAGS::MethodType:         return std::make_shared<CP_MethodType>(reader);
			case CP_TAGS::InvokeDynamic:      return std::make_shared<CP_InvokeDynamic>(reader);
			default:                          throw JvmException("Invalid Constant Pool Tag");
		}
	}

	CP_Entry* ConstantPool::operator[](size_t index) {
		return this->at(index - 1).get();
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
		auto _name_and_type = cp[name_and_type_index];
		os << "Field Reference" << std::endl;
		os << "\t\tClass name:\t#" << class_index << " " << _class->toString(cp) << std::endl;
		os << "\t\tName and Type:\t#" << name_and_type_index << " " << _name_and_type->toString(cp) << std::endl;
	}

	std::string CP_Fieldref::toString(ConstantPool &cp) {
		auto _nameAndType = cp[name_and_type_index];
		return _nameAndType->toString(cp);
	}

	CP_Methodref::CP_Methodref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	void CP_Methodref::printToStream(std::ostream &os, ConstantPool &cp) {
		auto _class = cp[class_index];
		auto _nameAndType = cp[name_and_type_index];
		os << "Method Reference" << std::endl;
		os << "\t\tClass name:\t#" << class_index << " " <<	_class->toString(cp) << std::endl;
		os << "\t\tName and type:\t#" << name_and_type_index << " " <<_nameAndType->toString(cp) << std::endl;
	}

	std::string CP_Methodref::toString(ConstantPool &cp) {
		auto _nameAndType = cp[name_and_type_index];
		return _nameAndType->toString(cp);
	}

	CP_Float::CP_Float(Reader &reader) {
		_bytes = reader.getNextWord();
	}

	void CP_Float::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Float_info" << std::endl;
		os << "\t\t\t" << toString(cp) << std::endl;
	}

	std::string CP_Float::toString(ConstantPool &cp) {
		return std::to_string(reinterpret_cast<float&>(_bytes));
	}

	CP_Long::CP_Long(Reader &reader) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	void CP_Long::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Long_info" << std::endl;
		os << "\t\t\t" << toString(cp) << std::endl;
	}

	std::string CP_Long::toString(ConstantPool &cp) {
		uint64_t number = high_bytes;
		number = (number << 32) | low_bytes;
		auto number_signed = reinterpret_cast<int64_t&>(number);
		return std::to_string(number_signed);
	}

	CP_Double::CP_Double(Reader &reader) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	void CP_Double::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Double_info" << std::endl;
		os << "\t\t\t" << toString(cp) << std::endl;
	}

	std::string CP_Double::toString(ConstantPool &cp) {
		uint64_t number = high_bytes;
		number = (number << 32) | low_bytes;
		return std::to_string(reinterpret_cast<double&>(number));
	}

	CP_MethodHandle::CP_MethodHandle(Reader &reader) {
		reference_kind = reader.getNextByte();
		reference_index = reader.getNextHalfWord();
	}

	void CP_MethodHandle::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Method Handle" << std::endl;
//		os << "\tReference Kind: " << CP_MethodHandle::toString(cp);
		os << "\tReference: " << reference_index << std::endl;
//		CP_Entry* name1  = cp[reference_index];
//		auto& nam1 = name1->as<CP_MethodHandle>();
		os << "Method Handle Broken" << std::endl;
//		os << "\tReference Kind: " << CP_MethodHandle::toString(cp);
//		os << "\tReference: " << nam1.reference_index << std::endl;
	}

	std::string CP_MethodHandle::toString(ConstantPool &cp) {
		CP_Entry* name1  = cp[reference_index];
		auto& nam1 = name1->as<CP_MethodHandle>();
		switch(nam1.reference_kind) {
			case 0x01: return "REF_getField\n";
			case 0x02: return "REF_getStatic\n";
			case 0x03: return "REF_putField\n";
			case 0x04: return "REF_putStatic\n";
			case 0x05: return "REF_invokeVirtual\n";
			case 0x06: return "REF_invokeStatic\n";
			case 0x07: return "REF_invokeSpecial\n";
			case 0x08: return "REF_newInvokeSpecial\n";
			case 0x09: return "REF_invokeInterface\n";
			default:   return "REF_Unknown\n";
		}
	}

	CP_InterfaceMethodref::CP_InterfaceMethodref(Reader &reader) {
		class_index = reader.getNextHalfWord();
		name_and_class_index = reader.getNextHalfWord();
	}

	void CP_InterfaceMethodref::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Interface Method Reference" << std::endl;
		os << "\tClass name:\t#" << class_index  << std::endl;
		os << "\tName and type:\t#" << name_and_class_index << std::endl;
//		CP_Entry* name1 = cp[class_index];
//		CP_Entry* name2 = cp[name_and_class_index];
//		auto& nam1 = name1->as<CP_Utf8>();
//		auto& nam2 = name2->as<CP_Utf8>();

		os << "Interface Method Reference Broken" << std::endl;
//		os << "\tClass name:\t#" << class_index << nam1 << std::endl;
//		os << "\tName and type:\t#" << name_and_class_index << nam2 << std::endl;
	}

	std::string CP_InterfaceMethodref::toString(ConstantPool &cp) {
		CP_Entry* name2 = cp[name_and_class_index];
		auto& nam2 = name2->as<CP_Utf8>();
		return nam2.toString(cp);
	}

	CP_String::CP_String(Reader &reader) {
		string_index = reader.getNextHalfWord();
	}

	void CP_String::printToStream(std::ostream &os, ConstantPool &cp) {
			os << "String_info" << std::endl;
			CP_Entry* name1 = cp[string_index];
			auto& nam1 = name1->as<CP_Utf8>();
			os << "\t\t\t#" << string_index << " " << nam1 << std::endl;
	}

	std::string CP_String::toString(ConstantPool &cp) {
		CP_Entry* name1 = cp[string_index];
		auto& nam1 = name1->as<CP_Utf8>();
		return nam1.toString(cp);
	}

	CP_Integer::CP_Integer(Reader &reader) {
		_bytes = reader.getNextWord();
	}

	void CP_Integer::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Integer_info" << std::endl;
		os << "\t\t\t" << toString(cp) << std::endl;
	}

	std::string CP_Integer::toString(ConstantPool &cp) {
		return std::to_string(reinterpret_cast<int32_t&>(_bytes));
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

		os << "NameAndType_info" << std::endl;
		os << "\t\t\t#" << name_index << " " << nam1 << ":\t#" << descriptor_index << " " << nam2 << std::endl;
	}

	std::string CP_NameAndType::toString(ConstantPool &cp) {
		CP_Entry* name1 = cp[name_index];
		CP_Entry* name2 = cp[descriptor_index];
		auto& nam1 = name1->as<CP_Utf8>();
		auto& nam2 = name2->as<CP_Utf8>();
		return nam1.toString(cp);
	}

	CP_InvokeDynamic::CP_InvokeDynamic(Reader &reader) {
		bootstrap_method_attr_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	void CP_InvokeDynamic::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "InvokeDynamic" << std::endl;
		os << "\t\tBootstrap_method:\t#" << bootstrap_method_attr_index << " " <<std::endl;
		os << "\t\tName and Type:\t#" << name_and_type_index << " " << std::endl;
		//CP_Entry* name1 = cp[bootstrap_method_attr_index];
		//CP_Entry* name2 = cp[name_and_type_index];
		//auto& nam1 = name1->as<CP_Utf8>();
		//auto& nam2 = name2->as<CP_Utf8>();
		os << "InvokeDynamic Broken" << std::endl;
		//os << "\t\tBootstrap_method:\t#" << bootstrap_method_attr_index << " " << nam1 <<std::endl;
		//os << "\t\tName and Type:\t#" << name_and_type_index << " " << nam2 <<std::endl;
	}

	std::string CP_InvokeDynamic::toString(ConstantPool &cp) {
		CP_Entry* name1 = cp[bootstrap_method_attr_index];
		auto& nam1 = name1->as<CP_Utf8>();
		return nam1.toString(cp);
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
		os << "Utf8_info" << std::endl;
		os << "\t\t\t" << *this << std::endl;
	}

	std::string CP_Utf8::toString(ConstantPool &cp) {
		return toString();
	}

	std::string CP_Utf8::toString() {
		std::ostringstream stream;
		stream << *this;
		return stream.str();
	}

	CP_Class::CP_Class(Reader &reader) {
		name_index = reader.getNextHalfWord();
	}

	void CP_Class::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Class_info" << std::endl;
		os << "\t\t\t#" << name_index << " " << toString(cp) << std::endl;
	}

	std::string CP_Class::toString(ConstantPool &cp) {
		CP_Entry* name = cp[name_index];
		return name->toString(cp);
	}

	CP_MethodType::CP_MethodType(Reader &reader) {
		descriptor_index = reader.getNextHalfWord();
	}

	void CP_MethodType::printToStream(std::ostream &os, ConstantPool &cp) {
		CP_Entry* name1 = cp[descriptor_index];
		auto& characters = name1->as<CP_Utf8>();
		os << "Method Type" << std::endl;
		os << "\t\tDescriptor_index: " << descriptor_index;
		os << "\t\tDescriptor_name: " << characters << std::endl;

	}

	std::string CP_MethodType::toString(ConstantPool &cp) {
		CP_Entry* name1 = cp[descriptor_index];
		auto& characters = name1->as<CP_Utf8>();
		return characters.toString(cp);
	}

	// END CONSTRUCTORS AND DESTRUCTORS

	// OPERATORS

	std::ostream& operator<< (std::ostream& os, CP_Utf8& utf8) {
		auto end = utf8._bytes + utf8._length;
		auto current = utf8._bytes;
		while (current < end) {
			os << *current++;
		}
		return os;
	}

	bool operator==(std::string& str, CP_Utf8& utf8) {
		return str == utf8.toString();
	}

	bool operator==(CP_Utf8& utf8, std::string& str) {
		return str == utf8;
	}

	// END OPERATORS

}
