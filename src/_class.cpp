#include <iostream>
#include <string>
#include <bit.hpp>
#include "macros.hpp"
#include "_class.hpp"


namespace jvm {

	_Class::_Class() = default;

	void _Class::read_attributes (jvm::Reader &file) {
		for (int i = 0; i < attributes_count.value.number; ++i) {

		}
	}

	void _Class::read_methods (jvm::Reader &file) {
		for (int i = 0; i < methods_count.value.number; ++i) {

		}
	}

	void _Class::read_fields (jvm::Reader &file) {
		for (int i = 0; i < fields_count.value.number; ++i) {

		}
	}

	void _Class::read_interfaces (jvm::Reader &file) {
		for (int i = 0; i < interfaces_count.value.number; ++i) {

		}
	}

	void _Class::read_cp (jvm::Reader& file) {
		constant_pool.fill(file, cp_count.value.number);
	}

	/**
	 * Read the constant pool data
	 * @param file The file to extract the data
	 * @param count How many constants to extract
	 */
	void _Class::read (std::basic_string<char> filename) {
		auto file = jvm::Reader();

		file.open(filename);

		magic_number = MAGIC_NUMBER;
		min_version = file.getNextHalfWord();
		max_version = file.getNextHalfWord();

		cp_count = file.getNextHalfWord();
		cp_count.value.number--;
		if (cp_count.value.number != 0) {
			read_cp(file);
		}

		access_flags = file.getNextHalfWord();
		this_class = file.getNextHalfWord();
		super_class = file.getNextHalfWord();

		interfaces_count = file.getNextHalfWord();
		if(interfaces_count.value.number != 0) {
			read_interfaces(file);
		}

		fields_count = file.getNextHalfWord();
		if(fields_count.value.number != 0) {
			read_fields(file);
		}

		methods_count = file.getNextHalfWord();
		if(methods_count.value.number != 0) {
			read_methods(file);
		}

		attributes_count = file.getNextHalfWord();
		if(attributes_count.value.number != 0) {
			read_attributes(file);
		}

		file.close();
	}

	void _Class::print_flags () {
		auto flag = (uint32_t) access_flags.value.number;
		std::cout << "Access Flags:" << std::endl;

		if (flag == 0) {
			std::cout << "\tNone" << std::endl;
			return;
		}

		if (flag & jvm::FLAGS::PUBLIC)     std::cout << "\tPublic"     << std::endl;
		if (flag & jvm::FLAGS::PRIVATE)    std::cout << "\tPrivate"    << std::endl;
		if (flag & jvm::FLAGS::PROTECTED)  std::cout << "\tProtected"  << std::endl;
		if (flag & jvm::FLAGS::STATIC)     std::cout << "\tStatic"     << std::endl;
		if (flag & jvm::FLAGS::FINAL)      std::cout << "\tFinal"      << std::endl;
		if (flag & jvm::FLAGS::SUPER)      std::cout << "\tSuper"      << std::endl;
		if (flag & jvm::FLAGS::VOLATILE)   std::cout << "\tVolatile"   << std::endl;
		if (flag & jvm::FLAGS::TRANSIENT)  std::cout << "\tTransient"  << std::endl;
		if (flag & jvm::FLAGS::INTERFACE)  std::cout << "\tInterface"  << std::endl;
		if (flag & jvm::FLAGS::ABSTRACT)   std::cout << "\tAbstract"   << std::endl;
		if (flag & jvm::FLAGS::SYNTHETIC)  std::cout << "\tSynthetic"  << std::endl;
		if (flag & jvm::FLAGS::ANNOTATION) std::cout << "\tAnnotation" << std::endl;
		if (flag & jvm::FLAGS::ENUM)       std::cout << "\tEnum"       << std::endl;
	}

	void _Class::print_attributes () {
		std::cout << "Attributes Count: " << attributes_count.value.number << std::endl;

		if (attributes_count.value.number == 0) {
			return;
		}
	}

	void _Class::print_methods () {
		std::cout << "Methods Count: " << methods_count.value.number << std::endl;

		if (methods_count.value.number == 0) {
			return;
		}
	}

	void _Class::print_fields () {
		std::cout << "Fields Count: " << fields_count.value.number << std::endl;

		if (fields_count.value.number - 1 == 0) {
			return;
		}
	}

	void _Class::print_interfaces () {
		std::cout << "Interfaces Count: " << interfaces_count.value.number << std::endl;

		if (interfaces_count.value.number == 0) {
			return;
		}
	}

	void _Class::print_this_class () {}

	void _Class::print_super_class () {}

	void _Class::print_cp () {
		std::cout << "Constant Pool Count: " << cp_count.value.number << std::endl;

		constant_pool.printToStream(std::cout);
	}

	void _Class::print_version () {
		std::cout << "Min Version: " << min_version.value.number << std::endl;
		std::cout << "Max Version: " << max_version.value.number << std::endl;
	}

	void _Class::show () {
		std::cout << "> .class" << std::endl;

		print_version();
		print_cp();
		print_flags();
		print_this_class();
		print_super_class();
		print_interfaces();
		print_fields();
		print_methods();
		print_attributes();
	}

}