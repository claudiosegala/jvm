#include <string>
#include <iostream>
#include "instructions/instructions.hpp"

namespace jvm {

	// Code

	const InstructionInstantiator Code::instruction_set[256] = {
			Instruction::instantiate<op_nop>,               // 00
			Instruction::instantiate<op_aconst_null>,       // 01
			Instruction::instantiate<op_iconst_m1>,         // 02
			Instruction::instantiate<op_iconst_0>,          // 03
			Instruction::instantiate<op_iconst_1>,          // 04
			Instruction::instantiate<op_iconst_2>,          // 05
			Instruction::instantiate<op_iconst_3>,          // 06
			Instruction::instantiate<op_iconst_4>,          // 07
			Instruction::instantiate<op_iconst_5>,          // 08
			Instruction::instantiate<op_lconst_0>,          // 09
			Instruction::instantiate<op_lconst_1>,          // 10
			Instruction::instantiate<op_fconst_0>,          // 11
			Instruction::instantiate<op_fconst_1>,          // 12
			Instruction::instantiate<op_fconst_2>,          // 13
			Instruction::instantiate<op_dconst_0>,          // 14
			Instruction::instantiate<op_dconst_1>,          // 15
			Instruction::instantiate<op_bipush>,            // 16
			Instruction::instantiate<op_sipush>,            // 17
			Instruction::instantiate<op_ldc>,               // 18
			Instruction::instantiate<op_ldc_w>,             // 19
			Instruction::instantiate<op_ldc2_w>,            // 20
			Instruction::instantiate<op_iload>,             // 21
			Instruction::instantiate<op_lload>,             // 22
			Instruction::instantiate<op_fload>,             // 23
			Instruction::instantiate<op_dload>,             // 24
			Instruction::instantiate<op_aload>,             // 25
			Instruction::instantiate<op_iload_0>,           // 26
			Instruction::instantiate<op_iload_1>,           // 27
			Instruction::instantiate<op_iload_2>,           // 28
			Instruction::instantiate<op_iload_3>,           // 29
			Instruction::instantiate<op_lload_0>,           // 30
			Instruction::instantiate<op_lload_1>,           // 31
			Instruction::instantiate<op_lload_2>,           // 32
			Instruction::instantiate<op_lload_3>,           // 33
			Instruction::instantiate<op_fload_0>,           // 34
			Instruction::instantiate<op_fload_1>,           // 35
			Instruction::instantiate<op_fload_2>,           // 36
			Instruction::instantiate<op_fload_3>,           // 37
			Instruction::instantiate<op_dload_0>,           // 38
			Instruction::instantiate<op_dload_1>,           // 39
			Instruction::instantiate<op_dload_2>,           // 40
			Instruction::instantiate<op_dload_3>,           // 41
			Instruction::instantiate<op_aload_0>,           // 42
			Instruction::instantiate<op_aload_1>,           // 43
			Instruction::instantiate<op_aload_2>,           // 44
			Instruction::instantiate<op_aload_3>,           // 45
			Instruction::instantiate<op_iaload>,            // 46
			Instruction::instantiate<op_laload>,            // 47
			Instruction::instantiate<op_faload>,            // 48
			Instruction::instantiate<op_daload>,            // 49
			Instruction::instantiate<op_aaload>,            // 50
			Instruction::instantiate<op_baload>,            // 51
			Instruction::instantiate<op_caload>,            // 52
			Instruction::instantiate<op_saload>,            // 53
			Instruction::instantiate<op_istore>,            // 54
			Instruction::instantiate<op_lstore>,            // 55
			Instruction::instantiate<op_fstore>,            // 56
			Instruction::instantiate<op_dstore>,            // 57
			Instruction::instantiate<op_astore>,            // 58
			Instruction::instantiate<op_istore_0>,          // 59
			Instruction::instantiate<op_istore_1>,          // 60
			Instruction::instantiate<op_istore_2>,          // 61
			Instruction::instantiate<op_istore_3>,          // 62
			Instruction::instantiate<op_lstore_0>,          // 63
			Instruction::instantiate<op_lstore_1>,          // 64
			Instruction::instantiate<op_lstore_2>,          // 65
			Instruction::instantiate<op_lstore_3>,          // 66
			Instruction::instantiate<op_fstore_0>,          // 67
			Instruction::instantiate<op_fstore_1>,          // 68
			Instruction::instantiate<op_fstore_2>,          // 69
			Instruction::instantiate<op_fstore_3>,          // 70
			Instruction::instantiate<op_dstore_0>,          // 71
			Instruction::instantiate<op_dstore_1>,          // 72
			Instruction::instantiate<op_dstore_2>,          // 73
			Instruction::instantiate<op_dstore_3>,          // 74
			Instruction::instantiate<op_astore_0>,          // 75
			Instruction::instantiate<op_astore_1>,          // 76
			Instruction::instantiate<op_astore_2>,          // 77
			Instruction::instantiate<op_astore_3>,          // 78
			Instruction::instantiate<op_iastore>,           // 79
			Instruction::instantiate<op_lastore>,           // 80
			Instruction::instantiate<op_fastore>,           // 81
			Instruction::instantiate<op_dastore>,           // 82
			Instruction::instantiate<op_aastore>,           // 83
			Instruction::instantiate<op_bastore>,           // 84
			Instruction::instantiate<op_castore>,           // 85
			Instruction::instantiate<op_sastore>,           // 86
			Instruction::instantiate<op_pop>,               // 87
			Instruction::instantiate<op_pop2>,              // 88
			Instruction::instantiate<op_dup>,               // 89
			Instruction::instantiate<op_dup_x1>,            // 90
			Instruction::instantiate<op_dup_x2>,            // 91
			Instruction::instantiate<op_dup2>,              // 92
			Instruction::instantiate<op_dup2_x1>,           // 93
			Instruction::instantiate<op_dup2_x2>,           // 94
			Instruction::instantiate<op_swap>,              // 95
			Instruction::instantiate<op_iadd>,              // 96
			Instruction::instantiate<op_ladd>,              // 97
			Instruction::instantiate<op_fadd>,              // 98
			Instruction::instantiate<op_dadd>,              // 99
			Instruction::instantiate<op_isub>,              // 100
			Instruction::instantiate<op_lsub>,              // 101
			Instruction::instantiate<op_fsub>,              // 102
			Instruction::instantiate<op_dsub>,              // 103
			Instruction::instantiate<op_imul>,              // 104
			Instruction::instantiate<op_lmul>,              // 105
			Instruction::instantiate<op_fmul>,              // 106
			Instruction::instantiate<op_dmul>,              // 107
			Instruction::instantiate<op_idiv>,              // 108
			Instruction::instantiate<op_ldiv>,              // 109
			Instruction::instantiate<op_fdiv>,              // 110
			Instruction::instantiate<op_ddiv>,              // 111
			Instruction::instantiate<op_irem>,              // 112
			Instruction::instantiate<op_lrem>,              // 113
			Instruction::instantiate<op_frem>,              // 114
			Instruction::instantiate<op_drem>,              // 115
			Instruction::instantiate<op_ineg>,              // 116
			Instruction::instantiate<op_lneg>,              // 117
			Instruction::instantiate<op_fneg>,              // 118
			Instruction::instantiate<op_dneg>,              // 119
			Instruction::instantiate<op_ishl>,              // 120
			Instruction::instantiate<op_lshl>,              // 121
			Instruction::instantiate<op_ishr>,              // 122
			Instruction::instantiate<op_lshr>,              // 123
			Instruction::instantiate<op_iushr>,             // 124
			Instruction::instantiate<op_lushr>,             // 125
			Instruction::instantiate<op_iand>,              // 126
			Instruction::instantiate<op_land>,              // 127
			Instruction::instantiate<op_ior>,               // 128
			Instruction::instantiate<op_lor>,               // 129
			Instruction::instantiate<op_ixor>,              // 130
			Instruction::instantiate<op_lxor>,              // 131
			Instruction::instantiate<op_iinc>,              // 132
			Instruction::instantiate<op_i2l>,               // 133
			Instruction::instantiate<op_i2f>,               // 134
			Instruction::instantiate<op_i2d>,               // 135
			Instruction::instantiate<op_l2i>,               // 136
			Instruction::instantiate<op_l2f>,               // 137
			Instruction::instantiate<op_l2d>,               // 138
			Instruction::instantiate<op_f2i>,               // 139
			Instruction::instantiate<op_f2l>,               // 140
			Instruction::instantiate<op_f2d>,               // 141
			Instruction::instantiate<op_d2i>,               // 142
			Instruction::instantiate<op_d2l>,               // 143
			Instruction::instantiate<op_d2f>,               // 144
			Instruction::instantiate<op_i2b>,               // 145
			Instruction::instantiate<op_i2c>,               // 146
			Instruction::instantiate<op_i2s>,               // 147
			Instruction::instantiate<op_lcmp>,              // 148
			Instruction::instantiate<op_fcmpl>,             // 149
			Instruction::instantiate<op_fcmpg>,             // 150
			Instruction::instantiate<op_dcmpl>,             // 151
			Instruction::instantiate<op_dcmpg>,             // 152
			Instruction::instantiate<op_ifeq>,              // 153
			Instruction::instantiate<op_ifne>,              // 154
			Instruction::instantiate<op_iflt>,              // 155
			Instruction::instantiate<op_ifge>,              // 156
			Instruction::instantiate<op_ifgt>,              // 157
			Instruction::instantiate<op_ifle>,              // 158
			Instruction::instantiate<op_if_icmpeq>,         // 159
			Instruction::instantiate<op_if_icmpne>,         // 160
			Instruction::instantiate<op_if_icmplt>,         // 161
			Instruction::instantiate<op_if_icmpge>,         // 162
			Instruction::instantiate<op_if_icmpgt>,         // 163
			Instruction::instantiate<op_if_icmple>,         // 164
			Instruction::instantiate<op_if_acmpeq>,         // 165
			Instruction::instantiate<op_if_acmpne>,         // 166
			Instruction::instantiate<op_goto_jvm>,          // 167
			Instruction::instantiate<op_jsr>,               // 168
			Instruction::instantiate<op_ret>,               // 169
			Instruction::instantiate<op_tableswitch>,       // 170
			Instruction::instantiate<op_ireturn>,           // 171
			Instruction::instantiate<op_lreturn>,           // 172
			Instruction::instantiate<op_freturn>,           // 173
			Instruction::instantiate<op_dreturn>,           // 174
			Instruction::instantiate<op_areturn>,           // 175
			Instruction::instantiate<op_return_jvm>,        // 176
			nullptr,                                     // 177
			Instruction::instantiate<op_getstatic>,         // 178
			Instruction::instantiate<op_putstatic>,         // 179
			Instruction::instantiate<op_getfield>,          // 180
			Instruction::instantiate<op_putfield>,          // 181
			Instruction::instantiate<op_invokevirtual>,     // 182
			Instruction::instantiate<op_invokespecial>,     // 183
			Instruction::instantiate<op_invokestatic>,      // 184
			Instruction::instantiate<op_invokeinterface>,   // 185
			Instruction::instantiate<op_invokedynamic>,     // 186
			Instruction::instantiate<op_new_jvm>,           // 187
			Instruction::instantiate<op_newarray>,          // 188
			Instruction::instantiate<op_anewarray>,         // 189
			Instruction::instantiate<op_arraylength>,       // 190
			Instruction::instantiate<op_athrow>,            // 191
			Instruction::instantiate<op_checkcast>,         // 192
			Instruction::instantiate<op_instanceof>,        // 193
			Instruction::instantiate<op_monitorenter>,      // 194
			Instruction::instantiate<op_monitorexit>,       // 195
			Instruction::instantiate<op_wide>,              // 196
			Instruction::instantiate<op_multianewarray>,    // 197
			Instruction::instantiate<op_ifnull>,            // 198
			Instruction::instantiate<op_ifnonnull>,         // 199
			Instruction::instantiate<op_goto_w>,            // 200
			Instruction::instantiate<op_jsr_w>,             // 201
			Instruction::instantiate<op_breakpoint>,        // 202
			nullptr,                                     // 203
			nullptr,                                     // 204
			nullptr,                                     // 205
			nullptr,                                     // 206
			nullptr,                                     // 207
			nullptr,                                     // 208
			nullptr,                                     // 209
			nullptr,                                     // 210
			nullptr,                                     // 211
			nullptr,                                     // 212
			nullptr,                                     // 213
			nullptr,                                     // 214
			nullptr,                                     // 215
			nullptr,                                     // 216
			nullptr,                                     // 217
			nullptr,                                     // 218
			nullptr,                                     // 219
			nullptr,                                     // 220
			nullptr,                                     // 221
			nullptr,                                     // 222
			nullptr,                                     // 223
			nullptr,                                     // 224
			nullptr,                                     // 225
			nullptr,                                     // 226
			nullptr,                                     // 227
			nullptr,                                     // 228
			nullptr,                                     // 229
			nullptr,                                     // 230
			nullptr,                                     // 231
			nullptr,                                     // 232
			nullptr,                                     // 233
			nullptr,                                     // 234
			nullptr,                                     // 235
			nullptr,                                     // 236
			nullptr,                                     // 237
			nullptr,                                     // 238
			nullptr,                                     // 239
			nullptr,                                     // 240
			nullptr,                                     // 241
			nullptr,                                     // 242
			nullptr,                                     // 243
			nullptr,                                     // 244
			nullptr,                                     // 245
			nullptr,                                     // 246
			nullptr,                                     // 247
			nullptr,                                     // 248
			nullptr,                                     // 249
			nullptr,                                     // 250
			nullptr,                                     // 251
			nullptr,                                     // 252
			nullptr,                                     // 253
			Instruction::instantiate<op_impdep1>,           // 254
			Instruction::instantiate<op_impdep2>            // 255
	};

