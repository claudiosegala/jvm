#include <iostream>
#include "reader.hpp"
#include "method.hpp"
#include "attribute.hpp"
namespace jvm
{
MethodInfo::MethodInfo(jvm::Reader &reader)
{
    Read(reader);
}

void MethodInfo::printToStream(std::ostream &os, ConstantPool &cp)
{

    os << "\tAccess flags: " << access_flags.value.number << std::endl;
    os << "\tName index: " << name_index.value.number << std::endl;
    os << "\tDescriptor index: " << descriptor_index.value.number << std::endl;
    os << "\tAttributes_count: " << attributes_count.value.number << std::endl;
}

void Methodinfo::Read(Reader &reader)
{
    access_flags = reader.getNextHalfWord();
    name_index = reader.getNextHalfWord();
    descriptor_index = reader.getNextHalfWord();
    attributes_count = reader.getNextHalfword();
    
}
}
AttributeInfo::AttributeInfo(Reader &reader)
{
    Read(reader);
}

void AttributeInfo::printToStream(std::ostream &os, ConstantPool &cp)
{
    char buffer[5];
    auto name = cp[name_index.value.number];
    auto &characters = name->as<CP_Utf8>();

    os << "\tAttribute: " << characters << std::endl;
    os << "\tLength: " << length.value.number << std::endl;
    os << "\tBytes:  ";

    for (auto &byte : info)
    {
        sprintf(buffer, "%.2X ", byte);
        os << buffer;
    }

    os << std::endl
       << std::endl;
}

void AttributeInfo::Read(Reader &reader)
{
    name_index = reader.getNextHalfWord();
    length = reader.getNextWord();

    for (int i = 0; i < length.value.number; ++i)
    {
        info.push_back(reader.getNextByte().value.number);
    }
}
}
