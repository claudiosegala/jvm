#pragma once

#include <util/macros.hpp>
#include <vector>

namespace jvm
{
    typedef void op_(*instruction)(Operands&, Variables&);

    instruction opcodes[256] = {
		    op_nop,
		    op_aconst_null,
		    op_iconst_m1,
		    op_iconst_0,
		    op_iconst_1,
		    op_iconst_2,
		    op_iconst_3,
		    op_iconst_4,
		    op_iconst_5,
		    op_lconst_0,
		    op_lconst_1,
		    op_fconst_0,
		    op_fconst_1,
		    op_fconst_2,
		    op_dconst_0,
		    op_dconst_1,
		    op_bipush,
		    op_sipush,
		    op_ldc,
		    op_ldc_w,
		    op_ldc2_w,
		    op_iload,
		    op_lload,
		    op_fload,
		    op_dload,
		    op_aload,
		    op_iload_0,
		    op_iload_1,
		    op_iload_2,
		    op_iload_3,
		    op_lload_0,
		    op_lload_1,
		    op_lload_2,
		    op_lload_3,
		    op_fload_0,
		    op_fload_1,
		    op_fload_2,
		    op_fload_3,
		    op_fload_0,
		    op_dload_1,
		    op_dload_2,
		    op_dload_3,
		    op_aload_0,
		    op_aload_1,
		    op_aload_2,
		    op_aload_3,
		    op_iaload,
		    op_laload,
		    op_faload,
		    op_daload,
		    op_aaload,
		    op_baload,
		    op_caload,
		    op_saload,
		    op_istore,
		    op_lstore,
		    op_fstore,
		    op_dstore,
		    op_astore,
		    op_istore_0,
		    op_istore_1,
		    op_istore_2,
		    op_istore_3,
		    op_lstore_0,
		    op_lstore_1,
		    op_lstore_2,
		    op_lstore_3,
		    op_fstore_0,
		    op_fstore_1,
		    op_fstore_2,
		    op_fstore_3,
		    op_dstore_0,
		    op_dstore_1,
		    op_dstore_2,
		    op_dstore_3,
		    op_astore_0,
		    op_astore_1,
		    op_astore_2,
		    op_astore_3,
		    op_iastore,
		    op_lastore,
		    op_fastore,
		    op_dastore,
		    op_aastore,
		    op_bastore,
		    op_castore,
		    op_sastore,
		    op_pop,
		    op_pop2,
		    op_dup,
		    op_dup_x1,
		    op_dup_x2,
		    op_dup2,
		    op_dup2_x1,
		    op_dup2_x2,
		    op_swap,
		    op_iadd,
		    op_ladd,
		    op_fadd,
		    op_dadd,
		    op_isub,
		    op_lsub,
		    op_fsub,
		    op_dsub,
		    op_imul,
		    op_lmul,
		    op_fmul,
		    op_dmul,
		    op_idiv,
		    op_ldiv,
		    op_fdiv,
		    op_ddiv,
		    op_irem,
		    op_lrem,
		    op_frem,
		    op_drem,
		    op_ineg,
		    op_lneg,
		    op_fneg,
		    op_dneg,
		    op_ishl,
		    op_lshl,
		    op_ishr,
		    op_lshr,
		    op_iushr,
		    op_lushr,
		    op_iand,
		    op_land,
		    op_ior,
		    op_lor,
		    op_ixor,
		    op_lxor,
		    op_iinc,
		    op_i2l,
		    op_i2f,
		    op_i2d,
		    op_l2i,
		    op_l2f,
		    op_l2d,
		    op_f2i,
		    op_f2l,
		    op_f2d,
		    op_d2i,
		    op_d2l,
		    op_d2f,
		    op_i2b,
		    op_i2c,
		    op_i2s,
		    op_lcmp,
		    op_fcmpl,
		    op_fcmpg,
		    op_dcmpl,
		    op_dcmpg,
		    op_ifeq,
		    op_ifne,
		    op_iflt,
		    op_ifge,
		    op_ifgt,
		    op_ifle,
		    op_if_icmpeq,
		    op_if_icmpne,
		    op_if_icmplt,
		    op_if_icmpge,
		    op_if_icmpgt,
		    op_if_icmple,
		    op_if_acmpeq,
		    op_if_acmpne,
		    op_goto_jvm,
		    op_jsr,
		    op_ret,
		    op_tableswitch,
		    op_ireturn,
		    op_lreturn,
		    op_freturn,
		    op_dreturn,
		    op_areturn,
		    op_return_jvm,
		    op_getstatic,
		    op_putstatic,
		    op_getfield,
		    op_putfield,
		    op_invokevirtual,
		    op_invokespecial,
		    op_invokestatic,
		    op_invokeinterface,
		    op_invokedynamic,
		    op_new_jvm,
		    op_newarray,
		    op_anewarray,
		    op_arraylength,
		    op_athrow,
		    op_checkcast,
		    op_instanceof,
		    op_monitorenter,
		    op_monitorexit,
		    op_wide,
		    op_multianewarray,
		    op_ifnull,
		    op_ifnonnull,
		    op_goto_w,
		    op_jsr_w,
		    op_breakpoint,
		    op_impdep1,
		    op_impdep2,
    };