	void Code::interpret(std::vector<u1>& data) {
		for (uint32_t i = 0; i < data.size(); i++) {
			auto opcode = data[i];
			auto instr = getInstr(opcode);
			auto paramsRead = instr->fillParams(i, data);

			i += paramsRead;
		}
	}

	std::shared_ptr<Instruction> Code::getInstr (const u1& opcode) {

		auto instrInstantiator = instruction_set[opcode];

		if (instrInstantiator) {
			throw "This op-code does not exist!";
		}

		return instrInstantiator();
	}

	void Code::printToStream(std::ostream &os, std::string &prefix) {
		auto newPrefix = prefix + "\t";

		os << prefix << "Opcodes:" << std::endl;

		for (std::shared_ptr<Instruction>& ptr : *this) {
			auto instr = ptr.get();

			if (instr != nullptr) {
				instr->printToStream(os, newPrefix);
			}
		}
	}


	// nop

	op_nop::op_nop() {

	}

	void op_nop::execute() {

	}

	void op_nop::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_nop::getName () {
		return "nop";
	}

	uint32_t op_nop::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aconst_null

	op_aconst_null::op_aconst_null() {

	}

	void op_aconst_null::execute() {

	}

	void op_aconst_null::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_aconst_null::getName () {
		return "aconst_null";
	}

