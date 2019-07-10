#pragma once

#include "base.hpp"

namespace jvm {

	/** 
	 *  JVM Exception handler that will manage runtime errors.
	 */
	class JvmException : public std::runtime_error {
	public:
		explicit JvmException(const std::string& s) : std::runtime_error(s) {};
	};
}