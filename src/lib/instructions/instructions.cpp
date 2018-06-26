#include <string>
#include <iostream>
#include "util/macros.hpp"
#include "util/converter.hpp"
#include "instructions/instructions.hpp"

namespace jvm {

	// Code

	const InstructionInstantiator Code::instruction_set[256] = {
			Instruction::instantiate<OPnop>,               // 0
			Instruction::instantiate<OPaconst_null>,       // 1
			Instruction::instantiate<OPiconst_m1>,         // 2
			Instruction::instantiate<OPiconst_0>,          // 3
			Instruction::instantiate<OPiconst_1>,          // 4
			Instruction::instantiate<OPiconst_2>,          // 5
			Instruction::instantiate<OPiconst_3>,          // 6
			Instruction::instantiate<OPiconst_4>,          // 7
			Instruction::instantiate<OPiconst_5>,          // 8
			Instruction::instantiate<OPlconst_0>,          // 9
			Instruction::instantiate<OPlconst_1>,          // 10
			Instruction::instantiate<OPfconst_0>,          // 11
			Instruction::instantiate<OPfconst_1>,          // 12
			Instruction::instantiate<OPfconst_2>,          // 13
			Instruction::instantiate<OPdconst_0>,          // 14
			Instruction::instantiate<OPdconst_1>,          // 15
			Instruction::instantiate<OPbipush>,            // 16
			Instruction::instantiate<OPsipush>,            // 17
			Instruction::instantiate<OPldc>,               // 18
			Instruction::instantiate<OPldc_w>,             // 19
			Instruction::instantiate<OPldc2_w>,            // 20
			Instruction::instantiate<OPiload>,             // 21
			Instruction::instantiate<OPlload>,             // 22
			Instruction::instantiate<OPfload>,             // 23
			Instruction::instantiate<OPdload>,             // 24
			Instruction::instantiate<OPaload>,             // 25
			Instruction::instantiate<OPiload_0>,           // 26
			Instruction::instantiate<OPiload_1>,           // 27
			Instruction::instantiate<OPiload_2>,           // 28
			Instruction::instantiate<OPiload_3>,           // 29
			Instruction::instantiate<OPlload_0>,           // 30
			Instruction::instantiate<OPlload_1>,           // 31
			Instruction::instantiate<OPlload_2>,           // 32
			Instruction::instantiate<OPlload_3>,           // 33
			Instruction::instantiate<OPfload_0>,           // 34
			Instruction::instantiate<OPfload_1>,           // 35
			Instruction::instantiate<OPfload_2>,           // 36
			Instruction::instantiate<OPfload_3>,           // 37
			Instruction::instantiate<OPdload_0>,           // 38
			Instruction::instantiate<OPdload_1>,           // 39
			Instruction::instantiate<OPdload_2>,           // 40
			Instruction::instantiate<OPdload_3>,           // 41
			Instruction::instantiate<OPaload_0>,           // 42
			Instruction::instantiate<OPaload_1>,           // 43
			Instruction::instantiate<OPaload_2>,           // 44
			Instruction::instantiate<OPaload_3>,           // 45
			Instruction::instantiate<OPiaload>,            // 46
			Instruction::instantiate<OPlaload>,            // 47
			Instruction::instantiate<OPfaload>,            // 48
			Instruction::instantiate<OPdaload>,            // 49
			Instruction::instantiate<OPaaload>,            // 50
			Instruction::instantiate<OPbaload>,            // 51
			Instruction::instantiate<OPcaload>,            // 52
			Instruction::instantiate<OPsaload>,            // 53
			Instruction::instantiate<OPistore>,            // 54
			Instruction::instantiate<OPlstore>,            // 55
			Instruction::instantiate<OPfstore>,            // 56
			Instruction::instantiate<OPdstore>,            // 57
			Instruction::instantiate<OPastore>,            // 58
			Instruction::instantiate<OPistore_0>,          // 59
			Instruction::instantiate<OPistore_1>,          // 60
			Instruction::instantiate<OPistore_2>,          // 61
			Instruction::instantiate<OPistore_3>,          // 62
			Instruction::instantiate<OPlstore_0>,          // 63
			Instruction::instantiate<OPlstore_1>,          // 64
			Instruction::instantiate<OPlstore_2>,          // 65
			Instruction::instantiate<OPlstore_3>,          // 66
			Instruction::instantiate<OPfstore_0>,          // 67
			Instruction::instantiate<OPfstore_1>,          // 68
			Instruction::instantiate<OPfstore_2>,          // 69
			Instruction::instantiate<OPfstore_3>,          // 70
			Instruction::instantiate<OPdstore_0>,          // 71
			Instruction::instantiate<OPdstore_1>,          // 72
			Instruction::instantiate<OPdstore_2>,          // 73
			Instruction::instantiate<OPdstore_3>,          // 74
			Instruction::instantiate<OPastore_0>,          // 75
			Instruction::instantiate<OPastore_1>,          // 76
			Instruction::instantiate<OPastore_2>,          // 77
			Instruction::instantiate<OPastore_3>,          // 78
			Instruction::instantiate<OPiastore>,           // 79
			Instruction::instantiate<OPlastore>,           // 80
			Instruction::instantiate<OPfastore>,           // 81
			Instruction::instantiate<OPdastore>,           // 82
			Instruction::instantiate<OPaastore>,           // 83
			Instruction::instantiate<OPbastore>,           // 84
			Instruction::instantiate<OPcastore>,           // 85
			Instruction::instantiate<OPsastore>,           // 86
			Instruction::instantiate<OPpop>,               // 87
			Instruction::instantiate<OPpop2>,              // 88
			Instruction::instantiate<OPdup>,               // 89
			Instruction::instantiate<OPdup_x1>,            // 90
			Instruction::instantiate<OPdup_x2>,            // 91
			Instruction::instantiate<OPdup2>,              // 92
			Instruction::instantiate<OPdup2_x1>,           // 93
			Instruction::instantiate<OPdup2_x2>,           // 94
			Instruction::instantiate<OPswap>,              // 95
			Instruction::instantiate<OPiadd>,              // 96
			Instruction::instantiate<OPladd>,              // 97
			Instruction::instantiate<OPfadd>,              // 98
			Instruction::instantiate<OPdadd>,              // 99
			Instruction::instantiate<OPisub>,              // 100
			Instruction::instantiate<OPlsub>,              // 101
			Instruction::instantiate<OPfsub>,              // 102
			Instruction::instantiate<OPdsub>,              // 103
			Instruction::instantiate<OPimul>,              // 104
			Instruction::instantiate<OPlmul>,              // 105
			Instruction::instantiate<OPfmul>,              // 106
			Instruction::instantiate<OPdmul>,              // 107
			Instruction::instantiate<OPidiv>,              // 108
			Instruction::instantiate<OPldiv>,              // 109
			Instruction::instantiate<OPfdiv>,              // 110
			Instruction::instantiate<OPddiv>,              // 111
			Instruction::instantiate<OPirem>,              // 112
			Instruction::instantiate<OPlrem>,              // 113
			Instruction::instantiate<OPfrem>,              // 114
			Instruction::instantiate<OPdrem>,              // 115
			Instruction::instantiate<OPineg>,              // 116
			Instruction::instantiate<OPlneg>,              // 117
			Instruction::instantiate<OPfneg>,              // 118
			Instruction::instantiate<OPdneg>,              // 119
			Instruction::instantiate<OPishl>,              // 120
			Instruction::instantiate<OPlshl>,              // 121
			Instruction::instantiate<OPishr>,              // 122
			Instruction::instantiate<OPlshr>,              // 123
			Instruction::instantiate<OPiushr>,             // 124
			Instruction::instantiate<OPlushr>,             // 125
			Instruction::instantiate<OPiand>,              // 126
			Instruction::instantiate<OPland>,              // 127
			Instruction::instantiate<OPior>,               // 128
			Instruction::instantiate<OPlor>,               // 129
			Instruction::instantiate<OPixor>,              // 130
			Instruction::instantiate<OPlxor>,              // 131
			Instruction::instantiate<OPiinc>,              // 132
			Instruction::instantiate<OPi2l>,               // 133
			Instruction::instantiate<OPi2f>,               // 134
			Instruction::instantiate<OPi2d>,               // 135
			Instruction::instantiate<OPl2i>,               // 136
			Instruction::instantiate<OPl2f>,               // 137
			Instruction::instantiate<OPl2d>,               // 138
			Instruction::instantiate<OPf2i>,               // 139
			Instruction::instantiate<OPf2l>,               // 140
			Instruction::instantiate<OPf2d>,               // 141
			Instruction::instantiate<OPd2i>,               // 142
			Instruction::instantiate<OPd2l>,               // 143
			Instruction::instantiate<OPd2f>,               // 144
			Instruction::instantiate<OPi2b>,               // 145
			Instruction::instantiate<OPi2c>,               // 146
			Instruction::instantiate<OPi2s>,               // 147
			Instruction::instantiate<OPlcmp>,              // 148
			Instruction::instantiate<OPfcmpl>,             // 149
			Instruction::instantiate<OPfcmpg>,             // 150
			Instruction::instantiate<OPdcmpl>,             // 151
			Instruction::instantiate<OPdcmpg>,             // 152
			Instruction::instantiate<OPifeq>,              // 153
			Instruction::instantiate<OPifne>,              // 154
			Instruction::instantiate<OPiflt>,              // 155
			Instruction::instantiate<OPifge>,              // 156
			Instruction::instantiate<OPifgt>,              // 157
			Instruction::instantiate<OPifle>,              // 158
			Instruction::instantiate<OPif_icmpeq>,         // 159
			Instruction::instantiate<OPif_icmpne>,         // 160
			Instruction::instantiate<OPif_icmplt>,         // 161
			Instruction::instantiate<OPif_icmpge>,         // 162
			Instruction::instantiate<OPif_icmpgt>,         // 163
			Instruction::instantiate<OPif_icmple>,         // 164
			Instruction::instantiate<OPif_acmpeq>,         // 165
			Instruction::instantiate<OPif_acmpne>,         // 166
			Instruction::instantiate<OPgoto>,              // 167
			Instruction::instantiate<OPjsr>,               // 168
			Instruction::instantiate<OPret>,               // 169
			Instruction::instantiate<OPtableswitch>,       // 170
			Instruction::instantiate<OPlookupswitch>,      // 171
			Instruction::instantiate<OPireturn>,           // 172
			Instruction::instantiate<OPlreturn>,           // 173
			Instruction::instantiate<OPfreturn>,           // 174
			Instruction::instantiate<OPdreturn>,           // 175
			Instruction::instantiate<OPareturn>,           // 176
			Instruction::instantiate<OPreturn>,            // 177
			Instruction::instantiate<OPgetstatic>,         // 178
			Instruction::instantiate<OPputstatic>,         // 179
			Instruction::instantiate<OPgetfield>,          // 180
			Instruction::instantiate<OPputfield>,          // 181
			Instruction::instantiate<OPinvokevirtual>,     // 182
			Instruction::instantiate<OPinvokespecial>,     // 183
			Instruction::instantiate<OPinvokestatic>,      // 184
			Instruction::instantiate<OPinvokeinterface>,   // 185
			Instruction::instantiate<OPinvokedynamic>,     // 186
			Instruction::instantiate<OPnew>,               // 187
			Instruction::instantiate<OPnewarray>,          // 188
			Instruction::instantiate<OPanewarray>,         // 189
			Instruction::instantiate<OParraylength>,       // 190
			Instruction::instantiate<OPathrow>,            // 191
			Instruction::instantiate<OPcheckcast>,         // 192
			Instruction::instantiate<OPinstanceof>,        // 193
			Instruction::instantiate<OPmonitorenter>,      // 194
			Instruction::instantiate<OPmonitorexit>,       // 195
			Instruction::instantiate<OPwide>,              // 196
			Instruction::instantiate<OPmultianewarray>,    // 197
			Instruction::instantiate<OPifnull>,            // 198
			Instruction::instantiate<OPifnonnull>,         // 199
			Instruction::instantiate<OPgoto_w>,            // 200
			Instruction::instantiate<OPjsr_w>,             // 201
			Instruction::instantiate<OPbreakpoint>,        // 202
			nullptr,                                        // 203
			nullptr,                                        // 204
			nullptr,                                        // 205
			nullptr,                                        // 206
			nullptr,                                        // 207
			nullptr,                                        // 208
			nullptr,                                        // 209
			nullptr,                                        // 210
			nullptr,                                        // 211
			nullptr,                                        // 212
			nullptr,                                        // 213
			nullptr,                                        // 214
			nullptr,                                        // 215
			nullptr,                                        // 216
			nullptr,                                        // 217
			nullptr,                                        // 218
			nullptr,                                        // 219
			nullptr,                                        // 220
			nullptr,                                        // 221
			nullptr,                                        // 222
			nullptr,                                        // 223
			nullptr,                                        // 224
			nullptr,                                        // 225
			nullptr,                                        // 226
			nullptr,                                        // 227
			nullptr,                                        // 228
			nullptr,                                        // 229
			nullptr,                                        // 230
			nullptr,                                        // 231
			nullptr,                                        // 232
			nullptr,                                        // 233
			nullptr,                                        // 234
			nullptr,                                        // 235
			nullptr,                                        // 236
			nullptr,                                        // 237
			nullptr,                                        // 238
			nullptr,                                        // 239
			nullptr,                                        // 240
			nullptr,                                        // 241
			nullptr,                                        // 242
			nullptr,                                        // 243
			nullptr,                                        // 244
			nullptr,                                        // 245
			nullptr,                                        // 246
			nullptr,                                        // 247
			nullptr,                                        // 248
			nullptr,                                        // 249
			nullptr,                                        // 250
			nullptr,                                        // 251
			nullptr,                                        // 252
			nullptr,                                        // 253
			Instruction::instantiate<OPimpdep1>,           // 254
			Instruction::instantiate<OPimpdep2>            // 255
	};

