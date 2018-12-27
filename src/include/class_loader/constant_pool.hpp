#pragma once

#include "base.hpp"
#include "util/reader.hpp"
#include "util/JvmException.hpp"

namespace jvm {

	enum CPTAGS : uint8_t {
		UTF8                 = 1,
		INTEGER	             = 3,
		FLOAT                = 4,
		LONG                 = 5,
		DOUBLE               = 6,
		CLASS                = 7,
		STRING               = 8,
		FIELD_REF            = 9,
		METHOD_REF           = 10,
		INTERFACE_METHOD_REF = 11,
		NAME_AND_TYPE        = 12,
		METHOD_HANDLE        = 15,
		METHOD_TYPE          = 16,
		INVOKE_DYNAMIC       = 18
	};

	class CPEntry;

	class ConstantPool : public std::vector<std::shared_ptr<CPEntry>> {
	public:
	
		/**
		 * Default ConstantPool's constructor
		 */
		ConstantPool();

		/**
		 * ConstantPool's constructor that calls the method fill, reading all of the cp entries
		 * @param reader a reference to the class file reader
		 * @param cp_count number of elements of the constant pool
		 * @see fill()
		 */
		ConstantPool(Reader &reader, size_type cp_count);

		/**
		 * Default ConstantPool's destructor
		 */
		~ConstantPool();

		/**
		 * Fills this ConstantPool with it's entries
		 * @param reader a reference to the class file reader
		 * @param cp_count number of elements of the constant pool
		 */
		void fill(Reader &reader, size_type cp_count);

		/**
		 * Prints this ConstantPool's entries to the console
		 * @param os used to output data
		 */
		void printToStream(std::ostream& os);

		/**
		 * 
		 */
		CPEntry* operator[](size_type index) ;

	private:

		/**
		 * Gets the next entry of the ConstantPool wich must be of the kind of the given tag
		 * @param reader a reference to the class file reader
		 * @param tag an identifyer of the cp_info's kind
		 * @return Pointer to the next CPEntry according to the given tag
		 * @throw Exception when invalid tag's value
		 */
		std::shared_ptr<CPEntry> getNextEntry(Reader &reader, uint8_t tag);
	};

	/**
	 * Converts entry to CPUtf8 and prints it to os.
	 * Throws exception if entry is not CPUtf8
	 */
	std::ostream& operator<< (std::ostream& os, CPEntry& entry);

	struct CPEntry {
		const CPTAGS tag;

		virtual ~CPEntry();

		virtual void printToStream(std::ostream &os, jvm::ConstantPool &cp) = 0;

		virtual std::string toString(ConstantPool &cp) = 0;

		template<class T> T& as() {
		auto toReturn = dynamic_cast<T*>(this);
		if (toReturn == nullptr) {
			throw JvmException("Invalid CPEntry cast");
		}

		return *toReturn;
	}

	protected:
		CPEntry(CPTAGS _tag);
	};

	#define INNER_CONST_POOL_CLASS(name)\
	explicit name (Reader& reader);\
	void printToStream(std::ostream& os, ConstantPool& cp) override;\
	std::string toString(ConstantPool& cp) override;

	/**
	 * CPClass entry to the constant pool
	 */
	struct CPClass final : public CPEntry {
		uint16_t name_index;
		
		INNER_CONST_POOL_CLASS(CPClass)
	};

	/**
	 * CPFieldRef entry to the constant pool
	 */
	struct CPFieldRef final : public CPEntry {
		uint16_t class_index;
		uint16_t name_and_type_index;

		INNER_CONST_POOL_CLASS(CPFieldRef)
	};

	/**
	 * CPMethodRef entry to the constant pool
	 */
	struct CPMethodRef final : public CPEntry {
		uint16_t class_index;
		uint16_t name_and_type_index;

		INNER_CONST_POOL_CLASS(CPMethodRef)
	};

	/**
	 * CPInterfaceMethodRef entry to the constant pool
	 */
	struct CPInterfaceMethodRef final : public CPEntry {
		uint16_t class_index;
		uint16_t name_and_class_index;

		INNER_CONST_POOL_CLASS(CPInterfaceMethodRef)
	};

	/**
	 * CPString entry to the constant pool
	 */
	struct CPString final : public CPEntry {
		uint16_t string_index;

		INNER_CONST_POOL_CLASS(CPString)
	};

	/**
	 * CPInteger entry to the constant pool
	 */
	struct CPInteger final : public CPEntry {
		uint32_t _bytes;

		INNER_CONST_POOL_CLASS(CPInteger)
	};

	/**
	 * CPFloat entry to the constant pool
	 */
	struct CPFloat final : public CPEntry {
		uint32_t _bytes;

		INNER_CONST_POOL_CLASS(CPFloat)
	};

	/**
	 * CPLong entry to the constant pool
	 */
	struct CPLong final : public CPEntry {
		uint32_t high_bytes;
		uint32_t low_bytes;

		INNER_CONST_POOL_CLASS(CPLong)
	};

	/**
	 * CPDouble entry to the constant pool
	 */
	struct CPDouble final : public CPEntry {
		uint32_t high_bytes;
		uint32_t low_bytes;
		
		INNER_CONST_POOL_CLASS(CPDouble)
	};

	/**
	 * CPNameAndType entry to the constant pool
	 */
	struct CPNameAndType final : public CPEntry {
		uint16_t name_index;
		uint16_t descriptor_index;

		INNER_CONST_POOL_CLASS(CPNameAndType)
	};

	/**
	 * CPUtf8 entry to the constant pool
	 */
	struct CPUtf8 final : public CPEntry {
		uint16_t _length;
		uint8_t *_bytes;

		INNER_CONST_POOL_CLASS(CPUtf8)

		std::string toString() ;
		~CPUtf8() override;
	};

	std::ostream& operator<< (std::ostream&, CPUtf8&);
	bool operator== (std::string&, CPUtf8&);
	bool operator== (CPUtf8&, std::string&);

	/**
	 * CPMethodHandle entry to the constant pool
	 */
	struct CPMethodHandle final : public CPEntry {
		uint8_t reference_kind;
		uint16_t reference_index;

		INNER_CONST_POOL_CLASS(CPMethodHandle)
	};

	/**
	 * CPMethodType entry to the constant pool
	 */
	struct CPMethodType final : public CPEntry {
		uint16_t descriptor_index;

		INNER_CONST_POOL_CLASS(CPMethodType)
	};

	/**
	 * CPInvokeDYnamic entry to the constant pool
	 */
	struct CPInvokeDynamic final : public CPEntry {
		uint16_t bootstrap_method_attr_index;
		uint16_t name_and_type_index;

		INNER_CONST_POOL_CLASS(CPInvokeDynamic)
	};

}
