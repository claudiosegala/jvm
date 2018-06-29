#include "util/converter.hpp"

namespace jvm {

	u4 Converter::to_u4(u2 a, u2 b) {
		u4 aux = a;

		aux = (aux << 16ul) | b;

		return aux;
	}

	i4 Converter::to_i4(u2 a, u2 b) {
		u4 aux = a;

		aux = (aux << 16ul) | b;

		return static_cast<i4>(aux);
	}

	u4 Converter::to_u4(u1 a, u1 b, u1 c, u1 d) {
		u4 aux = a;

		aux = (aux << 8ul) | b;
		aux = (aux << 8ul) | c;
		aux = (aux << 8ul) | d;

		return aux;
	}

	i4 Converter::to_i4(u1 a, u1 b, u1 c, u1 d) {
		u4 aux = a;

		aux = (aux << 8ul) | b;
		aux = (aux << 8ul) | c;
		aux = (aux << 8ul) | d;

		return static_cast<i4>(aux);
	}

	u2 Converter::to_u2(u1 a, u1 b) {
		u2 aux = a;

		aux = (aux << 8ul) | b;

		return aux;
	}

	i2 Converter::to_i2(u1 a, u1 b) {
		u2 aux = a;

		aux = (aux << 8ul) | b;

		return static_cast<i2>(aux);
	}

	i1 Converter::to_i1(u1 a) {
		return static_cast<i1>(a);
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

	std::u16string Converter::utf8_to_utf16(const std::string source){
		std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> convert;
		std::u16string dest = convert.from_bytes(source);
		return dest;
	}

	std::string Converter::utf16_to_utf8(const std::u16string source){
		std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> convert;
		std::string dest = convert.to_bytes(source);
		return dest;
	}

}