	uint32_t op_aconst_null::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_m1

	op_iconst_m1::op_iconst_m1() {

	}

	void op_iconst_m1::execute() {

	}

	void op_iconst_m1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iconst_m1::getName () {
		return "iconst_m1";
	}

	uint32_t op_iconst_m1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_0

	op_iconst_0::op_iconst_0() {

	}

	void op_iconst_0::execute() {

	}

	void op_iconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iconst_0::getName () {
		return "iconst_0";
	}

	uint32_t op_iconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_1

	op_iconst_1::op_iconst_1() {

	}

	void op_iconst_1::execute() {

	}

	void op_iconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iconst_1::getName () {
		return "iconst_1";
	}

	uint32_t op_iconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_2

	op_iconst_2::op_iconst_2() {

	}

	void op_iconst_2::execute() {

	}

	void op_iconst_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iconst_2::getName () {
		return "iconst_2";
	}

	uint32_t op_iconst_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_3

	op_iconst_3::op_iconst_3() {

	}

	void op_iconst_3::execute() {

	}

	void op_iconst_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iconst_3::getName () {
		return "iconst_3";
	}

	uint32_t op_iconst_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_4

	op_iconst_4::op_iconst_4() {

	}

	void op_iconst_4::execute() {

	}

	void op_iconst_4::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iconst_4::getName () {
		return "iconst_4";
	}

	uint32_t op_iconst_4::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_5

	op_iconst_5::op_iconst_5() {

	}

	void op_iconst_5::execute() {

	}

	void op_iconst_5::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iconst_5::getName () {
		return "iconst_5";
	}

	uint32_t op_iconst_5::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lconst_0

	op_lconst_0::op_lconst_0() {

	}

	void op_lconst_0::execute() {

	}

	void op_lconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lconst_0::getName () {
		return "lconst_0";
	}

	uint32_t op_lconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lconst_1

	op_lconst_1::op_lconst_1() {

	}

	void op_lconst_1::execute() {

	}

	void op_lconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lconst_1::getName () {
		return "lconst_1";
	}

	uint32_t op_lconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_0

	op_fconst_0::op_fconst_0() {

	}

	void op_fconst_0::execute() {

	}

	void op_fconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fconst_0::getName () {
		return "fconst_0";
	}

	uint32_t op_fconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_1

	op_fconst_1::op_fconst_1() {

	}

	void op_fconst_1::execute() {

	}

	void op_fconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fconst_1::getName () {
		return "fconst_1";
	}

	uint32_t op_fconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_2

	op_fconst_2::op_fconst_2() {

	}

	void op_fconst_2::execute() {

	}

	void op_fconst_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fconst_2::getName () {
		return "fconst_2";
	}

	uint32_t op_fconst_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dconst_0

	op_dconst_0::op_dconst_0() {

	}

	void op_dconst_0::execute() {

	}

	void op_dconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dconst_0::getName () {
		return "dconst_0";
	}

	uint32_t op_dconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dconst_1

	op_dconst_1::op_dconst_1() {

	}

	void op_dconst_1::execute() {

	}

	void op_dconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dconst_1::getName () {
		return "dconst_1";
	}

	uint32_t op_dconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// bipush

	op_bipush::op_bipush() {

	}

	void op_bipush::execute() {

	}

	void op_bipush::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_bipush::getName () {
		return "bipush";
	}

	uint32_t op_bipush::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// sipush

	op_sipush::op_sipush() {

	}

	void op_sipush::execute() {

	}

	void op_sipush::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_sipush::getName () {
		return "sipush";
	}

	uint32_t op_sipush::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ldc

	op_ldc::op_ldc() {

	}

	void op_ldc::execute() {

	}

	void op_ldc::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ldc::getName () {
		return "ldc";
	}

	uint32_t op_ldc::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ldc_w

	op_ldc_w::op_ldc_w() {

	}

	void op_ldc_w::execute() {

	}

	void op_ldc_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ldc_w::getName () {
		return "ldc_w";
	}

	uint32_t op_ldc_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ldc2_w

	op_ldc2_w::op_ldc2_w() {

	}

	void op_ldc2_w::execute() {

	}

	void op_ldc2_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ldc2_w::getName () {
		return "ldc2_w";
	}

	uint32_t op_ldc2_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload

	op_iload::op_iload() {

	}

	void op_iload::execute() {

	}

	void op_iload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iload::getName () {
		return "iload";
	}

	uint32_t op_iload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload

	op_lload::op_lload() {

	}

	void op_lload::execute() {

	}

	void op_lload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lload::getName () {
		return "lload";
	}

	uint32_t op_lload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload

	op_fload::op_fload() {

	}

	void op_fload::execute() {

	}

	void op_fload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fload::getName () {
		return "fload";
	}

	uint32_t op_fload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload

	op_dload::op_dload() {

	}

	void op_dload::execute() {

	}

	void op_dload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dload::getName () {
		return "dload";
	}

	uint32_t op_dload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload

	op_aload::op_aload() {

	}

	void op_aload::execute() {

	}

	void op_aload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_aload::getName () {
		return "aload";
	}

	uint32_t op_aload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_0

	op_iload_0::op_iload_0() {

	}

	void op_iload_0::execute() {

	}

	void op_iload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iload_0::getName () {
		return "iload_0";
	}

	uint32_t op_iload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_1

	op_iload_1::op_iload_1() {

	}

	void op_iload_1::execute() {

	}

	void op_iload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iload_1::getName () {
		return "iload_1";
	}

	uint32_t op_iload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_2

	op_iload_2::op_iload_2() {

	}

	void op_iload_2::execute() {

	}

	void op_iload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iload_2::getName () {
		return "iload_2";
	}

	uint32_t op_iload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_3

	op_iload_3::op_iload_3() {

	}

	void op_iload_3::execute() {

	}

	void op_iload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iload_3::getName () {
		return "iload_3";
	}

	uint32_t op_iload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_0

	op_lload_0::op_lload_0() {

	}

	void op_lload_0::execute() {

	}

	void op_lload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lload_0::getName () {
		return "lload_0";
	}

	uint32_t op_lload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_1

