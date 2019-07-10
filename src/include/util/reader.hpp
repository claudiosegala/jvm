#pragma once

#include "base.hpp"

namespace jvm {

	/** 
	 *  Manages the process of reading all bytes from a .class file.
	 */
	class Reader {
	private:
		std::ifstream _class;       ///< Stream with the .class file

		std::vector<uint8_t> bytes; ///< Bytes read from file

		int32_t index;              ///< Index in the vector

		/**
		* Check if it is a .class file
		* @return If it has or not CAFEBABE as initial word
		*/
		bool isValid();

	public:

		/**
		* Open a .class file
		* @param  filename The name of the .class we are opening
		* @see isValid()
		*/
		void open(std::string &filename);

		/**
		* Close the .class file
		*/
		void close();

		/**
		* .class file size
		* @return Size of the .class file
		*/
		uint64_t size();

		/**
		* Get the next byte in the file
		* @return The next Byte
		*/
		uint8_t getNextByte();

		/**
		* Get the next half word in the file
		* @return The next Half Word
		*/
		uint16_t getNextHalfWord();

		/**
		* Get the next word in the file
		* @return The next Word
		*/
		uint32_t getNextWord();

		void skipBytes(int n);
	};

	uint8_t  operator<<(uint8_t  &num, Reader &reader);
	uint16_t operator<<(uint16_t &num, Reader &reader);
	uint32_t operator<<(uint32_t &num, Reader &reader);
}
