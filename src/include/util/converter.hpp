#pragma once

#include "base.hpp"

namespace jvm {

	class Converter {
	public:

		/**
		 * Given a pair of 4 bytes of data it concatenates to an unique data of 8 bytes
		 */
		static op8 to_op8(op4, op4);

		static std::tuple<op4, op4> to_op4(op8);

		/**
		 * Given a pair of 2 bytes of data it concatenates to an unique data of 4 bytes
		 */
		static u4 to_u4(u2, u2);

		/**
		 * Given a pair of 2 bytes of data it concatenates to an unique data of 4 bytes
		 */
		static i4 to_i4(u2, u2);

		/**
		 * Given 2 pairs of 1 byte of data it concatenates to an unique data of 4 bytes
		 */
		static u4 to_u4(u1, u1, u1, u1);

		/**
		 * Given 2 pairs of 1 byte of data it concatenates to an unique data of 4 bytes
		 */
		static i4 to_i4(u1, u1, u1, u1);

		/**
		 * Given a pair of 1 byte of data it concatenates to an unique data of 2 bytes
		 */
		static u2 to_u2(u1, u1);

		/**
		 * Given a pair of 1 byte of data it concatenates to an unique data of 2 bytes
		 */
		static i2 to_i2(u1, u1);

		/**
		 * Given an unsigned byte it retrieves a signed byte
		 */
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
