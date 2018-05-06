#include <string> 
#include <locale> 
#include <codecvt> 
 
namespace jvm;

//UTF-8 to UTF-16 
jvm::u16string utf8_to_utf16(const jvm::string source){
	std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> convert; 

	jvm::u16string dest = convert.from_bytes(source);     
	return dest;
}

//UTF-16 to UTF-8 
jvm::string utf16_to_utf8(const jvm::u16string source){ 
	std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> convert; 
	jvm::string dest = convert.to_bytes(source);     
	return dest;
}