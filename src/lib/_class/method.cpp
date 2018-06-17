#include <iostream>
#include <iomanip>
#include <util/bit.hpp>
#include "util/reader.hpp"
#include "_class/method.hpp"
#include "_class/attribute.hpp"

namespace jvm  {

    MethodInfo::MethodInfo(Reader &reader, ConstantPool &cp) {
        Read(reader, cp);
    }

    void MethodInfo::PrintFlags (std::ostream &os, uint32_t flag) {
        std::cout << "\t\tFlags:" << std::endl;

        if (flag == 0) {
            std::cout << "\t\t\t -o-" << std::endl;
            return;
        }

        {
            using namespace jvm::methods;

            if (flag & Flags::PUBLIC)       std::cout << "\t\t\tPublic"             << std::endl;
            if (flag & Flags::PRIVATE)      std::cout << "\t\t\tPrivate"            << std::endl;
            if (flag & Flags::PROTECTED)    std::cout << "\t\t\tProtected"          << std::endl;
            if (flag & Flags::STATIC)       std::cout << "\t\t\tStatic"             << std::endl;
            if (flag & Flags::FINAL)        std::cout << "\t\t\tFinal"              << std::endl;
            if (flag & Flags::SYNCHRONIZED) std::cout << "\t\t\tSynchronized"       << std::endl;
            if (flag & Flags::BRIDGE)       std::cout << "\t\t\tBridge"             << std::endl;
            if (flag & Flags::VARARGS)      std::cout << "\t\t\tVariable Arguments" << std::endl;
            if (flag & Flags::NATIVE)       std::cout << "\t\t\tNative"             << std::endl;
            if (flag & Flags::ABSTRACT)     std::cout << "\t\t\tAbstract"           << std::endl;
            if (flag & Flags::STRICT)       std::cout << "\t\t\tStrict"             << std::endl;
            if (flag & Flags::SYNTHETIC)    std::cout << "\t\t\tSynthetic"          << std::endl;
        }
    }

    void MethodInfo::PrintToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) {
        auto& name = cp[name_index]->as<CP_Utf8>();
        auto& descriptor = cp[descriptor_index]->as<CP_Utf8>();

        os << name << " (" << name_index << ")" << std::endl;
        os << "\t\tDescriptor: " << descriptor << " (" << descriptor_index << ")" << std::endl;

        PrintFlags(os, access_flags);

        attributes.printToStream(os, cp, "\t\t");
    }

    void MethodInfo::Read(Reader &reader, ConstantPool &cp) {
        access_flags = reader.getNextHalfWord();
        name_index = reader.getNextHalfWord();
        descriptor_index = reader.getNextHalfWord();
        attributes.fill(reader, cp);
    }
}
