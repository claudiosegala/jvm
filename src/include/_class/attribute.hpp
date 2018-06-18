#pragma once
#include <cstdint>
#include <vector>
#include <map>
#include <memory>
#include "util/bit.hpp"
#include "constant_pool.hpp"
#include "util/macros.hpp"

namespace jvm {

	class Attr_Entry;

	// This maps a string to a function that returns an instance of the corresponding attribute
	typedef std::map<std::string, std::shared_ptr<Attr_Entry>(*)(Reader&, ConstantPool&)> AttributeMap;

	class AttributeInfo : public std::vector<std::shared_ptr<Attr_Entry>> {
	public:
		void fill(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix);
	};

	class Attr_Entry {
	protected:
		Attr_Entry() = default;
	public:
		template<class T>
		static std::shared_ptr<Attr_Entry> Instantiate(Reader &reader, ConstantPool &cp) {
			return std::make_shared<T>(reader, cp);
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

		Attr_Code(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, const std::string &prefix) override;
	};

	struct Attr_ConstantValue : public Attr_Entry {
		u2 constantvalue_index;
		Attr_ConstantValue(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, const std::string &prefix) override;
	};

	struct Attr_Exceptions : public Attr_Entry {
		std::vector<u2> exception_index_table;
		Attr_Exceptions(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &os, ConstantPool &pool, const std::string &prefix) override;
	};
}
