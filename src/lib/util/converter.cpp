#include "util/converter.hpp"

namespace jvm {

	u4 Converter::to_u4(u2 a, u2 b) {
		u4 aux = a;

		aux = (aux << 16ul) | b;

		return aux;
	}

	u4 Converter::to_u4(u1 a, u1 b, u1 c, u1 d) {
		u4 aux = a;

		aux = (aux << 8ul) | b;
		aux = (aux << 8ul) | c;
		aux = (aux << 8ul) | d;

		return aux;
	}

	u2 Converter::to_u2(u1 a, u1 b) {
		u2 aux = a;

		aux = (aux << 8ul) | b;

		return aux;
	}

	std::tuple<u2, u2> Converter::to_u2(u4 a) {
		u2 low  = static_cast<u2>(a & ((1u << 16u) - 1)); a >>= 16u;
		u2 high = static_cast<u2>(a);

		return std::make_tuple(low, high);
	}

	std::tuple<u1, u1> Converter::to_u1(u2 a) {
		u1 low  = static_cast<u1>(a & ((1u << 8u) - 1)); a >>= 8u;
		u1 high = static_cast<u1>(a);

		return std::make_tuple(low, high);
	}

	std::tuple<u1, u1, u1, u1> Converter::to_u1(u4 a) {
		u1 low1  = static_cast<u1>(a & ((1u << 8u) - 1)); a >>= 8u;
		u1 low2  = static_cast<u1>(a & ((1u << 8u) - 1)); a >>= 8u;
		u1 high1 = static_cast<u1>(a & ((1u << 8u) - 1)); a >>= 8u;
		u1 high2 = static_cast<u1>(a);

		return std::make_tuple(low1, low2, high1, high2);
	}

}