	void Code::interpret(std::vector<u1>& data) {
		for (uint32_t i = 0; i < data.size(); i++) {
			auto opcode = data[i];
			auto instr = getInstr(opcode);
			auto paramsRead = instr->fillParams(i, data);

			push_back(instr);
			i += paramsRead;
		}
	}

	std::shared_ptr<Instruction> Code::getInstr (const u1& opcode) {
		auto instrInstantiator = instruction_set[opcode];

		if (not instrInstantiator) {
			throw "Opcode with number " + std::to_string(opcode) + " does not exist!";
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

	void OPnop::execute() {}

	void OPnop::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPnop::getName () {
		return "nop";
	}

	uint32_t OPnop::getOpCode () {
		return 00;
	}

	uint32_t OPnop::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aconst_null

	void OPaconst_null::execute() {

	}

	void OPaconst_null::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPaconst_null::getName () {
		return "aconst_null";
	}

	uint32_t OPaconst_null::getOpCode () {
		return 1;
	}

	uint32_t OPaconst_null::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_m1

	void OPiconst_m1::execute() {

	}

	void OPiconst_m1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiconst_m1::getName () {
		return "iconst_m1";
	}

	uint32_t OPiconst_m1::getOpCode () {
		return 2;
	}

	uint32_t OPiconst_m1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_0

	void OPiconst_0::execute() {

	}

	void OPiconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiconst_0::getName () {
		return "iconst_0";
	}

	uint32_t OPiconst_0::getOpCode () {
		return 3;
	}

	uint32_t OPiconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_1

	void OPiconst_1::execute() {

	}

	void OPiconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiconst_1::getName () {
		return "iconst_1";
	}

	uint32_t OPiconst_1::getOpCode () {
		return 4;
	}

	uint32_t OPiconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_2

	void OPiconst_2::execute() {

	}

	void OPiconst_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiconst_2::getName () {
		return "iconst_2";
	}

	uint32_t OPiconst_2::getOpCode () {
		return 5;
	}

	uint32_t OPiconst_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_3

	void OPiconst_3::execute() {

	}

	void OPiconst_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiconst_3::getName () {
		return "iconst_3";
	}

	uint32_t OPiconst_3::getOpCode () {
		return 6;
	}

	uint32_t OPiconst_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_4

	void OPiconst_4::execute() {

	}

	void OPiconst_4::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiconst_4::getName () {
		return "iconst_4";
	}

	uint32_t OPiconst_4::getOpCode () {
		return 7;
	}

	uint32_t OPiconst_4::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_5

	void OPiconst_5::execute() {

	}

	void OPiconst_5::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiconst_5::getName () {
		return "iconst_5";
	}

	uint32_t OPiconst_5::getOpCode () {
		return 8;
	}

	uint32_t OPiconst_5::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lconst_0

	void OPlconst_0::execute() {

	}

	void OPlconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlconst_0::getName () {
		return "lconst_0";
	}

	uint32_t OPlconst_0::getOpCode () {
		return 9;
	}

	uint32_t OPlconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lconst_1

	void OPlconst_1::execute() {

	}

	void OPlconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlconst_1::getName () {
		return "lconst_1";
	}

	uint32_t OPlconst_1::getOpCode () {
		return 10;
	}

	uint32_t OPlconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_0

	void OPfconst_0::execute() {

	}

	void OPfconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfconst_0::getName () {
		return "fconst_0";
	}

	uint32_t OPfconst_0::getOpCode () {
		return 11;
	}

	uint32_t OPfconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_1

	void OPfconst_1::execute() {

	}

	void OPfconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfconst_1::getName () {
		return "fconst_1";
	}

	uint32_t OPfconst_1::getOpCode () {
		return 12;
	}

	uint32_t OPfconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_2

	void OPfconst_2::execute() {

	}

	void OPfconst_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfconst_2::getName () {
		return "fconst_2";
	}

	uint32_t OPfconst_2::getOpCode () {
		return 13;
	}

	uint32_t OPfconst_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dconst_0

	void OPdconst_0::execute() {

	}

	void OPdconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdconst_0::getName () {
		return "dconst_0";
	}

	uint32_t OPdconst_0::getOpCode () {
		return 14;
	}

	uint32_t OPdconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dconst_1

	void OPdconst_1::execute() {

	}

	void OPdconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdconst_1::getName () {
		return "dconst_1";
	}

	uint32_t OPdconst_1::getOpCode () {
		return 15;
	}

	uint32_t OPdconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// bipush

	void OPbipush::execute() {

	}

	void OPbipush::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPbipush::getName () {
		return "bipush";
	}

	uint32_t OPbipush::getOpCode () {
		return 16;
	}

	uint32_t OPbipush::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		byte = data[idx+1];
		return 1;
	}


	// sipush

	void OPsipush::execute() {

	}

	void OPsipush::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPsipush::getName () {
		return "sipush";
	}

	uint32_t OPsipush::getOpCode () {
		return 17;
	}

	uint32_t OPsipush::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// ldc

	void OPldc::execute() {

	}

	void OPldc::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPldc::getName () {
		return "ldc";
	}

	uint32_t OPldc::getOpCode () {
		return 18;
	}

	uint32_t OPldc::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 1;
	}


