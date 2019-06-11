#pragma once

#include "base.hpp"

namespace jvm {
	class JvmException : public std::runtime_error {
	public:
		explicit JvmException(const std::string& s) : std::runtime_error(s) {};
	};
}