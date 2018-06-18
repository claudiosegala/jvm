#include <iostream>
#include <string>
#include <map>
#include "util/reader.hpp"
#include "_class/attribute.hpp"

namespace jvm {
//	Attr_Entry::Instructions Attr_Entry::instructions = {
//		{ std::stoi("00110010", nullptr, 2), std::string("aaload") },
//		{ std::stoi("01010011", nullptr, 2), std::string("aastore") },
//		{ std::stoi("00000001", nullptr, 2), std::string("aconst_null") },
//		{ std::stoi("00011001", nullptr, 2), std::string("aload") },
//		{ std::stoi("00101010", nullptr, 2), std::string("aload_0") },
//		{ std::stoi("00101011", nullptr, 2), std::string("aload_1") },
//		{ std::stoi("00101100", nullptr, 2), std::string("aload_2") },
//		{ std::stoi("00101101", nullptr, 2), std::string("aload_3") },
//		{ std::stoi("10111101", nullptr, 2), std::string("anewarray") },
//		{ std::stoi("10110000", nullptr, 2), std::string("areturn") },
//		{ std::stoi("10111110", nullptr, 2), std::string("arraylength") },
//		{ std::stoi("00111010", nullptr, 2), std::string("astore") },
//		{ std::stoi("01001011", nullptr, 2), std::string("astore_0") },
//		{ std::stoi("01001100", nullptr, 2), std::string("astore_1") },
//		{ std::stoi("01001101", nullptr, 2), std::string("astore_2") },
//		{ std::stoi("01001110", nullptr, 2), std::string("astore_3") },
//		{ std::stoi("10111111", nullptr, 2), std::string("athrow") },
//		{ std::stoi("00110011", nullptr, 2), std::string("baload") },
//		{ std::stoi("01010100", nullptr, 2), std::string("bastore") },
//		{ std::stoi("00010000", nullptr, 2), std::string("bipush") },
//		{ std::stoi("11001010", nullptr, 2), std::string("breakpoint") },
//		{ std::stoi("00110100", nullptr, 2), std::string("caload") },
//		{ std::stoi("01010101", nullptr, 2), std::string("castore") },
//		{ std::stoi("11000000", nullptr, 2), std::string("checkcast") },
//		{ std::stoi("10010000", nullptr, 2), std::string("d2f") },
//		{ std::stoi("10001110", nullptr, 2), std::string("d2i") },
//		{ std::stoi("10001111", nullptr, 2), std::string("d2l") },
//		{ std::stoi("01100011", nullptr, 2), std::string("dadd") },
//		{ std::stoi("00110001", nullptr, 2), std::string("daload") },
//		{ std::stoi("01010010", nullptr, 2), std::string("dastore") },
//		{ std::stoi("10011000", nullptr, 2), std::string("dcmpg") },
//		{ std::stoi("10010111", nullptr, 2), std::string("dcmpl") },
//		{ std::stoi("00001110", nullptr, 2), std::string("dconst_0") },
//		{ std::stoi("00001111", nullptr, 2), std::string("dconst_1") },
//		{ std::stoi("01101111", nullptr, 2), std::string("ddiv") },
//		{ std::stoi("00011000", nullptr, 2), std::string("dload") },
//		{ std::stoi("00100110", nullptr, 2), std::string("dload_0") },
//		{ std::stoi("00100111", nullptr, 2), std::string("dload_1") },
//		{ std::stoi("00101000", nullptr, 2), std::string("dload_2") },
//		{ std::stoi("00101001", nullptr, 2), std::string("dload_3") },
//		{ std::stoi("01101011", nullptr, 2), std::string("dmul") },
//		{ std::stoi("01110111", nullptr, 2), std::string("dneg") },
//		{ std::stoi("01110011", nullptr, 2), std::string("drem") },
//		{ std::stoi("10101111", nullptr, 2), std::string("dreturn") },
//		{ std::stoi("00111001", nullptr, 2), std::string("dstore") },
//		{ std::stoi("01000111", nullptr, 2), std::string("dstore_0") },
//		{ std::stoi("01001000", nullptr, 2), std::string("dstore_1") },
//		{ std::stoi("01001001", nullptr, 2), std::string("dstore_2") },
//		{ std::stoi("01001010", nullptr, 2), std::string("dstore_3") },
//		{ std::stoi("01100111", nullptr, 2), std::string("dsub") },
//		{ std::stoi("01011001", nullptr, 2), std::string("dup") },
//		{ std::stoi("01011010", nullptr, 2), std::string("dup_x1") },
//		{ std::stoi("01011011", nullptr, 2), std::string("dup_x2") },
//		{ std::stoi("01011100", nullptr, 2), std::string("dup2") },
//		{ std::stoi("01011101", nullptr, 2), std::string("dup2_x1") },
//		{ std::stoi("01011110", nullptr, 2), std::string("dup2_x2") },
//		{ std::stoi("10001101", nullptr, 2), std::string("f2d") },
//		{ std::stoi("10001011", nullptr, 2), std::string("f2i") },
//		{ std::stoi("10001100", nullptr, 2), std::string("f2l") },
//		{ std::stoi("01100010", nullptr, 2), std::string("fadd") },
//		{ std::stoi("00110000", nullptr, 2), std::string("faload") },
//		{ std::stoi("01010001", nullptr, 2), std::string("fastore") },
//		{ std::stoi("10010110", nullptr, 2), std::string("fcmpg") },
//		{ std::stoi("10010101", nullptr, 2), std::string("fcmpl") },
//		{ std::stoi("00001011", nullptr, 2), std::string("fconst_0") },
//		{ std::stoi("00001100", nullptr, 2), std::string("fconst_1") },
//		{ std::stoi("00001101", nullptr, 2), std::string("fconst_2") },
//		{ std::stoi("01101110", nullptr, 2), std::string("fdiv") },
//		{ std::stoi("00010111", nullptr, 2), std::string("fload") },
//		{ std::stoi("00100010", nullptr, 2), std::string("fload_0") },
//		{ std::stoi("00100011", nullptr, 2), std::string("fload_1") },
//		{ std::stoi("00100100", nullptr, 2), std::string("fload_2") },
//		{ std::stoi("00100101", nullptr, 2), std::string("fload_3") },
//		{ std::stoi("01101010", nullptr, 2), std::string("fmul") },
//		{ std::stoi("01110110", nullptr, 2), std::string("fneg") },
//		{ std::stoi("01110010", nullptr, 2), std::string("frem") },
//		{ std::stoi("10101110", nullptr, 2), std::string("freturn") },
//		{ std::stoi("00111000", nullptr, 2), std::string("fstore") },
//		{ std::stoi("01000011", nullptr, 2), std::string("fstore_0") },
//		{ std::stoi("01000100", nullptr, 2), std::string("fstore_1") },
//		{ std::stoi("01000101", nullptr, 2), std::string("fstore_2") },
//		{ std::stoi("01000110", nullptr, 2), std::string("fstore_3") },
//		{ std::stoi("01100110", nullptr, 2), std::string("fsub") },
//		{ std::stoi("10110100", nullptr, 2), std::string("getfield") },
//		{ std::stoi("10110010", nullptr, 2), std::string("getstatic") },
//		{ std::stoi("10100111", nullptr, 2), std::string("goto") },
//		{ std::stoi("11001000", nullptr, 2), std::string("goto_w") },
//		{ std::stoi("10010001", nullptr, 2), std::string("i2b") },
//		{ std::stoi("10010010", nullptr, 2), std::string("i2c") },
//		{ std::stoi("10000111", nullptr, 2), std::string("i2d") },
//		{ std::stoi("10000110", nullptr, 2), std::string("i2f") },
//		{ std::stoi("10000101", nullptr, 2), std::string("i2l") },
//		{ std::stoi("10010011", nullptr, 2), std::string("i2s") },
//		{ std::stoi("01100000", nullptr, 2), std::string("iadd") },
//		{ std::stoi("00101110", nullptr, 2), std::string("iaload") },
//		{ std::stoi("01111110", nullptr, 2), std::string("iand") },
//		{ std::stoi("01001111", nullptr, 2), std::string("iastore") },
//		{ std::stoi("00000010", nullptr, 2), std::string("iconst_m1") },
//		{ std::stoi("00000011", nullptr, 2), std::string("iconst_0") },
//		{ std::stoi("00000100", nullptr, 2), std::string("iconst_1") },
//		{ std::stoi("00000101", nullptr, 2), std::string("iconst_2") },
//		{ std::stoi("00000110", nullptr, 2), std::string("iconst_3") },
//		{ std::stoi("00000111", nullptr, 2), std::string("iconst_4") },
//		{ std::stoi("00001000", nullptr, 2), std::string("iconst_5") },
//		{ std::stoi("01101100", nullptr, 2), std::string("idiv") },
//		{ std::stoi("10100101", nullptr, 2), std::string("if_acmpeq") },
//		{ std::stoi("10100110", nullptr, 2), std::string("if_acmpne") },
//		{ std::stoi("10011111", nullptr, 2), std::string("if_icmpeq") },
//		{ std::stoi("10100010", nullptr, 2), std::string("if_icmpge") },
//		{ std::stoi("10100011", nullptr, 2), std::string("if_icmpgt") },
//		{ std::stoi("10100100", nullptr, 2), std::string("if_icmple") },
//		{ std::stoi("10100001", nullptr, 2), std::string("if_icmplt") },
//		{ std::stoi("10100000", nullptr, 2), std::string("if_icmpne") },
//		{ std::stoi("10011001", nullptr, 2), std::string("ifeq") },
//		{ std::stoi("10011100", nullptr, 2), std::string("ifge") },
//		{ std::stoi("10011101", nullptr, 2), std::string("ifgt") },
//		{ std::stoi("10011110", nullptr, 2), std::string("ifle") },
//		{ std::stoi("10011011", nullptr, 2), std::string("iflt") },
//		{ std::stoi("10011010", nullptr, 2), std::string("ifne") },
//		{ std::stoi("11000111", nullptr, 2), std::string("ifnonnull") },
//		{ std::stoi("11000110", nullptr, 2), std::string("ifnull") },
//		{ std::stoi("10000100", nullptr, 2), std::string("iinc") },
//		{ std::stoi("00010101", nullptr, 2), std::string("iload") },
//		{ std::stoi("00011010", nullptr, 2), std::string("iload_0") },
//		{ std::stoi("00011011", nullptr, 2), std::string("iload_1") },
//		{ std::stoi("00011100", nullptr, 2), std::string("iload_2") },
//		{ std::stoi("00011101", nullptr, 2), std::string("iload_3") },
//		{ std::stoi("11111110", nullptr, 2), std::string("impdep1") },
//		{ std::stoi("11111111", nullptr, 2), std::string("impdep2") },
//		{ std::stoi("01101000", nullptr, 2), std::string("imul") },
//		{ std::stoi("01110100", nullptr, 2), std::string("ineg") },
//		{ std::stoi("11000001", nullptr, 2), std::string("instanceof") },
//		{ std::stoi("10111010", nullptr, 2), std::string("invokedynamic") },
//		{ std::stoi("10111001", nullptr, 2), std::string("invokeinterface") },
//		{ std::stoi("10110111", nullptr, 2), std::string("invokespecial") },
//		{ std::stoi("10111000", nullptr, 2), std::string("invokestatic") },
//		{ std::stoi("10110110", nullptr, 2), std::string("invokevirtual") },
//		{ std::stoi("10000000", nullptr, 2), std::string("ior") },
//		{ std::stoi("01110000", nullptr, 2), std::string("irem") },
//		{ std::stoi("10101100", nullptr, 2), std::string("ireturn") },
//		{ std::stoi("01111000", nullptr, 2), std::string("ishl") },
//		{ std::stoi("01111010", nullptr, 2), std::string("ishr") },
//		{ std::stoi("00110110", nullptr, 2), std::string("istore") },
//		{ std::stoi("00111011", nullptr, 2), std::string("istore_0") },
//		{ std::stoi("00111100", nullptr, 2), std::string("istore_1") },
//		{ std::stoi("00111101", nullptr, 2), std::string("istore_2") },
//		{ std::stoi("00111110", nullptr, 2), std::string("istore_3") },
//		{ std::stoi("01100100", nullptr, 2), std::string("isub") },
//		{ std::stoi("01111100", nullptr, 2), std::string("iushr") },
//		{ std::stoi("10000010", nullptr, 2), std::string("ixor") },
//		{ std::stoi("10101000", nullptr, 2), std::string("jsr") },
//		{ std::stoi("11001001", nullptr, 2), std::string("jsr_w") },
//		{ std::stoi("10001010", nullptr, 2), std::string("l2d") },
//		{ std::stoi("10001001", nullptr, 2), std::string("l2f") },
//		{ std::stoi("10001000", nullptr, 2), std::string("l2i") },
//		{ std::stoi("01100001", nullptr, 2), std::string("ladd") },
//		{ std::stoi("00101111", nullptr, 2), std::string("laload") },
//		{ std::stoi("01111111", nullptr, 2), std::string("land") },
//		{ std::stoi("01010000", nullptr, 2), std::string("lastore") },
//		{ std::stoi("10010100", nullptr, 2), std::string("lcmp") },
//		{ std::stoi("00001001", nullptr, 2), std::string("lconst_0") },
//		{ std::stoi("00001010", nullptr, 2), std::string("lconst_1") },
//		{ std::stoi("00010010", nullptr, 2), std::string("ldc") },
//		{ std::stoi("00010011", nullptr, 2), std::string("ldc_w") },
//		{ std::stoi("00010100", nullptr, 2), std::string("ldc2_w") },
//		{ std::stoi("01101101", nullptr, 2), std::string("ldiv") },
//		{ std::stoi("00010110", nullptr, 2), std::string("lload") },
//		{ std::stoi("00011110", nullptr, 2), std::string("lload_0") },
//		{ std::stoi("00011111", nullptr, 2), std::string("lload_1") },
//		{ std::stoi("00100000", nullptr, 2), std::string("lload_2") },
//		{ std::stoi("00100001", nullptr, 2), std::string("lload_3") },
//		{ std::stoi("01101001", nullptr, 2), std::string("lmul") },
//		{ std::stoi("01110101", nullptr, 2), std::string("lneg") },
//		{ std::stoi("10101011", nullptr, 2), std::string("lookupswitch") },
//		{ std::stoi("10000001", nullptr, 2), std::string("lor") },
//		{ std::stoi("01110001", nullptr, 2), std::string("lrem") },
//		{ std::stoi("10101101", nullptr, 2), std::string("lreturn") },
//		{ std::stoi("01111001", nullptr, 2), std::string("lshl") },
//		{ std::stoi("01111011", nullptr, 2), std::string("lshr") },
//		{ std::stoi("00110111", nullptr, 2), std::string("lstore") },
//		{ std::stoi("00111111", nullptr, 2), std::string("lstore_0") },
//		{ std::stoi("01000000", nullptr, 2), std::string("lstore_1") },
//		{ std::stoi("01000001", nullptr, 2), std::string("lstore_2") },
//		{ std::stoi("01000010", nullptr, 2), std::string("lstore_3") },
//		{ std::stoi("01100101", nullptr, 2), std::string("lsub") },
//		{ std::stoi("01111101", nullptr, 2), std::string("lushr") },
//		{ std::stoi("10000011", nullptr, 2), std::string("lxor") },
//		{ std::stoi("11000010", nullptr, 2), std::string("monitorenter") },
//		{ std::stoi("11000011", nullptr, 2), std::string("monitorexit") },
//		{ std::stoi("11000101", nullptr, 2), std::string("multianewarray") },
//		{ std::stoi("10111011", nullptr, 2), std::string("new") },
//		{ std::stoi("10111100", nullptr, 2), std::string("newarray") },
//		{ std::stoi("00000000", nullptr, 2), std::string("nop") },
//		{ std::stoi("01010111", nullptr, 2), std::string("pop") },
//		{ std::stoi("01011000", nullptr, 2), std::string("pop2") },
//		{ std::stoi("10110101", nullptr, 2), std::string("putfield") },
//		{ std::stoi("10110011", nullptr, 2), std::string("putstatic") },
//		{ std::stoi("10101001", nullptr, 2), std::string("ret") },
//		{ std::stoi("10110001", nullptr, 2), std::string("return") },
//		{ std::stoi("00110101", nullptr, 2), std::string("saload") },
//		{ std::stoi("01010110", nullptr, 2), std::string("sastore") },
//		{ std::stoi("00010001", nullptr, 2), std::string("sipush") },
//		{ std::stoi("01011111", nullptr, 2), std::string("swap") },
//		{ std::stoi("10101010", nullptr, 2), std::string("tableswitch") },
//		{ std::stoi("11000100", nullptr, 2), std::string("wide") }
//	};

