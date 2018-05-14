#include <iostream>
#include <string>
#include <bit.hpp>
#include "bit.hpp"
#include "macros.hpp"
#include "_class.hpp"

namespace jvm {

	_Class::_Class() = default;

	void _Class::read_attributes (jvm::Reader &file) {
		attributes_count = file.getNextHalfWord();

		if(attributes_count.value.number == 0) {
			return;
		}

		for (int i = 0; i < attributes_count.value.number; ++i) {
			attributes.emplace_back(AttributeInfo(file));
		}
	}

	void _Class::read_methods (jvm::Reader &file) {
		methods_count = file.getNextHalfWord();

		if(methods_count.value.number == 0) {
			return;
		}

		for (int i = 0; i < methods_count.value.number; ++i) {
			MethodInfo method;

			method.access_flags = file.getNextHalfWord();
			method.name_index = file.getNextHalfWord();
			method.descriptor_index = file.getNextHalfWord();
			method.attributes_count = file.getNextHalfWord();
			

			for (int j = 0; j < method.attributes_count.value.number; ++j)
			{
				method.attributes.emplace_back(AttributeInfo(file));
			}

			methods.push_back(method);
		}
	}

	void _Class::read_fields (jvm::Reader &file) {
		fields_count = file.getNextHalfWord();

		if(fields_count.value.number == 0) {
			return;
		}

		for (int i = 0; i < fields_count.value.number; ++i) {
			FieldInfo field;

			field.access_flags = file.getNextHalfWord();
			field.name_index = file.getNextHalfWord();
			field.descriptor_index = file.getNextHalfWord();
			field.attributes_count = file.getNextHalfWord();

			for (int j = 0; j < field.attributes_count.value.number; ++j) {
				field.attributes.push_back(file.getNextByte());
			}

			fields.push_back(field);
		}
	}

	void _Class::read_interfaces (jvm::Reader &file) {
		interfaces_count = file.getNextHalfWord();

		if(interfaces_count.value.number == 0) {
			return;
		}

		for (int i = 0; i < interfaces_count.value.number; ++i) {
			InterfaceInfo interface;

			interface.info = file.getNextHalfWord();

			interfaces.push_back(interface);
		}
	}

	void _Class::read_flags (jvm::Reader &file) {
		access_flags = file.getNextHalfWord();
		this_class = file.getNextHalfWord();
		super_class = file.getNextHalfWord();
	}

	void _Class::read_cp (jvm::Reader& file) {
		cp_count = file.getNextHalfWord();
		cp_count.value.number--;

		if (cp_count.value.number <= 0) {
			return;
		}

		constant_pool.fill(file, cp_count.value.number);
	}

	void _Class::read_version (jvm::Reader& file) {
		magic_number = MAGIC_NUMBER;
		min_version = file.getNextHalfWord();
		max_version = file.getNextHalfWord();
	}

	/**
	 * Read the constant pool data
	 * @param file The file to extract the data
	 * @param count How many constants to extract
	 */
	void _Class::read (std::basic_string<char> filename) {
		auto file = jvm::Reader();

		file.open(filename);

		read_version(file);
		read_cp(file);
		read_flags(file);
		read_interfaces(file);
		read_fields(file);
		read_methods(file);
		read_attributes(file);

		file.close();
	}

	void _Class::print_class_flags() {
		auto flag = (uint32_t) access_flags.value.number;
		std::cout << "Access Flags:" << std::endl;

		if (flag == 0) {
			std::cout << "\tNone" << std::endl;
			return;
		}

		{
			using namespace jvm::_class;

			if (flag & Flags::PUBLIC)     std::cout << "\tPublic"     << std::endl;
			if (flag & Flags::PRIVATE)    std::cout << "\tPrivate"    << std::endl;
			if (flag & Flags::PROTECTED)  std::cout << "\tProtected"  << std::endl;
			if (flag & Flags::STATIC)     std::cout << "\tStatic"     << std::endl;
			if (flag & Flags::FINAL)      std::cout << "\tFinal"      << std::endl;
			if (flag & Flags::SUPER)      std::cout << "\tSuper"      << std::endl;
			if (flag & Flags::VOLATILE)   std::cout << "\tVolatile"   << std::endl;
			if (flag & Flags::TRANSIENT)  std::cout << "\tTransient"  << std::endl;
			if (flag & Flags::INTERFACE)  std::cout << "\tInterface"  << std::endl;
			if (flag & Flags::ABSTRACT)   std::cout << "\tAbstract"   << std::endl;
			if (flag & Flags::SYNTHETIC)  std::cout << "\tSynthetic"  << std::endl;
			if (flag & Flags::ANNOTATION) std::cout << "\tAnnotation" << std::endl;
			if (flag & Flags::ENUM)       std::cout << "\tEnum"       << std::endl;
		}
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
		print_class_flags();
		print_this_class();
		print_super_class();
		print_interfaces();
		print_fields();
		print_methods();
		print_attributes();
	}

}