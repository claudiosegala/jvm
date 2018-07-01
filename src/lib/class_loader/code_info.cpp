#include "class_loader/code_info.hpp"

namespace jvm {

	const InstructionInfoInstantiator CodeInfo::instruction_set[256] = {
			InstructionInfo::instantiate<OPINFOnop>,               // 0
			InstructionInfo::instantiate<OPINFOaconst_null>,       // 1
			InstructionInfo::instantiate<OPINFOiconst_m1>,         // 2
			InstructionInfo::instantiate<OPINFOiconst_0>,          // 3
			InstructionInfo::instantiate<OPINFOiconst_1>,          // 4
			InstructionInfo::instantiate<OPINFOiconst_2>,          // 5
			InstructionInfo::instantiate<OPINFOiconst_3>,          // 6
			InstructionInfo::instantiate<OPINFOiconst_4>,          // 7
			InstructionInfo::instantiate<OPINFOiconst_5>,          // 8
			InstructionInfo::instantiate<OPINFOlconst_0>,          // 9
			InstructionInfo::instantiate<OPINFOlconst_1>,          // 10
			InstructionInfo::instantiate<OPINFOfconst_0>,          // 11
			InstructionInfo::instantiate<OPINFOfconst_1>,          // 12
			InstructionInfo::instantiate<OPINFOfconst_2>,          // 13
			InstructionInfo::instantiate<OPINFOdconst_0>,          // 14
			InstructionInfo::instantiate<OPINFOdconst_1>,          // 15
			InstructionInfo::instantiate<OPINFObipush>,            // 16
			InstructionInfo::instantiate<OPINFOsipush>,            // 17
			InstructionInfo::instantiate<OPINFOldc>,               // 18
			InstructionInfo::instantiate<OPINFOldc_w>,             // 19
			InstructionInfo::instantiate<OPINFOldc2_w>,            // 20
			InstructionInfo::instantiate<OPINFOiload>,             // 21
			InstructionInfo::instantiate<OPINFOlload>,             // 22
			InstructionInfo::instantiate<OPINFOfload>,             // 23
			InstructionInfo::instantiate<OPINFOdload>,             // 24
			InstructionInfo::instantiate<OPINFOaload>,             // 25
			InstructionInfo::instantiate<OPINFOiload_0>,           // 26
			InstructionInfo::instantiate<OPINFOiload_1>,           // 27
			InstructionInfo::instantiate<OPINFOiload_2>,           // 28
			InstructionInfo::instantiate<OPINFOiload_3>,           // 29
			InstructionInfo::instantiate<OPINFOlload_0>,           // 30
			InstructionInfo::instantiate<OPINFOlload_1>,           // 31
			InstructionInfo::instantiate<OPINFOlload_2>,           // 32
			InstructionInfo::instantiate<OPINFOlload_3>,           // 33
			InstructionInfo::instantiate<OPINFOfload_0>,           // 34
			InstructionInfo::instantiate<OPINFOfload_1>,           // 35
			InstructionInfo::instantiate<OPINFOfload_2>,           // 36
			InstructionInfo::instantiate<OPINFOfload_3>,           // 37
			InstructionInfo::instantiate<OPINFOdload_0>,           // 38
			InstructionInfo::instantiate<OPINFOdload_1>,           // 39
			InstructionInfo::instantiate<OPINFOdload_2>,           // 40
			InstructionInfo::instantiate<OPINFOdload_3>,           // 41
			InstructionInfo::instantiate<OPINFOaload_0>,           // 42
			InstructionInfo::instantiate<OPINFOaload_1>,           // 43
			InstructionInfo::instantiate<OPINFOaload_2>,           // 44
			InstructionInfo::instantiate<OPINFOaload_3>,           // 45
			InstructionInfo::instantiate<OPINFOiaload>,            // 46
			InstructionInfo::instantiate<OPINFOlaload>,            // 47
			InstructionInfo::instantiate<OPINFOfaload>,            // 48
			InstructionInfo::instantiate<OPINFOdaload>,            // 49
			InstructionInfo::instantiate<OPINFOaaload>,            // 50
			InstructionInfo::instantiate<OPINFObaload>,            // 51
			InstructionInfo::instantiate<OPINFOcaload>,            // 52
			InstructionInfo::instantiate<OPINFOsaload>,            // 53
			InstructionInfo::instantiate<OPINFOistore>,            // 54
			InstructionInfo::instantiate<OPINFOlstore>,            // 55
			InstructionInfo::instantiate<OPINFOfstore>,            // 56
			InstructionInfo::instantiate<OPINFOdstore>,            // 57
			InstructionInfo::instantiate<OPINFOastore>,            // 58
			InstructionInfo::instantiate<OPINFOistore_0>,          // 59
			InstructionInfo::instantiate<OPINFOistore_1>,          // 60
			InstructionInfo::instantiate<OPINFOistore_2>,          // 61
			InstructionInfo::instantiate<OPINFOistore_3>,          // 62
			InstructionInfo::instantiate<OPINFOlstore_0>,          // 63
			InstructionInfo::instantiate<OPINFOlstore_1>,          // 64
			InstructionInfo::instantiate<OPINFOlstore_2>,          // 65
			InstructionInfo::instantiate<OPINFOlstore_3>,          // 66
			InstructionInfo::instantiate<OPINFOfstore_0>,          // 67
			InstructionInfo::instantiate<OPINFOfstore_1>,          // 68
			InstructionInfo::instantiate<OPINFOfstore_2>,          // 69
			InstructionInfo::instantiate<OPINFOfstore_3>,          // 70
			InstructionInfo::instantiate<OPINFOdstore_0>,          // 71
			InstructionInfo::instantiate<OPINFOdstore_1>,          // 72
			InstructionInfo::instantiate<OPINFOdstore_2>,          // 73
			InstructionInfo::instantiate<OPINFOdstore_3>,          // 74
			InstructionInfo::instantiate<OPINFOastore_0>,          // 75
			InstructionInfo::instantiate<OPINFOastore_1>,          // 76
			InstructionInfo::instantiate<OPINFOastore_2>,          // 77
			InstructionInfo::instantiate<OPINFOastore_3>,          // 78
			InstructionInfo::instantiate<OPINFOiastore>,           // 79
			InstructionInfo::instantiate<OPINFOlastore>,           // 80
			InstructionInfo::instantiate<OPINFOfastore>,           // 81
			InstructionInfo::instantiate<OPINFOdastore>,           // 82
			InstructionInfo::instantiate<OPINFOaastore>,           // 83
			InstructionInfo::instantiate<OPINFObastore>,           // 84
			InstructionInfo::instantiate<OPINFOcastore>,           // 85
			InstructionInfo::instantiate<OPINFOsastore>,           // 86
			InstructionInfo::instantiate<OPINFOpop>,               // 87
			InstructionInfo::instantiate<OPINFOpop2>,              // 88
			InstructionInfo::instantiate<OPINFOdup>,               // 89
			InstructionInfo::instantiate<OPINFOdup_x1>,            // 90
			InstructionInfo::instantiate<OPINFOdup_x2>,            // 91
			InstructionInfo::instantiate<OPINFOdup2>,              // 92
			InstructionInfo::instantiate<OPINFOdup2_x1>,           // 93
			InstructionInfo::instantiate<OPINFOdup2_x2>,           // 94
			InstructionInfo::instantiate<OPINFOswap>,              // 95
			InstructionInfo::instantiate<OPINFOiadd>,              // 96
			InstructionInfo::instantiate<OPINFOladd>,              // 97
			InstructionInfo::instantiate<OPINFOfadd>,              // 98
			InstructionInfo::instantiate<OPINFOdadd>,              // 99
			InstructionInfo::instantiate<OPINFOisub>,              // 100
			InstructionInfo::instantiate<OPINFOlsub>,              // 101
			InstructionInfo::instantiate<OPINFOfsub>,              // 102
			InstructionInfo::instantiate<OPINFOdsub>,              // 103
			InstructionInfo::instantiate<OPINFOimul>,              // 104
			InstructionInfo::instantiate<OPINFOlmul>,              // 105
			InstructionInfo::instantiate<OPINFOfmul>,              // 106
			InstructionInfo::instantiate<OPINFOdmul>,              // 107
			InstructionInfo::instantiate<OPINFOidiv>,              // 108
			InstructionInfo::instantiate<OPINFOldiv>,              // 109
			InstructionInfo::instantiate<OPINFOfdiv>,              // 110
			InstructionInfo::instantiate<OPINFOddiv>,              // 111
			InstructionInfo::instantiate<OPINFOirem>,              // 112
			InstructionInfo::instantiate<OPINFOlrem>,              // 113
			InstructionInfo::instantiate<OPINFOfrem>,              // 114
			InstructionInfo::instantiate<OPINFOdrem>,              // 115
			InstructionInfo::instantiate<OPINFOineg>,              // 116
			InstructionInfo::instantiate<OPINFOlneg>,              // 117
			InstructionInfo::instantiate<OPINFOfneg>,              // 118
			InstructionInfo::instantiate<OPINFOdneg>,              // 119
			InstructionInfo::instantiate<OPINFOishl>,              // 120
			InstructionInfo::instantiate<OPINFOlshl>,              // 121
			InstructionInfo::instantiate<OPINFOishr>,              // 122
			InstructionInfo::instantiate<OPINFOlshr>,              // 123
			InstructionInfo::instantiate<OPINFOiushr>,             // 124
			InstructionInfo::instantiate<OPINFOlushr>,             // 125
			InstructionInfo::instantiate<OPINFOiand>,              // 126
			InstructionInfo::instantiate<OPINFOland>,              // 127
			InstructionInfo::instantiate<OPINFOior>,               // 128
			InstructionInfo::instantiate<OPINFOlor>,               // 129
			InstructionInfo::instantiate<OPINFOixor>,              // 130
			InstructionInfo::instantiate<OPINFOlxor>,              // 131
			InstructionInfo::instantiate<OPINFOiinc>,              // 132
			InstructionInfo::instantiate<OPINFOi2l>,               // 133
			InstructionInfo::instantiate<OPINFOi2f>,               // 134
			InstructionInfo::instantiate<OPINFOi2d>,               // 135
			InstructionInfo::instantiate<OPINFOl2i>,               // 136
			InstructionInfo::instantiate<OPINFOl2f>,               // 137
			InstructionInfo::instantiate<OPINFOl2d>,               // 138
			InstructionInfo::instantiate<OPINFOf2i>,               // 139
			InstructionInfo::instantiate<OPINFOf2l>,               // 140
			InstructionInfo::instantiate<OPINFOf2d>,               // 141
			InstructionInfo::instantiate<OPINFOd2i>,               // 142
			InstructionInfo::instantiate<OPINFOd2l>,               // 143
			InstructionInfo::instantiate<OPINFOd2f>,               // 144
			InstructionInfo::instantiate<OPINFOi2b>,               // 145
			InstructionInfo::instantiate<OPINFOi2c>,               // 146
			InstructionInfo::instantiate<OPINFOi2s>,               // 147
			InstructionInfo::instantiate<OPINFOlcmp>,              // 148
			InstructionInfo::instantiate<OPINFOfcmpl>,             // 149
			InstructionInfo::instantiate<OPINFOfcmpg>,             // 150
			InstructionInfo::instantiate<OPINFOdcmpl>,             // 151
			InstructionInfo::instantiate<OPINFOdcmpg>,             // 152
			InstructionInfo::instantiate<OPINFOifeq>,              // 153
			InstructionInfo::instantiate<OPINFOifne>,              // 154
			InstructionInfo::instantiate<OPINFOiflt>,              // 155
			InstructionInfo::instantiate<OPINFOifge>,              // 156
			InstructionInfo::instantiate<OPINFOifgt>,              // 157
			InstructionInfo::instantiate<OPINFOifle>,              // 158
			InstructionInfo::instantiate<OPINFOif_icmpeq>,         // 159
			InstructionInfo::instantiate<OPINFOif_icmpne>,         // 160
			InstructionInfo::instantiate<OPINFOif_icmplt>,         // 161
			InstructionInfo::instantiate<OPINFOif_icmpge>,         // 162
			InstructionInfo::instantiate<OPINFOif_icmpgt>,         // 163
			InstructionInfo::instantiate<OPINFOif_icmple>,         // 164
			InstructionInfo::instantiate<OPINFOif_acmpeq>,         // 165
			InstructionInfo::instantiate<OPINFOif_acmpne>,         // 166
			InstructionInfo::instantiate<OPINFOgoto>,              // 167
			InstructionInfo::instantiate<OPINFOjsr>,               // 168
			InstructionInfo::instantiate<OPINFOret>,               // 169
			InstructionInfo::instantiate<OPINFOtableswitch>,       // 170
			InstructionInfo::instantiate<OPINFOlookupswitch>,      // 171
			InstructionInfo::instantiate<OPINFOireturn>,           // 172
			InstructionInfo::instantiate<OPINFOlreturn>,           // 173
			InstructionInfo::instantiate<OPINFOfreturn>,           // 174
			InstructionInfo::instantiate<OPINFOdreturn>,           // 175
			InstructionInfo::instantiate<OPINFOareturn>,           // 176
			InstructionInfo::instantiate<OPINFOreturn>,            // 177
			InstructionInfo::instantiate<OPINFOgetstatic>,         // 178
			InstructionInfo::instantiate<OPINFOputstatic>,         // 179
			InstructionInfo::instantiate<OPINFOgetfield>,          // 180
			InstructionInfo::instantiate<OPINFOputfield>,          // 181
			InstructionInfo::instantiate<OPINFOinvokevirtual>,     // 182
			InstructionInfo::instantiate<OPINFOinvokespecial>,     // 183
			InstructionInfo::instantiate<OPINFOinvokestatic>,      // 184
			InstructionInfo::instantiate<OPINFOinvokeinterface>,   // 185
			InstructionInfo::instantiate<OPINFOinvokedynamic>,     // 186
			InstructionInfo::instantiate<OPINFOnew>,               // 187
			InstructionInfo::instantiate<OPINFOnewarray>,          // 188
			InstructionInfo::instantiate<OPINFOanewarray>,         // 189
			InstructionInfo::instantiate<OPINFOarraylength>,       // 190
			InstructionInfo::instantiate<OPINFOathrow>,            // 191
			InstructionInfo::instantiate<OPINFOcheckcast>,         // 192
			InstructionInfo::instantiate<OPINFOinstanceof>,        // 193
			InstructionInfo::instantiate<OPINFOmonitorenter>,      // 194
			InstructionInfo::instantiate<OPINFOmonitorexit>,       // 195
			InstructionInfo::instantiate<OPINFOwide>,              // 196
			InstructionInfo::instantiate<OPINFOmultianewarray>,    // 197
			InstructionInfo::instantiate<OPINFOifnull>,            // 198
			InstructionInfo::instantiate<OPINFOifnonnull>,         // 199
			InstructionInfo::instantiate<OPINFOgoto_w>,            // 200
			InstructionInfo::instantiate<OPINFOjsr_w>,             // 201
			InstructionInfo::instantiate<OPINFObreakpoint>,        // 202
			nullptr,                                               // 203
			nullptr,                                               // 204
			nullptr,                                               // 205
			nullptr,                                               // 206
			nullptr,                                               // 207
			nullptr,                                               // 208
			nullptr,                                               // 209
			nullptr,                                               // 210
			nullptr,                                               // 211
			nullptr,                                               // 212
			nullptr,                                               // 213
			nullptr,                                               // 214
			nullptr,                                               // 215
			nullptr,                                               // 216
			nullptr,                                               // 217
			nullptr,                                               // 218
			nullptr,                                               // 219
			nullptr,                                               // 220
			nullptr,                                               // 221
			nullptr,                                               // 222
			nullptr,                                               // 223
			nullptr,                                               // 224
			nullptr,                                               // 225
			nullptr,                                               // 226
			nullptr,                                               // 227
			nullptr,                                               // 228
			nullptr,                                               // 229
			nullptr,                                               // 230
			nullptr,                                               // 231
			nullptr,                                               // 232
			nullptr,                                               // 233
			nullptr,                                               // 234
			nullptr,                                               // 235
			nullptr,                                               // 236
			nullptr,                                               // 237
			nullptr,                                               // 238
			nullptr,                                               // 239
			nullptr,                                               // 240
			nullptr,                                               // 241
			nullptr,                                               // 242
			nullptr,                                               // 243
			nullptr,                                               // 244
			nullptr,                                               // 245
			nullptr,                                               // 246
			nullptr,                                               // 247
			nullptr,                                               // 248
			nullptr,                                               // 249
			nullptr,                                               // 250
			nullptr,                                               // 251
			nullptr,                                               // 252
			nullptr,                                               // 253
			InstructionInfo::instantiate<OPINFOimpdep1>,           // 254
			InstructionInfo::instantiate<OPINFOimpdep2>            // 255
	};

	void CodeInfo::interpret(std::vector<u1> &data) {
		for (uint32_t i = 0; i < data.size(); i++) {
			auto opcode = data[i];
			auto instr = getInstr(opcode);
			auto paramsRead = instr->fillParams(i, data);

			push_back(instr);
			i += paramsRead;
		}
	}

	std::shared_ptr<InstructionInfo> CodeInfo::getInstr(const u1 &opcode) {
		auto instrInstantiator = instruction_set[opcode];

		if (not instrInstantiator) {
			throw "Opcode with number " + std::to_string(opcode) + " does not exist!";
		}

		return instrInstantiator();
	}

	void CodeInfo::printToStream(std::ostream &os, std::string &prefix) {
		auto newPrefix = prefix + "\t";

		os << prefix << "Opcodes:" << std::endl;

		for (std::shared_ptr<InstructionInfo> &ptr : *this) {
			auto instr = ptr.get();

			if (instr != nullptr) {
				instr->printToStream(os, newPrefix);
			}
		}
	}

};
