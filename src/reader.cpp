#include <iostream>
#include <fstream>
#include <bit.hpp>
#include <vector>
#include "macros.hpp"
#include "reader.hpp"

namespace jvm {

	uint64_t Reader::size() {
		_class.seekg(0, _class.end);
		auto len = _class.tellg();
		_class.seekg(0, _class.beg);
		return len;
	}

	bool Reader::isValid() {
		auto firstWord = getNextWord();
		return (firstWord == MAGIC_NUMBER);
	}

	void Reader::open(std::string &filename) {
		index = 0;

		_class.open(filename, std::ios::binary);

		if (!_class.is_open()) {
			throw "Couldn't open file";
		}

		// reserve in memory the space needed for the file
		bytes.resize(size());

		// read the file to memory
		for (auto i = 0; !_class.eof(); i++) {
			_class.read((char*) &bytes[i], 1);
		}

		if (!isValid()) {
			throw "This file isn't a valid .class file";
		}
	}

	uint8_t Reader::getNextByte() {
		return bytes[index++];
	}

	uint16_t Reader::getNextHalfWord() {
		uint16_t result = 0;
		for (auto i = 0; i < 2; i++) {
			int32_t byte = bytes[index + i];
			byte <<= (BYTESIZE * (1 - i));
			result |= byte;
		}

		index += 2;

		return result;
	}

	uint32_t Reader::getNextWord() {
		uint32_t result = 0;
		for (auto i = 0; i < 4; i++) {
			int32_t byte = bytes[index + i];
			byte <<= (BYTESIZE * (3 - i));
			result |= byte;
		}

		index += 4;

		return result;
	}

	void Reader::close() {
		_class.close();
	}
}