	op_lload_1::op_lload_1() {

	}

	void op_lload_1::execute() {

	}

	void op_lload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lload_1::getName () {
		return "lload_1";
	}

	uint32_t op_lload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_2

	op_lload_2::op_lload_2() {

	}

	void op_lload_2::execute() {

	}

	void op_lload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lload_2::getName () {
		return "lload_2";
	}

	uint32_t op_lload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_3

	op_lload_3::op_lload_3() {

	}

	void op_lload_3::execute() {

	}

	void op_lload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lload_3::getName () {
		return "lload_3";
	}

	uint32_t op_lload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_0

	op_fload_0::op_fload_0() {

	}

	void op_fload_0::execute() {

	}

	void op_fload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fload_0::getName () {
		return "fload_0";
	}

	uint32_t op_fload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_1

	op_fload_1::op_fload_1() {

	}

	void op_fload_1::execute() {

	}

	void op_fload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fload_1::getName () {
		return "fload_1";
	}

	uint32_t op_fload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_2

	op_fload_2::op_fload_2() {

	}

	void op_fload_2::execute() {

	}

	void op_fload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fload_2::getName () {
		return "fload_2";
	}

	uint32_t op_fload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_3

	op_fload_3::op_fload_3() {

	}

	void op_fload_3::execute() {

	}

	void op_fload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fload_3::getName () {
		return "fload_3";
	}

	uint32_t op_fload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_0

	op_dload_0::op_dload_0() {

	}

	void op_dload_0::execute() {

	}

	void op_dload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dload_0::getName () {
		return "dload_0";
	}

	uint32_t op_dload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_1

	op_dload_1::op_dload_1() {

	}

	void op_dload_1::execute() {

	}

	void op_dload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dload_1::getName () {
		return "dload_1";
	}

	uint32_t op_dload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_2

	op_dload_2::op_dload_2() {

	}

	void op_dload_2::execute() {

	}

	void op_dload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dload_2::getName () {
		return "dload_2";
	}

	uint32_t op_dload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_3

	op_dload_3::op_dload_3() {

	}

	void op_dload_3::execute() {

	}

	void op_dload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dload_3::getName () {
		return "dload_3";
	}

	uint32_t op_dload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_0

	op_aload_0::op_aload_0() {

	}

	void op_aload_0::execute() {

	}

	void op_aload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_aload_0::getName () {
		return "aload_0";
	}

	uint32_t op_aload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_1

	op_aload_1::op_aload_1() {

	}

	void op_aload_1::execute() {

	}

	void op_aload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_aload_1::getName () {
		return "aload_1";
	}

	uint32_t op_aload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_2

	op_aload_2::op_aload_2() {

	}

	void op_aload_2::execute() {

	}

	void op_aload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_aload_2::getName () {
		return "aload_2";
	}

	uint32_t op_aload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_3

	op_aload_3::op_aload_3() {

	}

	void op_aload_3::execute() {

	}

	void op_aload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_aload_3::getName () {
		return "aload_3";
	}

	uint32_t op_aload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iaload

	op_iaload::op_iaload() {

	}

	void op_iaload::execute() {

	}

	void op_iaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iaload::getName () {
		return "iaload";
	}

	uint32_t op_iaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// laload

	op_laload::op_laload() {

	}

	void op_laload::execute() {

	}

	void op_laload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_laload::getName () {
		return "laload";
	}

	uint32_t op_laload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// faload

	op_faload::op_faload() {

	}

	void op_faload::execute() {

	}

	void op_faload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_faload::getName () {
		return "faload";
	}

	uint32_t op_faload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// daload

	op_daload::op_daload() {

	}

	void op_daload::execute() {

	}

	void op_daload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_daload::getName () {
		return "daload";
	}

	uint32_t op_daload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aaload

	op_aaload::op_aaload() {

	}

	void op_aaload::execute() {

	}

	void op_aaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_aaload::getName () {
		return "aaload";
	}

	uint32_t op_aaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// baload

	op_baload::op_baload() {

	}

	void op_baload::execute() {

	}

	void op_baload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_baload::getName () {
		return "baload";
	}

	uint32_t op_baload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// caload

	op_caload::op_caload() {

	}

	void op_caload::execute() {

	}

	void op_caload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_caload::getName () {
		return "caload";
	}

	uint32_t op_caload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// saload

	op_saload::op_saload() {

	}

	void op_saload::execute() {

	}

	void op_saload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_saload::getName () {
		return "saload";
	}

	uint32_t op_saload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore

	op_istore::op_istore() {

	}

	void op_istore::execute() {

	}

	void op_istore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_istore::getName () {
		return "istore";
	}

	uint32_t op_istore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore

	op_lstore::op_lstore() {

	}

	void op_lstore::execute() {

	}

	void op_lstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lstore::getName () {
		return "lstore";
	}

	uint32_t op_lstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore

	op_fstore::op_fstore() {

	}

	void op_fstore::execute() {

	}

	void op_fstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fstore::getName () {
		return "fstore";
	}

	uint32_t op_fstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore

	op_dstore::op_dstore() {

	}

	void op_dstore::execute() {

	}

	void op_dstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dstore::getName () {
		return "dstore";
	}

	uint32_t op_dstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore

	op_astore::op_astore() {

	}

	void op_astore::execute() {

	}

	void op_astore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_astore::getName () {
		return "astore";
	}

	uint32_t op_astore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_0

	op_istore_0::op_istore_0() {

	}

	void op_istore_0::execute() {

	}

	void op_istore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_istore_0::getName () {
		return "istore_0";
	}

	uint32_t op_istore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_1

	op_istore_1::op_istore_1() {

	}

	void op_istore_1::execute() {

	}

	void op_istore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_istore_1::getName () {
		return "istore_1";
	}

	uint32_t op_istore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_2

	op_istore_2::op_istore_2() {

	}

	void op_istore_2::execute() {

	}

	void op_istore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_istore_2::getName () {
		return "istore_2";
	}

	uint32_t op_istore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_3

	op_istore_3::op_istore_3() {

	}

	void op_istore_3::execute() {

	}

	void op_istore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_istore_3::getName () {
		return "istore_3";
	}

	uint32_t op_istore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_0

	op_lstore_0::op_lstore_0() {

	}

	void op_lstore_0::execute() {

	}

	void op_lstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lstore_0::getName () {
		return "lstore_0";
	}

	uint32_t op_lstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_1

	op_lstore_1::op_lstore_1() {

	}

	void op_lstore_1::execute() {

	}

	void op_lstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lstore_1::getName () {
		return "lstore_1";
	}

	uint32_t op_lstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_2

	op_lstore_2::op_lstore_2() {

	}

	void op_lstore_2::execute() {

	}

	void op_lstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lstore_2::getName () {
		return "lstore_2";
	}

	uint32_t op_lstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_3

	op_lstore_3::op_lstore_3() {

	}

	void op_lstore_3::execute() {

	}

	void op_lstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lstore_3::getName () {
		return "lstore_3";
	}

	uint32_t op_lstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_0

	op_fstore_0::op_fstore_0() {

	}

	void op_fstore_0::execute() {

	}

