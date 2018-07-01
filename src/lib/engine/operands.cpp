#include "engine/operands.hpp"

namespace jvm {

	op4 Operands::pop4() {
		op4 retval = top(); pop();
		return retval;
	}

	op8 Operands::pop8() {
		op4 high = top(); pop();
		op4 low  = top(); pop();

		return Converter::to_op8(low, high);
	}

	void Operands::push4(u4 value) {
		op4 bytes;

		bytes.ui4 = value;

		push(bytes);
	}

	void Operands::push4(op4 value) {
		push(value);
	}

	void Operands::push8(u8 value) {
		op4 high_bytes, low_bytes;

		high_bytes.ui4 = static_cast<u4>(value >> 32ul);
		low_bytes.ui4  = static_cast<u4>(value & ((1ul << 32ul) - 1));

		push(low_bytes);
		push(high_bytes);
	}

	void Operands::push8(op8 value) {
		op4 low, high;

		std::tie(low, high) = Converter::to_op4(value);

		push(low);
		push(high);
	}

}