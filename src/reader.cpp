#include <iostream>
#include <fstream>
#include <bit.hpp>
#include <vector>
#include "reader.hpp"

#define MAGIC_NUMBER 0xCAFEBABE

namespace jvm {

	uint64_t jvm::ByteCodeReader::size() {
		_class.seekg(0, _class.end);
		auto len = _class.tellg();
		_class.seekg(0, _class.end);
		return len;
	}

	bool jvm::ByteCodeReader::isValid() {
		auto init = Word();
		auto firstWord = getNextWord();

		init = MAGIC_NUMBER;
		
		return (firstWord == init);
	}

	void jvm::ByteCodeReader::open(std::string filename) {
		index = 0;

		_class.open(filename, std::ios::binary);

		if (not _class.is_open()) {
			throw std::exception();
		}

		// reserve in memory the space needed for the file
		bytes.resize(size());

		// read the file to memory
		for (auto i = 0; !_class.eof(); i++) {
			_class.read((char*) &bytes[i], 1);
		}
	}

	jvm::Byte jvm::ByteCodeReader::getNextByte() {
		auto byte = Byte();
		byte = bytes[index];
		return byte;
	}
//
//	jvm::HalfWord jvm::ByteCodeReader::getNextHalfWord() {
//		return nullptr;
//	}
//
	jvm::Word jvm::ByteCodeReader::getNextWord() {
		return bytes[];
	}

	void jvm::ByteCodeReader::close() {
		_class.close();
	}
}