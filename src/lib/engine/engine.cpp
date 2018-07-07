#include "engine/engine.hpp"
#include "util/JvmException.hpp"

namespace jvm {

	Engine::Engine (ClassLoader &cl) {
		exec = {
				&Engine::exec_nop,               // 0
				&Engine::exec_aconst_null,       // 1
				&Engine::exec_iconst_m1,         // 2
				&Engine::exec_iconst_0,          // 3
				&Engine::exec_iconst_1,          // 4
				&Engine::exec_iconst_2,          // 5
				&Engine::exec_iconst_3,          // 6
				&Engine::exec_iconst_4,          // 7
				&Engine::exec_iconst_5,          // 8
				&Engine::exec_lconst_0,          // 9
				&Engine::exec_lconst_1,          // 10
				&Engine::exec_fconst_0,          // 11
				&Engine::exec_fconst_1,          // 12
				&Engine::exec_fconst_2,          // 13
				&Engine::exec_dconst_0,          // 14
				&Engine::exec_dconst_1,          // 15
				&Engine::exec_bipush,            // 16
				&Engine::exec_sipush,            // 17
				&Engine::exec_ldc,               // 18
				&Engine::exec_ldc_w,             // 19
				&Engine::exec_ldc2_w,            // 20
				&Engine::exec_iload,             // 21
				&Engine::exec_lload,             // 22
				&Engine::exec_fload,             // 23
				&Engine::exec_dload,             // 24
				&Engine::exec_aload,             // 25
				&Engine::exec_iload_0,           // 26
				&Engine::exec_iload_1,           // 27
				&Engine::exec_iload_2,           // 28
				&Engine::exec_iload_3,           // 29
				&Engine::exec_lload_0,           // 30
				&Engine::exec_lload_1,           // 31
				&Engine::exec_lload_2,           // 32
				&Engine::exec_lload_3,           // 33
				&Engine::exec_fload_0,           // 34
				&Engine::exec_fload_1,           // 35
				&Engine::exec_fload_2,           // 36
				&Engine::exec_fload_3,           // 37
				&Engine::exec_dload_0,           // 38
				&Engine::exec_dload_1,           // 39
				&Engine::exec_dload_2,           // 40
				&Engine::exec_dload_3,           // 41
				&Engine::exec_aload_0,           // 42
				&Engine::exec_aload_1,           // 43
				&Engine::exec_aload_2,           // 44
				&Engine::exec_aload_3,           // 45
				&Engine::exec_iaload,            // 46
				&Engine::exec_laload,            // 47
				&Engine::exec_faload,            // 48
				&Engine::exec_daload,            // 49
				&Engine::exec_aaload,            // 50
				&Engine::exec_baload,            // 51
				&Engine::exec_caload,            // 52
				&Engine::exec_saload,            // 53
				&Engine::exec_istore,            // 54
				&Engine::exec_lstore,            // 55
				&Engine::exec_fstore,            // 56
				&Engine::exec_dstore,            // 57
				&Engine::exec_astore,            // 58
				&Engine::exec_istore_0,          // 59
				&Engine::exec_istore_1,          // 60
				&Engine::exec_istore_2,          // 61
				&Engine::exec_istore_3,          // 62
				&Engine::exec_lstore_0,          // 63
				&Engine::exec_lstore_1,          // 64
				&Engine::exec_lstore_2,          // 65
				&Engine::exec_lstore_3,          // 66
				&Engine::exec_fstore_0,          // 67
				&Engine::exec_fstore_1,          // 68
				&Engine::exec_fstore_2,          // 69
				&Engine::exec_fstore_3,          // 70
				&Engine::exec_dstore_0,          // 71
				&Engine::exec_dstore_1,          // 72
				&Engine::exec_dstore_2,          // 73
				&Engine::exec_dstore_3,          // 74
				&Engine::exec_astore_0,          // 75
				&Engine::exec_astore_1,          // 76
				&Engine::exec_astore_2,          // 77
				&Engine::exec_astore_3,          // 78
				&Engine::exec_iastore,           // 79
				&Engine::exec_lastore,           // 80
				&Engine::exec_fastore,           // 81
				&Engine::exec_dastore,           // 82
				&Engine::exec_aastore,           // 83
				&Engine::exec_bastore,           // 84
				&Engine::exec_castore,           // 85
				&Engine::exec_sastore,           // 86
				&Engine::exec_pop,               // 87
				&Engine::exec_pop2,              // 88
				&Engine::exec_dup,               // 89
				&Engine::exec_dup_x1,            // 90
				&Engine::exec_dup_x2,            // 91
				&Engine::exec_dup2,              // 92
				&Engine::exec_dup2_x1,           // 93
				&Engine::exec_dup2_x2,           // 94
				&Engine::exec_swap,              // 95
				&Engine::exec_iadd,              // 96
				&Engine::exec_ladd,              // 97
				&Engine::exec_fadd,              // 98
				&Engine::exec_dadd,              // 99
				&Engine::exec_isub,              // 100
				&Engine::exec_lsub,              // 101
				&Engine::exec_fsub,              // 102
				&Engine::exec_dsub,              // 103
				&Engine::exec_imul,              // 104
				&Engine::exec_lmul,              // 105
				&Engine::exec_fmul,              // 106
				&Engine::exec_dmul,              // 107
				&Engine::exec_idiv,              // 108
				&Engine::exec_ldiv,              // 109
				&Engine::exec_fdiv,              // 110
				&Engine::exec_ddiv,              // 111
				&Engine::exec_irem,              // 112
				&Engine::exec_lrem,              // 113
				&Engine::exec_frem,              // 114
				&Engine::exec_drem,              // 115
				&Engine::exec_ineg,              // 116
				&Engine::exec_lneg,              // 117
				&Engine::exec_fneg,              // 118
				&Engine::exec_dneg,              // 119
				&Engine::exec_ishl,              // 120
				&Engine::exec_lshl,              // 121
				&Engine::exec_ishr,              // 122
				&Engine::exec_lshr,              // 123
				&Engine::exec_iushr,             // 124
				&Engine::exec_lushr,             // 125
				&Engine::exec_iand,              // 126
				&Engine::exec_land,              // 127
				&Engine::exec_ior,               // 128
				&Engine::exec_lor,               // 129
				&Engine::exec_ixor,              // 130
				&Engine::exec_lxor,              // 131
				&Engine::exec_iinc,              // 132
				&Engine::exec_i2l,               // 133
				&Engine::exec_i2f,               // 134
				&Engine::exec_i2d,               // 135
				&Engine::exec_l2i,               // 136
				&Engine::exec_l2f,               // 137
				&Engine::exec_l2d,               // 138
				&Engine::exec_f2i,               // 139
				&Engine::exec_f2l,               // 140
				&Engine::exec_f2d,               // 141
				&Engine::exec_d2i,               // 142
				&Engine::exec_d2l,               // 143
				&Engine::exec_d2f,               // 144
				&Engine::exec_i2b,               // 145
				&Engine::exec_i2c,               // 146
				&Engine::exec_i2s,               // 147
				&Engine::exec_lcmp,              // 148
				&Engine::exec_fcmpl,             // 149
				&Engine::exec_fcmpg,             // 150
				&Engine::exec_dcmpl,             // 151
				&Engine::exec_dcmpg,             // 152
				&Engine::exec_ifeq,              // 153
				&Engine::exec_ifne,              // 154
				&Engine::exec_iflt,              // 155
				&Engine::exec_ifge,              // 156
				&Engine::exec_ifgt,              // 157
				&Engine::exec_ifle,              // 158
				&Engine::exec_if_icmpeq,         // 159
				&Engine::exec_if_icmpne,         // 160
				&Engine::exec_if_icmplt,         // 161
				&Engine::exec_if_icmpge,         // 162
				&Engine::exec_if_icmpgt,         // 163
				&Engine::exec_if_icmple,         // 164
				&Engine::exec_if_acmpeq,         // 165
				&Engine::exec_if_acmpne,         // 166
				&Engine::exec_goto,              // 167
				&Engine::exec_jsr,               // 168
				&Engine::exec_ret,               // 169
				&Engine::exec_tableswitch,       // 170
				&Engine::exec_lookupswitch,      // 171
				&Engine::exec_ireturn,           // 172
				&Engine::exec_lreturn,           // 173
				&Engine::exec_freturn,           // 174
				&Engine::exec_dreturn,           // 175
				&Engine::exec_areturn,           // 176
				&Engine::exec_return,            // 177
				&Engine::exec_getstatic,         // 178
				&Engine::exec_putstatic,         // 179
				&Engine::exec_getfield,          // 180
				&Engine::exec_putfield,          // 181
				&Engine::exec_invokevirtual,     // 182
				&Engine::exec_invokespecial,     // 183
				&Engine::exec_invokestatic,      // 184
				&Engine::exec_invokeinterface,   // 185
				&Engine::exec_invokedynamic,     // 186
				&Engine::exec_new,               // 187
				&Engine::exec_newarray,          // 188
				&Engine::exec_anewarray,         // 189
				&Engine::exec_arraylength,       // 190
				&Engine::exec_athrow,            // 191
				&Engine::exec_checkcast,         // 192
				&Engine::exec_instanceof,        // 193
				&Engine::exec_monitorenter,      // 194
				&Engine::exec_monitorexit,       // 195
				&Engine::exec_wide,              // 196
				&Engine::exec_multianewarray,    // 197
				&Engine::exec_ifnull,            // 198
				&Engine::exec_ifnonnull,         // 199
				&Engine::exec_goto_w,            // 200
				&Engine::exec_jsr_w,             // 201
				&Engine::exec_breakpoint,        // 202
				nullptr,                        // 203
				nullptr,                        // 204
				nullptr,                        // 205
				nullptr,                        // 206
				nullptr,                        // 207
				nullptr,                        // 208
				nullptr,                        // 209
				nullptr,                        // 210
				nullptr,                        // 211
				nullptr,                        // 212
				nullptr,                        // 213
				nullptr,                        // 214
				nullptr,                        // 215
				nullptr,                        // 216
				nullptr,                        // 217
				nullptr,                        // 218
				nullptr,                        // 219
				nullptr,                        // 220
				nullptr,                        // 221
				nullptr,                        // 222
				nullptr,                        // 223
				nullptr,                        // 224
				nullptr,                        // 225
				nullptr,                        // 226
				nullptr,                        // 227
				nullptr,                        // 228
				nullptr,                        // 229
				nullptr,                        // 230
				nullptr,                        // 231
				nullptr,                        // 232
				nullptr,                        // 233
				nullptr,                        // 234
				nullptr,                        // 235
				nullptr,                        // 236
				nullptr,                        // 237
				nullptr,                        // 238
				nullptr,                        // 239
				nullptr,                        // 240
				nullptr,                        // 241
				nullptr,                        // 242
				nullptr,                        // 243
				nullptr,                        // 244
				nullptr,                        // 245
				nullptr,                        // 246
				nullptr,                        // 247
				nullptr,                        // 248
				nullptr,                        // 249
				nullptr,                        // 250
				nullptr,                        // 251
				nullptr,                        // 252
				nullptr,                        // 253
				&Engine::exec_impdep1,           // 254
				&Engine::exec_impdep2            // 255
		};

		auto name = cl.constant_pool[cl.this_class]->toString(cl.constant_pool);
		JavaClasses.insert({name, cl});
		Entry_class_name = name;
	}

