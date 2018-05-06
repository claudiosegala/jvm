#pragma once

#include <fstream>
#include "bit.hpp"

namespace jvm {

	class ByteCodeReader {
	private:

		//< stream with the .class file
		std::ifstream _class;

		/**
		* @brief  Check if it is a .class file
		* @retval TRUE Has CAFEBABE as initial word in the file
		* @retval FALSE Has not CAFEBABE as initial word in the file
		*/
		bool isValid();

	public:

		/**
		* @brief  Open a .class file
		* @param  filename The name of the .class we are opening
		*/
		void open(std::string filename);

		/**
		* @brief  Get the next byte in the file
		* @retval The next Byte
		*/
		jvm::Byte getNextByte();

		/**
		* @brief  Get the next half word in the file
		* @retval The next Half Word
		*/
		jvm::HalfWord getNextHalfWord();

		/**
		* @brief  Get the next word in the file
		* @retval The next Word
		*/
		jvm::Word getNextWord();

		/**
		* @brief  Close the .class file
		*/
		void close();
	};

}