	void AttributeInfo::fill(Reader &reader, ConstantPool &cp) {
		// This maps a string to a function that returns an instance of the corresponding attribute
		static const AttributeMap m = {
				{"Code", Attr_Entry::Instantiate<Attr_Code>},
		};

		auto attr_count = reader.getNextHalfWord();
		reserve(attr_count);
		while(attr_count--) {
			auto name_index = reader.getNextHalfWord();
			auto attr_length = reader.getNextWord();
			auto name = cp[name_index]->as<CP_Utf8>().toString(<#initializer#>);
			auto it = m.find(name);

			if (it == m.end()) { // In this case, the attribute's name is not in the map
				// Add a nullptr and skip the attribute's bytes
				emplace_back();
				reader.skipBytes(attr_length);
			} else { // Instantiate the attribute and initialize with data from reader
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
		max_stack = reader.getNextHalfWord();
		max_locals = reader.getNextHalfWord();

		u4 code_length = reader.getNextWord();
		code.reserve(code_length);
		while (code_length--) {
			code.emplace_back(reader.getNextByte());
		}

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

	Attr_Exception::Attr_Exception(Reader &reader, ConstantPool &cp) {
		auto count = reader.getNextHalfWord();
		exception_index_table.reserve(count);
		while (count--) {
			exception_index_table.push_back(reader.getNextHalfWord());
		}
	}

	void Attr_Exception::printToStream(std::ostream &os, ConstantPool &pool, const std::string &prefix) {
		os << prefix << "Exception (count: " << exception_index_table.size() << ")" << std::endl;
	}
}
