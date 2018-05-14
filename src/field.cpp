#include <bit.hpp>
#include <iostream>
#include <iomanip>
#include "field.hpp"

namespace jvm {

	FieldInfo::FieldInfo (Reader &reader) {
		Read(reader);
	}

	void FieldInfo::PrintFlags(std::ostream &os, uint32_t flag) {
		std::cout << "\tFlags:" << std::endl;

		if (flag == 0) {
			std::cout << "\t\t -o-" << std::endl;
			return;
		}

		{
			using namespace jvm::fields;

			if (flag & Flags::PUBLIC)     std::cout << "\t\tPublic"     << std::endl;
			if (flag & Flags::PRIVATE)    std::cout << "\t\tPrivate"    << std::endl;
			if (flag & Flags::PROTECTED)  std::cout << "\t\tProtected"  << std::endl;
			if (flag & Flags::STATIC)     std::cout << "\t\tStatic"     << std::endl;
			if (flag & Flags::FINAL)      std::cout << "\t\tFinal"      << std::endl;
			if (flag & Flags::VOLATILE)   std::cout << "\t\tVolatile"   << std::endl;
			if (flag & Flags::TRANSIENT)  std::cout << "\t\tTransient"  << std::endl;
			if (flag & Flags::SYNTHETIC)  std::cout << "\t\tSynthetic"  << std::endl;
			if (flag & Flags::ENUM)       std::cout << "\t\tEnum"       << std::endl;
		}
	}

	void FieldInfo::PrintToStream(std::ostream &os, ConstantPool &cp) {
		auto& name = cp[name_index.value.number]->as<CP_Utf8>();
		auto& descriptor = cp[descriptor_index.value.number]->as<CP_Utf8>();

		os << name << std::endl;
		os << "\tDescriptor: " << descriptor << std::endl;

		PrintFlags(os, access_flags.value.number);

		os << "\tAttributes Count: " << attributes_count.value.number << std::endl;
		os << "\tAttributes: ";

		auto i = 0;
		for (auto& attribute : attributes) {
			std::cout << std::endl << "\t\t[" << std::setfill('0') << std::setw(2) << ++i << "] ";
			attribute.printToStream(os, cp, "\t\t");
		}
	}

	void FieldInfo::Read (Reader &reader) {
		access_flags = reader.getNextHalfWord();
		name_index = reader.getNextHalfWord();
		descriptor_index = reader.getNextHalfWord();
		attributes_count = reader.getNextHalfWord();

		for (int j = 0; j < attributes_count.value.number; ++j) {
			attributes.emplace_back(AttributeInfo(reader));
		}
	}

}
