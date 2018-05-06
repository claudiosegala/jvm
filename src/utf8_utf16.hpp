#pragma once

#include <string> 
 
namespace jvm {
	//UTF-8 to UTF-16 
	std::u16string utf8_to_utf16(const std::string source);

	//UTF-16 to UTF-8 
	std::string utf16_to_utf8(const std::u16string source);
}