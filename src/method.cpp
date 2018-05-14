#include <iostream>
#include <bit.hpp>
#include "reader.hpp"
#include "method.hpp"
#include "attribute.hpp"

namespace jvm  {

    MethodInfo::MethodInfo (Reader &reader) {
        Read(reader);
    }

    void MethodInfo::PrintFlags (std::ostream &os, uint32_t flag) {
        std::cout << "\tFlags:" << std::endl;

        if (flag == 0) {
            std::cout << "\t\t -o-" << std::endl;
            return;
        }

        {
            using namespace jvm::methods;

            if (flag & Flags::PUBLIC)       std::cout << "\t\tPublic"             << std::endl;
            if (flag & Flags::PRIVATE)      std::cout << "\t\tPrivate"            << std::endl;
            if (flag & Flags::PROTECTED)    std::cout << "\t\tProtected"          << std::endl;
            if (flag & Flags::STATIC)       std::cout << "\t\tStatic"             << std::endl;
            if (flag & Flags::FINAL)        std::cout << "\t\tFinal"              << std::endl;
            if (flag & Flags::SYNCHRONIZED) std::cout << "\t\tSynchronized"       << std::endl;
            if (flag & Flags::BRIDGE)       std::cout << "\t\tBridge"             << std::endl;
            if (flag & Flags::VARARGS)      std::cout << "\t\tVariable Arguments" << std::endl;
            if (flag & Flags::NATIVE)       std::cout << "\t\tNative"             << std::endl;
            if (flag & Flags::ABSTRACT)     std::cout << "\t\tAbstract"           << std::endl;
            if (flag & Flags::STRICT)       std::cout << "\t\tStrict"             << std::endl;
            if (flag & Flags::SYNTHETIC)    std::cout << "\t\tSynthetic"          << std::endl;
        }
    }

    void MethodInfo::PrintToStream (std::ostream &os, ConstantPool &cp) {
	    os << std::endl;

        PrintFlags(os, access_flags.value.number);

        auto& name = cp[name_index.value.number]->as<CP_Utf8>();
        auto& descriptor = cp[descriptor_index.value.number]->as<CP_Utf8>();

        os << "\tName: " << name << std::endl;
        os << "\tDescriptor: " << descriptor << std::endl;
        os << "\tLength: " << attributes_count.value.number << std::endl;
        os << "\tAttributes: ";

        for (auto& attribute : attributes) {
            attribute.printToStream(os, cp, "\t\t");
        }
    }

    void MethodInfo::Read (Reader &reader) {
        access_flags = reader.getNextHalfWord();
        name_index = reader.getNextHalfWord();
        descriptor_index = reader.getNextHalfWord();
        attributes_count = reader.getNextHalfWord();

        for (int j = 0; j < attributes_count.value.number; ++j) {
            attributes.emplace_back(AttributeInfo(reader));
        }
    }
}