	// ldc_w

	void OPldc_w::execute() {

	}

	void OPldc_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPldc_w::getName () {
		return "ldc_w";
	}

	uint32_t OPldc_w::getOpCode () {
		return 19;
	}

	uint32_t OPldc_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// ldc2_w

	void OPldc2_w::execute() {

	}

	void OPldc2_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPldc2_w::getName () {
		return "ldc2_w";
	}

	uint32_t OPldc2_w::getOpCode () {
		return 20;
	}

	uint32_t OPldc2_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// iload

	void OPiload::execute() {

	}

	void OPiload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiload::getName () {
		return "iload";
	}

	uint32_t OPiload::getOpCode () {
		return 21;
	}

	uint32_t OPiload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 1;
	}


	// lload

	void OPlload::execute() {

	}

	void OPlload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlload::getName () {
		return "lload";
	}

	uint32_t OPlload::getOpCode () {
		return 22;
	}

	uint32_t OPlload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload

	void OPfload::execute() {

	}

	void OPfload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfload::getName () {
		return "fload";
	}

	uint32_t OPfload::getOpCode () {
		return 23;
	}

	uint32_t OPfload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// dload

	void OPdload::execute() {

	}

	void OPdload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdload::getName () {
		return "dload";
	}

	uint32_t OPdload::getOpCode () {
		return 24;
	}

	uint32_t OPdload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// aload

	void OPaload::execute() {

	}

	void OPaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPaload::getName () {
		return "aload";
	}

	uint32_t OPaload::getOpCode () {
		return 25;
	}

	uint32_t OPaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// iload_0

	void OPiload_0::execute() {

	}

	void OPiload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiload_0::getName () {
		return "iload_0";
	}

	uint32_t OPiload_0::getOpCode () {
		return 26;
	}

	uint32_t OPiload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_1

	void OPiload_1::execute() {

	}

	void OPiload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiload_1::getName () {
		return "iload_1";
	}

	uint32_t OPiload_1::getOpCode () {
		return 27;
	}

	uint32_t OPiload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_2

	void OPiload_2::execute() {

	}

	void OPiload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiload_2::getName () {
		return "iload_2";
	}

	uint32_t OPiload_2::getOpCode () {
		return 28;
	}

	uint32_t OPiload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_3

	void OPiload_3::execute() {

	}

	void OPiload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiload_3::getName () {
		return "iload_3";
	}

	uint32_t OPiload_3::getOpCode () {
		return 29;
	}

	uint32_t OPiload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_0

	void OPlload_0::execute() {

	}

	void OPlload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlload_0::getName () {
		return "lload_0";
	}

	uint32_t OPlload_0::getOpCode () {
		return 30;
	}

	uint32_t OPlload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_1

	void OPlload_1::execute() {

	}

	void OPlload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlload_1::getName () {
		return "lload_1";
	}

	uint32_t OPlload_1::getOpCode () {
		return 31;
	}

	uint32_t OPlload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_2

	void OPlload_2::execute() {

	}

	void OPlload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlload_2::getName () {
		return "lload_2";
	}

	uint32_t OPlload_2::getOpCode () {
		return 32;
	}

	uint32_t OPlload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_3

	void OPlload_3::execute() {

	}

	void OPlload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlload_3::getName () {
		return "lload_3";
	}

	uint32_t OPlload_3::getOpCode () {
		return 33;
	}

	uint32_t OPlload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_0

	void OPfload_0::execute() {

	}

	void OPfload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfload_0::getName () {
		return "fload_0";
	}

	uint32_t OPfload_0::getOpCode () {
		return 34;
	}

	uint32_t OPfload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_1

	void OPfload_1::execute() {

	}

	void OPfload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfload_1::getName () {
		return "fload_1";
	}

	uint32_t OPfload_1::getOpCode () {
		return 35;
	}

	uint32_t OPfload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_2

	void OPfload_2::execute() {

	}

	void OPfload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfload_2::getName () {
		return "fload_2";
	}

	uint32_t OPfload_2::getOpCode () {
		return 36;
	}

	uint32_t OPfload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_3

	void OPfload_3::execute() {

	}

	void OPfload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfload_3::getName () {
		return "fload_3";
	}

	uint32_t OPfload_3::getOpCode () {
		return 37;
	}

	uint32_t OPfload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_0

	void OPdload_0::execute() {

	}

	void OPdload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdload_0::getName () {
		return "dload_0";
	}

	uint32_t OPdload_0::getOpCode () {
		return 38;
	}

	uint32_t OPdload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_1

	void OPdload_1::execute() {

	}

	void OPdload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdload_1::getName () {
		return "dload_1";
	}

	uint32_t OPdload_1::getOpCode () {
		return 39;
	}

	uint32_t OPdload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_2

	void OPdload_2::execute() {

	}

	void OPdload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdload_2::getName () {
		return "dload_2";
	}

	uint32_t OPdload_2::getOpCode () {
		return 40;
	}

	uint32_t OPdload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_3

	void OPdload_3::execute() {

	}

	void OPdload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdload_3::getName () {
		return "dload_3";
	}

	uint32_t OPdload_3::getOpCode () {
		return 41;
	}

	uint32_t OPdload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_0

	void OPaload_0::execute() {

	}

	void OPaload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPaload_0::getName () {
		return "aload_0";
	}

	uint32_t OPaload_0::getOpCode () {
		return 42;
	}

	uint32_t OPaload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_1

	void OPaload_1::execute() {

	}

	void OPaload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPaload_1::getName () {
		return "aload_1";
	}

	uint32_t OPaload_1::getOpCode () {
		return 43;
	}

	uint32_t OPaload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_2

	void OPaload_2::execute() {

	}

	void OPaload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPaload_2::getName () {
		return "aload_2";
	}

	uint32_t OPaload_2::getOpCode () {
		return 44;
	}

	uint32_t OPaload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_3

	void OPaload_3::execute() {

	}

	void OPaload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPaload_3::getName () {
		return "aload_3";
	}

	uint32_t OPaload_3::getOpCode () {
		return 45;
	}

	uint32_t OPaload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iaload

	void OPiaload::execute() {

	}

	void OPiaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiaload::getName () {
		return "iaload";
	}

	uint32_t OPiaload::getOpCode () {
		return 46;
	}

	uint32_t OPiaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// laload

	void OPlaload::execute() {

	}

	void OPlaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlaload::getName () {
		return "laload";
	}

	uint32_t OPlaload::getOpCode () {
		return 47;
	}

	uint32_t OPlaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// faload

	void OPfaload::execute() {

	}

	void OPfaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfaload::getName () {
		return "faload";
	}

	uint32_t OPfaload::getOpCode () {
		return 48;
	}

	uint32_t OPfaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// daload

	void OPdaload::execute() {

	}

	void OPdaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdaload::getName () {
		return "daload";
	}

	uint32_t OPdaload::getOpCode () {
		return 49;
	}

	uint32_t OPdaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aaload

	void OPaaload::execute() {

	}

	void OPaaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPaaload::getName () {
		return "aaload";
	}

	uint32_t OPaaload::getOpCode () {
		return 50;
	}

	uint32_t OPaaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// baload

	void OPbaload::execute() {

	}

	void OPbaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPbaload::getName () {
		return "baload";
	}

	uint32_t OPbaload::getOpCode () {
		return 51;
	}

	uint32_t OPbaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// caload

	void OPcaload::execute() {

	}

	void OPcaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPcaload::getName () {
		return "caload";
	}

	uint32_t OPcaload::getOpCode () {
		return 52;
	}

	uint32_t OPcaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// saload

	void OPsaload::execute() {

	}

	void OPsaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPsaload::getName () {
		return "saload";
	}

	uint32_t OPsaload::getOpCode () {
		return 53;
	}

	uint32_t OPsaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore

	void OPistore::execute() {

	}

	void OPistore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPistore::getName () {
		return "istore";
	}

	uint32_t OPistore::getOpCode () {
		return 54;
	}

	uint32_t OPistore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 1;
	}


	// lstore

	void OPlstore::execute() {

	}

	void OPlstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlstore::getName () {
		return "lstore";
	}

	uint32_t OPlstore::getOpCode () {
		return 55;
	}

	uint32_t OPlstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 1;
	}


	// fstore

	void OPfstore::execute() {

	}

	void OPfstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfstore::getName () {
		return "fstore";
	}

	uint32_t OPfstore::getOpCode () {
		return 56;
	}

	uint32_t OPfstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// dstore

	void OPdstore::execute() {

	}

	void OPdstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdstore::getName () {
		return "dstore";
	}

	uint32_t OPdstore::getOpCode () {
		return 57;
	}

	uint32_t OPdstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// astore

	void OPastore::execute() {

	}

	void OPastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPastore::getName () {
		return "astore";
	}

	uint32_t OPastore::getOpCode () {
		return 58;
	}

	uint32_t OPastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// istore_0

	void OPistore_0::execute() {

	}

	void OPistore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPistore_0::getName () {
		return "istore_0";
	}

	uint32_t OPistore_0::getOpCode () {
		return 59;
	}

	uint32_t OPistore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_1

	void OPistore_1::execute() {

	}

	void OPistore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPistore_1::getName () {
		return "istore_1";
	}

	uint32_t OPistore_1::getOpCode () {
		return 60;
	}

	uint32_t OPistore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_2

	void OPistore_2::execute() {

	}

	void OPistore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPistore_2::getName () {
		return "istore_2";
	}

	uint32_t OPistore_2::getOpCode () {
		return 61;
	}

	uint32_t OPistore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_3

	void OPistore_3::execute() {

	}

	void OPistore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPistore_3::getName () {
		return "istore_3";
	}

	uint32_t OPistore_3::getOpCode () {
		return 62;
	}

	uint32_t OPistore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_0

	void OPlstore_0::execute() {

	}

	void OPlstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlstore_0::getName () {
		return "lstore_0";
	}

	uint32_t OPlstore_0::getOpCode () {
		return 63;
	}

	uint32_t OPlstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_1

	void OPlstore_1::execute() {

	}

	void OPlstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlstore_1::getName () {
		return "lstore_1";
	}

	uint32_t OPlstore_1::getOpCode () {
		return 64;
	}

	uint32_t OPlstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_2

	void OPlstore_2::execute() {

	}

	void OPlstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlstore_2::getName () {
		return "lstore_2";
	}

	uint32_t OPlstore_2::getOpCode () {
		return 65;
	}

	uint32_t OPlstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_3

	void OPlstore_3::execute() {

	}

	void OPlstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlstore_3::getName () {
		return "lstore_3";
	}

	uint32_t OPlstore_3::getOpCode () {
		return 66;
	}

	uint32_t OPlstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_0

	void OPfstore_0::execute() {

	}

	void OPfstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfstore_0::getName () {
		return "fstore_0";
	}

	uint32_t OPfstore_0::getOpCode () {
		return 67;
	}

	uint32_t OPfstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_1

	void OPfstore_1::execute() {

	}

	void OPfstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfstore_1::getName () {
		return "fstore_1";
	}

	uint32_t OPfstore_1::getOpCode () {
		return 68;
	}

	uint32_t OPfstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_2

	void OPfstore_2::execute() {

	}

	void OPfstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfstore_2::getName () {
		return "fstore_2";
	}

	uint32_t OPfstore_2::getOpCode () {
		return 69;
	}

	uint32_t OPfstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_3

	void OPfstore_3::execute() {

	}

	void OPfstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfstore_3::getName () {
		return "fstore_3";
	}

	uint32_t OPfstore_3::getOpCode () {
		return 70;
	}

	uint32_t OPfstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_0

	void OPdstore_0::execute() {

	}

	void OPdstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdstore_0::getName () {
		return "dstore_0";
	}

	uint32_t OPdstore_0::getOpCode () {
		return 71;
	}

	uint32_t OPdstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_1

	void OPdstore_1::execute() {

	}

	void OPdstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdstore_1::getName () {
		return "dstore_1";
	}

	uint32_t OPdstore_1::getOpCode () {
		return 72;
	}

	uint32_t OPdstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_2

	void OPdstore_2::execute() {

	}

	void OPdstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdstore_2::getName () {
		return "dstore_2";
	}

	uint32_t OPdstore_2::getOpCode () {
		return 73;
	}

	uint32_t OPdstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_3

	void OPdstore_3::execute() {

	}

	void OPdstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdstore_3::getName () {
		return "dstore_3";
	}

	uint32_t OPdstore_3::getOpCode () {
		return 74;
	}

	uint32_t OPdstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_0

	void OPastore_0::execute() {

	}

	void OPastore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPastore_0::getName () {
		return "astore_0";
	}

	uint32_t OPastore_0::getOpCode () {
		return 75;
	}

	uint32_t OPastore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_1

	void OPastore_1::execute() {

	}

	void OPastore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPastore_1::getName () {
		return "astore_1";
	}

	uint32_t OPastore_1::getOpCode () {
		return 76;
	}

	uint32_t OPastore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_2

	void OPastore_2::execute() {

	}

	void OPastore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPastore_2::getName () {
		return "astore_2";
	}

	uint32_t OPastore_2::getOpCode () {
		return 77;
	}

	uint32_t OPastore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_3

	void OPastore_3::execute() {

	}

	void OPastore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPastore_3::getName () {
		return "astore_3";
	}

	uint32_t OPastore_3::getOpCode () {
		return 78;
	}

	uint32_t OPastore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iastore

	void OPiastore::execute() {

	}

	void OPiastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiastore::getName () {
		return "iastore";
	}

	uint32_t OPiastore::getOpCode () {
		return 79;
	}

	uint32_t OPiastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lastore

	void OPlastore::execute() {

	}

	void OPlastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlastore::getName () {
		return "lastore";
	}

	uint32_t OPlastore::getOpCode () {
		return 80;
	}

	uint32_t OPlastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fastore

	void OPfastore::execute() {

	}

	void OPfastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfastore::getName () {
		return "fastore";
	}

	uint32_t OPfastore::getOpCode () {
		return 81;
	}

	uint32_t OPfastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dastore

	void OPdastore::execute() {

	}

	void OPdastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdastore::getName () {
		return "dastore";
	}

	uint32_t OPdastore::getOpCode () {
		return 82;
	}

	uint32_t OPdastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aastore

	void OPaastore::execute() {

	}

	void OPaastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPaastore::getName () {
		return "aastore";
	}

	uint32_t OPaastore::getOpCode () {
		return 83;
	}

	uint32_t OPaastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// bastore

	void OPbastore::execute() {

	}

	void OPbastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPbastore::getName () {
		return "bastore";
	}

	uint32_t OPbastore::getOpCode () {
		return 84;
	}

	uint32_t OPbastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// castore

	void OPcastore::execute() {

	}

	void OPcastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPcastore::getName () {
		return "castore";
	}

	uint32_t OPcastore::getOpCode () {
		return 85;
	}

	uint32_t OPcastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// sastore

	void OPsastore::execute() {

	}

	void OPsastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPsastore::getName () {
		return "sastore";
	}

	uint32_t OPsastore::getOpCode () {
		return 86;
	}

	uint32_t OPsastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// pop

	void OPpop::execute() {

	}

	void OPpop::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPpop::getName () {
		return "pop";
	}

	uint32_t OPpop::getOpCode () {
		return 87;
	}

	uint32_t OPpop::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// pop2

	void OPpop2::execute() {

	}

	void OPpop2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPpop2::getName () {
		return "pop2";
	}

	uint32_t OPpop2::getOpCode () {
		return 88;
	}

	uint32_t OPpop2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup

	void OPdup::execute() {

	}

	void OPdup::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdup::getName () {
		return "dup";
	}

	uint32_t OPdup::getOpCode () {
		return 89;
	}

	uint32_t OPdup::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup_x1

	void OPdup_x1::execute() {

	}

	void OPdup_x1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdup_x1::getName () {
		return "dup_x1";
	}

	uint32_t OPdup_x1::getOpCode () {
		return 90;
	}

	uint32_t OPdup_x1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup_x2

	void OPdup_x2::execute() {

	}

	void OPdup_x2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdup_x2::getName () {
		return "dup_x2";
	}

	uint32_t OPdup_x2::getOpCode () {
		return 91;
	}

	uint32_t OPdup_x2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2

	void OPdup2::execute() {

	}

	void OPdup2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdup2::getName () {
		return "dup2";
	}

	uint32_t OPdup2::getOpCode () {
		return 92;
	}

	uint32_t OPdup2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2_x1

	void OPdup2_x1::execute() {

	}

	void OPdup2_x1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdup2_x1::getName () {
		return "dup2_x1";
	}

	uint32_t OPdup2_x1::getOpCode () {
		return 93;
	}

	uint32_t OPdup2_x1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2_x2

	void OPdup2_x2::execute() {

	}

	void OPdup2_x2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdup2_x2::getName () {
		return "dup2_x2";
	}

	uint32_t OPdup2_x2::getOpCode () {
		return 94;
	}

	uint32_t OPdup2_x2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// swap

	void OPswap::execute() {

	}

	void OPswap::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPswap::getName () {
		return "swap";
	}

	uint32_t OPswap::getOpCode () {
		return 95;
	}

	uint32_t OPswap::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iadd

	void OPiadd::execute() {

	}

	void OPiadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiadd::getName () {
		return "iadd";
	}

	uint32_t OPiadd::getOpCode () {
		return 96;
	}

	uint32_t OPiadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ladd

	void OPladd::execute() {

	}

	void OPladd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPladd::getName () {
		return "ladd";
	}

	uint32_t OPladd::getOpCode () {
		return 97;
	}

	uint32_t OPladd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fadd

	void OPfadd::execute() {

	}

	void OPfadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfadd::getName () {
		return "fadd";
	}

	uint32_t OPfadd::getOpCode () {
		return 98;
	}

	uint32_t OPfadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dadd

	void OPdadd::execute() {

	}

	void OPdadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdadd::getName () {
		return "dadd";
	}

	uint32_t OPdadd::getOpCode () {
		return 99;
	}

	uint32_t OPdadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// isub

	void OPisub::execute() {

	}

	void OPisub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPisub::getName () {
		return "isub";
	}

	uint32_t OPisub::getOpCode () {
		return 100;
	}

	uint32_t OPisub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lsub

	void OPlsub::execute() {

	}

	void OPlsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlsub::getName () {
		return "lsub";
	}

	uint32_t OPlsub::getOpCode () {
		return 101;
	}

	uint32_t OPlsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fsub

	void OPfsub::execute() {

	}

	void OPfsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfsub::getName () {
		return "fsub";
	}

	uint32_t OPfsub::getOpCode () {
		return 102;
	}

	uint32_t OPfsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dsub

	void OPdsub::execute() {

	}

	void OPdsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdsub::getName () {
		return "dsub";
	}

	uint32_t OPdsub::getOpCode () {
		return 103;
	}

	uint32_t OPdsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// imul

	void OPimul::execute() {

	}

	void OPimul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPimul::getName () {
		return "imul";
	}

	uint32_t OPimul::getOpCode () {
		return 104;
	}

	uint32_t OPimul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lmul

	void OPlmul::execute() {

	}

	void OPlmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlmul::getName () {
		return "lmul";
	}

	uint32_t OPlmul::getOpCode () {
		return 105;
	}

	uint32_t OPlmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fmul

	void OPfmul::execute() {

	}

	void OPfmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfmul::getName () {
		return "fmul";
	}

	uint32_t OPfmul::getOpCode () {
		return 106;
	}

	uint32_t OPfmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dmul

	void OPdmul::execute() {

	}

	void OPdmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdmul::getName () {
		return "dmul";
	}

	uint32_t OPdmul::getOpCode () {
		return 107;
	}

	uint32_t OPdmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// idiv

	void OPidiv::execute() {

	}

	void OPidiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPidiv::getName () {
		return "idiv";
	}

	uint32_t OPidiv::getOpCode () {
		return 108;
	}

	uint32_t OPidiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ldiv

	void OPldiv::execute() {

	}

	void OPldiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPldiv::getName () {
		return "ldiv";
	}

	uint32_t OPldiv::getOpCode () {
		return 109;
	}

	uint32_t OPldiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fdiv

	void OPfdiv::execute() {

	}

	void OPfdiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfdiv::getName () {
		return "fdiv";
	}

	uint32_t OPfdiv::getOpCode () {
		return 110;
	}

	uint32_t OPfdiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ddiv

	void OPddiv::execute() {

	}

	void OPddiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPddiv::getName () {
		return "ddiv";
	}

	uint32_t OPddiv::getOpCode () {
		return 111;
	}

	uint32_t OPddiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// irem

	void OPirem::execute() {

	}

	void OPirem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPirem::getName () {
		return "irem";
	}

	uint32_t OPirem::getOpCode () {
		return 112;
	}

	uint32_t OPirem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lrem

	void OPlrem::execute() {

	}

	void OPlrem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlrem::getName () {
		return "lrem";
	}

	uint32_t OPlrem::getOpCode () {
		return 113;
	}

	uint32_t OPlrem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// frem

	void OPfrem::execute() {

	}

	void OPfrem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfrem::getName () {
		return "frem";
	}

	uint32_t OPfrem::getOpCode () {
		return 114;
	}

	uint32_t OPfrem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// drem

	void OPdrem::execute() {

	}

	void OPdrem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdrem::getName () {
		return "drem";
	}

	uint32_t OPdrem::getOpCode () {
		return 115;
	}

	uint32_t OPdrem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ineg

	void OPineg::execute() {

	}

	void OPineg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPineg::getName () {
		return "ineg";
	}

	uint32_t OPineg::getOpCode () {
		return 116;
	}

	uint32_t OPineg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lneg

	void OPlneg::execute() {

	}

	void OPlneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlneg::getName () {
		return "lneg";
	}

	uint32_t OPlneg::getOpCode () {
		return 117;
	}

	uint32_t OPlneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fneg

	void OPfneg::execute() {

	}

	void OPfneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfneg::getName () {
		return "fneg";
	}

	uint32_t OPfneg::getOpCode () {
		return 118;
	}

	uint32_t OPfneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dneg

	void OPdneg::execute() {

	}

	void OPdneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdneg::getName () {
		return "dneg";
	}

	uint32_t OPdneg::getOpCode () {
		return 119;
	}

	uint32_t OPdneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ishl

	void OPishl::execute() {

	}

	void OPishl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPishl::getName () {
		return "ishl";
	}

	uint32_t OPishl::getOpCode () {
		return 120;
	}

	uint32_t OPishl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lshl

	void OPlshl::execute() {

	}

	void OPlshl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlshl::getName () {
		return "lshl";
	}

	uint32_t OPlshl::getOpCode () {
		return 121;
	}

	uint32_t OPlshl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ishr

	void OPishr::execute() {

	}

	void OPishr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPishr::getName () {
		return "ishr";
	}

	uint32_t OPishr::getOpCode () {
		return 122;
	}

	uint32_t OPishr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lshr

	void OPlshr::execute() {

	}

	void OPlshr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlshr::getName () {
		return "lshr";
	}

	uint32_t OPlshr::getOpCode () {
		return 123;
	}

	uint32_t OPlshr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iushr

	void OPiushr::execute() {

	}

	void OPiushr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiushr::getName () {
		return "iushr";
	}

	uint32_t OPiushr::getOpCode () {
		return 124;
	}

	uint32_t OPiushr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lushr

	void OPlushr::execute() {

	}

	void OPlushr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlushr::getName () {
		return "lushr";
	}

	uint32_t OPlushr::getOpCode () {
		return 125;
	}

	uint32_t OPlushr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iand

	void OPiand::execute() {

	}

	void OPiand::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiand::getName () {
		return "iand";
	}

	uint32_t OPiand::getOpCode () {
		return 126;
	}

	uint32_t OPiand::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// land

	void OPland::execute() {

	}

	void OPland::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPland::getName () {
		return "land";
	}

	uint32_t OPland::getOpCode () {
		return 127;
	}

	uint32_t OPland::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ior

	void OPior::execute() {

	}

	void OPior::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPior::getName () {
		return "ior";
	}

	uint32_t OPior::getOpCode () {
		return 128;
	}

	uint32_t OPior::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lor

	void OPlor::execute() {

	}

	void OPlor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlor::getName () {
		return "lor";
	}

	uint32_t OPlor::getOpCode () {
		return 29;
	}

	uint32_t OPlor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ixor

	void OPixor::execute() {

	}

	void OPixor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPixor::getName () {
		return "ixor";
	}

	uint32_t OPixor::getOpCode () {
		return 130;
	}

	uint32_t OPixor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lxor

	void OPlxor::execute() {

	}

	void OPlxor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlxor::getName () {
		return "lxor";
	}

	uint32_t OPlxor::getOpCode () {
		return 131;
	}

	uint32_t OPlxor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iinc

	void OPiinc::execute() {

	}

	void OPiinc::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiinc::getName () {
		return "iinc";
	}

	uint32_t OPiinc::getOpCode () {
		return 132;
	}

	uint32_t OPiinc::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// i2l

	void OPi2l::execute() {

	}

	void OPi2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPi2l::getName () {
		return "i2l";
	}

	uint32_t OPi2l::getOpCode () {
		return 133;
	}

	uint32_t OPi2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2f

	void OPi2f::execute() {

	}

	void OPi2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPi2f::getName () {
		return "i2f";
	}

	uint32_t OPi2f::getOpCode () {
		return 134;
	}

	uint32_t OPi2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2d

	void OPi2d::execute() {

	}

	void OPi2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPi2d::getName () {
		return "i2d";
	}

	uint32_t OPi2d::getOpCode () {
		return 135;
	}

	uint32_t OPi2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2i

	void OPl2i::execute() {

	}

	void OPl2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPl2i::getName () {
		return "l2i";
	}

	uint32_t OPl2i::getOpCode () {
		return 136;
	}

	uint32_t OPl2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2f

	void OPl2f::execute() {

	}

	void OPl2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPl2f::getName () {
		return "l2f";
	}

	uint32_t OPl2f::getOpCode () {
		return 137;
	}

	uint32_t OPl2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2d

	void OPl2d::execute() {

	}

	void OPl2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPl2d::getName () {
		return "l2d";
	}

	uint32_t OPl2d::getOpCode () {
		return 138;
	}

	uint32_t OPl2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2i

	void OPf2i::execute() {

	}

	void OPf2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPf2i::getName () {
		return "f2i";
	}

	uint32_t OPf2i::getOpCode () {
		return 139;
	}

	uint32_t OPf2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2l

	void OPf2l::execute() {

	}

	void OPf2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPf2l::getName () {
		return "f2l";
	}

	uint32_t OPf2l::getOpCode () {
		return 140;
	}

	uint32_t OPf2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2d

	void OPf2d::execute() {

	}

	void OPf2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPf2d::getName () {
		return "f2d";
	}

	uint32_t OPf2d::getOpCode () {
		return 141;
	}

	uint32_t OPf2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2i

	void OPd2i::execute() {

	}

	void OPd2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPd2i::getName () {
		return "d2i";
	}

	uint32_t OPd2i::getOpCode () {
		return 142;
	}

	uint32_t OPd2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2l

	void OPd2l::execute() {

	}

	void OPd2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPd2l::getName () {
		return "d2l";
	}

	uint32_t OPd2l::getOpCode () {
		return 143;
	}

	uint32_t OPd2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2f

	void OPd2f::execute() {

	}

	void OPd2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPd2f::getName () {
		return "d2f";
	}

	uint32_t OPd2f::getOpCode () {
		return 144;
	}

	uint32_t OPd2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2b

	void OPi2b::execute() {

	}

	void OPi2b::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPi2b::getName () {
		return "i2b";
	}

	uint32_t OPi2b::getOpCode () {
		return 145;
	}

	uint32_t OPi2b::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2c

	void OPi2c::execute() {

	}

	void OPi2c::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPi2c::getName () {
		return "i2c";
	}

	uint32_t OPi2c::getOpCode () {
		return 146;
	}

	uint32_t OPi2c::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2s

	void OPi2s::execute() {

	}

	void OPi2s::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPi2s::getName () {
		return "i2s";
	}

	uint32_t OPi2s::getOpCode () {
		return 147;
	}

	uint32_t OPi2s::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lcmp

	void OPlcmp::execute() {

	}

	void OPlcmp::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlcmp::getName () {
		return "lcmp";
	}

	uint32_t OPlcmp::getOpCode () {
		return 148;
	}

	uint32_t OPlcmp::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fcmpl

	void OPfcmpl::execute() {

	}

	void OPfcmpl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfcmpl::getName () {
		return "fcmpl";
	}

	uint32_t OPfcmpl::getOpCode () {
		return 149;
	}

	uint32_t OPfcmpl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fcmpg

	void OPfcmpg::execute() {

	}

	void OPfcmpg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfcmpg::getName () {
		return "fcmpg";
	}

	uint32_t OPfcmpg::getOpCode () {
		return 150;
	}

	uint32_t OPfcmpg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dcmpl

	void OPdcmpl::execute() {

	}

	void OPdcmpl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdcmpl::getName () {
		return "dcmpl";
	}

	uint32_t OPdcmpl::getOpCode () {
		return 151;
	}

	uint32_t OPdcmpl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dcmpg

	void OPdcmpg::execute() {

	}

	void OPdcmpg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdcmpg::getName () {
		return "dcmpg";
	}

	uint32_t OPdcmpg::getOpCode () {
		return 152;
	}

	uint32_t OPdcmpg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifeq

	void OPifeq::execute() {

	}

	void OPifeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPifeq::getName () {
		return "ifeq";
	}

	uint32_t OPifeq::getOpCode () {
		return 153;
	}

	uint32_t OPifeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifne

	void OPifne::execute() {

	}

	void OPifne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPifne::getName () {
		return "ifne";
	}

	uint32_t OPifne::getOpCode () {
		return 154;
	}

	uint32_t OPifne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// iflt

	void OPiflt::execute() {

	}

	void OPiflt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPiflt::getName () {
		return "iflt";
	}

	uint32_t OPiflt::getOpCode () {
		return 155;
	}

	uint32_t OPiflt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifge

	void OPifge::execute() {

	}

	void OPifge::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPifge::getName () {
		return "ifge";
	}

	uint32_t OPifge::getOpCode () {
		return 156;
	}

	uint32_t OPifge::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifgt

	void OPifgt::execute() {

	}

	void OPifgt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPifgt::getName () {
		return "ifgt";
	}

	uint32_t OPifgt::getOpCode () {
		return 157;
	}

	uint32_t OPifgt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifle

	void OPifle::execute() {

	}

	void OPifle::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPifle::getName () {
		return "ifle";
	}

	uint32_t OPifle::getOpCode () {
		return 158;
	}

	uint32_t OPifle::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpeq

	void OPif_icmpeq::execute() {

	}

	void OPif_icmpeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPif_icmpeq::getName () {
		return "if_icmpeq";
	}

	uint32_t OPif_icmpeq::getOpCode () {
		return 159;
	}

	uint32_t OPif_icmpeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpne

	void OPif_icmpne::execute() {

	}

	void OPif_icmpne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPif_icmpne::getName () {
		return "if_icmpne";
	}

	uint32_t OPif_icmpne::getOpCode () {
		return 160;
	}

	uint32_t OPif_icmpne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmplt

	void OPif_icmplt::execute() {

	}

	void OPif_icmplt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPif_icmplt::getName () {
		return "if_icmplt";
	}

	uint32_t OPif_icmplt::getOpCode () {
		return 61;
	}

	uint32_t OPif_icmplt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpge

	void OPif_icmpge::execute() {

	}

	void OPif_icmpge::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPif_icmpge::getName () {
		return "if_icmpge";
	}

	uint32_t OPif_icmpge::getOpCode () {
		return 162;
	}

	uint32_t OPif_icmpge::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpgt

	void OPif_icmpgt::execute() {

	}

	void OPif_icmpgt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPif_icmpgt::getName () {
		return "if_icmpgt";
	}

	uint32_t OPif_icmpgt::getOpCode () {
		return 163;
	}

	uint32_t OPif_icmpgt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmple

	void OPif_icmple::execute() {

	}

	void OPif_icmple::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPif_icmple::getName () {
		return "if_icmple";
	}

	uint32_t OPif_icmple::getOpCode () {
		return 164;
	}

	uint32_t OPif_icmple::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_acmpeq

	void OPif_acmpeq::execute() {

	}

	void OPif_acmpeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPif_acmpeq::getName () {
		return "if_acmpeq";
	}

	uint32_t OPif_acmpeq::getOpCode () {
		return 165;
	}

	uint32_t OPif_acmpeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_acmpne

	void OPif_acmpne::execute() {

	}

	void OPif_acmpne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPif_acmpne::getName () {
		return "if_acmpne";
	}

	uint32_t OPif_acmpne::getOpCode () {
		return 166;
	}

	uint32_t OPif_acmpne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// goto

	void OPgoto::execute() {

	}

	void OPgoto::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPgoto::getName () {
		return "goto";
	}

	uint32_t OPgoto::getOpCode () {
		return 167;
	}

	uint32_t OPgoto::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