	void op_fstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fstore_0::getName () {
		return "fstore_0";
	}

	uint32_t op_fstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_1

	op_fstore_1::op_fstore_1() {

	}

	void op_fstore_1::execute() {

	}

	void op_fstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fstore_1::getName () {
		return "fstore_1";
	}

	uint32_t op_fstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_2

	op_fstore_2::op_fstore_2() {

	}

	void op_fstore_2::execute() {

	}

	void op_fstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fstore_2::getName () {
		return "fstore_2";
	}

	uint32_t op_fstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_3

	op_fstore_3::op_fstore_3() {

	}

	void op_fstore_3::execute() {

	}

	void op_fstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fstore_3::getName () {
		return "fstore_3";
	}

	uint32_t op_fstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_0

	op_dstore_0::op_dstore_0() {

	}

	void op_dstore_0::execute() {

	}

	void op_dstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dstore_0::getName () {
		return "dstore_0";
	}

	uint32_t op_dstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_1

	op_dstore_1::op_dstore_1() {

	}

	void op_dstore_1::execute() {

	}

	void op_dstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dstore_1::getName () {
		return "dstore_1";
	}

	uint32_t op_dstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_2

	op_dstore_2::op_dstore_2() {

	}

	void op_dstore_2::execute() {

	}

	void op_dstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dstore_2::getName () {
		return "dstore_2";
	}

	uint32_t op_dstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_3

	op_dstore_3::op_dstore_3() {

	}

	void op_dstore_3::execute() {

	}

	void op_dstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dstore_3::getName () {
		return "dstore_3";
	}

	uint32_t op_dstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_0

	op_astore_0::op_astore_0() {

	}

	void op_astore_0::execute() {

	}

	void op_astore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_astore_0::getName () {
		return "astore_0";
	}

	uint32_t op_astore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_1

	op_astore_1::op_astore_1() {

	}

	void op_astore_1::execute() {

	}

	void op_astore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_astore_1::getName () {
		return "astore_1";
	}

	uint32_t op_astore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_2

	op_astore_2::op_astore_2() {

	}

	void op_astore_2::execute() {

	}

	void op_astore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_astore_2::getName () {
		return "astore_2";
	}

	uint32_t op_astore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_3

	op_astore_3::op_astore_3() {

	}

	void op_astore_3::execute() {

	}

	void op_astore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_astore_3::getName () {
		return "astore_3";
	}

	uint32_t op_astore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iastore

	op_iastore::op_iastore() {

	}

	void op_iastore::execute() {

	}

	void op_iastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iastore::getName () {
		return "iastore";
	}

	uint32_t op_iastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lastore

	op_lastore::op_lastore() {

	}

	void op_lastore::execute() {

	}

	void op_lastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lastore::getName () {
		return "lastore";
	}

	uint32_t op_lastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fastore

	op_fastore::op_fastore() {

	}

	void op_fastore::execute() {

	}

	void op_fastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fastore::getName () {
		return "fastore";
	}

	uint32_t op_fastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dastore

	op_dastore::op_dastore() {

	}

	void op_dastore::execute() {

	}

	void op_dastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dastore::getName () {
		return "dastore";
	}

	uint32_t op_dastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aastore

	op_aastore::op_aastore() {

	}

	void op_aastore::execute() {

	}

	void op_aastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_aastore::getName () {
		return "aastore";
	}

	uint32_t op_aastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// bastore

	op_bastore::op_bastore() {

	}

	void op_bastore::execute() {

	}

	void op_bastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_bastore::getName () {
		return "bastore";
	}

	uint32_t op_bastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// castore

	op_castore::op_castore() {

	}

	void op_castore::execute() {

	}

	void op_castore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_castore::getName () {
		return "castore";
	}

	uint32_t op_castore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// sastore

	op_sastore::op_sastore() {

	}

	void op_sastore::execute() {

	}

	void op_sastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_sastore::getName () {
		return "sastore";
	}

	uint32_t op_sastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// pop

	op_pop::op_pop() {

	}

	void op_pop::execute() {

	}

	void op_pop::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_pop::getName () {
		return "pop";
	}

	uint32_t op_pop::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// pop2

	op_pop2::op_pop2() {

	}

	void op_pop2::execute() {

	}

	void op_pop2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_pop2::getName () {
		return "pop2";
	}

	uint32_t op_pop2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup

	op_dup::op_dup() {

	}

	void op_dup::execute() {

	}

	void op_dup::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dup::getName () {
		return "dup";
	}

	uint32_t op_dup::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup_x1

	op_dup_x1::op_dup_x1() {

	}

	void op_dup_x1::execute() {

	}

	void op_dup_x1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dup_x1::getName () {
		return "dup_x1";
	}

	uint32_t op_dup_x1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup_x2

	op_dup_x2::op_dup_x2() {

	}

	void op_dup_x2::execute() {

	}

	void op_dup_x2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dup_x2::getName () {
		return "dup_x2";
	}

	uint32_t op_dup_x2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2

	op_dup2::op_dup2() {

	}

	void op_dup2::execute() {

	}

	void op_dup2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dup2::getName () {
		return "dup2";
	}

	uint32_t op_dup2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2_x1

	op_dup2_x1::op_dup2_x1() {

	}

	void op_dup2_x1::execute() {

	}

	void op_dup2_x1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dup2_x1::getName () {
		return "dup2_x1";
	}

	uint32_t op_dup2_x1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2_x2

	op_dup2_x2::op_dup2_x2() {

	}

	void op_dup2_x2::execute() {

	}

	void op_dup2_x2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dup2_x2::getName () {
		return "dup2_x2";
	}

	uint32_t op_dup2_x2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// swap

	op_swap::op_swap() {

	}

	void op_swap::execute() {

	}

	void op_swap::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_swap::getName () {
		return "swap";
	}

	uint32_t op_swap::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iadd

	op_iadd::op_iadd() {

	}

	void op_iadd::execute() {

	}

	void op_iadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iadd::getName () {
		return "iadd";
	}

	uint32_t op_iadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ladd

	op_ladd::op_ladd() {

	}

	void op_ladd::execute() {

	}

	void op_ladd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ladd::getName () {
		return "ladd";
	}

	uint32_t op_ladd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fadd

	op_fadd::op_fadd() {

	}

	void op_fadd::execute() {

	}

	void op_fadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fadd::getName () {
		return "fadd";
	}

	uint32_t op_fadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dadd

	op_dadd::op_dadd() {

	}

	void op_dadd::execute() {

	}

	void op_dadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dadd::getName () {
		return "dadd";
	}

	uint32_t op_dadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// isub

	op_isub::op_isub() {

	}

	void op_isub::execute() {

	}

	void op_isub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_isub::getName () {
		return "isub";
	}

	uint32_t op_isub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lsub

	op_lsub::op_lsub() {

	}

	void op_lsub::execute() {

	}

	void op_lsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lsub::getName () {
		return "lsub";
	}

	uint32_t op_lsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fsub

	op_fsub::op_fsub() {

	}

	void op_fsub::execute() {

	}

	void op_fsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fsub::getName () {
		return "fsub";
	}

	uint32_t op_fsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dsub

