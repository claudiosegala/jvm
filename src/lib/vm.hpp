#pragma once

#include <cstdint>
#include <vector>
#include <string>
#include "bit.hpp"
#include "attribute.hpp"
#include "constant_pool.hpp"
#include "_class.hpp"

namespace jvm {

	class VM {
	public:
		/**
		* Constructor
		*/
		VM() = default;

		/**
		* Load .class.
		* @param cl an .class structure.
		* @see getCode()
		* @return The test results
		*/
		void classLoader (_Class);

		/**
		* Engine Execution.
		* @see execute()
		* @return The test results
		*/
		void run ();

	private:
		//> PC Register
		uint64_t PC;
	};

}