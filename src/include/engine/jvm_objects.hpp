#pragma once

#include "base.hpp"
#include <class_loader/class_loader.hpp>

namespace jvm {
    class ClassInstance {
        public:
        ClassInstance(ClassLoader &);
        ClassLoader& cl;

    };
}
