#pragma once

#include <stdexcept>

namespace jvm {
	class JvmException : public std::runtime_error {
	public:
		explicit JvmException(const std::string& s) : std::runtime_error(s) {};
	};
}