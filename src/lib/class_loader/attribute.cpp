#include "class_loader/attribute.hpp"

namespace jvm {

	void AttributeInfo::fill(Reader &reader, ConstantPool &cp) {
		auto attr_count = reader.getNextHalfWord();
		reserve(attr_count);
		while(attr_count--) {
			auto name_index = reader.getNextHalfWord();
			auto attr_length = reader.getNextWord();
			auto name = cp[name_index]->toString(cp);

			// instantiate the attribute and initialize with data from reader
			if (name == "Code") {
				auto codePtr = std::make_shared<AttrCode>(reader, cp);
				Codes.push_back(codePtr);
				push_back(codePtr);
			} else if (name == "Exceptions") {
				auto exceptionsPtr = std::make_shared<AttrExceptions>(reader, cp);
				Exceptions.push_back(exceptionsPtr);
				push_back(exceptionsPtr);
			} else if (name == "ConstantValue") {
				auto constantValuePtr = std::make_shared<AttrConstantValue>(reader, cp);
				ConstValues.push_back(constantValuePtr);
				push_back(constantValuePtr);
			} else {
				// In this case, the attribute is of a type we won't read
				// Add a nullptr and skip the attribute's bytes
				emplace_back();
				reader.skipBytes(attr_length);
			}
		}
	}

	void AttributeInfo::printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) {
		os << prefix << "Attributes count:" << size() << std::endl;
		for (std::shared_ptr<AttrEntry>& ptr : *this) {
			auto attr = ptr.get();
			if (attr == nullptr) {
				os << prefix << "Undefined attribute" << std::endl;
			} else {
				attr->printToStream(os, cp, prefix + "\t");
			}
		}
	}

	AttrCode::AttrCode(Reader &reader, ConstantPool &cp) {
		max_stack = reader.getNextHalfWord();
		max_locals = reader.getNextHalfWord();

		u4 code_length = reader.getNextWord();
		code_bytes.reserve(code_length);
		while (code_length--) {
			code_bytes.emplace_back(reader.getNextByte());
		}

		code.interpret(code_bytes);

		u2 exception_table_length = reader.getNextHalfWord();
		exception_table.resize(exception_table_length);
		for (auto& exception : exception_table) {
			exception.start_pc   = reader.getNextHalfWord();
			exception.end_pc     = reader.getNextHalfWord();
			exception.handler_pc = reader.getNextHalfWord();
			exception.catch_type = reader.getNextHalfWord();
		}

		attributes.fill(reader, cp);
	}

	void AttrCode::printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) {
		os << prefix << "Code:" << std::endl;

		for (auto pair : code) {
			auto instr = pair.second;
			auto prefix2 = prefix + "\t";
			instr->printToStream(os, prefix2);
		}
	}

	AttrConstantValue::AttrConstantValue(Reader &reader, ConstantPool &cp) {
		constantvalue_index = reader.getNextHalfWord();
	}

	void AttrConstantValue::printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) {
		os << prefix << "Constant Value: " << cp[constantvalue_index]->toString(cp) << std::endl;
	}

	AttrExceptions::AttrExceptions(Reader &reader, ConstantPool &cp) {
		auto count = reader.getNextHalfWord();
		exception_index_table.reserve(count);
		while (count--) {
			exception_index_table.push_back(reader.getNextHalfWord());
		}
	}

	void AttrExceptions::printToStream(std::ostream &os, ConstantPool &pool, const std::string &prefix) {
		os << prefix << "Exception (count: " << exception_index_table.size() << ")" << std::endl;
	}
}
