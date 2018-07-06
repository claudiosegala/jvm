#pragma once

#include "base.hpp"

namespace jvm {

	class Converter {
	public:

		/**
		 * Given a pair of 4 bytes of data it concatenates to an unique data of 8 bytes
		 * @param a lower 4 bytes
		 * @param b higher 4 bytes which are left shifted 32 times
		 * @return op8 union value formed from both parameters
		 */
		static op8 to_op8(op4, op4);

		static std::tuple<op4, op4> to_op4(op8);

		/**
		 * Given a pair of 2 bytes of data it concatenates to an unique data of 4 bytes
		 * @param a lower 2 bytes
		 * @param b higher 2 bytes which are left shifted 16 times
		 * @return u4 unsigned int value formed from both parameters
		 */
		static u4 to_u4(u2, u2);

		/**
		 * Given a pair of 2 bytes of data it concatenates to an unique signed int of 4 bytes
		 * @param a lower 2 bytes
		 * @param b higher 2 bytes which are left shifted 16 times
		 * @return i4 signed int formed from both parameters and static casted to signed int
		 */
		static i4 to_i4(u2, u2);

		/**
		 * Given 2 pairs of 1 byte of data it concatenates to an unique data of 4 bytes
		 * @param a left side of the higher half of the int
		 * @param b right side of the higher half of the int
		 * @param c left side of the lower half of the int
		 * @param d right side of the lower half of the int
		 * @return u4 unsigned int value formed from the parameters
		 */
		static u4 to_u4(u1, u1, u1, u1);

		/**
		 * Given 2 pairs of 1 byte of data it concatenates to an unique data of 4 bytes
		 * @param a left side of the higher half of the int
		 * @param b right side of the higher half of the int
		 * @param c left side of the lower half of the int
		 * @param d right side of the lower half of the int
		 * @return i4 static casted value to signed int formed from the parameters
		 */
		static i4 to_i4(u1, u1, u1, u1);

		/**
		 * Given a pair of 1 byte of data it concatenates to an unique data of 2 bytes
		 * @param a byte which is left shifted 8 times
		 * @param b byte value
		 * @return u2 unsigned 2 bytes value formed from the parameters
		 */
		static u2 to_u2(u1, u1);

		/**
		 * Given a pair of 1 byte of data it concatenates to an unique data of 2 bytes
		 * @param a byte which is left shifted 8 times
		 * @param b byte value
		 * @return i2 static casted value to signed 2 bytes formed from the parameters
		 */
		static i2 to_i2(u1, u1);

		/**
		 * Given an unsigned byte it retrieves a signed byte
		 * @param a byte value
		 * @return i1 static casted byte to signed 1 byte
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
