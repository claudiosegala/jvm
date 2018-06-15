#pragma once

namespace jvm
{
    //Constants opcodes 0x00,00 -- 0x14,20
    void nop(); // 0x00 - 00
    void aconst_null(); // 0x01 --01
    void iconst_m1(); // 0x02 -- 02
    void iconst_0(); // 0x03 -- 03
    void iconst_1(); // 0x04 -- 04
    void iconst_2(); // 0x05 -- 05
    void iconst_3(); // 0x06 -- 06
    void iconst_4(); // 0x07 -- 07
    void iconst_5(); // 0x08 -- 08
    void lconst_0(); // 0x09 -- 09
    void lconst_1(); // 0x0A -- 10
    void fconst_0(); // 0x0B -- 11
    void fconst_1(); // 0x0C -- 12
    void fconst_2(); // 0x0D -- 13
    void dconst_0(); // 0x0E -- 14
    void dconst_1(); // 0x0F -- 15
    void bipush(); // 0x10 -- 16
    void sipush(); // 0x11 -- 17
    void ldc(); // 0x12 -- 18
    void ldc_w(); // 0x13 -- 19
    void ldc2_w(); // 0x14 -- 20
    //Loads opcodes 0x15,21 -- 0x35,53
    void iload(); //0x15 -- 21
    void lload(); // 0x16 -- 22
    void fload(); // 0x17 -- 23
    void dload(); // 0x18 -- 24
    void aload(); // 0x19 -- 25
    void iload_0(); // 0x1A -- 26
    void iload_1(); // 0x1B -- 27
    void iload_2(); // 0x1C -- 28
    void iload_3(); // 0x1D -- 29
    void lload_0(); // 0x1E -- 30
    void lload_1(); // 0x1F -- 31
    void lload_2(); // 0x20 -- 32
    void lload_3(); // 0x21 -- 33
    void fload_0(); // 0x22 -- 34
    void fload_1(); // 0x23 -- 35
    void fload_2(); // 0x24 -- 36
    void fload_3(); // 0x25 -- 37
    void fload_0(); // 0x26 -- 38
    void dload_1(); // 0x27 -- 39
    void dload_2(); // 0x28 -- 40
    void dload_3(); // 0x29 -- 41
    void aload_0(); // 0x2A -- 42
    void aload_1(); // 0x2B -- 43
    void aload_2(); // 0x2C -- 44
    void aload_3(); // 0x2D -- 45
    void iaload();  // 0x2E -- 46
    void laload();  // 0x2F -- 47
    void faload();  // 0x30 -- 48
    void daload();  // 0x31 -- 49
    void aaload();  // 0x32 -- 50
    void baload();  // 0x33 -- 51
    void caload();  // 0x34 -- 52
    void saload(); // 0x35 -- 53
    //Stores 0x36,54 -> 0x56,86
    void istore(); //0x36 -- 54
    void lstore(); // 0x37 -- 55
    void fstore(); // 0x38 -- 56
    void dstore(); // 0x39 -- 57
    void astore(); // 0x3A -- 58
    void istore_0(); // 0x3B -- 59
    void istore_1(); // 0x3C -- 60
    void istore_2(); // 0x3D -- 61
    void istore_3(); // 0x3E -- 62
    void lstore_0(); // 0x3F -- 63
    void lstore_1(); // 0x40 -- 64
    void lstore_2(); // 0x41 -- 65
    void lstore_3(); // 0x42 -- 66
    void fstore_0(); // 0x43 -- 67
    void fstore_1(); // 0x44 -- 68
    void fstore_2(); // 0x45 -- 69
    void fstore_3(); // 0x46 -- 70
    void dstore_0(); // 0x47 -- 71
    void dstore_1(); // 0x48 -- 72
    void dstore_2(); // 0x49 -- 73
    void dstore_3(); // 0x4A -- 74
    void astore_0();// 0x4B -- 75
    void astore_1(); // 0x4C -- 76
    void astore_2(); // 0x4D -- 77
    void astore_3(); // 0x4E -- 78
    void iastore(); // 0x4F -- 79
    void lastore(); // 0x50 -- 80
    void fastore(); // 0x51 -- 81
    void dastore(); // 0x52 -- 82
    void aastore(); // 0x53 -- 83 
    void bastore(); // 0x54 -- 84
    void castore(); // 0x55 -- 85
    void sastore(); // 0x56 -- 86
    // Stack 0x57,87 -> 0x5F,95
    void pop(); //0x57 -- 87 
    void pop2(); //0x58 -- 88
    void dup(); //0x59 -- 89
    void dup_x1(); //0x5A -- 90
    void dup_x2(); //0x5B -- 91
    void dup2(); //0x5C -- 92
    void dup2_x1(); //0x5D -- 93
    void dup2_x2(); //0x5E -- 94
    void swap(); //0x5F -- 95
    // Math 0x60,96 -> 0x84,132
    void iadd(); //0x60 -- 96
    void ladd(); //0x61 -- 97
    void fadd(); //0x62 -- 98
    void dadd(); //0x63 -- 99
    void isub(); //0x64 -- 100
    void lsub(); //0x65 -- 101
    void fsub(); //0x66 -- 102
    void dsub(); //0x67 -- 103
    void imul(); //0x68 -- 104
    void lmul(); //0x69 -- 105
    void fmul(); //0x6A -- 106
    void dmul(); //0x6B -- 107
    void idiv(); //0x6C -- 108
    void ldiv(); //0x6D -- 109
    void fdiv(); //0x6E -- 110
    void ddiv(); //0x6F -- 111
    void irem(); //0x70 -- 112
    void lrem(); //0x71 -- 113
    void frem(); //0x72 -- 114
    void drem(); //0x73 -- 115
    void ineg(); //0x74 -- 116
    void lneg(); //0x75 -- 117
    void fneg(); //0x76 -- 118
    void dneg(); //0x77 -- 119
    void ishl(); //0x78 -- 120
    void lshl(); //0x79 -- 121
    void ishr(); //0x7A -- 122
    void lshr(); //0x7B -- 123
    void iushr(); //0x7C -- 124
    void lushr(); //0x7D -- 125
    void iand(); //0x7E -- 126
    void land(); // 0x7F -- 127
    void ior(); // 0x80 -- 128
    void lor(); // 0x81 --129
    void ixor(); // 0x82 -- 130
    void lxor(); // 0x83 -- 131
    void iinc(); // 0x84 -- 132
    //Conversations 0x85,133 -> 0x93,147
    void i2l(); // 0x85 -- 133
    void i2f(); // 0x86 -- 134
    void i2d(); // 0x87 -- 135
    void l2i(); // 0x88 -- 136
    void l2f(); // 0x89 -- 137
    void l2d(); // 0x8A -- 138
    void f2i(); // 0x8B -- 139
    void f2l(); // 0x8C -- 140
    void f2d(); // 0x8D -- 141
    void d2i(); // 0x8E -- 142
    void d2l(); // 0x8F -- 143
    void d2f(); // 0x90 -- 144
    void i2b(); // 0x91 -- 145
    void i2c(); // 0x92 -- 146
    void i2s(); // 0x93 -- 147
    // Comparisons 0x94,148 -> 0xA6,166
    void lcmp(); // 0x94 -- 148
    void fcmpl(); // 0x95 -- 149
    void fcmpg(); // 0x96 -- 150
    void dcmpl(); // 0x97 -- 151
    void dcmpg(); // 0x98 -- 152
    void ifeq(); // 0x99 -- 153
    void ifne(); // 0x9A -- 154
    void iflt(); // 0x9B -- 155
    void ifge(); // 0x9C -- 156
    void ifgt(); //0x9D -- 157
    void ifle(); //0x9E -- 158
    void if_icmpeq(); // 0x9F -- 159
    void if_icmpne(); // 0xA0 -- 160
    void if_icmplt(); // 0xA1 - 161
    void if_icmpge(); // 0xA2 -- 162
    void if_icmpgt(); // 0xA3 -- 163
    void if_icmple(); // 0xA4 -- 164
    void if_acmpeq(); // 0xA5 -- 165
    void if_acmpne(); // 0xA6 -- 166
    //Control 0xA7,167 -> 0xB1,177
    void goto_jvm(); // 0xA7 -- 167 
    void jsr(); // 0xA8 -- 168
    void ret(); // 0xA9 -- 169
    void tableswitch(); // 0xAA -- 170
    void ireturn(); // 0xAB -- 171
    void lreturn(); // 0xAC -- 172
    void freturn(); // 0xAD -- 173
    void dreturn(); // 0xAE -- 174
    void areturn(); // 0xAF -- 175
    void return_jvm(); // 0xB0 -- 176
    //References 0xB2,178 -> 0xC3,195
    void getstatic(); // 0xB2 -- 178
    void putstatic(); // 0xB3 -- 179
    void getfield(); // 0xB4 -- 180
    void putfield(); // 0xB5 -- 181
    void invokevirtual(); // 0xB6 -- 182
    void invokespecial(); // 0xB7 -- 183
    void invokestatic(); // 0xB8 -- 184
    void invokeinterface(); // 0xB9 -- 185
    void invokedynamic(); // 0xBA - - 186
    void new_jvm(); // 0xBB -- 187
    void newarray(); // 0xBC -- 188
    void anewarray(); // 0xBD -- 189
    void arraylength();// 0xBE -- 190
    void athrow();       // 0xBF -- 191
    void checkcast();    // 0xC0 -- 192
    void instanceof();    //0xC1 -- 193
    void monitorenter();  // 0xC2 -- 194
    void monitorexit();  // 0xC3 -- 195
    //Extended 0xC4,196 -> 0xC9,201
    void wide(); // 0xC4 -- 196
    void multianewarray(); // 0xC5 -- 197
    void ifnull(); // 0xC6 -- 198
    void ifnonnull(); // 0xC7 -- 199
    void goto_w(); // 0xC8 -- 200
    void jsr_w(); // 0xC9 -- jsr_w
    //Reserved 0xca,202 -> 0xff,255
    void breakpoint(); // 0xca -- 202
    void impdep1(); // 0xFE -- 254
    void impdep2(); // 0xFF -- 255
};