#include <iostream>
#include <string>
#include <map>
#include "util/reader.hpp"
#include "class_loader/attribute.hpp"
#include "instructions/instructions.hpp"

namespace jvm {

	void AttributeInfo::fill(Reader &reader, ConstantPool &cp) {
		// This maps a string to a function that returns an instance of the corresponding attribute
		static const AttributeMap m = {
				{"Code", Attr_Entry::instantiate<Attr_Code>},
				{"Exceptions", Attr_Entry::instantiate<Attr_Exceptions>},
				{"ConstantValue", Attr_Entry::instantiate<Attr_ConstantValue>}
		};

		auto attr_count = reader.getNextHalfWord();
		reserve(attr_count);
		while(attr_count--) {
			auto name_index = reader.getNextHalfWord();
			auto attr_length = reader.getNextWord();
			auto name = cp[name_index]->toString(cp);
			auto it = m.find(name);

			if (it == m.end()) { // In this case, the attribute's name is not in the map
				// Add a nullptr and skip the attribute's bytes
				emplace_back();
				reader.skipBytes(attr_length);
			} else { // instantiate the attribute and initialize with data from reader
				auto attr = (*(it->second))(reader, cp);
				push_back(attr);
			}
		}
	}

	void AttributeInfo::printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) {
		os << prefix << "Count:" << size() << std::endl;
		for (std::shared_ptr<Attr_Entry>& ptr : *this) {
			auto attr = ptr.get();
			if (attr == nullptr) {
				os << prefix << "Undefined attribute" << std::endl;
			} else {
				attr->printToStream(os, cp, prefix + "\t");
			}
		}
	}

	Attr_Code::Attr_Code(Reader &reader, ConstantPool &cp) {
		std::vector<u1> codeData;

		max_stack = reader.getNextHalfWord();
		max_locals = reader.getNextHalfWord();

		u4 code_length = reader.getNextWord();
		codeData.reserve(code_length);
		while (code_length--) {
			codeData.emplace_back(reader.getNextByte());
		}

		code.interpret(codeData);

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

	void Attr_Code::printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) {
		os << prefix << "Code:" << std::endl;
		// TODO print mnemonics from "code" array
	}

	Attr_ConstantValue::Attr_ConstantValue(Reader &reader, ConstantPool &cp) {
		constantvalue_index = reader.getNextHalfWord();
	}

	void Attr_ConstantValue::printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) {
		os << prefix << "Constant Value: " << cp[constantvalue_index]->toString(cp) << std::endl;
	}

	Attr_Exceptions::Attr_Exceptions(Reader &reader, ConstantPool &cp) {
		auto count = reader.getNextHalfWord();
		exception_index_table.reserve(count);
		while (count--) {
			exception_index_table.push_back(reader.getNextHalfWord());
		}
	}

	void Attr_Exceptions::printToStream(std::ostream &os, ConstantPool &pool, const std::string &prefix) {
		os << prefix << "Exception (count: " << exception_index_table.size() << ")" << std::endl;
	}
}