	Execution Engine::getExecutor(u1 opcode) {
		auto executor = exec[opcode];

		if (not executor) {
			throw JvmException("Opcode with number " + std::to_string(opcode) + " does not exist!");
		}

		return executor;
	}

	void Engine::execute () {
		auto main_name = std::string("main([Ljava/lang/String;)V");
		auto cl = JavaClasses[Entry_class_name];
		auto mt = cl.methods[main_name]; //HARD-CODED SEARCH FOR MAIN, do not modify without notifying others

		// run_clinit();
		// run_init();

		Frame frame(cl, mt);                                         // Create first frame

		fs.push(frame);                                              // Init first frame in JVM

		while (not fs.empty()) {                                     // This will exit when instruction 'return' is executed
			auto curFrame = fs.top();
			auto& codes = curFrame.mt.attributes.Codes[0]->code;     // Get the current method's executable code
			auto instruction = codes[curFrame.PC];                   // Get the current instruction
			auto opcode = instruction->getOpCode();                  // Got op-code of the instruction
			auto executor = getExecutor(opcode);                     // Get pointer to instruction execution

			(this ->* executor)(instruction.get());                  // Access the instruction and execute it
		}
		std::cout <<"Execução concluída" << std::endl;
	}

	void Engine::run_clinit () {
		// Won't be needed
	}

	void Engine::run_init () {
		// Won't be needed
	}

	ClassAndMethod Engine::findMethod(CP_Methodref &ref) {
		auto &currentClass = fs.top().cl;
		auto &constantPool = currentClass.constant_pool;

		auto &classInfo = constantPool[ref.class_index] -> as<CP_Class>();
		auto &nameAndType = constantPool[ref.name_and_type_index] -> as<CP_NameAndType>();
		auto name = constantPool[nameAndType.name_index] -> toString(constantPool);
		auto descriptor = constantPool[nameAndType.descriptor_index] -> toString(constantPool);

		std::string methodKey = name + descriptor;

		return findMethod(classInfo, methodKey);
	}

	ClassAndMethod Engine::findMethod(CP_Class &classInfo, std::string &methodKey) {
		auto &currentClass = fs.top().cl;
		auto &constantPool = currentClass.constant_pool;
		auto &methodClass = findClass(classInfo);
		auto pair = methodClass.methods.find(methodKey);

		if (pair == methodClass.methods.end()) {
			if (methodClass.super_class == 0) {
				throw JvmException("Method " + methodKey + " not found!");
			}
			auto& superClass = constantPool[methodClass.super_class]->as<CP_Class>();
			return findMethod(superClass, methodKey);
		}

		return {methodClass, pair->second};
	}

	ClassLoader & Engine::findClass(CP_Class &classInfo) {
		auto &cl = fs.top().cl;
		auto &cp = cl.constant_pool;
		auto className = cp[classInfo.name_index]-> toString(cp);
		return findClass(className);
	}

