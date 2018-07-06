#include <util/JvmException.hpp>
#include "engine/operands.hpp"
#include "util/JvmException.hpp"

namespace jvm {

	Data Operands::pop4() {
		if (empty()) {
			throw JvmException("Not enough operands on stack");
		}
		auto data = top(); pop();
		return data;
	}

	BigData Operands::pop8() {
		if (size() < 2) {
			throw JvmException("Not enough operands on stack");
		}

		Data high = top(); pop();
		Data low  = top(); pop();

		BigData bigData { .value = Converter::to_op8(low.value, high.value) };

		return bigData;
	}

	void Operands::push4(u1 type, u4 value) {
		op4 bytes = { .ui4 = value };
		Data data = { .type = type, .value = bytes };

		push(data);

		if (size() > maxSize) {
			throw JvmException("Maximum operands stack exceeded");
		}
	}

	void Operands::push4(u1 type, op4 value) {
		Data data = { .type = type, .value = value };

		push(data);

		if (size() > maxSize) {
			throw JvmException("Maximum operands stack exceeded");
		}
	}

	void Operands::push8(u1 type, u8 value) {
		op4 high_bytes, low_bytes;

		high_bytes.ui4 = static_cast<u4>(value >> 32ul);
		low_bytes.ui4  = static_cast<u4>(value & ((1ul << 32ul) - 1));

		Data data1 { .type = type, .value = low_bytes };
		Data data2 { .type = type, .value = high_bytes };

		push(data1);
		push(data2);
	}

	void Operands::push8(u1 type, op8 value) {
		op4 low, high;

		std::tie(low, high) = Converter::to_op4(value);

		Data data1 { .type = type, .value = low };
		Data data2 { .type = type, .value = high };

		push(data1);
		push(data2);

		if (size() > maxSize) {
			throw JvmException("Maximum operands stack size exceeded");
		}
	}

	void Operands::setSize(u4 size) {
		maxSize = size;
	}

}