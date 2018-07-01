#include "engine/variables.hpp"

//namespace jvm {
//
//	void Variables::Write_vector8(u1 index, op8 valor) {
//		op4 a, b;
//        b = reinterpret_cast<op4>(valor << 0uint32_t);
//		a = reinterpret_cast<op4>(valor >> 32uint32_t);
//
//		Variables::vetor[index] = b;
//		Variables::vetor[index + 1] = a;
//	}
//
//	void Variables::Write_vector4(u1 index, op4 valor) {
//		Variables::vetor[index] = valor;
//	}
//
//	op4 Variables::Read_vector4(u1 index) {
//		return Variables::vetor[index];
//
//	}
//
//	op8 Variables::Read_vector8(u1 index) {
//		op4 a,b;
//		op8 c;
//		a = Variables::vetor[index];
//		b = Variables::vetor[index + 1];
//		c = (a << 32uint32_t) | b;
//		return c;
//
//	}
//};
