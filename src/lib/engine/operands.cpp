#include "engine/operands.hpp"

namespace jvm {

	op4 Operands::pop4() {
		op4 retval = top(); pop();
		return retval;
	}

	op8 Operands::pop8() {
		op8 bytes, high_bytes, low_bytes;

		high_bytes.ull = top().ui4; pop();
		low_bytes.ull = top().ui4;  pop();

		bytes.ull = high_bytes.ull << 32ul;
		bytes.ull = bytes.ull | low_bytes.ull;

		return bytes;
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
		op4 high_bytes, low_bytes;

		high_bytes.ui4 = static_cast<u4>(value.ull >> 32ul);
		low_bytes.ui4  = static_cast<u4>(value.ull & ((1ul << 32ul) - 1));

		push(low_bytes);
		push(high_bytes);
	}


}