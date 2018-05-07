#include <cstdio>
#include <iostream>
#include <reader.hpp>
#include <bit.hpp>
#include "constant_pool.hpp"
#include "bit.hpp"

#define W(x) std::cerr << "\033[35m" << #x << "=" << x << "\033[0m" << "\n";

/**
 * Read the constant pool data
 * @param file The file to extract the data
 * @param count How many constants to extract
 */
void read_cp (jvm::Reader& file, int count) {
	for (int i = 0; i < count; ++i) {
		auto aux = file.getNextByte();
		auto tag = static_cast<jvm::CP_TAGS>(aux.value.number);

		switch (tag) {
			case jvm::CP_TAGS::Class: {
				std::cout << "\t Tag: Class"                      << std::endl;
				auto name_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Fieldref: {
				std::cout << "\t Tag: Field Reference" << std::endl;
				auto name_index = file.getNextHalfWord();
				auto name_type_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::Methodref: {
				std::cout << "\t Tag: Method Reference"           << std::endl;
				auto name_index = file.getNextHalfWord();
				auto name_type_index = file.getNextHalfWord();
				break;
			}
			case jvm::CP_TAGS::InterfaceMethodref: {
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
				auto bytes = vector<jvm::Byte>(len);

				for (int i = 0; i < len; i++) {
					bytes[i] = file.getNextByte();
				}

				break;
			}
			case jvm::CP_TAGS::MethodHandle: {
				std::cout << "\t Tag: Method Handle"              << std::endl;
				u1 reference_kind;
				u2 reference_index;
			}
			case jvm::CP_TAGS::MethodType: {
				std::cout << "\t Tag: Method Type"                << std::endl;
			}
			case jvm::CP_TAGS::InvokeDynamic: {
				std::cout << "\t Tag: Invoke Dynamic"             << std::endl;
			}
			default:
				throw "Invalid conversion, file is wrong";
		}
	}
}

/**
 * Iniciate reading the .class file
 */
void init (std::string filename) {
	auto file = jvm::Reader();

	file.open(filename);

	std::cout << "> .class" << std::endl;

	auto min_version = file.getNextHalfWord();
	std::cout << "Min Version: " << min_version.value.number << std::endl;

	auto max_version = file.getNextHalfWord();
	std::cout << "Max Version: " << max_version.value.number << std::endl;

	auto cp_count = file.getNextHalfWord();
	std::cout << "CP count: " << cp_count.value.number - 1 << std::endl;

	if (cp_count.value.number != 0) {
		read_cp(file, cp_count.value.number);
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