	op_dsub::op_dsub() {

	}

	void op_dsub::execute() {

	}

	void op_dsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dsub::getName () {
		return "dsub";
	}

	uint32_t op_dsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// imul

	op_imul::op_imul() {

	}

	void op_imul::execute() {

	}

	void op_imul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_imul::getName () {
		return "imul";
	}

	uint32_t op_imul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lmul

	op_lmul::op_lmul() {

	}

	void op_lmul::execute() {

	}

	void op_lmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lmul::getName () {
		return "lmul";
	}

	uint32_t op_lmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fmul

	op_fmul::op_fmul() {

	}

	void op_fmul::execute() {

	}

	void op_fmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fmul::getName () {
		return "fmul";
	}

	uint32_t op_fmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dmul

	op_dmul::op_dmul() {

	}

	void op_dmul::execute() {

	}

	void op_dmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dmul::getName () {
		return "dmul";
	}

	uint32_t op_dmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// idiv

	op_idiv::op_idiv() {

	}

	void op_idiv::execute() {

	}

	void op_idiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_idiv::getName () {
		return "idiv";
	}

	uint32_t op_idiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ldiv

	op_ldiv::op_ldiv() {

	}

	void op_ldiv::execute() {

	}

	void op_ldiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ldiv::getName () {
		return "ldiv";
	}

	uint32_t op_ldiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fdiv

	op_fdiv::op_fdiv() {

	}

	void op_fdiv::execute() {

	}

	void op_fdiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fdiv::getName () {
		return "fdiv";
	}

	uint32_t op_fdiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ddiv

	op_ddiv::op_ddiv() {

	}

	void op_ddiv::execute() {

	}

	void op_ddiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ddiv::getName () {
		return "ddiv";
	}

	uint32_t op_ddiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// irem

	op_irem::op_irem() {

	}

	void op_irem::execute() {

	}

	void op_irem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_irem::getName () {
		return "irem";
	}

	uint32_t op_irem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lrem

	op_lrem::op_lrem() {

	}

	void op_lrem::execute() {

	}

	void op_lrem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lrem::getName () {
		return "lrem";
	}

	uint32_t op_lrem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// frem

	op_frem::op_frem() {

	}

	void op_frem::execute() {

	}

	void op_frem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_frem::getName () {
		return "frem";
	}

	uint32_t op_frem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// drem

	op_drem::op_drem() {

	}

	void op_drem::execute() {

	}

	void op_drem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_drem::getName () {
		return "drem";
	}

	uint32_t op_drem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ineg

	op_ineg::op_ineg() {

	}

	void op_ineg::execute() {

	}

	void op_ineg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ineg::getName () {
		return "ineg";
	}

	uint32_t op_ineg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lneg

	op_lneg::op_lneg() {

	}

	void op_lneg::execute() {

	}

	void op_lneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lneg::getName () {
		return "lneg";
	}

	uint32_t op_lneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fneg

	op_fneg::op_fneg() {

	}

	void op_fneg::execute() {

	}

	void op_fneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fneg::getName () {
		return "fneg";
	}

	uint32_t op_fneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dneg

	op_dneg::op_dneg() {

	}

	void op_dneg::execute() {

	}

	void op_dneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dneg::getName () {
		return "dneg";
	}

	uint32_t op_dneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ishl

	op_ishl::op_ishl() {

	}

	void op_ishl::execute() {

	}

	void op_ishl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ishl::getName () {
		return "ishl";
	}

	uint32_t op_ishl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lshl

	op_lshl::op_lshl() {

	}

	void op_lshl::execute() {

	}

	void op_lshl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lshl::getName () {
		return "lshl";
	}

	uint32_t op_lshl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ishr

	op_ishr::op_ishr() {

	}

	void op_ishr::execute() {

	}

	void op_ishr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ishr::getName () {
		return "ishr";
	}

	uint32_t op_ishr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lshr

	op_lshr::op_lshr() {

	}

	void op_lshr::execute() {

	}

	void op_lshr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lshr::getName () {
		return "lshr";
	}

	uint32_t op_lshr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iushr

	op_iushr::op_iushr() {

	}

	void op_iushr::execute() {

	}

	void op_iushr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iushr::getName () {
		return "iushr";
	}

	uint32_t op_iushr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lushr

	op_lushr::op_lushr() {

	}

	void op_lushr::execute() {

	}

	void op_lushr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lushr::getName () {
		return "lushr";
	}

	uint32_t op_lushr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iand

	op_iand::op_iand() {

	}

	void op_iand::execute() {

	}

	void op_iand::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iand::getName () {
		return "iand";
	}

	uint32_t op_iand::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// land

	op_land::op_land() {

	}

	void op_land::execute() {

	}

	void op_land::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_land::getName () {
		return "land";
	}

	uint32_t op_land::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ior

	op_ior::op_ior() {

	}

	void op_ior::execute() {

	}

	void op_ior::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ior::getName () {
		return "ior";
	}

	uint32_t op_ior::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lor

	op_lor::op_lor() {

	}

	void op_lor::execute() {

	}

	void op_lor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lor::getName () {
		return "lor";
	}

	uint32_t op_lor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ixor

	op_ixor::op_ixor() {

	}

	void op_ixor::execute() {

	}

	void op_ixor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ixor::getName () {
		return "ixor";
	}

	uint32_t op_ixor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lxor

	op_lxor::op_lxor() {

	}

	void op_lxor::execute() {

	}

	void op_lxor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lxor::getName () {
		return "lxor";
	}

	uint32_t op_lxor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iinc

	op_iinc::op_iinc() {

	}

	void op_iinc::execute() {

	}

	void op_iinc::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iinc::getName () {
		return "iinc";
	}

	uint32_t op_iinc::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2l

	op_i2l::op_i2l() {

	}

	void op_i2l::execute() {

	}

	void op_i2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_i2l::getName () {
		return "i2l";
	}

	uint32_t op_i2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2f

	op_i2f::op_i2f() {

	}

	void op_i2f::execute() {

	}

	void op_i2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_i2f::getName () {
		return "i2f";
	}

	uint32_t op_i2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2d

	op_i2d::op_i2d() {

	}

	void op_i2d::execute() {

	}

	void op_i2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_i2d::getName () {
		return "i2d";
	}

	uint32_t op_i2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2i

	op_l2i::op_l2i() {

	}

	void op_l2i::execute() {

	}

	void op_l2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_l2i::getName () {
		return "l2i";
	}

	uint32_t op_l2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2f

	op_l2f::op_l2f() {

	}

	void op_l2f::execute() {

	}

	void op_l2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_l2f::getName () {
		return "l2f";
	}

	uint32_t op_l2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2d

	op_l2d::op_l2d() {

	}

	void op_l2d::execute() {

	}

	void op_l2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_l2d::getName () {
		return "l2d";
	}

	uint32_t op_l2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2i

	op_f2i::op_f2i() {

	}

	void op_f2i::execute() {

	}

	void op_f2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_f2i::getName () {
		return "f2i";
	}

	uint32_t op_f2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2l

	op_f2l::op_f2l() {

	}

	void op_f2l::execute() {

	}

