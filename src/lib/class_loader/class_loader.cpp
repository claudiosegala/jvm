#include "class_loader/class_loader.hpp"

namespace jvm {

	ClassLoader::ClassLoader() = default;

	ClassLoader::ClassLoader (const std::string& path) {
		this->read(path);
	}

	void ClassLoader::read (const std::string& filename) {
		auto file = Reader();

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

	void ClassLoader::read_attributes (Reader &file) {
		attributes.fill(file, constant_pool);
	}

	void ClassLoader::read_methods (Reader &file) {
		methods_count = file.getNextHalfWord();

		for (int i = 0; i < methods_count; ++i) {
			MethodInfo currentMethod(file, constant_pool);
			auto name = currentMethod.getName(constant_pool);
			auto descriptor = currentMethod.getDescriptor(constant_pool);
			methods.insert({name + descriptor, currentMethod});
		}
	}

	void ClassLoader::read_fields (Reader &file) {
		fields_count = file.getNextHalfWord();

		for (int i = 0; i < fields_count; ++i) {
			fields.emplace_back(file, constant_pool);
		}
	}

	void ClassLoader::read_interfaces (Reader &file) {
		interfaces_count = file.getNextHalfWord();

		for (int i = 0; i < interfaces_count; ++i) {
			interfaces.emplace_back(file);
		}
	}

	void ClassLoader::read_flags (Reader &file) {
		access_flags = file.getNextHalfWord();
		this_class = file.getNextHalfWord();
		super_class = file.getNextHalfWord();
	}

	void ClassLoader::read_cp (Reader& file) {
		cp_count = (uint16_t)(file.getNextHalfWord() - 1);

		if (cp_count > 0) {
			constant_pool.fill(file, cp_count);
		}
	}

	void ClassLoader::read_version (Reader& file) {
		magic_number = MAGIC_NUMBER;
		min_version = file.getNextHalfWord();
		max_version = file.getNextHalfWord();
	}

	void ClassLoader::print_class_flags() {
		auto flag = (uint32_t) access_flags;
		std::cout << "Access Flags:" << std::endl;

		if (flag) {
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
		} else {
			std::cout << "\t -o-" << std::endl;
		}
	}

	void ClassLoader::print_attributes () {
		attributes.printToStream(std::cout, constant_pool, "");
	}

	void ClassLoader::print_methods () {
		std::cout << "Methods Count: " << methods_count << std::endl;

		if (methods_count) {
			std::cout << "Methods:";

			auto i = 0;
			for (auto& item : methods) {
				auto& method = item.second;
				std::cout << std::endl << "\t[" << std::setfill('0') << std::setw(2) << ++i << "] ";
				method.PrintToStream(std::cout, constant_pool, "");
			}
		}
	}

	void ClassLoader::print_fields () {
		std::cout << "Fields Count: " << fields_count << std::endl;

		if (fields_count) {
			std::cout << "Fields:";

			auto i = 0;
			for (auto& field : fields) {
				std::cout << std::endl << "\t[" << std::setfill('0') << std::setw(2) << ++i << "] ";
				field.PrintToStream(std::cout, constant_pool);
			}
		}
	}

	void ClassLoader::print_interfaces () {
		std::cout << "Interfaces Count: " << interfaces_count << std::endl;

		if (interfaces_count) {
			std::cout << "Interfaces:";

			auto i = 0;
			for (auto& interface : interfaces) {
				std::cout << std::endl << "\t[" << std::setfill('0') << std::setw(2) << ++i << "] ";
				interface.PrintToStream(std::cout, constant_pool);
			}
		}
	}

	void ClassLoader::print_this_class () {
		CPEntry* value = constant_pool[this_class];
		std::cout << "Classes:"<< std::endl;
		std::cout << "\t";
		value->printToStream(std::cout, constant_pool);
	}

	void ClassLoader::print_super_class () {
		if (super_class) {
			CPEntry* value = constant_pool[super_class];
			std::cout << "Super Class:"<< std::endl;
			std::cout << "\t";
			value->printToStream(std::cout, constant_pool);
		} else {
			std::cout << "Object" << std::endl;
		}
	}

	void ClassLoader::print_cp () {
		std::cout << "Constant Pool Count: " << cp_count << std::endl;

		if (cp_count) {
			std::cout << "Constant Pool:";
			constant_pool.printToStream(std::cout);
		}
	}

	void ClassLoader::print_version () {
		std::cout << "Min Version: " << min_version << std::endl;
		std::cout << "Max Version: " << max_version << std::endl;
	}

	void ClassLoader::show () {
		std::cout << "> .class" << std::endl << std::endl;

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
