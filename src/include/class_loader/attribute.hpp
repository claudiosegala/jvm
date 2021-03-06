#pragma once

#include "constant_pool.hpp"
#include "code_info.hpp"

namespace jvm {

	class AttrEntry;
	struct AttrCode;
	struct AttrConstantValue;
	struct AttrExceptions;
	struct AttrSourceFile;
	struct AttrLineNumberTable;
	struct AttrLocalVariableTable;
	struct AttrBootstrapMethods;
	struct AttrLocalVariableTypeTable;
	struct AttrDeprecated;
	struct AttrInnerClasses;
	struct AttrSynthetic;
	/**
	 * Maps a string to a function that returns an instance of the corresponding attribute
	 */
	typedef std::map<std::string, std::shared_ptr<AttrEntry>(*)(Reader&, ConstantPool&)> AttributeMap;

	/**
	 *  Stores information about a JVM attribute.
	 */
	class AttributeInfo : public std::vector<std::shared_ptr<AttrEntry>> {
	public:

		std::vector<std::shared_ptr<AttrCode>> Codes;	///< Vector of the attribute code
		std::vector<std::shared_ptr<AttrConstantValue>> ConstValues; ///< Vector of the constant values
		std::vector<std::shared_ptr<AttrExceptions>> Exceptions; ///< Vector of the exceptions
		std::vector<std::shared_ptr<AttrSourceFile>> SourceFile; ///< Vector of the SourceFile (only 1)
		std::vector<std::shared_ptr<AttrLineNumberTable>> LineNumberTable; ///< Vector of the LineNumberTable
		std::vector<std::shared_ptr<AttrLocalVariableTable>> LocalVariableTable;// < Vector of LocalVariables
		std::vector<std::shared_ptr<AttrBootstrapMethods>> BootstrapMethods; ///< Vector of the BootstrapMethods
		std::vector<std::shared_ptr<AttrLocalVariableTypeTable>> LocalVariableTypeTable;
		std::vector<std::shared_ptr<AttrDeprecated>> Deprecated;
		std::vector<std::shared_ptr<AttrInnerClasses>> InClasses;
		std::vector<std::shared_ptr<AttrSynthetic>> Synt;
		/**
		 * Fills this attribute entry's members
		 * @param reader a reference to the class file reader
		 * @param cp_count number of elements of the constant pool
		 */
		void fill(Reader &reader, ConstantPool &cp);

		/**
		 * Prints this ConstantPool's entries to the console
		 * @param os Reference to ostream
		 */
		void printToStream(std::ostream &os, ConstantPool &cp, const std::string &prefix);
	};

	class AttrEntry {
	protected:

		/**
		 * Default constructor
		 */
		AttrEntry() = default;

	public:

		template<class T>
		static std::shared_ptr<AttrEntry> instantiate(Reader &reader, ConstantPool &cp) {
			return std::make_shared<T>(reader, cp);
		}

		/**
		 * Default destructor
		 */
		virtual ~AttrEntry() = default;

		/**
		 * Prints this attribute entry to the console
		 * @param os used to output data
		 * @param cp a reference to the constant pool
		 * @param prefix a reference to a string to be printed before the attribute
		 */
		virtual void printToStream(std::ostream &os, ConstantPool &cp, std::string &prefix) = 0;

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
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};

	struct AttrConstantValue : public AttrEntry {
		u2 constantvalue_index;
		AttrConstantValue(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};

	struct AttrExceptions : public AttrEntry {
		std::vector<u2> exception_index_table;
		AttrExceptions(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &os, ConstantPool &pool, std::string &prefix) override;
	};

	struct AttrSourceFile : public AttrEntry {
		u2 sourcefile_index;
		AttrSourceFile(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};

	struct AttrLineNumberTable : public AttrEntry {
		u2 line_number_table_length;
		typedef struct {
			u2 start_pc;
			u2 line_number;
		} line_number_table_entry;

		std::vector<line_number_table_entry> line_number_table;

		AttrLineNumberTable(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};

	struct AttrLocalVariableTable : public AttrEntry {
    u2 local_variable_table_length;
    typedef struct {
				u2 start_pc;
        u2 length;
        u2 name_index;
        u2 descriptor_index;
        u2 index;
    } local_variable_table_entry;

		std::vector<local_variable_table_entry> local_variable_table;

		AttrLocalVariableTable(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};

	struct AttrBootstrapMethods : public AttrEntry {
			u2 num_bootstrap_methods;
			typedef struct {
					u2 bootstrap_method_ref;
					u2 num_bootstrap_arguments;
					std::vector<u2> bootstrap_arguments;
			} bootstrap_methods_entry;

			std::vector<bootstrap_methods_entry> bootstrap_methods;
			AttrBootstrapMethods(Reader &reader, ConstantPool &cp);
			void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};
	struct AttrLocalVariableTypeTable : public AttrEntry {
		u2 local_variable_type_table_length;
		typedef struct {
			u2 start_pc;
	        u2 length;
	        u2 name_index;
	        u2 signature_index;
	        u2 index;
		} local_variable_type_table_entry;

		std::vector<local_variable_type_table_entry> local_variable_type_table;

		AttrLocalVariableTypeTable(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};

	struct AttrDeprecated : public AttrEntry {
    	//não mostra nada
		//u4 deprecated_length;
		AttrDeprecated(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};

	struct AttrInnerClasses : public AttrEntry {
		u2 number_of_classes;
		typedef struct{
			u2 inner_class_info_index;
        	u2 outer_class_info_index;
        	u2 inner_name_index;
        	u2 inner_class_access_flags;
		} inner_classes_entry;

		std::vector<inner_classes_entry> inner_classes;

		AttrInnerClasses(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};


	struct AttrSynthetic : public AttrEntry {
		AttrSynthetic(Reader &reader, ConstantPool &cp);
		void printToStream(std::ostream &ostream, ConstantPool &pool, std::string &prefix) override;
	};

}
