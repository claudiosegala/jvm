#pragma once

#include <util/macros.hpp>
#include <vector>

namespace jvm
{
    //Constants opcodes 0x00,00 -- 0x14,20
    void nop(opstack& op_stack,std::vector<u4>& local_variable); // 0x00 - 00
    void aconst_null(opstack& op_stack,std::vector<u4>& local_variable); // 0x01 --01
    void iconst_m1(opstack& op_stack,std::vector<u4>& local_variable); // 0x02 -- 02
    void iconst_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x03 -- 03
    void iconst_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x04 -- 04
    void iconst_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x05 -- 05
    void iconst_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x06 -- 06
    void iconst_4(opstack& op_stack,std::vector<u4>& local_variable); // 0x07 -- 07
    void iconst_5(opstack& op_stack,std::vector<u4>& local_variable); // 0x08 -- 08
    void lconst_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x09 -- 09
    void lconst_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x0A -- 10
    void fconst_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x0B -- 11
    void fconst_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x0C -- 12
    void fconst_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x0D -- 13
    void dconst_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x0E -- 14
    void dconst_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x0F -- 15
    void bipush(opstack& op_stack,std::vector<u4>& local_variable); // 0x10 -- 16
    void sipush(opstack& op_stack,std::vector<u4>& local_variable); // 0x11 -- 17
    void ldc(opstack& op_stack,std::vector<u4>& local_variable); // 0x12 -- 18
    void ldc_w(opstack& op_stack,std::vector<u4>& local_variable); // 0x13 -- 19
    void ldc2_w(opstack& op_stack,std::vector<u4>& local_variable); // 0x14 -- 20
    //Loads opcodes 0x15,21 -- 0x35,53
    void iload(opstack& op_stack,std::vector<u4>& local_variable); //0x15 -- 21
    void lload(opstack& op_stack,std::vector<u4>& local_variable); // 0x16 -- 22
    void fload(opstack& op_stack,std::vector<u4>& local_variable); // 0x17 -- 23
    void dload(opstack& op_stack,std::vector<u4>& local_variable); // 0x18 -- 24
    void aload(opstack& op_stack,std::vector<u4>& local_variable); // 0x19 -- 25
    void iload_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x1A -- 26
    void iload_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x1B -- 27
    void iload_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x1C -- 28
    void iload_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x1D -- 29
    void lload_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x1E -- 30
    void lload_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x1F -- 31
    void lload_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x20 -- 32
    void lload_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x21 -- 33
    void fload_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x22 -- 34
    void fload_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x23 -- 35
    void fload_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x24 -- 36
    void fload_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x25 -- 37
    void fload_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x26 -- 38
    void dload_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x27 -- 39
    void dload_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x28 -- 40
    void dload_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x29 -- 41
    void aload_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x2A -- 42
    void aload_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x2B -- 43
    void aload_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x2C -- 44
    void aload_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x2D -- 45
    void iaload(opstack& op_stack,std::vector<u4>& local_variable);  // 0x2E -- 46
    void laload(opstack& op_stack,std::vector<u4>& local_variable);  // 0x2F -- 47
    void faload(opstack& op_stack,std::vector<u4>& local_variable);  // 0x30 -- 48
    void daload(opstack& op_stack,std::vector<u4>& local_variable);  // 0x31 -- 49
    void aaload(opstack& op_stack,std::vector<u4>& local_variable);  // 0x32 -- 50
    void baload(opstack& op_stack,std::vector<u4>& local_variable);  // 0x33 -- 51
    void caload(opstack& op_stack,std::vector<u4>& local_variable);  // 0x34 -- 52
    void saload(opstack& op_stack,std::vector<u4>& local_variable); // 0x35 -- 53
    //Stores 0x36,54 -> 0x56,86
    void istore(opstack& op_stack,std::vector<u4>& local_variable); //0x36 -- 54
    void lstore(opstack& op_stack,std::vector<u4>& local_variable); // 0x37 -- 55
    void fstore(opstack& op_stack,std::vector<u4>& local_variable); // 0x38 -- 56
    void dstore(opstack& op_stack,std::vector<u4>& local_variable); // 0x39 -- 57
    void astore(opstack& op_stack,std::vector<u4>& local_variable); // 0x3A -- 58
    void istore_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x3B -- 59
    void istore_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x3C -- 60
    void istore_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x3D -- 61
    void istore_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x3E -- 62
    void lstore_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x3F -- 63
    void lstore_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x40 -- 64
    void lstore_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x41 -- 65
    void lstore_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x42 -- 66
    void fstore_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x43 -- 67
    void fstore_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x44 -- 68
    void fstore_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x45 -- 69
    void fstore_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x46 -- 70
    void dstore_0(opstack& op_stack,std::vector<u4>& local_variable); // 0x47 -- 71
    void dstore_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x48 -- 72
    void dstore_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x49 -- 73
    void dstore_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x4A -- 74
    void astore_0(opstack& op_stack,std::vector<u4>& local_variable);// 0x4B -- 75
    void astore_1(opstack& op_stack,std::vector<u4>& local_variable); // 0x4C -- 76
    void astore_2(opstack& op_stack,std::vector<u4>& local_variable); // 0x4D -- 77
    void astore_3(opstack& op_stack,std::vector<u4>& local_variable); // 0x4E -- 78
    void iastore(opstack& op_stack,std::vector<u4>& local_variable); // 0x4F -- 79
    void lastore(opstack& op_stack,std::vector<u4>& local_variable); // 0x50 -- 80
    void fastore(opstack& op_stack,std::vector<u4>& local_variable); // 0x51 -- 81
    void dastore(opstack& op_stack,std::vector<u4>& local_variable); // 0x52 -- 82
    void aastore(opstack& op_stack,std::vector<u4>& local_variable); // 0x53 -- 83 
    void bastore(opstack& op_stack,std::vector<u4>& local_variable); // 0x54 -- 84
    void castore(opstack& op_stack,std::vector<u4>& local_variable); // 0x55 -- 85
    void sastore(opstack& op_stack,std::vector<u4>& local_variable); // 0x56 -- 86
    // Stack 0x57,87 -> 0x5F,95
    void pop(opstack& op_stack,std::vector<u4>& local_variable); //0x57 -- 87 
    void pop2(opstack& op_stack,std::vector<u4>& local_variable); //0x58 -- 88
    void dup(opstack& op_stack,std::vector<u4>& local_variable); //0x59 -- 89
    void dup_x1(opstack& op_stack,std::vector<u4>& local_variable); //0x5A -- 90
    void dup_x2(opstack& op_stack,std::vector<u4>& local_variable); //0x5B -- 91
    void dup2(opstack& op_stack,std::vector<u4>& local_variable); //0x5C -- 92
    void dup2_x1(opstack& op_stack,std::vector<u4>& local_variable); //0x5D -- 93
    void dup2_x2(opstack& op_stack,std::vector<u4>& local_variable); //0x5E -- 94
    void swap(opstack& op_stack,std::vector<u4>& local_variable); //0x5F -- 95
    // Math 0x60,96 -> 0x84,132
    void iadd(opstack& op_stack,std::vector<u4>& local_variable); //0x60 -- 96
    void ladd(opstack& op_stack,std::vector<u4>& local_variable); //0x61 -- 97
    void fadd(opstack& op_stack,std::vector<u4>& local_variable); //0x62 -- 98
    void dadd(opstack& op_stack,std::vector<u4>& local_variable); //0x63 -- 99
    void isub(opstack& op_stack,std::vector<u4>& local_variable); //0x64 -- 100
    void lsub(opstack& op_stack,std::vector<u4>& local_variable); //0x65 -- 101
    void fsub(opstack& op_stack,std::vector<u4>& local_variable); //0x66 -- 102
    void dsub(opstack& op_stack,std::vector<u4>& local_variable); //0x67 -- 103
    void imul(opstack& op_stack,std::vector<u4>& local_variable); //0x68 -- 104
    void lmul(opstack& op_stack,std::vector<u4>& local_variable); //0x69 -- 105
    void fmul(opstack& op_stack,std::vector<u4>& local_variable); //0x6A -- 106
    void dmul(opstack& op_stack,std::vector<u4>& local_variable); //0x6B -- 107
    void idiv(opstack& op_stack,std::vector<u4>& local_variable); //0x6C -- 108
    void ldiv(opstack& op_stack,std::vector<u4>& local_variable); //0x6D -- 109
    void fdiv(opstack& op_stack,std::vector<u4>& local_variable); //0x6E -- 110
    void ddiv(opstack& op_stack,std::vector<u4>& local_variable); //0x6F -- 111
    void irem(opstack& op_stack,std::vector<u4>& local_variable); //0x70 -- 112
    void lrem(opstack& op_stack,std::vector<u4>& local_variable); //0x71 -- 113
    void frem(opstack& op_stack,std::vector<u4>& local_variable); //0x72 -- 114
    void drem(opstack& op_stack,std::vector<u4>& local_variable); //0x73 -- 115
    void ineg(opstack& op_stack,std::vector<u4>& local_variable); //0x74 -- 116
    void lneg(opstack& op_stack,std::vector<u4>& local_variable); //0x75 -- 117
    void fneg(opstack& op_stack,std::vector<u4>& local_variable); //0x76 -- 118
    void dneg(opstack& op_stack,std::vector<u4>& local_variable); //0x77 -- 119
    void ishl(opstack& op_stack,std::vector<u4>& local_variable); //0x78 -- 120
    void lshl(opstack& op_stack,std::vector<u4>& local_variable); //0x79 -- 121
    void ishr(opstack& op_stack,std::vector<u4>& local_variable); //0x7A -- 122
    void lshr(opstack& op_stack,std::vector<u4>& local_variable); //0x7B -- 123
    void iushr(opstack& op_stack,std::vector<u4>& local_variable); //0x7C -- 124
    void lushr(opstack& op_stack,std::vector<u4>& local_variable); //0x7D -- 125
    void iand(opstack& op_stack,std::vector<u4>& local_variable); //0x7E -- 126
    void land(opstack& op_stack,std::vector<u4>& local_variable); // 0x7F -- 127
    void ior(opstack& op_stack,std::vector<u4>& local_variable); // 0x80 -- 128
    void lor(opstack& op_stack,std::vector<u4>& local_variable); // 0x81 --129
    void ixor(opstack& op_stack,std::vector<u4>& local_variable); // 0x82 -- 130
    void lxor(opstack& op_stack,std::vector<u4>& local_variable); // 0x83 -- 131
    void iinc(opstack& op_stack,std::vector<u4>& local_variable); // 0x84 -- 132
    //Conversations 0x85,133 -> 0x93,147
    void i2l(opstack& op_stack,std::vector<u4>& local_variable); // 0x85 -- 133
    void i2f(opstack& op_stack,std::vector<u4>& local_variable); // 0x86 -- 134
    void i2d(opstack& op_stack,std::vector<u4>& local_variable); // 0x87 -- 135
    void l2i(opstack& op_stack,std::vector<u4>& local_variable); // 0x88 -- 136
    void l2f(opstack& op_stack,std::vector<u4>& local_variable); // 0x89 -- 137
    void l2d(opstack& op_stack,std::vector<u4>& local_variable); // 0x8A -- 138
    void f2i(opstack& op_stack,std::vector<u4>& local_variable); // 0x8B -- 139
    void f2l(opstack& op_stack,std::vector<u4>& local_variable); // 0x8C -- 140
    void f2d(opstack& op_stack,std::vector<u4>& local_variable); // 0x8D -- 141
    void d2i(opstack& op_stack,std::vector<u4>& local_variable); // 0x8E -- 142
    void d2l(opstack& op_stack,std::vector<u4>& local_variable); // 0x8F -- 143
    void d2f(opstack& op_stack,std::vector<u4>& local_variable); // 0x90 -- 144
    void i2b(opstack& op_stack,std::vector<u4>& local_variable); // 0x91 -- 145
    void i2c(opstack& op_stack,std::vector<u4>& local_variable); // 0x92 -- 146
    void i2s(opstack& op_stack,std::vector<u4>& local_variable); // 0x93 -- 147
    // Comparisons 0x94,148 -> 0xA6,166
    void lcmp(opstack& op_stack,std::vector<u4>& local_variable); // 0x94 -- 148
    void fcmpl(opstack& op_stack,std::vector<u4>& local_variable); // 0x95 -- 149
    void fcmpg(opstack& op_stack,std::vector<u4>& local_variable); // 0x96 -- 150
    void dcmpl(opstack& op_stack,std::vector<u4>& local_variable); // 0x97 -- 151
    void dcmpg(opstack& op_stack,std::vector<u4>& local_variable); // 0x98 -- 152
    void ifeq(opstack& op_stack,std::vector<u4>& local_variable); // 0x99 -- 153
    void ifne(opstack& op_stack,std::vector<u4>& local_variable); // 0x9A -- 154
    void iflt(opstack& op_stack,std::vector<u4>& local_variable); // 0x9B -- 155
    void ifge(opstack& op_stack,std::vector<u4>& local_variable); // 0x9C -- 156
    void ifgt(opstack& op_stack,std::vector<u4>& local_variable); //0x9D -- 157
    void ifle(opstack& op_stack,std::vector<u4>& local_variable); //0x9E -- 158
    void if_icmpeq(opstack& op_stack,std::vector<u4>& local_variable); // 0x9F -- 159
    void if_icmpne(opstack& op_stack,std::vector<u4>& local_variable); // 0xA0 -- 160
    void if_icmplt(opstack& op_stack,std::vector<u4>& local_variable); // 0xA1 - 161
    void if_icmpge(opstack& op_stack,std::vector<u4>& local_variable); // 0xA2 -- 162
    void if_icmpgt(opstack& op_stack,std::vector<u4>& local_variable); // 0xA3 -- 163
    void if_icmple(opstack& op_stack,std::vector<u4>& local_variable); // 0xA4 -- 164
    void if_acmpeq(opstack& op_stack,std::vector<u4>& local_variable); // 0xA5 -- 165
    void if_acmpne(opstack& op_stack,std::vector<u4>& local_variable); // 0xA6 -- 166
    //Control 0xA7,167 -> 0xB1,177
    void goto_jvm(opstack& op_stack,std::vector<u4>& local_variable); // 0xA7 -- 167 
    void jsr(opstack& op_stack,std::vector<u4>& local_variable); // 0xA8 -- 168
    void ret(opstack& op_stack,std::vector<u4>& local_variable); // 0xA9 -- 169
    void tableswitch(opstack& op_stack,std::vector<u4>& local_variable); // 0xAA -- 170
    void ireturn(opstack& op_stack,std::vector<u4>& local_variable); // 0xAB -- 171
    void lreturn(opstack& op_stack,std::vector<u4>& local_variable); // 0xAC -- 172
    void freturn(opstack& op_stack,std::vector<u4>& local_variable); // 0xAD -- 173
    void dreturn(opstack& op_stack,std::vector<u4>& local_variable); // 0xAE -- 174
    void areturn(opstack& op_stack,std::vector<u4>& local_variable); // 0xAF -- 175
    void return_jvm(opstack& op_stack,std::vector<u4>& local_variable); // 0xB0 -- 176
    //References 0xB2,178 -> 0xC3,195
    void getstatic(opstack& op_stack,std::vector<u4>& local_variable); // 0xB2 -- 178
    void putstatic(opstack& op_stack,std::vector<u4>& local_variable); // 0xB3 -- 179
    void getfield(opstack& op_stack,std::vector<u4>& local_variable); // 0xB4 -- 180
    void putfield(opstack& op_stack,std::vector<u4>& local_variable); // 0xB5 -- 181
    void invokevirtual(opstack& op_stack,std::vector<u4>& local_variable); // 0xB6 -- 182
    void invokespecial(opstack& op_stack,std::vector<u4>& local_variable); // 0xB7 -- 183
    void invokestatic(opstack& op_stack,std::vector<u4>& local_variable); // 0xB8 -- 184
    void invokeinterface(opstack& op_stack,std::vector<u4>& local_variable); // 0xB9 -- 185
    void invokedynamic(opstack& op_stack,std::vector<u4>& local_variable); // 0xBA - - 186
    void new_jvm(opstack& op_stack,std::vector<u4>& local_variable); // 0xBB -- 187
    void newarray(opstack& op_stack,std::vector<u4>& local_variable); // 0xBC -- 188
    void anewarray(opstack& op_stack,std::vector<u4>& local_variable); // 0xBD -- 189
    void arraylength(opstack& op_stack,std::vector<u4>& local_variable);// 0xBE -- 190
    void athrow(opstack& op_stack,std::vector<u4>& local_variable);       // 0xBF -- 191
    void checkcast(opstack& op_stack,std::vector<u4>& local_variable);    // 0xC0 -- 192
    void instanceof(opstack& op_stack,std::vector<u4>& local_variable);    //0xC1 -- 193
    void monitorenter(opstack& op_stack,std::vector<u4>& local_variable);  // 0xC2 -- 194
    void monitorexit(opstack& op_stack,std::vector<u4>& local_variable);  // 0xC3 -- 195
    //Extended 0xC4,196 -> 0xC9,201
    void wide(opstack& op_stack,std::vector<u4>& local_variable); // 0xC4 -- 196
    void multianewarray(opstack& op_stack,std::vector<u4>& local_variable); // 0xC5 -- 197
    void ifnull(opstack& op_stack,std::vector<u4>& local_variable); // 0xC6 -- 198
    void ifnonnull(opstack& op_stack,std::vector<u4>& local_variable); // 0xC7 -- 199
    void goto_w(opstack& op_stack,std::vector<u4>& local_variable); // 0xC8 -- 200
    void jsr_w(opstack& op_stack,std::vector<u4>& local_variable); // 0xC9 -- 201
    //Reserved 0xca,202 -> 0xff,255
    void breakpoint(opstack& op_stack,std::vector<u4>& local_variable); // 0xca -- 202
    void impdep1(opstack& op_stack,std::vector<u4>& local_variable); // 0xFE -- 254
    void impdep2(opstack& op_stack,std::vector<u4>& local_variable); // 0xFF -- 255
};