#include "util/reader.hpp"
#include "util/JvmException.hpp"

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

	void Reader::open(const std::string &filename) {
		index = 0;

		_class.open(filename, std::ios::binary);

		if (!_class.is_open()) {
			throw JvmException("Couldn't open file");
		}

		// reserve in memory the space needed for the file
		bytes.resize(size());

		// read the file to memory
		for (auto i = 0; !_class.eof(); i++) {
			_class.read((char*) &bytes[i], 1);
		}

		if (!isValid()) {
			throw JvmException("This file isn't a valid .class file");
		}
	}

	uint8_t Reader::getNextByte() {
		return bytes[index++];
	}

	uint16_t Reader::getNextHalfWord() {
		uint16_t result = 0;
		for (auto i = 0; i < 2; i++) {
			int32_t byte = bytes[index++];
			byte <<= (BYTESIZE * (2 - 1 - i));
			result |= byte;
		}

		return result;
	}

	uint32_t Reader::getNextWord() {
		uint32_t result = 0;
		for (auto i = 0; i < 4; i++) {
			int32_t byte = bytes[index++];
			byte <<= (BYTESIZE * (4 - 1 - i));
			result |= byte;
		}

		return result;
	}

	void Reader::close() {
		_class.close();
	}

	void Reader::skipBytes(int n) {
		_class.seekg(n, std::ifstream::cur);
		index += n;
	}
}