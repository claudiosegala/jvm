#pragma once

#include "code.hpp"
#include <unordered_map>
#include <class_loader/class_loader.hpp>

namespace jvm {

	/**
	 * Class that run a single thread virtual machine
	 */
	class Engine {
	public:
		/**
		 * Constructor
		 * @params address to the main .classes
		 */
		Engine(ClassLoader&);

		/**
		 * Engine Execution.
		 * @see execute()
		 */
		void execute();

	private:
		//> Reference to .class that will be executed first
		std::unordered_map<std::string, ClassLoader> JavaClasses;

		//> PC Register
		uint64_t PC;

		//> Frame Stack
		FramesStack fs;

		//> Method Area
		// TODO: understand

		/**
		 * Run the clinit method
		 */
		void run_clinit();

		/**
		 * Run the init method
		 */
		void run_init();

		MethodInfo& findMethod(CP_Methodref& ref);

		ClassLoader& findClass(CP_Class& classInfo);
	};

}