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
	for (int i = 0; i < cl.cp_count.value.number; ++i) {
		auto aux = file.getNextByte();
		auto tag = aux.value.number;

		switch (tag) {
			case jvm::CP_TAGS::Class: {
				std::cout << "\t Tag: Class"                      << std::endl;
				auto name_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::FieldRef: {
				std::cout << "\t Tag: Field Reference" << std::endl;
				auto name_index = file.getNextHalfWord();
				auto name_type_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::MethodRef: {
				std::cout << "\t Tag: Method Reference"           << std::endl;
				auto name_index = file.getNextHalfWord();
				auto name_type_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::InterfaceMethodRef: {
				std::cout << "\t Tag: Interface Method Reference" << std::endl;
				auto name_index = file.getNextHalfWord();
				auto name_type_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::String: {
				std::cout << "\t Tag: String"                     << std::endl;
				auto string_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Integer: {
				std::cout << "\t Tag: Integer"                    << std::endl;
				auto bytes = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Float: {
				std::cout << "\t Tag: Float"                      << std::endl;
				auto bytes = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Long: {
				std::cout << "\t Tag: Long"                       << std::endl;
				auto high_bytes = file.getNextWord();
				auto low_bytes = file.getNextWord();
				break;
			}
			case jvm::CP_TAGS::Double: {
				std::cout << "\t Tag: Double"                     << std::endl;
				auto high_bytes = file.getNextWord();
				auto low_bytes = file.getNextWord();
				break;
			}
			case jvm::CP_TAGS::NameAndType: {
				std::cout << "\t Tag: Name And Type"              << std::endl;
				auto name_index = file.getNextHalfWord();
				auto descriptor_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Utf8: {
				std::cout << "\t Tag: UTF-8"                      << std::endl;
				auto len = file.getNextHalfWord().value.number;
				auto bytes = std::vector<jvm::Byte>(len);

				for (int i = 0; i < len; i++) {
					bytes[i] = file.getNextByte();
				}

				break;
			}
			case jvm::CP_TAGS::MethodHandle: {
				std::cout << "\t Tag: Method Handle"              << std::endl;
				auto reference_kind = file.getNextByte();
				auto reference_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::MethodType: {
				std::cout << "\t Tag: Method Type"                << std::endl;
				auto descriptor_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::InvokeDynamic: {
				std::cout << "\t Tag: Invoke Dynamic"             << std::endl;
				auto bootstrap_method_attr_index = file.getNextHalfWord();
				auto name_and_type_index = file.getNextHalfWord();
			}
			default:
				throw "Invalid conversion, file is wrong";
		}
	}
	
}

void read_access (uint32_t flag) {
	switch (flag) {
		case jvm::ACC_FLAGS::PUBLIC:
			std::cout << "\t Access: Public"					<< std::endl;
			break;
		case jvm::ACC_FLAGS::FINAL:
			std::cout << "\t Access: Final"						<< std::endl;
			break;
		case jvm::ACC_FLAGS::SUPER:
			std::cout << "\t Access: Super"						<< std::endl;
			break;
		case jvm::ACC_FLAGS::INTERFACE:
			std::cout << "\t Access: Interface"					<< std::endl;
			break;
		case jvm::ACC_FLAGS::ABSTRACT:
			std::cout << "\t Access: Abstract"					<< std::endl;
			break;
		case jvm::ACC_FLAGS::SYNTHETIC:
			std::cout << "\t Access: Synthetic"					<< std::endl;
			break;
		case jvm::ACC_FLAGS::ANNOTATION:
			std::cout << "\t Access: Annotation"				<< std::endl;
			break;
		case jvm::ACC_FLAGS::ENUM:
			std::cout << "\t Access: Enum"						<< std::endl;
			break;
		default:
			throw "Invalid conversion, file is wrong";
	}
}

/**
 * Iniciate reading the .class file
 */
void init (std::string filename) {
	auto file = jvm::Reader();

	file.open(filename);

	std::cout << "> .class" << std::endl;

	auto cl = jvm::_Class();

	cl.min_version = file.getNextHalfWord();
	std::cout << "Min Version: " << cl.min_version.value.number << std::endl;

	cl.max_version = file.getNextHalfWord();
	std::cout << "Max Version: " << cl.max_version.value.number << std::endl;

	cl.cp_count = file.getNextHalfWord();
	std::cout << "CP count: " << cl.cp_count.value.number - 1 << std::endl;

	if (cl.cp_count.value.number != 0) {
		read_cp(file, cl);
	}

	cl.access_flags = file.getNextHalfWord();

	read_access(cl.access_flags.value.number);

	cl.this_class = file.getNextHalfWord();

	cl.super_class = file.getNextHalfWord();

	cl.interfaces_count = file.getNextHalfWord();
	
	if(cl.interfaces_count.value.number != 0) {
		read_interfaces(file, cl);
	}

	file.close();
}

int main (int argc, char *argv[ ]) {
	if (argc < 2) {
        std::cout << "Número de argumentos insuficientes" << std::endl;
        return 0;
    }

    try {
		init(argv[1]);
	} catch (std::string error) {
	    std::cout << error << std::endl;
	}
}
