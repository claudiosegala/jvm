#pragma once

#include "base.hpp"
#include "util/reader.hpp"
#include "util/JvmException.hpp"

namespace jvm {

	enum CP_TAGS : uint8_t {
		Class              = 7,
		FieldRef           = 9,
		MethodRef          = 10,
		InterfaceMethodRef = 11,
		String             = 8,
		Integer	           = 3,
		Float              = 4,
		Long               = 5,
		Double             = 6,
		NameAndType        = 12,
		Utf8               = 1,
		MethodHandle       = 15,
		MethodType         = 16,
		InvokeDynamic      = 18
	};

	class CP_Entry;

	class ConstantPool : public std::vector<std::shared_ptr<CP_Entry>> {
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
		CP_Entry* operator[](size_type index) ;

		bool shouldDebug = false;

	private:

		/**
		 * Gets the next entry of the ConstantPool wich must be of the kind of the given tag
		 * @param reader a reference to the class file reader
		 * @param tag an identifyer of the cp_info's kind
		 * @return Pointer to the next CP_Entry according to the given tag
		 * @throw Exception when invalid tag's value
		 */
		std::shared_ptr<CP_Entry> getNextEntry(Reader &reader, uint8_t tag);
	};

	/**
	 * Converts entry to CP_Utf8 and prints it to os.
	 * Throws exception if entry is not CP_Utf8
	 */
	std::ostream& operator<< (std::ostream& os, CP_Entry& entry);

	class CP_Entry {
	public:
		virtual ~CP_Entry() = default;

		virtual CP_TAGS getTag() = 0;

		virtual void printToStream(std::ostream &os, jvm::ConstantPool &cp) = 0;

		virtual std::string toString(ConstantPool &cp) = 0;

		template<class T> T& as() {
			auto toReturn = dynamic_cast<T*>(this);
			if (toReturn == nullptr) {
				throw JvmException("Invalid CP_Entry cast");
			}

			return *toReturn;
		}
	};

	/**
	 * CP_Class entry to the constant pool
	 */
	struct CP_Class final : public CP_Entry {
		explicit CP_Class(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint16_t name_index;
	};

	/**
	 * CP_Fieldref entry to the constant pool
	 */
	struct CP_Fieldref final : public CP_Entry {
		explicit CP_Fieldref(Reader& reader);

		~CP_Fieldref() override = default;

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint16_t class_index;

		uint16_t name_and_type_index;
	};

	/**
	 * CP_Methodref entry to the constant pool
	 */
	struct CP_Methodref final : public CP_Entry {
		explicit CP_Methodref(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint16_t class_index;

		uint16_t name_and_type_index;
	};

	/**
	 * CP_InterfaceMethodref entry to the constant pool
	 */
	struct CP_InterfaceMethodref final : public CP_Entry {
		explicit CP_InterfaceMethodref(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint16_t class_index;

		uint16_t name_and_type_index;
	};

	/**
	 * CP_String entry to the constant pool
	 */
	struct CP_String final : public CP_Entry {
		explicit CP_String(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint16_t string_index;
	};

	/**
	 * CP_Integer entry to the constant pool
	 */
	struct CP_Integer final : public CP_Entry {
		explicit CP_Integer(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint32_t _bytes;
	};

	/**
	 * CP_Float entry to the constant pool
	 */
	struct CP_Float final : public CP_Entry {
		explicit CP_Float(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint32_t _bytes;
	};

	/**
	 * CP_Long entry to the constant pool
	 */
	struct CP_Long final : public CP_Entry {
		explicit CP_Long(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint32_t high_bytes;

		uint32_t low_bytes;
	};

	/**
	 * CP_Double entry to the constant pool
	 */
	struct CP_Double final : public CP_Entry {
		explicit CP_Double(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint32_t high_bytes;

		uint32_t low_bytes;
	};

	/**
	 * CP_NameAnsType entry to the constant pool
	 */
	struct CP_NameAndType final : public CP_Entry {
		explicit CP_NameAndType(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint16_t name_index;

		uint16_t descriptor_index;
	};

	/**
	 * CP_Utf8 entry to the constant pool
	 */
	struct CP_Utf8 final : public CP_Entry {
		explicit CP_Utf8(Reader& reader);

		~CP_Utf8() override;

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString() ;

		std::string toString(ConstantPool &cp) override;

		uint16_t _length;

		uint8_t *_bytes;
	};

	std::ostream& operator<< (std::ostream&, CP_Utf8&);
	bool operator== (std::string&, CP_Utf8&);
	bool operator== (CP_Utf8&, std::string&);

	/**
	 * CP_MethodHandle entry to the constant pool
	 */
	struct CP_MethodHandle final : public CP_Entry {
		explicit CP_MethodHandle(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		std::string get_ref(ConstantPool &cp);

		uint8_t reference_kind;

		uint16_t reference_index;
	};

	/**
	 * CP_MethodType entry to the constant pool
	 */
	struct CP_MethodType final : public CP_Entry {
		explicit CP_MethodType(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint16_t descriptor_index;
	};

	/**
	 * CP_InvokeDYnamic entry to the constant pool
	 */
	struct CP_InvokeDynamic final : public CP_Entry {
		explicit CP_InvokeDynamic(Reader& reader);

		CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(ConstantPool &cp) override;

		uint16_t bootstrap_method_attr_index;

		uint16_t name_and_type_index;
	};

}
