#include "engine/variables.hpp"

namespace jvm {

	// TODO: implement this
//	Variables::Variables(uint32_t n) {
//		vec = new op4[n];
//	}

	Variables::Variables() {}

	Variables::~Variables() {
		// TODO: implement this
		//delete[] vec;
	}

	op4 Variables::get4(u2 idx) {
		return vec[idx];
	}

	op8 Variables::get8(u2 idx) {
		return Converter::to_op8(vec[idx], vec[idx+1]);
	}

	void Variables::set(u2 idx, op4 value) {
		vec[idx] = value;
	}

	void Variables::set(u2 idx, u4 value) {
		vec[idx].ui4 = value;
	}

	void Variables::set(u2 idx, op8 value) {
		std::tie(vec[idx], vec[idx + 1]) = Converter::to_op4(value);
	}

	void Variables::set(u2 idx, u8 value) {
		op8 aux;

		aux.ull = value;

		std::tie(vec[idx], vec[idx + 1]) = Converter::to_op4(aux);
	}

};
