//
// Created by Ricardo on 24-Jun-18.
//

#include "vm/operands.hpp"

namespace jvm {

	u4 Operands::pop4() {
		auto retval = top();
		pop();
		return retval;
	}

	u8 Operands::pop8() {
		u8 high_bytes = top();
		pop();

		u8 low_bytes  = top();
		pop();

		return (high_bytes << 32ul) | low_bytes;
	}

	void Operands::push4(u4 value) {
		push(value);
	}

	void Operands::push8(u8 value) {
		auto high_bytes = static_cast<u4>(value >> 32ul);
		auto low_bytes  = static_cast<u4>(value & ((1ul << 32ul) - 1));
		push(low_bytes);
		push(high_bytes);
	}


}