	ClassLoader &Engine::findClass(std::string &className) {
		if (JavaClasses.count(className) > 0) {  // If class was already loaded, return
			return JavaClasses[className];
		}

		// Find the corresponding .class file and load

		ClassLoader newClass;

		newClass.read(path + className + ".class"); // Load the correct class
		JavaClasses.insert({ className, newClass }); // Add new class to the map

		return JavaClasses[className];
	}

	u4 Engine::getArgumentsSize (std::string descriptor) {
		u4 nargs = 0;

		for (u2 i = 1; descriptor[i] != ')'; i++) {
			switch (descriptor[i]) {
				case 'D': // double-precision floating-point value
				case 'J': // long integer
					nargs += 2;
					break;
				case '[':
					nargs++;
					while(descriptor[++i] != '['); // jump description of how much dimentions it is
					if (descriptor[i] == 'L') { // if array of type L
						while(descriptor[++i] != ';');
					}
					break;
				case 'L': // an instance of class ClassName
					nargs++;
					while(descriptor[++i] != ';'); // jump the name of the class
					break;
				default:
					nargs++;
					break;
			}
		}

		return nargs;
	}

	void Engine::exec_nop (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOnop *>(info); // get data in class
		auto &frame = fs.top();
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_aconst_null (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOaconst_null *>(info); // get data in class
		auto &frame = fs.top();

		op4 res { .ui4 = 0 };

		frame.operands.push4(T_REF, res); // TODO: verify if the type match
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iconst_m1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiconst_m1 *>(info); // get data in class
		auto &frame = fs.top();

		op4 res = {.i4 = -1};

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iconst_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiconst_0 *>(info); // get data in class
		auto &frame = fs.top();

		op4 res { .ui4 = 0 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iconst_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiconst_1 *>(info); // get data in class
		auto &frame = fs.top();

		op4 res { .ui4 = 1 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iconst_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiconst_2 *>(info); // get data in class
		auto &frame = fs.top();

		op4 res { .ui4 = 2 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iconst_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiconst_3 *>(info); // get data in class
		auto &frame = fs.top();

		op4 res { .ui4 = 3 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iconst_4 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiconst_4 *>(info); // get data in class
		auto &frame = fs.top();

		op4 res { .ui4 = 4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iconst_5 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiconst_5 *>(info); // get data in class
		auto &frame = fs.top();

		op4 res { .ui4 = 5 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;

	}

	void Engine::exec_lconst_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlconst_0 *>(info); // get data in class
		auto &frame = fs.top();

		op8 res { .ull = 0 };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lconst_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlconst_1 *>(info); // get data in class
		auto &frame = fs.top();

		op8 res { .ull = 1 };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fconst_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfconst_0 *>(info); // get data in class
		auto &frame = fs.top();
		op4 res { .f = 0.0 };
		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fconst_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfconst_1 *>(info); // get data in class
		auto &frame = fs.top();
		op4 res { .f = 1.0 };
		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fconst_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfconst_2 *>(info); // get data in class
		auto &frame = fs.top();
		op4 res { .f = 2.0 };
		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dconst_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdconst_0 *>(info); // get data in class
		auto &frame = fs.top();

		op8 res { .lf = 0.0 };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dconst_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdconst_1 *>(info); // get data in class
		auto &frame = fs.top();

		op8 res { .lf = 1.0 };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_bipush (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFObipush *>(info); // get data in class
		auto &frame = fs.top();
		op4 res { .i1 = data->byte };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_sipush (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOsipush *>(info); // get data in class
		auto &frame = fs.top();
		op4 res { .i2 = data->value };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ldc (InstructionInfo * info) {
		auto data = reinterpret_cast<OPINFOldc *>(info); // get data in class
		auto &frame = fs.top();
		auto k = frame.cl.constant_pool[data->index];
		if (k->getTag() == Integer /* Integer */) {
			auto int_cp = k->as<CP_Integer>();
			op4 value{ .ui4 = int_cp._bytes };
			frame.operands.push4(T_INT, value);
		} else if (k->getTag() == Float /* Float */) {
			auto float_cp = k->as<CP_Float>();
			op4 value { .ui4 = float_cp._bytes };
			frame.operands.push4(T_FLOAT, value);
		} else if (k->getTag() == String /* String */) {
			auto cp_str = k->as<CP_String>();
			frame.operands.push4(T_STRING, cp_str.string_index );
		} else {
			throw JvmException("Error on ldc!");
		}

		frame.PC += data->jmp + 1;
	}


	// TODO: remove this frame.PC repeated
	void Engine::exec_ldc_w (InstructionInfo * info) {
		auto data = reinterpret_cast<OPINFOldc *>(info); // get data in class
		auto &frame = fs.top();
		auto k = frame.cl.constant_pool[data->index];
		if (k->getTag() == Integer /* Integer */) {
			auto int_cp = k->as<CP_Integer>();
			op4 value{ .ui4 = int_cp._bytes };
			frame.operands.push4(T_INT, value);
		} else if (k->getTag() == Float /* Float */) {
			auto float_cp = k->as<CP_Float>();
			op4 value{ .ui4 = float_cp._bytes };
			frame.operands.push4(T_FLOAT, value);
		} else if (k->getTag() == String /* String */) {
			auto cp_str = k->as<CP_String>();
			frame.operands.push4(T_STRING, cp_str.string_index);
		}else{
			throw JvmException("Error in ldc_w");
		}

		frame.PC += data->jmp + 1;

	}
	void Engine::exec_ldc2_w (InstructionInfo * info) {

		auto data = reinterpret_cast<OPINFOldc *>(info); // get data in class
		auto &frame = fs.top();
		auto k = frame.cl.constant_pool[data->index];

		if (k->getTag() == Long) {
			auto long_cp = k->as<CP_Long>();
			op4 value1 {.ui4 = static_cast<u4>(long_cp.low_bytes)};
			op4 value2 {.ui4 = static_cast<u4>(long_cp.high_bytes)};

			auto res = Converter::to_op8(value1, value2);
			frame.operands.push8(T_LONG, res);
		} else if (k->getTag() == Double) {
			auto double_cp = k->as<CP_Double>();
			op4 value1 { .ui4 = static_cast<u4>(double_cp.low_bytes) };
			op4 value2 { .ui4 = static_cast<u4>(double_cp.high_bytes) };

			auto res = Converter::to_op8(value1, value2);
			frame.operands.push8(T_DOUBLE, res);
		}

		frame.PC += data->jmp + 1;
	}
	void Engine::exec_iload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiload *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(data->index);
		frame.operands.push4(T_INT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlload *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(data->index);

		frame.operands.push8(T_LONG, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfload *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(data->index);

		frame.operands.push4(T_FLOAT, value);
		frame.PC += data->jmp + 1;
	}
	void Engine::exec_dload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdload *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(data->index);

		frame.operands.push8(T_DOUBLE, value);
		frame.PC += data->jmp + 1;
	}
	void Engine::exec_aload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOaload *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(data->index);

		frame.operands.push4(T_ARRAY, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iload_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiload_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(0);

		frame.operands.push4(T_INT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iload_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiload_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(1);

		frame.operands.push4(T_INT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iload_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiload_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(2);

		frame.operands.push4(T_INT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iload_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiload_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(3);

		frame.operands.push4(T_INT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lload_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlload_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(0);

		frame.operands.push8(T_LONG, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lload_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlload_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(1);
		frame.operands.push8(T_LONG, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lload_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlload_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(2);
		frame.operands.push8(T_LONG, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lload_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlload_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(3);
		frame.operands.push8(T_LONG, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fload_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfload_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(0);
		frame.operands.push4(T_FLOAT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fload_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfload_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(1);
		frame.operands.push4(T_FLOAT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fload_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfload_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(2);
		frame.operands.push4(T_FLOAT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fload_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfload_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(3);
		frame.operands.push4(T_FLOAT, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dload_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdload_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(0);
		frame.operands.push8(T_DOUBLE, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dload_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdload_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(1);
		frame.operands.push8(T_DOUBLE, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dload_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdload_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(2);
		frame.operands.push8(T_DOUBLE, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dload_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdload_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get8(3);
		frame.operands.push8(T_DOUBLE, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_aload_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOaload_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(0);
		frame.operands.push4(T_ARRAY, value);
	}

	void Engine::exec_aload_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOaload_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(1);
		frame.operands.push4(T_ARRAY, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_aload_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOaload_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(2);
		frame.operands.push4(T_ARRAY, value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_aload_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOaload_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(3);
		frame.operands.push4(T_ARRAY, value);
		frame.PC += data->jmp + 1;

	}

	void Engine::exec_iaload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiaload *>(info); // get data in class
		auto &frame = fs.top();
		auto val2 = frame.operands.pop4();
		auto val1 = frame.operands.pop4();

		frame.PC += data->jmp + 1;

	}
	// TODO VERIFY THIS INSTRUCTION
	void Engine::exec_laload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlaload *>(info); // get data in class
		auto &frame = fs.top();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();
		long * ARP = static_cast<long*>(mem[arrayref.value.i4]);
		op8 value;
		value.lf = ARP[index.value.i4];
		frame.operands.push8(T_LONG, value.ll);
		frame.PC += data->jmp + 1;
	}
	// TODO VERIFY THIS INSTRUCTION
	void Engine::exec_faload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfaload *>(info); // get data in class
		auto &frame = fs.top();
		auto index = frame.operands.pop4();
		auto arrareyref = frame.operands.pop4();
		float * ARP = static_cast<float*>(mem[arrareyref.value.i4]);
		op4 value;
		value.f = ARP[index.value.i4];
		frame.operands.push4(T_FLOAT, value.f);
		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO VERIFY THIS INSTRUCTION
	void Engine::exec_daload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdaload *>(info); // get data in class
		auto &frame = fs.top();
		auto index = frame.operands.pop4();
		auto arrareyref = frame.operands.pop4();
		double * ARP = static_cast<double*>(mem[arrareyref.value.i4]);
		op8 value;
		value.lf = ARP[index.value.i4];
		frame.operands.push8(T_DOUBLE, value.lf);

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO VERIFY THIS INSTRUCTION
	void Engine::exec_aaload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOaaload *>(info); // get data in class
		auto &frame = fs.top();
		auto index = frame.operands.pop4();
		auto arreyref = frame.operands.pop4();
		uint32_t * ARP = static_cast<uint32_t*>(mem[arreyref.value.i4]);
		op4 value;
		value.ui4 = static_cast<uint32_t >(ARP[index.value.i4]);
		frame.operands.push4(T_ARRAY, value.ui4);
		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_baload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFObaload *>(info); // get data in class
		auto &frame = fs.top();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();
		uint8_t * ARP = static_cast<uint8_t*>(mem[arrayref.value.i4]);
		op4 value;
		value.ui1 = static_cast<uint8_t>(ARP[index.value.i4]);
		frame.operands.push4(T_BYTE, value);
		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_caload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOcaload *>(info); // get data in class
		auto &frame = fs.top();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();
		uint8_t * ARP = static_cast<uint8_t*>(mem[arrayref.value.i4]);
		op4 value;
		value.ui1 = static_cast<uint8_t>(ARP[index.value.i4]);
		frame.operands.push4(T_BYTE, value);
		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}
	// TODO VERIFY THIS INSTRUCTION
	void Engine::exec_saload (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOsaload *>(info); // get data in class
		auto &frame = fs.top();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();
		int16_t * ARP = static_cast<int16_t *>(mem[arrayref.value.i4]);
		op4 value;
		value.i2 = static_cast<int16_t>(ARP[index.value.i4]);
		frame.operands.push4(T_LONG, value.i2);
		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}
	void Engine::exec_istore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOistore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();
		frame.variables.set(data->index, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lstore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlstore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(data->index, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fstore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfstore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(data->index, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dstore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdstore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(data->index, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_astore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOastore *>(info); // get data in class
		auto &frame = fs.top();
		auto objectref = frame.operands.pop4();

		frame.variables.set(data->index, objectref.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_istore_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOistore_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(0, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_istore_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOistore_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(1, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_istore_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOistore_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(2, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_istore_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOistore_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(3, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lstore_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlstore_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(0, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lstore_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlstore_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(1, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lstore_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlstore_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(2, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lstore_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlstore_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(3, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fstore_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfstore_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(0, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fstore_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfstore_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(1, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fstore_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfstore_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(2, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fstore_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfstore_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.variables.set(3, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dstore_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdstore_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(0, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dstore_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdstore_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(1, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dstore_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdstore_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(2, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dstore_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdstore_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.variables.set(3, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_astore_0 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOastore_0 *>(info); // get data in class
		auto &frame = fs.top();
		auto objectref = frame.operands.pop4();

		frame.variables.set(0, objectref.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_astore_1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOastore_1 *>(info); // get data in class
		auto &frame = fs.top();
		auto objectref = frame.operands.pop4();

		frame.variables.set(1, objectref.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_astore_2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOastore_2 *>(info); // get data in class
		auto &frame = fs.top();
		auto objectref = frame.operands.pop4();

		frame.variables.set(2, objectref.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_astore_3 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOastore_3 *>(info); // get data in class
		auto &frame = fs.top();
		auto objectref = frame.operands.pop4();

		frame.variables.set(3, objectref.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iastore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiastore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();

		frame.variables.set(index.value.ui2,value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lastore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlastore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();

		frame.variables.set(index.value.ui2, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fastore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfastore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();

		frame.variables.set(index.value.ui2,value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dastore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdastore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();

		frame.variables.set(index.value.ui2,value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_aastore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOaastore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();

		frame.variables.set(index.value.i2,value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_bastore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFObastore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();

		frame.variables.set(index.value.i2,value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_castore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOcastore *>(info); // get data in class
		auto &frame = fs.top();
		auto index = frame.operands.pop4();
		auto value = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();

		frame.variables.set(index.value.i2,value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_sastore (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOsastore *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();
		auto index = frame.operands.pop4();
		auto arrayref = frame.operands.pop4();

		frame.variables.set(index.value.i2,value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_pop (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOpop *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		frame.PC += data->jmp + 1;
	}

	void Engine::exec_pop2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOpop2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dup (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdup *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type != T_DOUBLE);
		assert(value.type != T_LONG);

		frame.operands.push4(value.type, value.value);
		frame.operands.push4(value.type, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dup_x1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdup_x1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value1 = frame.operands.pop4();
		auto value2 = frame.operands.pop4();

		assert(value1.type != T_DOUBLE);
		assert(value1.type != T_LONG);
		assert(value2.type != T_DOUBLE);
		assert(value2.type != T_LONG);

		frame.operands.push4(value1.type, value1.value);
		frame.operands.push4(value2.type, value2.value);
		frame.operands.push4(value1.type, value1.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dup_x2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdup_x2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value1 = frame.operands.pop4();
		auto value2 = frame.operands.pop8();

		frame.operands.push4(value1.type, value1.value);
		frame.operands.push8(value2.type, value2.value);
		frame.operands.push4(value1.type, value1.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dup2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdup2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		frame.operands.push8(value.type, value.value);
		frame.operands.push8(value.type, value.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dup2_x1 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdup2_x1 *>(info); // get data in class
		auto &frame = fs.top();
		auto value1 = frame.operands.pop8();
		auto value2 = frame.operands.pop4();

		frame.operands.push8(value1.type, value1.value);
		frame.operands.push4(value2.type, value2.value);
		frame.operands.push8(value1.type, value1.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dup2_x2 (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdup2_x2 *>(info); // get data in class
		auto &frame = fs.top();
		auto value1 = frame.operands.pop8();
		auto value2 = frame.operands.pop8();

		frame.operands.push8(value1.type, value1.value);
		frame.operands.push8(value2.type, value2.value);
		frame.operands.push8(value1.type, value1.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_swap (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOswap *>(info); // get data in class
		auto &frame = fs.top();
		auto value1 = frame.operands.pop4();
		auto value2 = frame.operands.pop4();

		frame.operands.push4(value1.type, value1.value);
		frame.operands.push4(value2.type, value2.value);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iadd (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiadd *>(info); // get data in class
		auto &frame = fs.top();
		auto value1 = frame.operands.pop4();
		auto value2 = frame.operands.pop4();

		op4 res { .i4 = value1.value.i4 + value2.value.i4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ladd (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOladd *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .ll = value1.value.ll + value2.value.ll };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fadd (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfadd *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 res { .f = value1.value.f + value2.value.f };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dadd (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdadd *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .lf = value1.value.lf + value2.value.lf };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_isub (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOisub *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 res { .i4 = value1.value.i4 - value2.value.i4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lsub (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlsub *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .ll = value1.value.ll - value2.value.ll };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fsub (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfsub *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 res { .f = value1.value.f - value2.value.f };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dsub (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdsub *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .lf = value1.value.lf - value2.value.lf };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_imul (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOimul *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 res { .i4 = value1.value.i4*value2.value.i4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lmul (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlmul *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .ll = value1.value.ll*value2.value.ll };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fmul (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfmul *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 res { .f = value1.value.f*value2.value.f };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dmul (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdmul *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .lf = value1.value.lf*value2.value.lf };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_idiv (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOidiv *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		if (value2.value.i4 == 0) {
			throw JvmException("ArithmeticException");
		}

		op4 res { .i4 = value1.value.i4 / value2.value.i4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ldiv (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOldiv *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		if (value2.value.ll == 0) {
			throw JvmException("ArithmeticException");
		}

		op8 res { .ll = value1.value.ll / value2.value.ll };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fdiv (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfdiv *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		if (value2.value.f == 0) {
			throw JvmException("ArithmeticException");
		}

		op4 res { .f = value1.value.f / value2.value.f };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ddiv (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOddiv *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		if (value2.value.lf == 0) {
			throw JvmException("ArithmeticException");
		}

		op8 res { .lf = value1.value.lf / value2.value.lf };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_irem (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOirem *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		if (value2.value.i4 == 0) {
			throw JvmException("ArithmeticException");
		}

		op4 res { .i4 = value1.value.i4 - (value1.value.i4 / value2.value.i4) * value2.value.i4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lrem (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlrem *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		if (value2.value.ll == 0) {
			throw JvmException("ArithmeticException");
		}

		op8 res { .ll = value1.value.ll - (value1.value.ll / value2.value.ll) * value2.value.ll };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_frem (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfrem *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		if (value2.value.f == 0) {
			throw JvmException("ArithmeticException");
		}

		op4 res { .f = std::fmod(value1.value.f, value2.value.f) };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_drem (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdrem *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		if (value2.value.lf == 0) {
			throw JvmException("ArithmeticException");
		}

		op8 res { .lf = fmod(value1.value.lf, value2.value.lf) };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ineg (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOineg *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		op4 res { .i4 = -value.value.i4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lneg (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlneg *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		op8 res { .ll = -value.value.ll };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fneg (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfneg *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		op4 res { .f = -value.value.f };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dneg (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdneg *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		op8 res { .lf = -value.value.lf };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ishl (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOishl *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 aux { .ui4 = 0x1f };
		op4 res { .i4 = value1.value.i4 << (value2.value.ui4 & aux.ui4) };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lshl (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlshl *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop8();

		op4 aux { .ui4 = 0x3f };
		op8 res { .ll = value1.value.ll << (value2.value.ui4 & aux.ui4) };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ishr (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOishr *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 aux { .ui4 = 0x1f };
		op4 res { .i4 = value1.value.i4 >> (value2.value.ui4 & aux.ui4) };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lshr (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlshr *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop8();

		op4 aux { .ui4 = 0x3f };
		op8 res { .ll = value1.value.ll >> (value2.value.ui4 & aux.ui4) };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iushr (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiushr *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 aux { .ui4 = 0x1f };
		op4 s   { .ui4 = value2.value.ui4 & aux.ui4 };
		op4 res { .ui4 = value1.value.ui4 >> s.ui4 };

		if(res.i4 < 0) {
			res.i4 = value1.value.i4 + (2 << (~s.ui4));
		}

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lushr (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlushr *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop8();

		op4 aux { .ui4 = 0x3f };
		op4 s   { .ui4 = value2.value.ui4 & aux.ui4 };
		op8 res { .ull = value1.value.ull >> s.ui4};

		if(res.ll < 0) {
			res.ll = value1.value.ll + (2L << (~s.ui4));
		}

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iand (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiand *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 res { .i4 = value1.value.i4 & value2.value.i4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_land (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOland *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .ll = value1.value.ll & value2.value.ll };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ior (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOior *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 res { .i4 = value1.value.i4 | value2.value.i4 };

		frame.operands.push4(T_INT, res);

		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lor (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlor *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .ll = value1.value.ll | value2.value.ll };

		frame.operands.push8(T_LONG, res);

		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ixor (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOixor *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		op4 res { .i4 = value1.value.i4 ^ value2.value.i4 };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lxor (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlxor *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		op8 res { .ll = value1.value.ll ^ value2.value.ll };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_iinc (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiinc *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.variables.get4(data->index);

		value.i4 += data->constant;

		frame.variables.set(data->index,value.ui4);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_i2l (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOi2l *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		op8 res { .ll = static_cast<i8>(value.value.i4) };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_i2f (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOi2f *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		op4 res { .f = static_cast<float>(value.value.i4) };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_i2d (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOi2d *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		op8 res { .lf = static_cast<double>(value.value.i4) };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_l2i (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOl2i *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		assert(value.type == T_LONG);

		op4 res { .i4 = static_cast<i4>(value.value.ll) };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_l2f (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOl2f *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		assert(value.type == T_LONG);

		op4 res { .f = static_cast<float>(value.value.ll) };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_l2d (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOl2d *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		assert(value.type == T_LONG);

		op8 res { .lf = static_cast<double>(value.value.ll) };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_f2i (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOf2i *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_FLOAT);

		op4 res { .i4 = static_cast<int32_t>(value.value.f) };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_f2l (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOf2l *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_FLOAT);

		op8 res { .ll = (i8) static_cast<double>(value.value.f) };

		frame.operands.push8(T_LONG, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_f2d (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOf2d *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_FLOAT);

		op8 res { .lf = static_cast<double>(value.value.f) };

		frame.operands.push8(T_DOUBLE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_d2i (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOd2i *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		assert(value.type == T_DOUBLE);

		op4 res { .i4 = static_cast<int32_t>(value.value.lf) };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_d2l (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOd2l *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		assert(value.type == T_DOUBLE);

		op8 res { .ll = static_cast<i8>(value.value.lf) };

		frame.operands.push8(T_LONG, res);

		frame.PC += data->jmp + 1;
	}

	void Engine::exec_d2f (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOd2f *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8();

		assert(value.type == T_DOUBLE);

		op4 res { .f = static_cast<float>(value.value.lf) };

		frame.operands.push4(T_FLOAT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_i2b (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOi2b *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		op4 res { .i1 = static_cast<int8_t>(value.value.i1) };

		frame.operands.push4(T_BYTE, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_i2c (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOi2c *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		op4 res { .i1 = static_cast<int8_t>(value.value.i4) };

		frame.operands.push4(T_CHAR, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_i2s (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOi2s *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		op4 res { .i2 = static_cast<int16_t>(value.value.i4) };

		frame.operands.push4(T_SHORT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_lcmp (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlcmp *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		assert(value1.type == T_LONG);
		assert(value2.type == T_LONG);

		auto aux = value1.value.ll - value2.value.ll;
		op4 res { .i4 = -1 };

		if (aux > 0) {
			res.i4 = 1;
		} else if (aux == 0) {
			res.i4 = 0;
		} else {
			res.i4 = -1;
		}

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fcmpl (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfcmpl *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_FLOAT);
		assert(value2.type == T_FLOAT);

		auto aux = value1.value.f - value2.value.f;
		op4 res { .i4 = -1 };

		if (std::isnan(value1.value.f) || std::isnan(value2.value.f)) {
			res.i4 = -1;
		} else if (aux > 0) {
			res.i4 = 1;
		} else if (aux == 0) {
			res.i4 = 0;
		} else {
			res.i4 = -1;
		}

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_fcmpg (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfcmpg *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_FLOAT);
		assert(value2.type == T_FLOAT);

		auto aux = value1.value.f - value2.value.f;
		op4 res { .i4 = -1 };

		if (std::isnan(value1.value.f) || std::isnan(value2.value.f)) {
			res.i4 = 1;
		} else if (aux > 0) {
			res.i4 = 1;
		} else if (aux == 0) {
			res.i4 = 0;
		} else {
			res.i4 = -1;
		}

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dcmpl (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdcmpl *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		assert(value1.type == T_DOUBLE);
		assert(value2.type == T_DOUBLE);

		auto aux = value1.value.lf - value2.value.lf;
		op4 res { .i4 = -1 };

		if (std::isnan(value1.value.lf) || std::isnan(value2.value.lf)) {
			res.i4 = -1;
		} else if (aux > 0) {
			res.i4 = 1;
		} else if (aux == 0) {
			res.i4 = 0;
		} else {
			res.i4 = -1;
		}

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_dcmpg (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdcmpg *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop8();
		auto value1 = frame.operands.pop8();

		assert(value1.type == T_DOUBLE);
		assert(value2.type == T_DOUBLE);

		auto aux = value1.value.lf - value2.value.lf;
		op4 res { .i4 = -1 };

		if (std::isnan(value1.value.lf) || std::isnan(value2.value.lf)) {
			res.i4 = 1;
		} else if (aux > 0) {
			res.i4 = 1;
		} else if (aux == 0) {
			res.i4 = 0;
		} else {
			res.i4 = -1;
		}

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_ifeq (InstructionInfo * info) {
		auto data = reinterpret_cast<OPINFOifeq *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		if (value.value.i4 == 0) {
			frame.PC += data->branchoffset; // Execution then proceeds at that offset from the address of the opcode of this if<cond> instruction.
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_ifne (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOifne *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		if (value.value.i4 != 0) {
			frame.PC += data->branchoffset; // Execution then proceeds at that offset from the address of the opcode of this if<cond> instruction.
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_iflt (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOiflt *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		if (value.value.i4 < 0) {
			frame.PC += data->branchoffset; // Execution then proceeds at that offset from the address of the opcode of this if<cond> instruction.
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_ifge (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOifge *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		if (value.value.i4 >= 0) {
			frame.PC += data->branchoffset; // Execution then proceeds at that offset from the address of the opcode of this if<cond> instruction.
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_ifgt (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOifgt *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		if (value.value.i4 > 0) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_ifle (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOifle *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		if (value.value.i4 <= 0) {
			frame.PC += data->branchoffset; // Execution then proceeds at that offset from the address of the opcode of this if<cond> instruction.
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_if_icmpeq (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOif_icmpeq *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_INT);
		assert(value2.type == T_INT);

		if (value1.value.i4 == value2.value.i4) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_if_icmpne (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOif_icmpne *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_INT);
		assert(value2.type == T_INT);

		if (value1.value.i4 != value2.value.i4) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_if_icmplt (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOif_icmplt *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_INT);
		assert(value2.type == T_INT);

		if (value1.value.i4 < value2.value.i4) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_if_icmpge (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOif_icmpge *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_INT);
		assert(value2.type == T_INT);

		if (value1.value.i4 >= value2.value.i4) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_if_icmpgt (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOif_icmpgt *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_INT);
		assert(value2.type == T_INT);

		if (value1.value.i4 > value2.value.i4) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_if_icmple (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOif_icmple *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_INT);
		assert(value2.type == T_INT);

		if (value1.value.i4 <= value2.value.i4) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_if_acmpeq (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOif_acmpeq *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_REF);
		assert(value2.type == T_REF);

		if (value1.value.ui4 == value2.value.ui4) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_if_acmpne (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOif_acmpne *>(info); // get data in class
		auto &frame = fs.top();
		auto value2 = frame.operands.pop4();
		auto value1 = frame.operands.pop4();

		assert(value1.type == T_REF);
		assert(value2.type == T_REF);

		if (value1.value.ui4 != value2.value.ui4) {
			frame.PC += data->branchoffset;
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_goto (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOgoto *>(info); // get data in class
		auto &frame = fs.top();
		auto newPC = static_cast<i4>(frame.PC) + data->branchoffset;
		frame.PC = static_cast<u4>(newPC);
	}

	void Engine::exec_jsr (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOjsr *>(info); // get data in class
		auto &frame = fs.top();
		auto newPC = static_cast<i4>(frame.PC) + data->branchoffset;

		frame.operands.push4(T_RET, frame.PC + data->jmp + 1); // insert address of the next instruction as type ReturnAddress
		frame.PC = static_cast<u4>(newPC); // jump to procedure
	}

	void Engine::exec_ret (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOret *>(info); // get data in class
		auto &frame = fs.top();
		auto newPC  = frame.variables.get4(data->index); // remove the next PC of type returnAddress

		//assert(newPC.type == T_REF);

		frame.PC = newPC.ui4;
	}

	void Engine::exec_tableswitch (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOtableswitch *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4(); // get index

		assert(value.type == T_INT);

		if (value.value.i4 < data->low || value.value.i4 > data->high) {
			frame.PC += data->defaultbyte;
		}

		frame.PC += data->jumpOffsets[value.value.i4 - data->low];
	}

	void Engine::exec_lookupswitch (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlookupswitch *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4(); // get key

		assert(value.type == T_INT);

		if (data->pairs.count(value.value.i4) > 0) {
			frame.PC += data->pairs[value.value.i4];
		} else {
			frame.PC += data->defaultbyte;
		}
	}

	void Engine::exec_ireturn (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOireturn *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4(); // return value

		assert(value.type == T_INT);

		while (!frame.operands.empty()) frame.operands.pop(); // empty operand stack
		fs.pop();

		auto &frameInvoker = fs.top();

		frameInvoker.operands.push4(T_INT, value.value);

	}

	void Engine::exec_lreturn (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOlreturn *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8(); // return value

		assert(value.type == T_LONG);

		while (!frame.operands.empty()) frame.operands.pop(); // empty operand stack
		fs.pop();

		auto &frameInvoker = fs.top();

		frameInvoker.operands.push8(T_LONG, value.value);
	}

	void Engine::exec_freturn (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOfreturn *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4(); // return value

		assert(value.type == T_FLOAT);

		while (!frame.operands.empty()) frame.operands.pop(); // empty operand stack
		fs.pop();

		auto &frameInvoker = fs.top();

		frameInvoker.operands.push4(T_FLOAT, value.value);
	}

	void Engine::exec_dreturn (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOdreturn *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop8(); // return value

		assert(value.type == T_DOUBLE);

		while (!frame.operands.empty()) frame.operands.pop(); // empty operand stack
		fs.pop();

		auto &frameInvoker = fs.top();

		frameInvoker.operands.push8(T_DOUBLE, value.value);
	}

	void Engine::exec_areturn (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOareturn *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4(); // return value

		assert(value.type == T_REF);

		while (!frame.operands.empty()) frame.operands.pop(); // empty operand stack
		fs.pop();

		auto &frameInvoker = fs.top();

		frameInvoker.operands.push4(T_REF, value.value);
	}

	void Engine::exec_return (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOreturn *>(info); // get data in class
		auto &frame = fs.top();

		while (!frame.operands.empty()) frame.operands.pop(); // empty operand stack
		fs.pop();
	}


	void Engine::exec_getstatic (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOgetstatic *>(info); // get data in class
		auto &frame = fs.top();
		auto value = reinterpret_cast<CP_Fieldref*>(frame.cl.constant_pool[data->index]);
		auto classname = frame.cl.constant_pool[value->class_index]->toString(frame.cl.constant_pool);
		auto name_type = reinterpret_cast<CP_NameAndType*>(frame.cl.constant_pool[value->name_and_type_index]);
		auto name = frame.cl.constant_pool[name_type->name_index]->toString(frame.cl.constant_pool);
		auto descriptor = frame.cl.constant_pool[name_type->descriptor_index]->toString(frame.cl.constant_pool);
		auto signature = name + descriptor;

		//Ignoring print to stream
		if (classname == "java/lang/System" && signature == "outLjava/io/PrintStream;") {
			frame.PC += data->jmp + 1;
			return;
		}

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_putstatic (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOputstatic *>(info); // get data in class
		auto &frame = fs.top();


		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_getfield (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOgetfield *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_putfield (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOputfield *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_invokevirtual (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOinvokestatic *>(info); // get data in class
		auto &frame = fs.top();
		auto &cp = frame.cl.constant_pool;

		auto methodRef = reinterpret_cast<CP_Methodref*>(cp[data->index]); // get the method info from constant pool
		auto &classInfo = cp[methodRef->class_index]->as<CP_Class>();
		auto className = cp[classInfo.name_index]->toString(cp);
		auto &methodNameAndType = cp[methodRef->name_and_type_index]->as<CP_NameAndType>();
		auto methodName = cp[methodNameAndType.name_index] -> toString(cp);
		auto methodDescriptor = cp[methodNameAndType.descriptor_index] -> toString(cp);

		if (methodName == "println" && className == "java/io/PrintStream") {
			auto to_print = frame.operands.pop4();
			auto print_type = to_print.type;
			auto print_value = to_print.value;
			double db;

			if(print_type == T_STRING){
				std::string str = reinterpret_cast<CP_String *>(cp[print_value.ui4])->toString(cp);
				std::cout << str << std::endl;
			}

			if(print_type == T_DOUBLE){
				auto aux = Converter::to_op8(frame.operands.pop4().value, to_print.value);
				db = aux.lf;
			}

			switch(print_type) {
				case T_INT:
					std::cout << print_value.i4 << std::endl;
					break;
				case T_FLOAT:
					std::cout << print_value.f << std::endl;
					break;
				case T_BOOL:
					if(print_value.ui1 == 1)
						std::cout << "true"<< std::endl;
					else if(print_value.ui1 == 0)
						std::cout << "false"<< std::endl;
					break;
				case T_STRING:
					break;
				case T_DOUBLE:
					std::cout << db << std::endl;
					break;
				default:
					throw JvmException("Type not recognized");
			}
			frame.PC += data->jmp + 1;
			return;
		}

		if (methodName == "registerNatives" && className == "java/lang/Object") { // ignore registerNatives
			frame.PC += data->jmp + 1;
			return;
		}

		if (className.find("java/") == 0) { // calling something that start with java/, this should not happen
			throw JvmException("Invalid call to" + className);
		}

		auto methodData = findMethod(*methodRef);

		Frame newFrame(methodData.classLoader, methodData.method);

		auto nargs = getArgumentsSize(methodDescriptor);
		std::stack<op4> args;
		for (u2 i = 0; i < nargs; i++) {
			auto value = frame.operands.pop4();
			args.push(value.value);
		}

		for (u2 i = 0; i < nargs; i++) {
			auto value = args.top(); args.pop();
			newFrame.variables.set(i, value);
		}

		fs.push(newFrame);

		frame.PC += data->jmp + 1;
		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_invokespecial (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOinvokespecial *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: verify corretude
	void Engine::exec_invokestatic (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOinvokestatic *>(info); // get data in class
		auto &frame = fs.top();
		auto &cp = frame.cl.constant_pool;

		auto methodRef = reinterpret_cast<CP_Methodref*>(cp[data->index]); // get the method info from constant pool
		auto &classInfo = cp[methodRef->class_index]->as<CP_Class>();
		auto className = cp[classInfo.name_index]->toString(cp);
		auto &methodNameAndType = cp[methodRef->name_and_type_index]->as<CP_NameAndType>();
		auto methodName = cp[methodNameAndType.name_index] -> toString(cp);
		auto methodDescriptor = cp[methodNameAndType.descriptor_index] -> toString(cp);

		if (methodName == "registerNatives" && className == "java/lang/Object") { // ignore registerNatives
			frame.PC += data->jmp + 1;
			return;
		}

		if (className.find("java/") == 0) { // calling something that start with java/, this should not happen
			throw JvmException("Invalid call to" + className);
		}

		auto methodData = findMethod(*methodRef);

		Frame newFrame(methodData.classLoader, methodData.method);

		auto nargs = getArgumentsSize(methodDescriptor);
		std::stack<op4> args;
		for (u2 i = 0; i < nargs; i++) {
			auto value = frame.operands.pop4();
			args.push(value.value);
		}

		for (u2 i = 0; i < nargs; i++) {
			auto value = args.top(); args.pop();
			newFrame.variables.set(i, value);
		}

		fs.push(newFrame);

		frame.PC += data->jmp + 1;
	}

	// TODO: finish this function
	void Engine::exec_invokeinterface (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOinvokeinterface *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_invokedynamic (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOinvokedynamic *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_new (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOinvokestatic *>(info); // get data in class
		auto &frame = fs.top();
		auto &cp = frame.cl.constant_pool;

		auto classInfo = reinterpret_cast<CP_Class*>(cp[data->index]); // get the method info from constant pool
		auto className = cp[classInfo->name_index]->toString(cp);
		if (className == "java/lang/StringBuilder") {
			frame.PC += data->jmp + 1;
			throw JvmException("Not Implemented String Builder!");
			return;
		}

		throw JvmException("Not Implemented!");
	}

	// TODO: verificar corretude
	void Engine::exec_newarray (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOnewarray *>(info); // get data in class
		auto &frame = fs.top();
		auto type = data->atype;
		auto vector_ptr = static_cast<u2>(mem.size());
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		auto arr = new Array;

		arr->size = value.value.ui4;

		if (type == T_BOOL) {
			arr->type = T_BOOL;
			arr->array = new bool[value.value.ui4];
		} else if (type == T_CHAR) {
			arr->type = T_CHAR;
			arr->array = new char[value.value.ui4];
		} else if (type == T_FLOAT) {
			arr->type = T_FLOAT;
			arr->array = new float[value.value.ui4];
		} else if (type == T_DOUBLE) {
			arr->type = T_DOUBLE;
			arr->array = new double[value.value.ui4];
		} else if (type == T_BYTE) {
			arr->type = T_BYTE;
			arr->array = new u1[value.value.ui4];
		} else if (type == T_SHORT) {
			arr->type = T_SHORT;
			arr->array = new short[value.value.ui4];
		} else if (type == T_INT) {
			arr->type = T_INT;
			arr->array = new int[value.value.ui4];
		} else if (type == T_LONG) {
			arr->type = T_LONG;
			arr->array = new long[value.value.ui4];
		} else {
			throw JvmException("Invalid atype!");
		}

		mem.push_back(arr);
		op4 res { .ui4 = vector_ptr };

		frame.operands.push4(T_ARRAY, res);
		frame.PC += data->jmp + 1;
	}

	// TODO: need to set array to null and corretude
	void Engine::exec_anewarray (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOanewarray *>(info); // get data in class
		auto &frame = fs.top();
		auto cpRef = frame.cl.constant_pool[data->index];
		auto vector_ptr = static_cast<u2>(mem.size());
		auto value = frame.operands.pop4();

		assert(value.type == T_INT);

		auto arr = new Array;

		arr->size = value.value.ui4;
		arr->array = new i4[value.value.ui4];

		auto cl = dynamic_cast<CP_Class*>(cpRef);
		if (cl != nullptr) { // array of type Class
			arr->type = T_OBJ;
		}

		auto mr = dynamic_cast<CP_Methodref*>(cpRef);
		if (mr != nullptr) { // array of type method ref
			arr->type = T_METHOD;
		}

		auto ir = dynamic_cast<CP_InterfaceMethodref*>(cpRef);
		if (ir != nullptr) { // array of type interface ref
			arr->type = T_INTERFACE;
		}

		mem.push_back(arr);
		op4 res { .ui4 = vector_ptr };

		frame.operands.push4(T_ARRAY, res);
		frame.PC += data->jmp + 1;
	}

	void Engine::exec_arraylength (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOarraylength *>(info); // get data in class
		auto &frame = fs.top();
		auto value = frame.operands.pop4();
		auto arr = static_cast<Array*>(mem[value.value.ui4]);

		op4 res { .ui4 = arr->size };

		frame.operands.push4(T_INT, res);
		frame.PC += data->jmp + 1;
	}

	// TODO: finish this function
	void Engine::exec_athrow (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOathrow *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_checkcast (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOcheckcast *>(info); // get data in class
		auto &frame = fs.top();
		frame.PC += data->jmp + 1;
		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_instanceof (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOinstanceof *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	void Engine::exec_monitorenter (InstructionInfo * info) {
		// This JVM does not have support for multiple threads
	}

	void Engine::exec_monitorexit (InstructionInfo * info) {
		// This JVM does not have support for multiple threads
	}

	// TODO: finish this function
	void Engine::exec_wide (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOwide *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	// TODO: finish this function
	void Engine::exec_multianewarray (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOmultianewarray *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC += data->jmp + 1;

		throw JvmException("Not Implemented!");
	}

	void Engine::exec_ifnull (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOifnull *>(info); // get data in class
		auto &frame = fs.top();
		auto ref = frame.operands.pop4();

		assert(ref.type == T_REF);

		if (ref.value.ui4 == 0) {
			frame.PC = static_cast<u4>(static_cast<i4>(frame.PC) + data->branchoffset);
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_ifnonnull (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOifnonnull *>(info); // get data in class
		auto &frame = fs.top();
		auto ref = frame.operands.pop4();

		assert(ref.type == T_REF);

		if (ref.value.ui4 != 0) { // if not null
			auto newPC = static_cast<i4>(frame.PC) + data->branchoffset;
			frame.PC = static_cast<u4>(newPC);
		} else {
			frame.PC += data->jmp + 1;
		}
	}

	void Engine::exec_goto_w (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOgoto_w *>(info); // get data in class
		auto &frame = fs.top();

		frame.PC = static_cast<u4>(static_cast<i4>(frame.PC) + data->branchoffset);
	}

	void Engine::exec_jsr_w (InstructionInfo * info) {
		auto data   = reinterpret_cast<OPINFOjsr_w *>(info); // get data in class
		auto &frame = fs.top();

		frame.operands.push4(T_RET, frame.PC + data->jmp + 1); // insert address of the next instruction as type ReturnAddress

		frame.PC = static_cast<u4>(static_cast<i4>(frame.PC) + data->branchoffset); // jump to procedure
	}

	void Engine::exec_breakpoint (InstructionInfo * info) {
		// This JVM will not need reserved instructions for debuggers or back door
	}

	void Engine::exec_impdep1 (InstructionInfo * info) {
		// This JVM will not need reserved instructions for debuggers or back door
	}

	void Engine::exec_impdep2 (InstructionInfo * info) {
		// This JVM will not need reserved instructions for debuggers or back door
	}

}
