#include <util/bit.hpp>
#include <iostream>
#include <iomanip>
#include "_class/field.hpp"

namespace jvm {

	FieldInfo::FieldInfo(Reader &reader, ConstantPool &cp) {
		Read(reader, cp);
	}

	void FieldInfo::PrintFlags(std::ostream &os, uint32_t flag) {
		std::cout << "\t\tFlags:" << std::endl;

		if (flag == 0) {
			std::cout << "\t\t\t -o-" << std::endl;
			return;
		}

		{
			using namespace jvm::fields;

			if (flag & Flags::PUBLIC)     std::cout << "\t\t\tPublic"     << std::endl;
			if (flag & Flags::PRIVATE)    std::cout << "\t\t\tPrivate"    << std::endl;
			if (flag & Flags::PROTECTED)  std::cout << "\t\t\tProtected"  << std::endl;
			if (flag & Flags::STATIC)     std::cout << "\t\t\tStatic"     << std::endl;
			if (flag & Flags::FINAL)      std::cout << "\t\t\tFinal"      << std::endl;
			if (flag & Flags::VOLATILE)   std::cout << "\t\t\tVolatile"   << std::endl;
			if (flag & Flags::TRANSIENT)  std::cout << "\t\t\tTransient"  << std::endl;
			if (flag & Flags::SYNTHETIC)  std::cout << "\t\t\tSynthetic"  << std::endl;
			if (flag & Flags::ENUM)       std::cout << "\t\t\tEnum"       << std::endl;
		}
	}

	void FieldInfo::PrintToStream(std::ostream &os, ConstantPool &cp) {
		auto& name = cp[name_index]->as<CP_Utf8>();
		auto& descriptor = cp[descriptor_index]->as<CP_Utf8>();

		os << name << " (" << name_index << ")" << std::endl;
		os << "\t\tDescriptor: " << descriptor << " (" << descriptor_index << ")" << std::endl;

		PrintFlags(os, access_flags);

		attributes.printToStream(os, cp, "\t\t\t");
	}

	void FieldInfo::Read(Reader &reader, ConstantPool &cp) {
		access_flags = reader.getNextHalfWord();
		name_index = reader.getNextHalfWord();
		descriptor_index = reader.getNextHalfWord();
		attributes.fill(reader, cp);
	}

}
