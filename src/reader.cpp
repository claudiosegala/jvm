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
		auto init = Word(MAGIC_NUMBER);
		auto firstWord = getNextWord();
		
		return (firstWord == init);
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

	Byte Reader::getNextByte() {
		auto b = Byte();

		b = bytes[index++];

		return b;
	}

	HalfWord Reader::getNextHalfWord() {
		auto hw = HalfWord();

		auto aux = 0;
		for (auto i = 0; i < 2; i++) {
			int32_t byte = bytes[index + i];
			byte <<= (BYTESIZE * (1 - i));
			aux |= byte;
		}

		hw = aux;
		index += 2;

		return hw;
	}

	Word Reader::getNextWord() {
		auto w = Word();

		auto aux = 0;
		for (auto i = 0; i < 4; i++) {
			int32_t byte = bytes[index + i];
			byte <<= (BYTESIZE * (3 - i));
			aux |= byte;
		}

		w = aux;
		index += 4;

		return w;
	}

	void Reader::close() {
		_class.close();
	}
}