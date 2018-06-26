#pragma once

#include "macros.hpp"

// TODO: put this on the converter class

namespace jvm {
	/**
	* UTF-8 to UTF-16
	* @param source The source string to convert
	* @return source string converted
	*/
	std::u16string utf8_to_utf16(const std::string source);

	/**
	* UTF-16 to UTF-8
	* @param source The source string to convert
	* @return source string converted
	*/
	std::string utf16_to_utf8(const std::u16string source);
}