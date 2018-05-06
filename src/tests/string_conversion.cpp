#include "../utf8_utf16.cpp"
#include "catch.hpp" 
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
 
namespace jvm {
	std::string utf8;
	std::u16string utf16;
	TEST_CASE( "String from utf16 to utf8", "[utf16_to_utf8]" ) {
		REQUIRE( utf16_to_utf8(utf16) == utf8 );
	}
	TEST_CASE( "String from utf8 to utf16", "[utf8_to_utf16]" ) {
		REQUIRE( utf8_to_utf16(utf8) == utf16 );
	}
}