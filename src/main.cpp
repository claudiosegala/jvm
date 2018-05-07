#include <cstdio>
#include <iostream>
#include <vector>
#include "reader.hpp"
#include "constant_pool.hpp"
#include "bit.hpp"
#include "_class.hpp"

#define W(x) std::cerr << "\033[35m" << #x << "=" << x << "\033[0m" << "\n";

/**
 * Read the constant pool data
 * @param file The file to extract the data
 * @param count How many constants to extract
 */
 void read_interfaces(jvm::Reader& file, jvm::_Class& cl) {


}

void read_cp (jvm::Reader& file, jvm::_Class& cl) {
	for (int i = 1; i <= cl.cp_count.value.number - 1; ++i) {
		auto aux = file.getNextByte();
		auto tag = aux.value.number;
		W(i);
		switch (tag) {
			case jvm::CP_TAGS::Class: {
				//std::cout << "\t Tag: Class"                      << std::endl;
				auto name_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::FieldRef: {
				//std::cout << "\t Tag: Field Reference" << std::endl;
				auto name_index = file.getNextHalfWord();
				auto name_type_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::MethodRef: {
				//std::cout << "\t Tag: Method Reference"           << std::endl;
				auto name_index = file.getNextHalfWord();
				auto name_type_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::InterfaceMethodRef: {
				//std::cout << "\t Tag: Interface Method Reference" << std::endl;
				auto name_index = file.getNextHalfWord();
				auto name_type_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::String: {
				//std::cout << "\t Tag: String"                     << std::endl;
				auto string_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Integer: {
				//std::cout << "\t Tag: Integer"                    << std::endl;
				auto bytes = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Float: {
				//std::cout << "\t Tag: Float"                      << std::endl;
				auto bytes = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Long: {
				//std::cout << "\t Tag: Long"                       << std::endl;
				auto high_bytes = file.getNextWord();
				auto low_bytes = file.getNextWord();
				++i;
				break;
			}
			case jvm::CP_TAGS::Double: {
				//std::cout << "\t Tag: Double"                     << std::endl;
				auto high_bytes = file.getNextWord();
				auto low_bytes = file.getNextWord();
				++i;
				break;
			}
			case jvm::CP_TAGS::NameAndType: {
				//std::cout << "\t Tag: Name And Type"              << std::endl;
				auto name_index = file.getNextHalfWord();
				auto descriptor_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Utf8: {
				//std::cout << "\t Tag: UTF-8"                      << std::endl;
				auto len = file.getNextHalfWord().value.number;
				auto bytes = std::vector<jvm::Byte>(len);

				for (int i = 0; i < len; i++) {
					bytes[i] = file.getNextByte();
				}

				break;
			}
			case jvm::CP_TAGS::MethodHandle: {
				//std::cout << "\t Tag: Method Handle"              << std::endl;
				auto reference_kind = file.getNextByte();
				auto reference_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::MethodType: {
				//std::cout << "\t Tag: Method Type"                << std::endl;
				auto descriptor_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::InvokeDynamic: {
				//std::cout << "\t Tag: Invoke Dynamic"             << std::endl;
				auto bootstrap_method_attr_index = file.getNextHalfWord();
				auto name_and_type_index = file.getNextHalfWord();
			}
			default:
				throw "Invalid conversion, file is wrong";
		}
		// TODO: fix this!!! It is crashing on the last one
	}
	
}

void print_access (uint32_t flag) {
	if (flag & jvm::FLAGS::PUBLIC){
		std::cout << "\t Access: Public"					<< std::endl;
	}
	if (flag & jvm::FLAGS::PRIVATE){
		std::cout << "\t Access: Private"					<< std::endl;
	}
	if (flag & jvm::FLAGS::PROTECTED){
		std::cout << "\t Access: Protected"					<< std::endl;
	}
	if (flag & jvm::FLAGS::STATIC){
		std::cout << "\t Access: Static"					<< std::endl;
	}
	if (flag & jvm::FLAGS::FINAL){
		std::cout << "\t Access: Final"						<< std::endl;
	}
	if (flag & jvm::FLAGS::SUPER){
		std::cout << "\t Access: Super"						<< std::endl;
	}
	if (flag & jvm::FLAGS::VOLATILE){
		std::cout << "\t Access: Volatile"					<< std::endl;
	}
	if (flag & jvm::FLAGS::TRANSIENT){
		std::cout << "\t Access: Transient"					<< std::endl;
	}
	if (flag & jvm::FLAGS::INTERFACE){
		std::cout << "\t Access: Interface"					<< std::endl;
	}
	if (flag & jvm::FLAGS::ABSTRACT){
		std::cout << "\t Access: Abstract"					<< std::endl;
	}
	if (flag & jvm::FLAGS::SYNTHETIC){
		std::cout << "\t Access: Synthetic"					<< std::endl;
	}
	if (flag & jvm::FLAGS::ANNOTATION){
		std::cout << "\t Access: Annotation"				<< std::endl;
	}
	if (flag & jvm::FLAGS::ENUM){
		std::cout << "\t Access: Enum"						<< std::endl;
	}
}

/**
 * Iniciate reading the .class file
 */
jvm::_Class read (std::string filename) {
	auto file = jvm::Reader();

	file.open(filename);

	auto cl = jvm::_Class();

	cl.min_version = file.getNextHalfWord();
	cl.max_version = file.getNextHalfWord();
	cl.cp_count = file.getNextHalfWord(); // TODO: verify if it needs to do -1

	if (cl.cp_count.value.number != 0) {
		read_cp(file, cl);

	}

	cl.access_flags = file.getNextHalfWord();

	print_access(cl.access_flags.value.number);

	cl.this_class = file.getNextHalfWord();

	cl.super_class = file.getNextHalfWord();

	cl.interfaces_count = file.getNextHalfWord();
	
	if(cl.interfaces_count.value.number != 0) {
		read_interfaces(file, cl);
	}

	file.close();

	return cl;
}

void show (jvm::_Class cl) {
	std::cout << "> .class" << std::endl;
	std::cout << "Min Version: " << cl.min_version.value.number << std::endl;
	std::cout << "Max Version: " << cl.max_version.value.number << std::endl;
	std::cout << "Constant Pool Count: " << cl.cp_count.value.number - 1 << std::endl;
	std::cout << "Constant Pool Count: " << cl.cp_count.value.number - 1 << std::endl;
	std::cout << "Interfaces Count: " << cl.interfaces_count.value.number - 1 << std::endl;
}

int main (int argc, char *argv[ ]) {
	if (argc < 2) {
        std::cout << "Número de argumentos insuficientes" << std::endl;
        return 0;
    }

    try {
		auto cl = read(argv[1]);
		show(cl);
	} catch (std::string error) {
	    std::cout << error << std::endl;
	}
}
