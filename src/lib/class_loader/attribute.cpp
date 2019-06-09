#include <class_loader/attribute.hpp>
#include "class_loader/attribute.hpp"

namespace jvm {

	void AttributeInfo::fill(Reader &reader, ConstantPool &cp) {
		auto attr_count = reader.getNextHalfWord();
		reserve(attr_count);
		while(attr_count--) {
			auto name_index = reader.getNextHalfWord();
			auto attr_length = reader.getNextWord(); // only used to skip if not implemented
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
			}else if (name == "SourceFile") {
				auto SourceFilePtr = std::make_shared<AttrSourceFile>(reader, cp);
				SourceFile.push_back(SourceFilePtr);
				push_back(SourceFilePtr);
			}else if (name == "LineNumberTable") {
				auto LineNumberTablePtr = std::make_shared<AttrLineNumberTable>(reader, cp);
				LineNumberTable.push_back(LineNumberTablePtr);
				push_back(LineNumberTablePtr);
			} else if(name == "LocalVariableTable") {
				auto LocalVariableTablePtr = std::make_shared<AttrLocalVariableTable>(reader, cp);
				LocalVariableTable.push_back(LocalVariableTablePtr);
				push_back(LocalVariableTablePtr);
			}else if (name == "BootstrapMethods") {
				auto BootstrapMethodsPtr = std::make_shared<AttrBootstrapMethods>(reader, cp);
				BootstrapMethods.push_back(BootstrapMethodsPtr);
				push_back(BootstrapMethodsPtr);
			} else {
				std::cout << "Skipped: " << name << std::endl;
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
				auto res = prefix + "\t";
				attr->printToStream(os, cp, res);
			}
		}
	}

	// ============= CODE =============
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

	void AttrCode::printToStream(std::ostream &os, ConstantPool &cp, std::string &prefix) {
		os << prefix << "Code:" << std::endl;

		for (auto pair : code) {
			auto instr = pair.second;
			auto prefix2 = prefix + "\t";
			auto fakeprefix = std::string("");
			os << prefix2 << pair.first << ": ";
			instr->printToStream(os, fakeprefix, cp);
		}
		attributes.printToStream(os, cp, "\t\t");
	}
	// ==================================

	// =========CONSTANT VALUE===========
	AttrConstantValue::AttrConstantValue(Reader &reader, ConstantPool &cp) {
		constantvalue_index = reader.getNextHalfWord();
	}

	void AttrConstantValue::printToStream(std::ostream &os, ConstantPool &cp, std::string &prefix) {
		os << prefix << "Constant Value: " << cp[constantvalue_index]->toString(cp) << std::endl;

	}
	// =================================

	// ============= EXCEPTIONS =============
	AttrExceptions::AttrExceptions(Reader &reader, ConstantPool &cp) {
		auto count = reader.getNextHalfWord();
		exception_index_table.reserve(count);
		while (count--) {
			exception_index_table.push_back(reader.getNextHalfWord());
		}
	}

	void AttrExceptions::printToStream(std::ostream &os, ConstantPool &pool, std::string &prefix) {
		os << prefix << "Exception (count: " << exception_index_table.size() << ")" << std::endl;
	}
	// =======================================

	// ============= SOURCE FILE =============
	AttrSourceFile::AttrSourceFile(Reader &reader, ConstantPool &cp) {
		sourcefile_index = reader.getNextHalfWord();
	}

	void AttrSourceFile::printToStream(std::ostream &os, ConstantPool &cp, std::string &prefix) {
		os << prefix << "Source File: " << cp[sourcefile_index]->toString(cp) << std::endl;
	}
	// =======================================

	// ============= LINE NUMBER TABLE =============
	AttrLineNumberTable::AttrLineNumberTable(Reader &reader, ConstantPool &cp) {
			line_number_table_length = reader.getNextHalfWord();
			for (u2 i = 0; i < line_number_table_length; i++) {
					line_number_table_entry item;
					item.start_pc = reader.getNextHalfWord();
					item.line_number = reader.getNextHalfWord();
					line_number_table.push_back(item);
			}
	}

	void AttrLineNumberTable::printToStream(std::ostream &os, ConstantPool &cp, std::string &prefix) {
			os << prefix << "LineNumberTable:" << std::endl;
			os << prefix << "\t" << "Nr\t|start_pc\t|line_number " << std::endl;
			for (u2 i = 0; i < line_number_table_length; i++) {
					line_number_table_entry item = line_number_table.at(i);
					auto prefix2 = prefix + "\t";
					os << prefix2 << i << "\t|" << item.start_pc << "\t\t\t|"<< item.line_number << std::endl;
			}
	}
	// =============================================

	// =========== LOCAL VARIABLE TABLE ============
	AttrLocalVariableTable::AttrLocalVariableTable(Reader &reader, ConstantPool &cp) {
		local_variable_table_length = reader.getNextHalfWord();
		for(u2 i = 0; i < local_variable_table_length; i++) {
			local_variable_table_entry item;
			item.start_pc = reader.getNextHalfWord();
			item.length = reader.getNextHalfWord();
			item.name_index = reader.getNextHalfWord();
			item.descriptor_index = reader.getNextHalfWord();
			item.index = reader.getNextHalfWord();

			local_variable_table.push_back(item);
		}
	}

	void AttrLocalVariableTable::printToStream(std::ostream &os, ConstantPool &cp, std::string &prefix) {
		os << prefix << "LocalVariableTable:" << std::endl;
		os << prefix << "\t" <<
			"Nr\t|start_pc\t|length\t|name\t\t|descriptor\t\t\t|index " << std::endl;

		for(u2 i = 0; i < local_variable_table_length; i++) {
			local_variable_table_entry item = local_variable_table.at(i);
			auto prefix2 = prefix + '\t';
			os << prefix2 << i << "\t|" << item.start_pc << "\t\t|" << item.length << "\t|" <<
				cp[item.name_index]->toString(cp) << "\t\t|" << cp[item.descriptor_index]->toString(cp) << "\t\t|" << item.index << std::endl;
		}
	}

	// =============================================

    AttrBootstrapMethods::AttrBootstrapMethods(Reader &reader, ConstantPool &cp) {
	    num_bootstrap_methods = reader.getNextHalfWord();
        for (u2 i = 0; i < num_bootstrap_methods; ++i) {
            bootstrap_methods_entry item;
            item.bootstrap_method_ref = reader.getNextHalfWord();
            item.num_bootstrap_arguments = reader.getNextHalfWord();
            for(u2 j = 0; j < num_bootstrap_methods; j++){
                item.bootstrap_arguments.push_back(reader.getNextHalfWord());
            }
            bootstrap_methods.push_back(item);
        }
	}

	void AttrBootstrapMethods::printToStream(std::ostream &os, jvm::ConstantPool &cp, std::string &prefix) {
	    os << prefix << "BootstrapMethods:" << std::endl;
	    os << prefix << "\t" << "Nr:\t|Bootstrap Method\t|Arguments " << std::endl;
	    for (u2 i = 0; i < num_bootstrap_methods; i++){
	        bootstrap_methods_entry item = bootstrap_methods.at(i);
	        auto prefix2 = prefix + "\t";
	        os << prefix2 << i << "\t|" << cp[item.bootstrap_method_ref]->toString(cp) << "\t|" << cp[item.bootstrap_arguments[0]]->toString(cp) << std::endl;
	        if(item.num_bootstrap_arguments){
	            for(u2 j = 1; j < item.num_bootstrap_arguments ; j++){
                    os << prefix2 << "\t\t\t|" << cp[item.bootstrap_arguments[0]]->toString(cp) << std::endl;
                }
	        }
	    }
	}
