#include <iostream>
#include "reader.hpp"
#include "method.hpp"
#include "attribute.hpp"

namespace jvm  {

    MethodInfo::MethodInfo(Reader &reader) {
        Read(reader);
    }

    void MethodInfo::printToStream(std::ostream &os, ConstantPool &cp) {
        os << "\tAccess flags: " << access_flags.value.number << std::endl;
        os << "\tName index: " << name_index.value.number << std::endl;
        os << "\tDescriptor index: " << descriptor_index.value.number << std::endl;
        os << "\tAttributes_count: " << attributes_count.value.number << std::endl;
    }

    void MethodInfo::Read(Reader &reader) {
        access_flags = reader.getNextHalfWord();
        name_index = reader.getNextHalfWord();
        descriptor_index = reader.getNextHalfWord();
        attributes_count = reader.getNextHalfWord();
    }
}