// TODO: finish retrieve data in classes: continue implementation from iinc, see https://en.wikipedia.org/wiki/Java_bytecode_instruction_listings
// TODO: print the data retrieved
// TODO: implements variable arguments
// TODO: verify if the data is retrieveing correct


	// jsr

	void OPjsr::execute() {

	}

	void OPjsr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPjsr::getName () {
		return "jsr";
	}

	uint32_t OPjsr::getOpCode () {
		return 168;
	}

	uint32_t OPjsr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// ret

	void OPret::execute() {

	}

	void OPret::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPret::getName () {
		return "ret";
	}

	uint32_t OPret::getOpCode () {
		return 169;
	}

	uint32_t OPret::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 1;
	}


	// tableswitch

	void OPtableswitch::execute() {

	}

	void OPtableswitch::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPtableswitch::getName () {
		return "tableswitch";
	}

	uint32_t OPtableswitch::getOpCode () {
		return 170;
	}

	uint32_t OPtableswitch::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 16; //16+
	}

	// OPlookupswitch

	void OPlookupswitch::execute() {

	}

	void OPlookupswitch::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlookupswitch::getName () {
		return "lookupswitch";
	}

	uint32_t OPlookupswitch::getOpCode () {
		return 171;
	}

	uint32_t OPlookupswitch::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 8; //8+
	}


	// ireturn

	void OPireturn::execute() {

	}

	void OPireturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPireturn::getName () {
		return "ireturn";
	}

	uint32_t OPireturn::getOpCode () {
		return 172;
	}

	uint32_t OPireturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lreturn

	void OPlreturn::execute() {

	}

	void OPlreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPlreturn::getName () {
		return "lreturn";
	}

	uint32_t OPlreturn::getOpCode () {
		return 173;
	}

	uint32_t OPlreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// freturn

	void OPfreturn::execute() {

	}

	void OPfreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPfreturn::getName () {
		return "freturn";
	}

	uint32_t OPfreturn::getOpCode () {
		return 174;
	}

	uint32_t OPfreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dreturn

	void OPdreturn::execute() {

	}

	void OPdreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPdreturn::getName () {
		return "dreturn";
	}

	uint32_t OPdreturn::getOpCode () {
		return 175;
	}

	uint32_t OPdreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// areturn

	void OPareturn::execute() {

	}

	void OPareturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPareturn::getName () {
		return "areturn";
	}

	uint32_t OPareturn::getOpCode () {
		return 176;
	}

	uint32_t OPareturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// return

	void OPreturn::execute() {

	}

	void OPreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPreturn::getName () {
		return "return";
	}

	uint32_t OPreturn::getOpCode () {
		return 177;
	}

	uint32_t OPreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// getstatic

	void OPgetstatic::execute() {

	}

	void OPgetstatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPgetstatic::getName () {
		return "getstatic";
	}

	uint32_t OPgetstatic::getOpCode () {
		return 178;
	}

	uint32_t OPgetstatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// putstatic

	void OPputstatic::execute() {

	}

	void OPputstatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPputstatic::getName () {
		return "putstatic";
	}

	uint32_t OPputstatic::getOpCode () {
		return 179;
	}

	uint32_t OPputstatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// getfield

	void OPgetfield::execute() {

	}

	void OPgetfield::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPgetfield::getName () {
		return "getfield";
	}

	uint32_t OPgetfield::getOpCode () {
		return 180;
	}

	uint32_t OPgetfield::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// putfield

	void OPputfield::execute() {

	}

	void OPputfield::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPputfield::getName () {
		return "putfield";
	}

	uint32_t OPputfield::getOpCode () {
		return 181;
	}

	uint32_t OPputfield::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// invokevirtual

	void OPinvokevirtual::execute() {

	}

	void OPinvokevirtual::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPinvokevirtual::getName () {
		return "invokevirtual";
	}

	uint32_t OPinvokevirtual::getOpCode () {
		return 182;
	}

	uint32_t OPinvokevirtual::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// invokespecial

	void OPinvokespecial::execute() {

	}

	void OPinvokespecial::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPinvokespecial::getName () {
		return "invokespecial";
	}

	uint32_t OPinvokespecial::getOpCode () {
		return 183;
	}

	uint32_t OPinvokespecial::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// invokestatic

	void OPinvokestatic::execute() {

	}

	void OPinvokestatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPinvokestatic::getName () {
		return "invokestatic";
	}

	uint32_t OPinvokestatic::getOpCode () {
		return 184;
	}

	uint32_t OPinvokestatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// invokeinterface

	void OPinvokeinterface::execute() {

	}

	void OPinvokeinterface::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPinvokeinterface::getName () {
		return "invokeinterface";
	}

	uint32_t OPinvokeinterface::getOpCode () {
		return 185;
	}

	uint32_t OPinvokeinterface::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 4;
	}


	// invokedynamic

	void OPinvokedynamic::execute() {

	}

	void OPinvokedynamic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPinvokedynamic::getName () {
		return "invokedynamic";
	}

	uint32_t OPinvokedynamic::getOpCode () {
		return 186;
	}

	uint32_t OPinvokedynamic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 4;
	}


	// new

	void OPnew::execute() {

	}

	void OPnew::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPnew::getName () {
		return "new";
	}

	uint32_t OPnew::getOpCode () {
		return 187;
	}

	uint32_t OPnew::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// newarray

	void OPnewarray::execute() {

	}

	void OPnewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPnewarray::getName () {
		return "newarray";
	}

	uint32_t OPnewarray::getOpCode () {
		return 188;
	}

	uint32_t OPnewarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 1;
	}


	// anewarray

	void OPanewarray::execute() {

	}

	void OPanewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPanewarray::getName () {
		return "anewarray";
	}

	uint32_t OPanewarray::getOpCode () {
		return 189;
	}

	uint32_t OPanewarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// arraylength

	void OParraylength::execute() {

	}

	void OParraylength::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OParraylength::getName () {
		return "arraylength";
	}

	uint32_t OParraylength::getOpCode () {
		return 190;
	}

	uint32_t OParraylength::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// athrow

	void OPathrow::execute() {

	}

	void OPathrow::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPathrow::getName () {
		return "athrow";
	}

	uint32_t OPathrow::getOpCode () {
		return 191;
	}

	uint32_t OPathrow::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// checkcast

	void OPcheckcast::execute() {

	}

	void OPcheckcast::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPcheckcast::getName () {
		return "checkcast";
	}

	uint32_t OPcheckcast::getOpCode () {
		return 192;
	}

	uint32_t OPcheckcast::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// instanceof

	void OPinstanceof::execute() {

	}

	void OPinstanceof::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPinstanceof::getName () {
		return "instanceof";
	}

	uint32_t OPinstanceof::getOpCode () {
		return 193;
	}

	uint32_t OPinstanceof::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 2;
	}


	// monitorenter

	void OPmonitorenter::execute() {

	}

	void OPmonitorenter::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPmonitorenter::getName () {
		return "monitorenter";
	}

	uint32_t OPmonitorenter::getOpCode () {
		return 194;
	}

	uint32_t OPmonitorenter::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// monitorexit

	void OPmonitorexit::execute() {

	}

	void OPmonitorexit::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPmonitorexit::getName () {
		return "monitorexit";
	}

	uint32_t OPmonitorexit::getOpCode () {
		return 195;
	}

	uint32_t OPmonitorexit::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// wide

	void OPwide::execute() {

	}

	void OPwide::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPwide::getName () {
		return "wide";
	}

	uint32_t OPwide::getOpCode () {
		return 196;
	}

	uint32_t OPwide::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		OPiinc iinc;

		opcode = data[idx + 1];

		index = Converter::to_u2(data[idx + 2], data[idx + 3]);

		if (opcode == iinc.getOpCode()) {
			countbyte = Converter::to_u2(data[idx + 4], data[idx + 5]);
			return 5;
		}

		return 3;
	}


	// multianewarray

	void OPmultianewarray::execute() {

	}

	void OPmultianewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPmultianewarray::getName () {
		return "multianewarray";
	}

	uint32_t OPmultianewarray::getOpCode () {
		return 197;
	}

	uint32_t OPmultianewarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 3;
	}


	// ifnull

	void OPifnull::execute() {

	}

	void OPifnull::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPifnull::getName () {
		return "ifnull";
	}

	uint32_t OPifnull::getOpCode () {
		return 198;
	}

	uint32_t OPifnull::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifnonnull

	void OPifnonnull::execute() {

	}

	void OPifnonnull::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPifnonnull::getName () {
		return "ifnonnull";
	}

	uint32_t OPifnonnull::getOpCode () {
		return 199;
	}

	uint32_t OPifnonnull::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// goto_w

	void OPgoto_w::execute() {

	}

	void OPgoto_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPgoto_w::getName () {
		return "goto_w";
	}

	uint32_t OPgoto_w::getOpCode () {
		return 200;
	}

	uint32_t OPgoto_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_u4(data[idx+1], data[idx+2], data[idx+3], data[idx+4]);
		return 4;
	}


	// jsr_w

	void OPjsr_w::execute() {

	}

	void OPjsr_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPjsr_w::getName () {
		return "jsr_w";
	}

	uint32_t OPjsr_w::getOpCode () {
		return 201;
	}

	uint32_t OPjsr_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 4;
	}


	// breakpoint

	void OPbreakpoint::execute() {

	}

	void OPbreakpoint::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPbreakpoint::getName () {
		return "breakpoint";
	}

	uint32_t OPbreakpoint::getOpCode () {
		return 202;
	}

	uint32_t OPbreakpoint::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// impdep1

	void OPimpdep1::execute() {

	}

	void OPimpdep1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPimpdep1::getName () {
		return "impdep1";
	}

	uint32_t OPimpdep1::getOpCode () {
		return 254;
	}

	uint32_t OPimpdep1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// impdep2

	void OPimpdep2::execute() {

	}

	void OPimpdep2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPimpdep2::getName () {
		return "impdep2";
	}

	uint32_t OPimpdep2::getOpCode () {
		return 255;
	}

	uint32_t OPimpdep2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}

};
