#include <iostream>
#include <fstream>
#include <bit.hpp>
#include <vector>
#include "reader.hpp"

#define MAGIC_NUMBER 0xCAFEBABE

namespace jvm {

	uint64_t jvm::Reader::size() {
		_class.seekg(0, _class.end);
		auto len = _class.tellg();
		_class.seekg(0, _class.beg);
		return len;
	}

	bool jvm::Reader::isValid() {
		auto init = Word();
		auto firstWord = getNextWord();

		init = MAGIC_NUMBER;
		
		return (firstWord == init);
	}

	void jvm::Reader::open(std::string &filename) {
		index = 0;

		_class.open(filename, std::ios::binary);

		if (not _class.is_open()) {
			throw "Couldn't open file";
		}

		// reserve in memory the space needed for the file
		bytes.resize(size());

		// read the file to memory
		for (auto i = 0; !_class.eof(); i++) {
			_class.read((char*) &bytes[i], 1);
		}

		if (not isValid()) {
			throw "This file isn't a valid .class file";
		}
	}

	jvm::Byte jvm::Reader::getNextByte() {
		auto b = Byte();

		b = bytes[index++];

		return b;
	}

	jvm::HalfWord jvm::Reader::getNextHalfWord() {
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

	jvm::Word jvm::Reader::getNextWord() {
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

	void jvm::Reader::close() {
		_class.close();
	}
}