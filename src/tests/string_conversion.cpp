#include "../lib/util/converter.cpp"
#include "catch.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
 
namespace jvm {
	std::string utf8;
	std::u16string utf16;

	TEST_CASE( "String from utf16 to utf8", "[utf16_to_utf8]" ) {
		REQUIRE( Converter::utf16_to_utf8(utf16) == utf8 );
		
		
		SECTION( "test for invalid input"){
			REQUIRE( Converter::utf16_to_utf8(utf16) == utf8 );
		}
		
	}

	TEST_CASE( "String from utf8 to utf16", "[utf8_to_utf16]" ) {
		REQUIRE( Converter::utf8_to_utf16(utf8) == utf16 );
		
		
		SECTION( "test for invalid input"){
			REQUIRE( Converter::utf8_to_utf16(utf8) == utf16 );
		}
		
	}
}