#include "instructions/code.hpp"

namespace jvm {

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

	void Code::interpret(std::vector<u1> &data) {
		for (uint32_t i = 0; i < data.size(); i++) {
			auto opcode = data[i];
			auto instr = getInstr(opcode);
			auto paramsRead = instr->fillParams(i, data);

			push_back(instr);
			i += paramsRead;
		}
	}

	std::shared_ptr<Instruction> Code::getInstr(const u1 &opcode) {
		auto instrInstantiator = instruction_set[opcode];

		if (not instrInstantiator) {
			throw "Opcode with number " + std::to_string(opcode) + " does not exist!";
		}

		return instrInstantiator();
	}

	void Code::printToStream(std::ostream &os, std::string &prefix) {
		auto newPrefix = prefix + "\t";

		os << prefix << "Opcodes:" << std::endl;

		for (std::shared_ptr<Instruction> &ptr : *this) {
			auto instr = ptr.get();

			if (instr != nullptr) {
				instr->printToStream(os, newPrefix);
			}
		}
	}

};