	void op_f2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_f2l::getName () {
		return "f2l";
	}

	uint32_t op_f2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2d

	op_f2d::op_f2d() {

	}

	void op_f2d::execute() {

	}

	void op_f2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_f2d::getName () {
		return "f2d";
	}

	uint32_t op_f2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2i

	op_d2i::op_d2i() {

	}

	void op_d2i::execute() {

	}

	void op_d2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_d2i::getName () {
		return "d2i";
	}

	uint32_t op_d2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2l

	op_d2l::op_d2l() {

	}

	void op_d2l::execute() {

	}

	void op_d2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_d2l::getName () {
		return "d2l";
	}

	uint32_t op_d2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2f

	op_d2f::op_d2f() {

	}

	void op_d2f::execute() {

	}

	void op_d2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_d2f::getName () {
		return "d2f";
	}

	uint32_t op_d2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2b

	op_i2b::op_i2b() {

	}

	void op_i2b::execute() {

	}

	void op_i2b::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_i2b::getName () {
		return "i2b";
	}

	uint32_t op_i2b::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2c

	op_i2c::op_i2c() {

	}

	void op_i2c::execute() {

	}

	void op_i2c::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_i2c::getName () {
		return "i2c";
	}

	uint32_t op_i2c::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2s

	op_i2s::op_i2s() {

	}

	void op_i2s::execute() {

	}

	void op_i2s::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_i2s::getName () {
		return "i2s";
	}

	uint32_t op_i2s::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lcmp

	op_lcmp::op_lcmp() {

	}

	void op_lcmp::execute() {

	}

	void op_lcmp::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lcmp::getName () {
		return "lcmp";
	}

	uint32_t op_lcmp::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fcmpl

	op_fcmpl::op_fcmpl() {

	}

	void op_fcmpl::execute() {

	}

	void op_fcmpl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fcmpl::getName () {
		return "fcmpl";
	}

	uint32_t op_fcmpl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fcmpg

	op_fcmpg::op_fcmpg() {

	}

	void op_fcmpg::execute() {

	}

	void op_fcmpg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_fcmpg::getName () {
		return "fcmpg";
	}

	uint32_t op_fcmpg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dcmpl

	op_dcmpl::op_dcmpl() {

	}

	void op_dcmpl::execute() {

	}

	void op_dcmpl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dcmpl::getName () {
		return "dcmpl";
	}

	uint32_t op_dcmpl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dcmpg

	op_dcmpg::op_dcmpg() {

	}

	void op_dcmpg::execute() {

	}

	void op_dcmpg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dcmpg::getName () {
		return "dcmpg";
	}

	uint32_t op_dcmpg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifeq

	op_ifeq::op_ifeq() {

	}

	void op_ifeq::execute() {

	}

	void op_ifeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ifeq::getName () {
		return "ifeq";
	}

	uint32_t op_ifeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifne

	op_ifne::op_ifne() {

	}

	void op_ifne::execute() {

	}

	void op_ifne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ifne::getName () {
		return "ifne";
	}

	uint32_t op_ifne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iflt

	op_iflt::op_iflt() {

	}

	void op_iflt::execute() {

	}

	void op_iflt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_iflt::getName () {
		return "iflt";
	}

	uint32_t op_iflt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifge

	op_ifge::op_ifge() {

	}

	void op_ifge::execute() {

	}

	void op_ifge::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ifge::getName () {
		return "ifge";
	}

	uint32_t op_ifge::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifgt

	op_ifgt::op_ifgt() {

	}

	void op_ifgt::execute() {

	}

	void op_ifgt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ifgt::getName () {
		return "ifgt";
	}

	uint32_t op_ifgt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifle

	op_ifle::op_ifle() {

	}

	void op_ifle::execute() {

	}

	void op_ifle::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ifle::getName () {
		return "ifle";
	}

	uint32_t op_ifle::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// if_icmpeq

	op_if_icmpeq::op_if_icmpeq() {

	}

	void op_if_icmpeq::execute() {

	}

	void op_if_icmpeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_if_icmpeq::getName () {
		return "if_icmpeq";
	}

	uint32_t op_if_icmpeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// if_icmpne

	op_if_icmpne::op_if_icmpne() {

	}

	void op_if_icmpne::execute() {

	}

	void op_if_icmpne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_if_icmpne::getName () {
		return "if_icmpne";
	}

	uint32_t op_if_icmpne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// if_icmplt

	op_if_icmplt::op_if_icmplt() {

	}

	void op_if_icmplt::execute() {

	}

	void op_if_icmplt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_if_icmplt::getName () {
		return "if_icmplt";
	}

	uint32_t op_if_icmplt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// if_icmpge

	op_if_icmpge::op_if_icmpge() {

	}

	void op_if_icmpge::execute() {

	}

	void op_if_icmpge::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_if_icmpge::getName () {
		return "if_icmpge";
	}

	uint32_t op_if_icmpge::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// if_icmpgt

	op_if_icmpgt::op_if_icmpgt() {

	}

	void op_if_icmpgt::execute() {

	}

	void op_if_icmpgt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_if_icmpgt::getName () {
		return "if_icmpgt";
	}

	uint32_t op_if_icmpgt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// if_icmple

	op_if_icmple::op_if_icmple() {

	}

	void op_if_icmple::execute() {

	}

	void op_if_icmple::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_if_icmple::getName () {
		return "if_icmple";
	}

	uint32_t op_if_icmple::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// if_acmpeq

	op_if_acmpeq::op_if_acmpeq() {

	}

	void op_if_acmpeq::execute() {

	}

	void op_if_acmpeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_if_acmpeq::getName () {
		return "if_acmpeq";
	}

	uint32_t op_if_acmpeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// if_acmpne

	op_if_acmpne::op_if_acmpne() {

	}

	void op_if_acmpne::execute() {

	}

	void op_if_acmpne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_if_acmpne::getName () {
		return "if_acmpne";
	}

	uint32_t op_if_acmpne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// goto_jvm

	op_goto_jvm::op_goto_jvm() {

	}

	void op_goto_jvm::execute() {

	}

	void op_goto_jvm::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_goto_jvm::getName () {
		return "goto_jvm";
	}

	uint32_t op_goto_jvm::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// jsr

	op_jsr::op_jsr() {

	}

	void op_jsr::execute() {

	}

	void op_jsr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_jsr::getName () {
		return "jsr";
	}

	uint32_t op_jsr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ret

	op_ret::op_ret() {

	}

	void op_ret::execute() {

	}

	void op_ret::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ret::getName () {
		return "ret";
	}

	uint32_t op_ret::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// tableswitch

	op_tableswitch::op_tableswitch() {

	}

	void op_tableswitch::execute() {

	}

	void op_tableswitch::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_tableswitch::getName () {
		return "tableswitch";
	}

	uint32_t op_tableswitch::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ireturn

	op_ireturn::op_ireturn() {

	}

	void op_ireturn::execute() {

	}

	void op_ireturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ireturn::getName () {
		return "ireturn";
	}

	uint32_t op_ireturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lreturn

	op_lreturn::op_lreturn() {

	}

	void op_lreturn::execute() {

	}

