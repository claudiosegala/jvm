#include "util/converter.hpp"

namespace jvm {

	op8 Converter::to_op8(op4 a, op4 b) {
		op8 ans, high_bytes, low_bytes;

		low_bytes.ull = a.ui4;
		high_bytes.ull = b.ui4;

		ans.ull = high_bytes.ull << 32ul;
		ans.ull = ans.ull | low_bytes.ull;

		return ans;
	}

	std::tuple<op4, op4> Converter::to_op4(op8 a) {
		op4 low, high;

		low.ui4  = static_cast<u4>(a.ull & ((1ul << 32ul) - 1));
		high.ui4 = static_cast<u4>(a.ull >> 32ul);

		return std::make_tuple(low, high);
	};

	u4 Converter::to_u4(u2 a, u2 b) {
		u4 ans = a;

		ans = (ans << 16ul) | b;

		return ans;
	}

	i4 Converter::to_i4(u2 a, u2 b) {
		u4 ans = a;

		ans = (ans << 16ul) | b;

		return static_cast<i4>(ans);
	}

	u4 Converter::to_u4(u1 a, u1 b, u1 c, u1 d) {
		u4 ans = a;

		ans = (ans << 8ul) | b;
		ans = (ans << 8ul) | c;
		ans = (ans << 8ul) | d;

		return ans;
	}

	i4 Converter::to_i4(u1 a, u1 b, u1 c, u1 d) {
		u4 ans = a;

		ans = (ans << 8ul) | b;
		ans = (ans << 8ul) | c;
		ans = (ans << 8ul) | d;

		return static_cast<i4>(ans);
	}

	u2 Converter::to_u2(u1 a, u1 b) {
		u2 ans = a;

		ans = (ans << 8ul) | b;

		return ans;
	}

	i2 Converter::to_i2(u1 a, u1 b) {
		u2 ans = a;

		ans = (ans << 8ul) | b;

		return static_cast<i2>(ans);
	}

	i1 Converter::to_i1(u1 a) {
		return static_cast<i1>(a);
	}

	std::tuple<u2, u2> Converter::to_u2(u4 a) {
		auto low  = static_cast<u2>(a & ((1u << 16u) - 1)); a >>= 16u;
		auto high = static_cast<u2>(a);

		return std::make_tuple(low, high);
	}

	std::tuple<u1, u1> Converter::to_u1(u2 a) {
		auto low  = static_cast<u1>(a & ((1u << 8u) - 1)); a >>= 8u;
		auto high = static_cast<u1>(a);

		return std::make_tuple(low, high);
	}

	std::tuple<u1, u1, u1, u1> Converter::to_u1(u4 a) {
		auto low1  = static_cast<u1>(a & ((1u << 8u) - 1)); a >>= 8u;
		auto low2  = static_cast<u1>(a & ((1u << 8u) - 1)); a >>= 8u;
		auto high1 = static_cast<u1>(a & ((1u << 8u) - 1)); a >>= 8u;
		auto high2 = static_cast<u1>(a);

		return std::make_tuple(low1, low2, high1, high2);
	}

	std::u16string Converter::utf8_to_utf16(std::string source){
		std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> convert;
		std::u16string dest = convert.from_bytes(source);
		return dest;
	}

	std::string Converter::utf16_to_utf8(std::u16string source){
		std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> convert;
		std::string dest = convert.to_bytes(source);
		return dest;
	}

}
