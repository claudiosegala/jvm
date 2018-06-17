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
		VM();

		/**
		* Engine Execution.
		* @see execute()
		* @return The test results
		*/
		void run (std::vector<_Class>&);

	private:
		//> PC Register
		uint64_t PC;

		//> Frame Stack
		std::vector<Frame> frames;

		//> Method Area
		// TODO: understand

		void runMethod(_Class&);
	};

}