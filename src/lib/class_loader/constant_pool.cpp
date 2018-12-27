#include "class_loader/constant_pool.hpp"
#include "util/JvmException.hpp"

namespace jvm {

	ConstantPool::ConstantPool() = default;

	ConstantPool::ConstantPool(Reader &reader, size_type cp_count) : vector(cp_count) {
		fill(reader, cp_count);
	}

	ConstantPool::~ConstantPool() {
	}

	void ConstantPool::fill(Reader &reader, size_type cp_count) {
		reserve(cp_count);

		for (auto i = cp_count; i > 0; --i) {
			auto tag = reader.getNextByte();
			push_back(getNextEntry(reader, tag));
			if (tag == CPTAGS::DOUBLE || tag == CPTAGS::LONG) {
				// these take two CP entries, the next entry is valid but unusable
				push_back(nullptr);
				--i;
			}
		}

		shrink_to_fit();
	}

	void ConstantPool::printToStream(std::ostream& os) {
		auto i = 0;
		for (std::shared_ptr<CPEntry> ptr : *this) {
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

	std::shared_ptr<CPEntry> ConstantPool::getNextEntry(Reader &reader, uint8_t tag) {
		switch (tag) {
			case CPTAGS::CLASS:                return std::make_shared<CPClass>(reader);
			case CPTAGS::FIELD_REF:            return std::make_shared<CPFieldRef>(reader);
			case CPTAGS::METHOD_REF:           return std::make_shared<CPMethodRef>(reader);
			case CPTAGS::INTERFACE_METHOD_REF: return std::make_shared<CPInterfaceMethodRef>(reader);
			case CPTAGS::STRING:               return std::make_shared<CPString>(reader);
			case CPTAGS::INTEGER:              return std::make_shared<CPInteger>(reader);
			case CPTAGS::FLOAT:                return std::make_shared<CPFloat>(reader);
			case CPTAGS::LONG:                 return std::make_shared<CPLong>(reader);
			case CPTAGS::DOUBLE:               return std::make_shared<CPDouble>(reader);
			case CPTAGS::NAME_AND_TYPE:        return std::make_shared<CPNameAndType>(reader);
			case CPTAGS::UTF8:                 return std::make_shared<CPUtf8>(reader);
			case CPTAGS::METHOD_HANDLE:        return std::make_shared<CPMethodHandle>(reader);
			case CPTAGS::METHOD_TYPE:          return std::make_shared<CPMethodType>(reader);
			case CPTAGS::INVOKE_DYNAMIC:       return std::make_shared<CPInvokeDynamic>(reader);
			default:                            throw JvmException("Invalid Constant Pool Tag");
		}
	}

	CPEntry* ConstantPool::operator[](size_t index) {
		return this->at(index - 1).get();
	}

	std::ostream& operator<<(std::ostream &os, CPEntry &entry) {
		auto& utf8 = entry.as<CPUtf8>();
		os << utf8;
		return os;
	}

	// Entry
	CPEntry::CPEntry(CPTAGS _tag) : tag(_tag) {}

	CPEntry::~CPEntry() {}

	// Field ref
	CPFieldRef::CPFieldRef(Reader &reader) : CPEntry(CPTAGS::FIELD_REF) {
		class_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	void CPFieldRef::printToStream(std::ostream &os, ConstantPool &cp) {
		auto _class = cp[class_index];
		auto _name_and_type = cp[name_and_type_index];
		os << "Field Reference" << std::endl;
		os << "\t\tClass name:\t#" << class_index << " ";
		_class->printToStream(os, cp);
		os << "\t\tName and Type:\t#" << name_and_type_index << " ";
		_name_and_type->printToStream(os, cp);
	}

	std::string CPFieldRef::toString(ConstantPool &cp) {
		auto _nameAndType = cp[name_and_type_index];
		return _nameAndType->toString(cp);
	}

	// Method ref
	CPMethodRef::CPMethodRef(Reader &reader) : CPEntry(CPTAGS::METHOD_REF) {
		class_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	void CPMethodRef::printToStream(std::ostream &os, ConstantPool &cp) {
		auto _class = cp[class_index];
		auto _nameAndType = cp[name_and_type_index];
		os << "Method Reference" << std::endl;
		os << "\t\tClass name:\t#" << class_index << " ";
		_class->printToStream(os, cp);
		os << "\t\tName and type:\t#" << name_and_type_index << " ";
		_nameAndType->printToStream(os, cp);
	}

	std::string CPMethodRef::toString(ConstantPool &cp) {
		auto _nameAndType = cp[name_and_type_index];
		return _nameAndType->toString(cp);
	}

	// Float
	CPFloat::CPFloat(Reader &reader) : CPEntry(CPTAGS::FLOAT) {
		_bytes = reader.getNextWord();
	}

	void CPFloat::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Float" << std::endl;
		os << "\t\t" << toString(cp) << std::endl;
	}

	std::string CPFloat::toString(ConstantPool &cp) {
		return std::to_string(reinterpret_cast<float&>(_bytes));
	}

	// Long
	CPLong::CPLong(Reader &reader) : CPEntry(CPTAGS::LONG) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	void CPLong::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Long" << std::endl;
		os << "\t\t" << toString(cp) << std::endl;
	}

	std::string CPLong::toString(ConstantPool &cp) {
		uint64_t number = high_bytes;
		number = (number << 32) | low_bytes;
		auto number_signed = reinterpret_cast<int64_t&>(number);
		return std::to_string(number_signed);
	}

	// Double
	CPDouble::CPDouble(Reader &reader) : CPEntry(CPTAGS::DOUBLE) {
		high_bytes = reader.getNextWord();
		low_bytes = reader.getNextWord();
	}

	void CPDouble::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Double" << std::endl;
		os << "\t\t" << toString(cp) << std::endl;
	}

	std::string CPDouble::toString(ConstantPool &cp) {
		uint64_t number = high_bytes;
		number = (number << 32) | low_bytes;
		return std::to_string(reinterpret_cast<double&>(number));
	}

	// Method handle
	CPMethodHandle::CPMethodHandle(Reader &reader) : CPEntry(CPTAGS::METHOD_HANDLE) {
		reference_kind = reader.getNextByte();
		reference_index = reader.getNextHalfWord();
	}

	void CPMethodHandle::printToStream(std::ostream &os, ConstantPool &cp) {
		CPEntry* name1  = cp[reference_index];
		auto& nam1 = name1->as<CPMethodHandle>();
		os << "Method Handle" << std::endl;
		os << "\tReference Kind: " << CPMethodHandle::toString(cp);
		os << "\tReference: " << nam1.reference_index << std::endl;
	}

	std::string CPMethodHandle::toString(ConstantPool &cp) {
		CPEntry* name1  = cp[reference_index];
		auto& nam1 = name1->as<CPMethodHandle>();
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

	// Interface method ref
	CPInterfaceMethodRef::CPInterfaceMethodRef(Reader &reader) : CPEntry(CPTAGS::INTERFACE_METHOD_REF) {
		class_index = reader.getNextHalfWord();
		name_and_class_index = reader.getNextHalfWord();
	}

	void CPInterfaceMethodRef::printToStream(std::ostream &os, ConstantPool &cp) {
		CPEntry* name1 = cp[class_index];
		CPEntry* name2 = cp[name_and_class_index];
		auto& nam1 = name1->as<CPUtf8>();
		auto& nam2 = name2->as<CPUtf8>();

		os << "Interface Method Reference" << std::endl;
		os << "\tClass name: " << nam1 << std::endl;
		os << "\tName and type: " << nam2 << std::endl;
	}

	std::string CPInterfaceMethodRef::toString(ConstantPool &cp) {
		CPEntry* name2 = cp[name_and_class_index];
		auto& nam2 = name2->as<CPUtf8>();
		return nam2.toString(cp);
	}

	// String
	CPString::CPString(Reader &reader) : CPEntry(CPTAGS::STRING) {
		string_index = reader.getNextHalfWord();
	}

	void CPString::printToStream(std::ostream &os, ConstantPool &cp) {
			os << "String" << std::endl;
			CPEntry* name1 = cp[string_index];
			auto& nam1 = name1->as<CPUtf8>();
			os << "\t\t" << nam1 << std::endl;
	}

	std::string CPString::toString(ConstantPool &cp) {
		CPEntry* name1 = cp[string_index];
		auto& nam1 = name1->as<CPUtf8>();
		return nam1.toString(cp);
	}

	// Integer
	CPInteger::CPInteger(Reader &reader) : CPEntry(CPTAGS::INTEGER) {
		_bytes = reader.getNextWord();
	}

	void CPInteger::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "Integer" << std::endl;
		os << "\t\t" << toString(cp) << std::endl;
	}

	std::string CPInteger::toString(ConstantPool &cp) {
		return std::to_string(reinterpret_cast<int32_t&>(_bytes));
	}

	// Name and type
	CPNameAndType::CPNameAndType(Reader &reader) : CPEntry(CPTAGS::NAME_AND_TYPE) {
		name_index = reader.getNextHalfWord();
		descriptor_index = reader.getNextHalfWord();
	}

	void CPNameAndType::printToStream(std::ostream &os, ConstantPool &cp) {
		CPEntry* name1 = cp[name_index];
		CPEntry* name2 = cp[descriptor_index];
		auto& nam1 = name1->as<CPUtf8>();
		auto& nam2 = name2->as<CPUtf8>();

		os << nam1 << ": " << nam2 << std::endl;
	}

	std::string CPNameAndType::toString(ConstantPool &cp) {
		CPEntry* name1 = cp[name_index];
		auto& nam1 = name1->as<CPUtf8>();
		return nam1.toString(cp);
	}

	// Invoke dynamic
	CPInvokeDynamic::CPInvokeDynamic(Reader &reader) : CPEntry(CPTAGS::INVOKE_DYNAMIC) {
		bootstrap_method_attr_index = reader.getNextHalfWord();
		name_and_type_index = reader.getNextHalfWord();
	}

	void CPInvokeDynamic::printToStream(std::ostream &os, ConstantPool &cp) {
		CPEntry* name1 = cp[bootstrap_method_attr_index];
		CPEntry* name2 = cp[name_and_type_index];
		auto& nam1 = name1->as<CPUtf8>();
		auto& nam2 = name2->as<CPUtf8>();
		os << "InvokeDynamic" << std::endl;
		os << "\t\tBootstrap_method: " << nam1 <<std::endl;
		os << "\t\tName and Type: " << nam2 <<std::endl;
	}

	std::string CPInvokeDynamic::toString(ConstantPool &cp) {
		CPEntry* name1 = cp[bootstrap_method_attr_index];
		auto& nam1 = name1->as<CPUtf8>();
		return nam1.toString(cp);
	}

	// UTF8
	CPUtf8::CPUtf8(Reader &reader) : CPEntry(CPTAGS::UTF8) {
		_length = reader.getNextHalfWord();
		_bytes = new uint8_t[_length];
		for (int i = 0; i < _length; ++i) {
			_bytes[i] = reader.getNextByte();
		}
	}

	CPUtf8::~CPUtf8() {
		delete[] _bytes;
	}

	void CPUtf8::printToStream(std::ostream &os, ConstantPool &cp) {
		os << "UTF-8" << std::endl;
		os << "\t\t" << *this << std::endl;
	}

	std::string CPUtf8::toString(ConstantPool &cp) {
		return toString();
	}

	std::string CPUtf8::toString() {
		std::ostringstream stream;
		stream << *this;
		return stream.str();
	}

	std::ostream& operator<< (std::ostream& os, CPUtf8& utf8) {
		auto end = utf8._bytes + utf8._length;
		auto current = utf8._bytes;
		while (current < end) {
			os << *current++;
		}
		return os;
	}

	bool operator==(std::string& str, CPUtf8& utf8) {
		return str == utf8.toString();
	}

	bool operator==(CPUtf8& utf8, std::string& str) {
		return str == utf8;
	}

	// Class
	CPClass::CPClass(Reader &reader) : CPEntry(CPTAGS::CLASS) {
		name_index = reader.getNextHalfWord();
	}

	void CPClass::printToStream(std::ostream &os, ConstantPool &cp) {
		os << toString(cp) << std::endl;
	}

	std::string CPClass::toString(ConstantPool &cp) {
		CPEntry* name = cp[name_index];
		return name->toString(cp);
	}

	// Method type
	CPMethodType::CPMethodType(Reader &reader) : CPEntry(CPTAGS::METHOD_TYPE) {
		descriptor_index = reader.getNextHalfWord();
	}

	void CPMethodType::printToStream(std::ostream &os, ConstantPool &cp) {
		CPEntry* name1 = cp[descriptor_index];
		auto& characters = name1->as<CPUtf8>();
		os << "Method Type" << std::endl;
		os << "\t\tDescriptor_index: " << descriptor_index;
		os << "\t\tDescriptor_name: " << characters << std::endl;

	}

	std::string CPMethodType::toString(ConstantPool &cp) {
		CPEntry* name1 = cp[descriptor_index];
		auto& characters = name1->as<CPUtf8>();
		return characters.toString(cp);
	}

	// OPERATORS

	// END OPERATORS

}
