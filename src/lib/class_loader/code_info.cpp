#include "class_loader/code_info.hpp"
#include "util/JvmException.hpp"

#define ADD_SET(instr) std::make_shared< instr >()

namespace jvm {

	InstructionInfoInstantiator CodeInfo::instruction_set[256] = {
			ADD_SET(OPINFOnop),               // 0
			ADD_SET(OPINFOaconst_null),       // 1
			ADD_SET(OPINFOiconst_m1),         // 2
			ADD_SET(OPINFOiconst_0),          // 3
			ADD_SET(OPINFOiconst_1),          // 4
			ADD_SET(OPINFOiconst_2),          // 5
			ADD_SET(OPINFOiconst_3),          // 6
			ADD_SET(OPINFOiconst_4),          // 7
			ADD_SET(OPINFOiconst_5),          // 8
			ADD_SET(OPINFOlconst_0),          // 9
			ADD_SET(OPINFOlconst_1),          // 10
			ADD_SET(OPINFOfconst_0),          // 11
			ADD_SET(OPINFOfconst_1),          // 12
			ADD_SET(OPINFOfconst_2),          // 13
			ADD_SET(OPINFOdconst_0),          // 14
			ADD_SET(OPINFOdconst_1),          // 15
			ADD_SET(OPINFObipush),            // 16
			ADD_SET(OPINFOsipush),            // 17
			ADD_SET(OPINFOldc),               // 18
			ADD_SET(OPINFOldc_w),             // 19
			ADD_SET(OPINFOldc2_w),            // 20
			ADD_SET(OPINFOiload),             // 21
			ADD_SET(OPINFOlload),             // 22
			ADD_SET(OPINFOfload),             // 23
			ADD_SET(OPINFOdload),             // 24
			ADD_SET(OPINFOaload),             // 25
			ADD_SET(OPINFOiload_0),           // 26
			ADD_SET(OPINFOiload_1),           // 27
			ADD_SET(OPINFOiload_2),           // 28
			ADD_SET(OPINFOiload_3),           // 29
			ADD_SET(OPINFOlload_0),           // 30
			ADD_SET(OPINFOlload_1),           // 31
			ADD_SET(OPINFOlload_2),           // 32
			ADD_SET(OPINFOlload_3),           // 33
			ADD_SET(OPINFOfload_0),           // 34
			ADD_SET(OPINFOfload_1),           // 35
			ADD_SET(OPINFOfload_2),           // 36
			ADD_SET(OPINFOfload_3),           // 37
			ADD_SET(OPINFOdload_0),           // 38
			ADD_SET(OPINFOdload_1),           // 39
			ADD_SET(OPINFOdload_2),           // 40
			ADD_SET(OPINFOdload_3),           // 41
			ADD_SET(OPINFOaload_0),           // 42
			ADD_SET(OPINFOaload_1),           // 43
			ADD_SET(OPINFOaload_2),           // 44
			ADD_SET(OPINFOaload_3),           // 45
			ADD_SET(OPINFOiaload),            // 46
			ADD_SET(OPINFOlaload),            // 47
			ADD_SET(OPINFOfaload),            // 48
			ADD_SET(OPINFOdaload),            // 49
			ADD_SET(OPINFOaaload),            // 50
			ADD_SET(OPINFObaload),            // 51
			ADD_SET(OPINFOcaload),            // 52
			ADD_SET(OPINFOsaload),            // 53
			ADD_SET(OPINFOistore),            // 54
			ADD_SET(OPINFOlstore),            // 55
			ADD_SET(OPINFOfstore),            // 56
			ADD_SET(OPINFOdstore),            // 57
			ADD_SET(OPINFOastore),            // 58
			ADD_SET(OPINFOistore_0),          // 59
			ADD_SET(OPINFOistore_1),          // 60
			ADD_SET(OPINFOistore_2),          // 61
			ADD_SET(OPINFOistore_3),          // 62
			ADD_SET(OPINFOlstore_0),          // 63
			ADD_SET(OPINFOlstore_1),          // 64
			ADD_SET(OPINFOlstore_2),          // 65
			ADD_SET(OPINFOlstore_3),          // 66
			ADD_SET(OPINFOfstore_0),          // 67
			ADD_SET(OPINFOfstore_1),          // 68
			ADD_SET(OPINFOfstore_2),          // 69
			ADD_SET(OPINFOfstore_3),          // 70
			ADD_SET(OPINFOdstore_0),          // 71
			ADD_SET(OPINFOdstore_1),          // 72
			ADD_SET(OPINFOdstore_2),          // 73
			ADD_SET(OPINFOdstore_3),          // 74
			ADD_SET(OPINFOastore_0),          // 75
			ADD_SET(OPINFOastore_1),          // 76
			ADD_SET(OPINFOastore_2),          // 77
			ADD_SET(OPINFOastore_3),          // 78
			ADD_SET(OPINFOiastore),           // 79
			ADD_SET(OPINFOlastore),           // 80
			ADD_SET(OPINFOfastore),           // 81
			ADD_SET(OPINFOdastore),           // 82
			ADD_SET(OPINFOaastore),           // 83
			ADD_SET(OPINFObastore),           // 84
			ADD_SET(OPINFOcastore),           // 85
			ADD_SET(OPINFOsastore),           // 86
			ADD_SET(OPINFOpop),               // 87
			ADD_SET(OPINFOpop2),              // 88
			ADD_SET(OPINFOdup),               // 89
			ADD_SET(OPINFOdup_x1),            // 90
			ADD_SET(OPINFOdup_x2),            // 91
			ADD_SET(OPINFOdup2),              // 92
			ADD_SET(OPINFOdup2_x1),           // 93
			ADD_SET(OPINFOdup2_x2),           // 94
			ADD_SET(OPINFOswap),              // 95
			ADD_SET(OPINFOiadd),              // 96
			ADD_SET(OPINFOladd),              // 97
			ADD_SET(OPINFOfadd),              // 98
			ADD_SET(OPINFOdadd),              // 99
			ADD_SET(OPINFOisub),              // 100
			ADD_SET(OPINFOlsub),              // 101
			ADD_SET(OPINFOfsub),              // 102
			ADD_SET(OPINFOdsub),              // 103
			ADD_SET(OPINFOimul),              // 104
			ADD_SET(OPINFOlmul),              // 105
			ADD_SET(OPINFOfmul),              // 106
			ADD_SET(OPINFOdmul),              // 107
			ADD_SET(OPINFOidiv),              // 108
			ADD_SET(OPINFOldiv),              // 109
			ADD_SET(OPINFOfdiv),              // 110
			ADD_SET(OPINFOddiv),              // 111
			ADD_SET(OPINFOirem),              // 112
			ADD_SET(OPINFOlrem),              // 113
			ADD_SET(OPINFOfrem),              // 114
			ADD_SET(OPINFOdrem),              // 115
			ADD_SET(OPINFOineg),              // 116
			ADD_SET(OPINFOlneg),              // 117
			ADD_SET(OPINFOfneg),              // 118
			ADD_SET(OPINFOdneg),              // 119
			ADD_SET(OPINFOishl),              // 120
			ADD_SET(OPINFOlshl),              // 121
			ADD_SET(OPINFOishr),              // 122
			ADD_SET(OPINFOlshr),              // 123
			ADD_SET(OPINFOiushr),             // 124
			ADD_SET(OPINFOlushr),             // 125
			ADD_SET(OPINFOiand),              // 126
			ADD_SET(OPINFOland),              // 127
			ADD_SET(OPINFOior),               // 128
			ADD_SET(OPINFOlor),               // 129
			ADD_SET(OPINFOixor),              // 130
			ADD_SET(OPINFOlxor),              // 131
			ADD_SET(OPINFOiinc),              // 132
			ADD_SET(OPINFOi2l),               // 133
			ADD_SET(OPINFOi2f),               // 134
			ADD_SET(OPINFOi2d),               // 135
			ADD_SET(OPINFOl2i),               // 136
			ADD_SET(OPINFOl2f),               // 137
			ADD_SET(OPINFOl2d),               // 138
			ADD_SET(OPINFOf2i),               // 139
			ADD_SET(OPINFOf2l),               // 140
			ADD_SET(OPINFOf2d),               // 141
			ADD_SET(OPINFOd2i),               // 142
			ADD_SET(OPINFOd2l),               // 143
			ADD_SET(OPINFOd2f),               // 144
			ADD_SET(OPINFOi2b),               // 145
			ADD_SET(OPINFOi2c),               // 146
			ADD_SET(OPINFOi2s),               // 147
			ADD_SET(OPINFOlcmp),              // 148
			ADD_SET(OPINFOfcmpl),             // 149
			ADD_SET(OPINFOfcmpg),             // 150
			ADD_SET(OPINFOdcmpl),             // 151
			ADD_SET(OPINFOdcmpg),             // 152
			ADD_SET(OPINFOifeq),              // 153
			ADD_SET(OPINFOifne),              // 154
			ADD_SET(OPINFOiflt),              // 155
			ADD_SET(OPINFOifge),              // 156
			ADD_SET(OPINFOifgt),              // 157
			ADD_SET(OPINFOifle),              // 158
			ADD_SET(OPINFOif_icmpeq),         // 159
			ADD_SET(OPINFOif_icmpne),         // 160
			ADD_SET(OPINFOif_icmplt),         // 161
			ADD_SET(OPINFOif_icmpge),         // 162
			ADD_SET(OPINFOif_icmpgt),         // 163
			ADD_SET(OPINFOif_icmple),         // 164
			ADD_SET(OPINFOif_acmpeq),         // 165
			ADD_SET(OPINFOif_acmpne),         // 166
			ADD_SET(OPINFOgoto),              // 167
			ADD_SET(OPINFOjsr),               // 168
			ADD_SET(OPINFOret),               // 169
			ADD_SET(OPINFOtableswitch),       // 170
			ADD_SET(OPINFOlookupswitch),      // 171
			ADD_SET(OPINFOireturn),           // 172
			ADD_SET(OPINFOlreturn),           // 173
			ADD_SET(OPINFOfreturn),           // 174
			ADD_SET(OPINFOdreturn),           // 175
			ADD_SET(OPINFOareturn),           // 176
			ADD_SET(OPINFOreturn),            // 177
			ADD_SET(OPINFOgetstatic),         // 178
			ADD_SET(OPINFOputstatic),         // 179
			ADD_SET(OPINFOgetfield),          // 180
			ADD_SET(OPINFOputfield),          // 181
			ADD_SET(OPINFOinvokevirtual),     // 182
			ADD_SET(OPINFOinvokespecial),     // 183
			ADD_SET(OPINFOinvokestatic),      // 184
			ADD_SET(OPINFOinvokeinterface),   // 185
			ADD_SET(OPINFOinvokedynamic),     // 186
			ADD_SET(OPINFOnew),               // 187
			ADD_SET(OPINFOnewarray),          // 188
			ADD_SET(OPINFOanewarray),         // 189
			ADD_SET(OPINFOarraylength),       // 190
			ADD_SET(OPINFOathrow),            // 191
			ADD_SET(OPINFOcheckcast),         // 192
			ADD_SET(OPINFOinstanceof),        // 193
			ADD_SET(OPINFOmonitorenter),      // 194
			ADD_SET(OPINFOmonitorexit),       // 195
			ADD_SET(OPINFOwide),              // 196
			ADD_SET(OPINFOmultianewarray),    // 197
			ADD_SET(OPINFOifnull),            // 198
			ADD_SET(OPINFOifnonnull),         // 199
			ADD_SET(OPINFOgoto_w),            // 200
			ADD_SET(OPINFOjsr_w),             // 201
			ADD_SET(OPINFObreakpoint),        // 202
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
			ADD_SET(OPINFOimpdep1),           // 254
			ADD_SET(OPINFOimpdep2)            // 255
	};

	void CodeInfo::interpret(std::vector<u1> &data) {
		for (uint32_t i = 0; i < data.size(); i++) {
			auto opcode = data[i];
			auto instr = getInstr(opcode);
			auto paramsRead = instr->fillParams(i, data);

			insert({i, instr});
			i += paramsRead;
		}
	}

	InstructionInfoInstantiator CodeInfo::getInstr(u1 &opcode) {
		auto instrInstantiator = instruction_set[opcode];
		if (instrInstantiator) {
			return instrInstantiator;
		}

		throw JvmException("Opcode with number " + std::to_string(opcode) + " does not exist!");
	}

	void CodeInfo::printToStream(std::ostream &os, std::string &prefix) {
		auto newPrefix = prefix + "\t";

		os << prefix << "Opcodes:" << std::endl;
	}

};
