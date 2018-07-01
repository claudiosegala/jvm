#pragma once

#include "base.hpp"

namespace jvm {

	class Converter {
	public:
		static op8 to_op8(op4, op4);

		static std::tuple<op4, op4> to_op4(op8);

		static u4 to_u4(u2, u2);

		static i4 to_i4(u2, u2);

		static u4 to_u4(u1, u1, u1, u1);

		static i4 to_i4(u1, u1, u1, u1);

		static u2 to_u2(u1, u1);

		static i2 to_i2(u1, u1);

		static i1 to_i1(u1);

		static std::tuple<u2, u2> to_u2(u4);

		static std::tuple<u1, u1> to_u1(u2);

		static std::tuple<u1, u1, u1, u1> to_u1(u4);

		/**
		 * UTF-8 to UTF-16
		 * @param source The source string to convert
		 * @return source string converted
		 */
		std::u16string utf8_to_utf16(std::string);

		/**
		 * UTF-16 to UTF-8
		 * @param source The source string to convert
		 * @return source string converted
		 */
		std::string utf16_to_utf8(std::u16string);
	};

}
