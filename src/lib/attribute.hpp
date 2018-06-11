#pragma once
#include <cstdint>
#include <vector>
#include <map>
#include "bit.hpp"
#include "constant_pool.hpp"
#include "macros.hpp"

namespace jvm {

	class Attr_Entry;

	// This maps a string to a function that returns an instance of the corresponding attribute
	typedef std::map<std::string, Attr_Entry*(*)(Reader&, ConstantPool&)> AttributeMap;

	class AttributeInfo : public std::vector<Attr_Entry*> {
	public:
		void fill(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix);
		~AttributeInfo();
	};

	class Attr_Entry {
	protected:
		Attr_Entry() = default;
	public:
		template<class T>
		static Attr_Entry* Instantiate(Reader &reader, ConstantPool &cp) {
			return new T(reader, cp);
		}

		virtual ~Attr_Entry() = default;

		virtual void printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) = 0;

	};

	struct Attr_Code : public Attr_Entry {
		typedef struct {
			u2 start_pc;
			u2 end_pc;
			u2 handler_pc;
			u2 catch_type;
		} exception_table_entry;

		u2 max_stack;
		u2 max_locals;
		std::vector<u1> code;
		std::vector<exception_table_entry> exception_table;
		AttributeInfo attributes;

		explicit Attr_Code(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, const std::string &prefix) override;
	};

}
