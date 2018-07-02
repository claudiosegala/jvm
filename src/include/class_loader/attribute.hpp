#pragma once

#include "constant_pool.hpp"
#include "code_info.hpp"

namespace jvm {

	class AttrEntry;
	struct AttrCode;
	struct AttrConstantValue;
	struct AttrExceptions;

	// This maps a string to a function that returns an instance of the corresponding attribute
	typedef std::map<std::string, std::shared_ptr<AttrEntry>(*)(Reader&, ConstantPool&)> AttributeMap;

	class AttributeInfo : public std::vector<std::shared_ptr<AttrEntry>> {
	public:
		std::vector<AttrCode>code;
		std::vector<AttrConstantValue>ConstValues;
		std::vector<AttrExceptions>Exceptions;
		void fill(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix);
	};

	class AttrEntry {
	protected:
		AttrEntry() = default;
	public:
		template<class T>
		static std::shared_ptr<AttrEntry> instantiate(Reader &reader, ConstantPool &cp) {
			return std::make_shared<T>(reader, cp);
		}

		virtual ~AttrEntry() = default;

		virtual void printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix) = 0;

	};

	struct AttrCode : public AttrEntry {
		typedef struct {
			u2 start_pc;
			u2 end_pc;
			u2 handler_pc;
			u2 catch_type;
		} exception_table_entry;

		u2 max_stack;
		u2 max_locals;
		std::vector<u1> code_bytes;
		CodeInfo code;
		std::vector<exception_table_entry> exception_table;
		AttributeInfo attributes;

		AttrCode(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, const std::string &prefix) override;
	};

	struct AttrConstantValue : public AttrEntry {
		u2 constantvalue_index;
		AttrConstantValue(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, const std::string &prefix) override;
	};

	struct AttrExceptions : public AttrEntry {
		std::vector<u2> exception_index_table;
		AttrExceptions(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &os, ConstantPool &pool, const std::string &prefix) override;
	};
}