		    //Constants opcodes 0x00,00 -- 0x14,20
    void op_nop(Operands& op_stack,Variables& local_variable); // 0x00 - 00
    void op_aconst_null(Operands& op_stack,Variables& local_variable); // 0x01 --01
    void op_iconst_m1(Operands& op_stack,Variables& local_variable); // 0x02 -- 02
    void op_iconst_0(Operands& op_stack,Variables& local_variable); // 0x03 -- 03
    void op_iconst_1(Operands& op_stack,Variables& local_variable); // 0x04 -- 04
    void op_iconst_2(Operands& op_stack,Variables& local_variable); // 0x05 -- 05
    void op_iconst_3(Operands& op_stack,Variables& local_variable); // 0x06 -- 06
    void op_iconst_4(Operands& op_stack,Variables& local_variable); // 0x07 -- 07
    void op_iconst_5(Operands& op_stack,Variables& local_variable); // 0x08 -- 08
    void op_lconst_0(Operands& op_stack,Variables& local_variable); // 0x09 -- 09
    void op_lconst_1(Operands& op_stack,Variables& local_variable); // 0x0A -- 10
    void op_fconst_0(Operands& op_stack,Variables& local_variable); // 0x0B -- 11
    void op_fconst_1(Operands& op_stack,Variables& local_variable); // 0x0C -- 12
    void op_fconst_2(Operands& op_stack,Variables& local_variable); // 0x0D -- 13
    void op_dconst_0(Operands& op_stack,Variables& local_variable); // 0x0E -- 14
    void op_dconst_1(Operands& op_stack,Variables& local_variable); // 0x0F -- 15
    void op_bipush(Operands& op_stack,Variables& local_variable); // 0x10 -- 16
    void op_sipush(Operands& op_stack,Variables& local_variable); // 0x11 -- 17
    void op_ldc(Operands& op_stack,Variables& local_variable); // 0x12 -- 18
    void op_ldc_w(Operands& op_stack,Variables& local_variable); // 0x13 -- 19
    void op_ldc2_w(Operands& op_stack,Variables& local_variable); // 0x14 -- 20
    //Loads opcodes 0x15,21 -- 0x35,53
    void op_iload(Operands& op_stack,Variables& local_variable); //0x15 -- 21
    void op_lload(Operands& op_stack,Variables& local_variable); // 0x16 -- 22
    void op_fload(Operands& op_stack,Variables& local_variable); // 0x17 -- 23
    void op_dload(Operands& op_stack,Variables& local_variable); // 0x18 -- 24
    void op_aload(Operands& op_stack,Variables& local_variable); // 0x19 -- 25
    void op_iload_0(Operands& op_stack,Variables& local_variable); // 0x1A -- 26
    void op_iload_1(Operands& op_stack,Variables& local_variable); // 0x1B -- 27
    void op_iload_2(Operands& op_stack,Variables& local_variable); // 0x1C -- 28
    void op_iload_3(Operands& op_stack,Variables& local_variable); // 0x1D -- 29
    void op_lload_0(Operands& op_stack,Variables& local_variable); // 0x1E -- 30
    void op_lload_1(Operands& op_stack,Variables& local_variable); // 0x1F -- 31
    void op_lload_2(Operands& op_stack,Variables& local_variable); // 0x20 -- 32
    void op_lload_3(Operands& op_stack,Variables& local_variable); // 0x21 -- 33
    void op_fload_0(Operands& op_stack,Variables& local_variable); // 0x22 -- 34
    void op_fload_1(Operands& op_stack,Variables& local_variable); // 0x23 -- 35
    void op_fload_2(Operands& op_stack,Variables& local_variable); // 0x24 -- 36
    void op_fload_3(Operands& op_stack,Variables& local_variable); // 0x25 -- 37
    void op_fload_0(Operands& op_stack,Variables& local_variable); // 0x26 -- 38
    void op_dload_1(Operands& op_stack,Variables& local_variable); // 0x27 -- 39
    void op_dload_2(Operands& op_stack,Variables& local_variable); // 0x28 -- 40
    void op_dload_3(Operands& op_stack,Variables& local_variable); // 0x29 -- 41
    void op_aload_0(Operands& op_stack,Variables& local_variable); // 0x2A -- 42
    void op_aload_1(Operands& op_stack,Variables& local_variable); // 0x2B -- 43
    void op_aload_2(Operands& op_stack,Variables& local_variable); // 0x2C -- 44
    void op_aload_3(Operands& op_stack,Variables& local_variable); // 0x2D -- 45
    void op_iaload(Operands& op_stack,Variables& local_variable);  // 0x2E -- 46
    void op_laload(Operands& op_stack,Variables& local_variable);  // 0x2F -- 47
    void op_faload(Operands& op_stack,Variables& local_variable);  // 0x30 -- 48
    void op_daload(Operands& op_stack,Variables& local_variable);  // 0x31 -- 49
    void op_aaload(Operands& op_stack,Variables& local_variable);  // 0x32 -- 50
    void op_baload(Operands& op_stack,Variables& local_variable);  // 0x33 -- 51
    void op_caload(Operands& op_stack,Variables& local_variable);  // 0x34 -- 52
    void op_saload(Operands& op_stack,Variables& local_variable); // 0x35 -- 53
    //Stores 0x36,54 -> 0x56,86
    void op_istore(Operands& op_stack,Variables& local_variable); //0x36 -- 54
    void op_lstore(Operands& op_stack,Variables& local_variable); // 0x37 -- 55
    void op_fstore(Operands& op_stack,Variables& local_variable); // 0x38 -- 56
    void op_dstore(Operands& op_stack,Variables& local_variable); // 0x39 -- 57
    void op_astore(Operands& op_stack,Variables& local_variable); // 0x3A -- 58
    void op_istore_0(Operands& op_stack,Variables& local_variable); // 0x3B -- 59
    void op_istore_1(Operands& op_stack,Variables& local_variable); // 0x3C -- 60
    void op_istore_2(Operands& op_stack,Variables& local_variable); // 0x3D -- 61
    void op_istore_3(Operands& op_stack,Variables& local_variable); // 0x3E -- 62
    void op_lstore_0(Operands& op_stack,Variables& local_variable); // 0x3F -- 63
    void op_lstore_1(Operands& op_stack,Variables& local_variable); // 0x40 -- 64
    void op_lstore_2(Operands& op_stack,Variables& local_variable); // 0x41 -- 65
    void op_lstore_3(Operands& op_stack,Variables& local_variable); // 0x42 -- 66
    void op_fstore_0(Operands& op_stack,Variables& local_variable); // 0x43 -- 67
    void op_fstore_1(Operands& op_stack,Variables& local_variable); // 0x44 -- 68
    void op_fstore_2(Operands& op_stack,Variables& local_variable); // 0x45 -- 69
    void op_fstore_3(Operands& op_stack,Variables& local_variable); // 0x46 -- 70
    void op_dstore_0(Operands& op_stack,Variables& local_variable); // 0x47 -- 71
    void op_dstore_1(Operands& op_stack,Variables& local_variable); // 0x48 -- 72
    void op_dstore_2(Operands& op_stack,Variables& local_variable); // 0x49 -- 73
    void op_dstore_3(Operands& op_stack,Variables& local_variable); // 0x4A -- 74
    void op_astore_0(Operands& op_stack,Variables& local_variable);// 0x4B -- 75
    void op_astore_1(Operands& op_stack,Variables& local_variable); // 0x4C -- 76
    void op_astore_2(Operands& op_stack,Variables& local_variable); // 0x4D -- 77
    void op_astore_3(Operands& op_stack,Variables& local_variable); // 0x4E -- 78
    void op_iastore(Operands& op_stack,Variables& local_variable); // 0x4F -- 79
    void op_lastore(Operands& op_stack,Variables& local_variable); // 0x50 -- 80
    void op_fastore(Operands& op_stack,Variables& local_variable); // 0x51 -- 81
    void op_dastore(Operands& op_stack,Variables& local_variable); // 0x52 -- 82
    void op_aastore(Operands& op_stack,Variables& local_variable); // 0x53 -- 83
    void op_bastore(Operands& op_stack,Variables& local_variable); // 0x54 -- 84
    void op_castore(Operands& op_stack,Variables& local_variable); // 0x55 -- 85
    void op_sastore(Operands& op_stack,Variables& local_variable); // 0x56 -- 86
    // Stack 0x57,87 -> 0x5F,95
    void op_pop(Operands& op_stack,Variables& local_variable); //0x57 -- 87
    void op_pop2(Operands& op_stack,Variables& local_variable); //0x58 -- 88
    void op_dup(Operands& op_stack,Variables& local_variable); //0x59 -- 89
    void op_dup_x1(Operands& op_stack,Variables& local_variable); //0x5A -- 90
    void op_dup_x2(Operands& op_stack,Variables& local_variable); //0x5B -- 91
    void op_dup2(Operands& op_stack,Variables& local_variable); //0x5C -- 92
    void op_dup2_x1(Operands& op_stack,Variables& local_variable); //0x5D -- 93
    void op_dup2_x2(Operands& op_stack,Variables& local_variable); //0x5E -- 94
    void op_swap(Operands& op_stack,Variables& local_variable); //0x5F -- 95
    // Math 0x60,96 -> 0x84,132
    void op_iadd(Operands& op_stack,Variables& local_variable); //0x60 -- 96
    void op_ladd(Operands& op_stack,Variables& local_variable); //0x61 -- 97
    void op_fadd(Operands& op_stack,Variables& local_variable); //0x62 -- 98
    void op_dadd(Operands& op_stack,Variables& local_variable); //0x63 -- 99
    void op_isub(Operands& op_stack,Variables& local_variable); //0x64 -- 100
    void op_lsub(Operands& op_stack,Variables& local_variable); //0x65 -- 101
    void op_fsub(Operands& op_stack,Variables& local_variable); //0x66 -- 102
    void op_dsub(Operands& op_stack,Variables& local_variable); //0x67 -- 103
    void op_imul(Operands& op_stack,Variables& local_variable); //0x68 -- 104
    void op_lmul(Operands& op_stack,Variables& local_variable); //0x69 -- 105
    void op_fmul(Operands& op_stack,Variables& local_variable); //0x6A -- 106
    void op_dmul(Operands& op_stack,Variables& local_variable); //0x6B -- 107
    void op_idiv(Operands& op_stack,Variables& local_variable); //0x6C -- 108
    void op_ldiv(Operands& op_stack,Variables& local_variable); //0x6D -- 109
    void op_fdiv(Operands& op_stack,Variables& local_variable); //0x6E -- 110
    void op_ddiv(Operands& op_stack,Variables& local_variable); //0x6F -- 111
    void op_irem(Operands& op_stack,Variables& local_variable); //0x70 -- 112
    void op_lrem(Operands& op_stack,Variables& local_variable); //0x71 -- 113
    void op_frem(Operands& op_stack,Variables& local_variable); //0x72 -- 114
    void op_drem(Operands& op_stack,Variables& local_variable); //0x73 -- 115
    void op_ineg(Operands& op_stack,Variables& local_variable); //0x74 -- 116
    void op_lneg(Operands& op_stack,Variables& local_variable); //0x75 -- 117
    void op_fneg(Operands& op_stack,Variables& local_variable); //0x76 -- 118
    void op_dneg(Operands& op_stack,Variables& local_variable); //0x77 -- 119
    void op_ishl(Operands& op_stack,Variables& local_variable); //0x78 -- 120
    void op_lshl(Operands& op_stack,Variables& local_variable); //0x79 -- 121
    void op_ishr(Operands& op_stack,Variables& local_variable); //0x7A -- 122
    void op_lshr(Operands& op_stack,Variables& local_variable); //0x7B -- 123
    void op_iushr(Operands& op_stack,Variables& local_variable); //0x7C -- 124
    void op_lushr(Operands& op_stack,Variables& local_variable); //0x7D -- 125
    void op_iand(Operands& op_stack,Variables& local_variable); //0x7E -- 126
    void op_land(Operands& op_stack,Variables& local_variable); // 0x7F -- 127
    void op_ior(Operands& op_stack,Variables& local_variable); // 0x80 -- 128
    void op_lor(Operands& op_stack,Variables& local_variable); // 0x81 --129
    void op_ixor(Operands& op_stack,Variables& local_variable); // 0x82 -- 130
    void op_lxor(Operands& op_stack,Variables& local_variable); // 0x83 -- 131
    void op_iinc(Operands& op_stack,Variables& local_variable); // 0x84 -- 132
    //Conversations 0x85,133 -> 0x93,147
    void op_i2l(Operands& op_stack,Variables& local_variable); // 0x85 -- 133
    void op_i2f(Operands& op_stack,Variables& local_variable); // 0x86 -- 134
    void op_i2d(Operands& op_stack,Variables& local_variable); // 0x87 -- 135
    void op_l2i(Operands& op_stack,Variables& local_variable); // 0x88 -- 136
    void op_l2f(Operands& op_stack,Variables& local_variable); // 0x89 -- 137
    void op_l2d(Operands& op_stack,Variables& local_variable); // 0x8A -- 138
    void op_f2i(Operands& op_stack,Variables& local_variable); // 0x8B -- 139
    void op_f2l(Operands& op_stack,Variables& local_variable); // 0x8C -- 140
    void op_f2d(Operands& op_stack,Variables& local_variable); // 0x8D -- 141
    void op_d2i(Operands& op_stack,Variables& local_variable); // 0x8E -- 142
    void op_d2l(Operands& op_stack,Variables& local_variable); // 0x8F -- 143
    void op_d2f(Operands& op_stack,Variables& local_variable); // 0x90 -- 144
    void op_i2b(Operands& op_stack,Variables& local_variable); // 0x91 -- 145
    void op_i2c(Operands& op_stack,Variables& local_variable); // 0x92 -- 146
    void op_i2s(Operands& op_stack,Variables& local_variable); // 0x93 -- 147
    // Comparisons 0x94,148 -> 0xA6,166
    void op_lcmp(Operands& op_stack,Variables& local_variable); // 0x94 -- 148
    void op_fcmpl(Operands& op_stack,Variables& local_variable); // 0x95 -- 149
    void op_fcmpg(Operands& op_stack,Variables& local_variable); // 0x96 -- 150
    void op_dcmpl(Operands& op_stack,Variables& local_variable); // 0x97 -- 151
    void op_dcmpg(Operands& op_stack,Variables& local_variable); // 0x98 -- 152
    void op_ifeq(Operands& op_stack,Variables& local_variable); // 0x99 -- 153
    void op_ifne(Operands& op_stack,Variables& local_variable); // 0x9A -- 154
    void op_iflt(Operands& op_stack,Variables& local_variable); // 0x9B -- 155
    void op_ifge(Operands& op_stack,Variables& local_variable); // 0x9C -- 156
    void op_ifgt(Operands& op_stack,Variables& local_variable); //0x9D -- 157
    void op_ifle(Operands& op_stack,Variables& local_variable); //0x9E -- 158
    void op_if_icmpeq(Operands& op_stack,Variables& local_variable); // 0x9F -- 159
    void op_if_icmpne(Operands& op_stack,Variables& local_variable); // 0xA0 -- 160
    void op_if_icmplt(Operands& op_stack,Variables& local_variable); // 0xA1 - 161
    void op_if_icmpge(Operands& op_stack,Variables& local_variable); // 0xA2 -- 162
    void op_if_icmpgt(Operands& op_stack,Variables& local_variable); // 0xA3 -- 163
    void op_if_icmple(Operands& op_stack,Variables& local_variable); // 0xA4 -- 164
    void op_if_acmpeq(Operands& op_stack,Variables& local_variable); // 0xA5 -- 165
    void op_if_acmpne(Operands& op_stack,Variables& local_variable); // 0xA6 -- 166
    //Control 0xA7,167 -> 0xB1,177
    void op_goto_jvm(Operands& op_stack,Variables& local_variable); // 0xA7 -- 167
    void op_jsr(Operands& op_stack,Variables& local_variable); // 0xA8 -- 168
    void op_ret(Operands& op_stack,Variables& local_variable); // 0xA9 -- 169
    void op_tableswitch(Operands& op_stack,Variables& local_variable); // 0xAA -- 170
    void op_ireturn(Operands& op_stack,Variables& local_variable); // 0xAB -- 171
    void op_lreturn(Operands& op_stack,Variables& local_variable); // 0xAC -- 172
    void op_freturn(Operands& op_stack,Variables& local_variable); // 0xAD -- 173
    void op_dreturn(Operands& op_stack,Variables& local_variable); // 0xAE -- 174
    void op_areturn(Operands& op_stack,Variables& local_variable); // 0xAF -- 175
    void op_return_jvm(Operands& op_stack,Variables& local_variable); // 0xB0 -- 176
    //References 0xB2,178 -> 0xC3,195
    void op_getstatic(Operands& op_stack,Variables& local_variable); // 0xB2 -- 178
    void op_putstatic(Operands& op_stack,Variables& local_variable); // 0xB3 -- 179
    void op_getfield(Operands& op_stack,Variables& local_variable); // 0xB4 -- 180
    void op_putfield(Operands& op_stack,Variables& local_variable); // 0xB5 -- 181
    void op_invokevirtual(Operands& op_stack,Variables& local_variable); // 0xB6 -- 182
    void op_invokespecial(Operands& op_stack,Variables& local_variable); // 0xB7 -- 183
    void op_invokestatic(Operands& op_stack,Variables& local_variable); // 0xB8 -- 184
    void op_invokeinterface(Operands& op_stack,Variables& local_variable); // 0xB9 -- 185
    void op_invokedynamic(Operands& op_stack,Variables& local_variable); // 0xBA - - 186
    void op_new_jvm(Operands& op_stack,Variables& local_variable); // 0xBB -- 187
    void op_newarray(Operands& op_stack,Variables& local_variable); // 0xBC -- 188
    void op_anewarray(Operands& op_stack,Variables& local_variable); // 0xBD -- 189
    void op_arraylength(Operands& op_stack,Variables& local_variable);// 0xBE -- 190
    void op_athrow(Operands& op_stack,Variables& local_variable);       // 0xBF -- 191
    void op_checkcast(Operands& op_stack,Variables& local_variable);    // 0xC0 -- 192
    void op_instanceof(Operands& op_stack,Variables& local_variable);    //0xC1 -- 193
    void op_monitorenter(Operands& op_stack,Variables& local_variable);  // 0xC2 -- 194
    void op_monitorexit(Operands& op_stack,Variables& local_variable);  // 0xC3 -- 195
    //Extended 0xC4,196 -> 0xC9,201
    void op_wide(Operands& op_stack,Variables& local_variable); // 0xC4 -- 196
    void op_multianewarray(Operands& op_stack,Variables& local_variable); // 0xC5 -- 197
    void op_ifnull(Operands& op_stack,Variables& local_variable); // 0xC6 -- 198
    void op_ifnonnull(Operands& op_stack,Variables& local_variable); // 0xC7 -- 199
    void op_goto_w(Operands& op_stack,Variables& local_variable); // 0xC8 -- 200
    void op_jsr_w(Operands& op_stack,Variables& local_variable); // 0xC9 -- 201
    //Reserved 0xca,202 -> 0xff,255
    void op_breakpoint(Operands& op_stack,Variables& local_variable); // 0xca -- 202
    void op_impdep1(Operands& op_stack,Variables& local_variable); // 0xFE -- 254
    void op_impdep2(Operands& op_stack,Variables& local_variable); // 0xFF -- 255


};