#pragma once

#include <cstdint>
#include "util/bit.hpp"
#include <vector>
#include "_class/constant_pool.hpp"
#include "_class/attribute.hpp"
#include "_class/_class.hpp"
#include "vm/frame.hpp"

namespace jvm {

	/**
	 * Single Threaded Virtual Machine
	 */
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

		//> Frame Stack
		std::vector<Frame> frame;
	};

}