// LOCALVARIABLETYPETABLE --- não testado
	AttrLocalVariableTypeTable::AttrLocalVariableTypeTable(Reader &reader, ConstantPool &cp) {
        local_variable_type_table_length = reader.getNextHalfWord();
        for (u2 i = 0; i < local_variable_type_table_length; i++) {
			local_variable_type_table_entry item;
            item.start_pc = reader.getNextHalfWord();
            item.length = reader.getNextHalfWord();
			item.name_index = reader.getNextHalfWord();
			item.signature_index = reader.getNextHalfWord();
			item.index = reader.getNextHalfWord();
			local_variable_type_table.push_back(item);
        }
    }

	void AttrLocalVariableTypeTable::printToStream(std::ostream &os, ConstantPool &cp,std::string &prefix ){
		os <<prefix << "LocalVariableTypeTable:" << std::endl;
		for(u2 i=0;i < local_variable_type_table_length; i++){
			local_variable_type_table_entry item = local_variable_type_table.at(i);
			auto prefix2 = prefix + "\t";
			os << prefix2 << i << "\t" << item.start_pc << "\t\t\t ->" << item.length << "\t\t\t ->" << item.name_index << "\t\t\t ->"
				<< item.signature_index << "\t\t\t ->" <<item.index << std::endl;
		}
}