	void op_lreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_lreturn::getName () {
		return "lreturn";
	}

	uint32_t op_lreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// freturn

	op_freturn::op_freturn() {

	}

	void op_freturn::execute() {

	}

	void op_freturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_freturn::getName () {
		return "freturn";
	}

	uint32_t op_freturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dreturn

	op_dreturn::op_dreturn() {

	}

	void op_dreturn::execute() {

	}

	void op_dreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_dreturn::getName () {
		return "dreturn";
	}

	uint32_t op_dreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// areturn

	op_areturn::op_areturn() {

	}

	void op_areturn::execute() {

	}

	void op_areturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_areturn::getName () {
		return "areturn";
	}

	uint32_t op_areturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// return_jvm

	op_return_jvm::op_return_jvm() {

	}

	void op_return_jvm::execute() {

	}

	void op_return_jvm::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_return_jvm::getName () {
		return "return_jvm";
	}

	uint32_t op_return_jvm::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// getstatic

	op_getstatic::op_getstatic() {

	}

	void op_getstatic::execute() {

	}

	void op_getstatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_getstatic::getName () {
		return "getstatic";
	}

	uint32_t op_getstatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// putstatic

	op_putstatic::op_putstatic() {

	}

	void op_putstatic::execute() {

	}

	void op_putstatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_putstatic::getName () {
		return "putstatic";
	}

	uint32_t op_putstatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// getfield

	op_getfield::op_getfield() {

	}

	void op_getfield::execute() {

	}

	void op_getfield::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_getfield::getName () {
		return "getfield";
	}

	uint32_t op_getfield::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// putfield

	op_putfield::op_putfield() {

	}

	void op_putfield::execute() {

	}

	void op_putfield::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_putfield::getName () {
		return "putfield";
	}

	uint32_t op_putfield::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// invokevirtual

	op_invokevirtual::op_invokevirtual() {

	}

	void op_invokevirtual::execute() {

	}

	void op_invokevirtual::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_invokevirtual::getName () {
		return "invokevirtual";
	}

	uint32_t op_invokevirtual::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// invokespecial

	op_invokespecial::op_invokespecial() {

	}

	void op_invokespecial::execute() {

	}

	void op_invokespecial::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_invokespecial::getName () {
		return "invokespecial";
	}

	uint32_t op_invokespecial::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// invokestatic

	op_invokestatic::op_invokestatic() {

	}

	void op_invokestatic::execute() {

	}

	void op_invokestatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_invokestatic::getName () {
		return "invokestatic";
	}

	uint32_t op_invokestatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// invokeinterface

	op_invokeinterface::op_invokeinterface() {

	}

	void op_invokeinterface::execute() {

	}

	void op_invokeinterface::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_invokeinterface::getName () {
		return "invokeinterface";
	}

	uint32_t op_invokeinterface::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// invokedynamic

	op_invokedynamic::op_invokedynamic() {

	}

	void op_invokedynamic::execute() {

	}

	void op_invokedynamic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_invokedynamic::getName () {
		return "invokedynamic";
	}

	uint32_t op_invokedynamic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// new_jvm

	op_new_jvm::op_new_jvm() {

	}

	void op_new_jvm::execute() {

	}

	void op_new_jvm::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_new_jvm::getName () {
		return "new_jvm";
	}

	uint32_t op_new_jvm::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// newarray

	op_newarray::op_newarray() {

	}

	void op_newarray::execute() {

	}

	void op_newarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_newarray::getName () {
		return "newarray";
	}

	uint32_t op_newarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// anewarray

	op_anewarray::op_anewarray() {

	}

	void op_anewarray::execute() {

	}

	void op_anewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_anewarray::getName () {
		return "anewarray";
	}

	uint32_t op_anewarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// arraylength

	op_arraylength::op_arraylength() {

	}

	void op_arraylength::execute() {

	}

	void op_arraylength::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_arraylength::getName () {
		return "arraylength";
	}

	uint32_t op_arraylength::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// athrow

	op_athrow::op_athrow() {

	}

	void op_athrow::execute() {

	}

	void op_athrow::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_athrow::getName () {
		return "athrow";
	}

	uint32_t op_athrow::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// checkcast

	op_checkcast::op_checkcast() {

	}

	void op_checkcast::execute() {

	}

	void op_checkcast::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_checkcast::getName () {
		return "checkcast";
	}

	uint32_t op_checkcast::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// instanceof

	op_instanceof::op_instanceof() {

	}

	void op_instanceof::execute() {

	}

	void op_instanceof::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_instanceof::getName () {
		return "instanceof";
	}

	uint32_t op_instanceof::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// monitorenter

	op_monitorenter::op_monitorenter() {

	}

	void op_monitorenter::execute() {

	}

	void op_monitorenter::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_monitorenter::getName () {
		return "monitorenter";
	}

	uint32_t op_monitorenter::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// monitorexit

	op_monitorexit::op_monitorexit() {

	}

	void op_monitorexit::execute() {

	}

	void op_monitorexit::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_monitorexit::getName () {
		return "monitorexit";
	}

	uint32_t op_monitorexit::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// wide

	op_wide::op_wide() {

	}

	void op_wide::execute() {

	}

	void op_wide::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_wide::getName () {
		return "wide";
	}

	uint32_t op_wide::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// multianewarray

	op_multianewarray::op_multianewarray() {

	}

	void op_multianewarray::execute() {

	}

	void op_multianewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_multianewarray::getName () {
		return "multianewarray";
	}

	uint32_t op_multianewarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifnull

	op_ifnull::op_ifnull() {

	}

	void op_ifnull::execute() {

	}

	void op_ifnull::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ifnull::getName () {
		return "ifnull";
	}

	uint32_t op_ifnull::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifnonnull

	op_ifnonnull::op_ifnonnull() {

	}

	void op_ifnonnull::execute() {

	}

	void op_ifnonnull::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_ifnonnull::getName () {
		return "ifnonnull";
	}

	uint32_t op_ifnonnull::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// goto_w

	op_goto_w::op_goto_w() {

	}

	void op_goto_w::execute() {

	}

	void op_goto_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_goto_w::getName () {
		return "goto_w";
	}

	uint32_t op_goto_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// jsr_w

	op_jsr_w::op_jsr_w() {

	}

	void op_jsr_w::execute() {

	}

	void op_jsr_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_jsr_w::getName () {
		return "jsr_w";
	}

	uint32_t op_jsr_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// breakpoint

	op_breakpoint::op_breakpoint() {

	}

	void op_breakpoint::execute() {

	}

	void op_breakpoint::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_breakpoint::getName () {
		return "breakpoint";
	}

	uint32_t op_breakpoint::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// impdep1

	op_impdep1::op_impdep1() {

	}

	void op_impdep1::execute() {

	}

	void op_impdep1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_impdep1::getName () {
		return "impdep1";
	}

	uint32_t op_impdep1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// impdep2

	op_impdep2::op_impdep2() {

	}

	void op_impdep2::execute() {

	}

	void op_impdep2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string op_impdep2::getName () {
		return "impdep2";
	}

	uint32_t op_impdep2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}

};