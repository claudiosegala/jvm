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
		 * @param reader Reader of the class file
		 * @param cp_count Number of elements of the constant pool
		 */
		ConstantPool(Reader &reader, size_type cp_count);

		/**
		 * Default ConstantPool's destructor
		 */
		~ConstantPool();

		/**
		 * Fills this ConstantPool with it's entries
		 * @param reader Reader of the class file
		 * @param cp_count Number of elements of the constant pool
		 */
		void fill(Reader &reader, size_type cp_count);

		/**
		 * Prints this ConstantPool's entries to the console
		 * @param os Reference to ostream
		 */
		void printToStream(std::ostream& os);

		/**
		 * 
		 */
		CP_Entry* operator[](size_type index) const;

	private:

		/**
		 * Gets the next entry of the ConstantPool, ad it must be of the kind of the given tag
		 * @param reader A reference to the Reader of the class file
		 * @param tag An identifyer of the cp_info's kind
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

		inline virtual CP_TAGS getTag() = 0;

		virtual void printToStream(std::ostream &os, jvm::ConstantPool &cp) = 0;

		virtual std::string toString(const ConstantPool &cp) const = 0;

		template<class T> T& as() {
			auto toReturn = dynamic_cast<T*>(this);
			if (toReturn == nullptr) {
				throw JvmException("Invalid CP_Entry cast");
			}

			return *toReturn;
		}
	};

	struct CP_Class : public CP_Entry {
		explicit CP_Class(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t name_index;
	};

	struct CP_Fieldref : public CP_Entry {
		explicit CP_Fieldref(Reader& reader);

		~CP_Fieldref() override = default;

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t class_index;

		uint16_t name_and_type_index;
	};

	struct CP_Methodref : public CP_Entry {
		explicit CP_Methodref(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t class_index;

		uint16_t name_and_type_index;
	};

	struct CP_InterfaceMethodref : public CP_Entry {
		explicit CP_InterfaceMethodref(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t class_index;

		uint16_t name_and_class_index;
	};

	struct CP_String : public CP_Entry {
		explicit CP_String(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t string_index;
	};

	struct CP_Integer : public CP_Entry {
		explicit CP_Integer(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint32_t _bytes;
	};

	struct CP_Float : public CP_Entry {
		explicit CP_Float(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint32_t _bytes;
	};

	struct CP_Long : public CP_Entry {
		explicit CP_Long(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint32_t high_bytes;

		uint32_t low_bytes;
	};

	struct CP_Double : public CP_Entry {
		explicit CP_Double(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint32_t high_bytes;

		uint32_t low_bytes;
	};

	struct CP_NameAndType : public CP_Entry {
		explicit CP_NameAndType(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t name_index;

		uint16_t descriptor_index;
	};

	struct CP_Utf8 : public CP_Entry {
		explicit CP_Utf8(Reader& reader);

		~CP_Utf8() override;

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString() const;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t _length;

		uint8_t *_bytes;
	};

	std::ostream& operator<< (std::ostream&, const CP_Utf8&);
	bool operator== (const std::string&, const CP_Utf8&);
	bool operator== (const CP_Utf8&, const std::string&);

	struct CP_MethodHandle : public CP_Entry {
		explicit CP_MethodHandle(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint8_t reference_kind;

		uint16_t reference_index;
	};

	struct CP_MethodType : public CP_Entry {
		explicit CP_MethodType(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t descriptor_index;
	};

	struct CP_InvokeDynamic : public CP_Entry {
		explicit CP_InvokeDynamic(Reader& reader);

		inline CP_TAGS getTag() override;

		void printToStream(std::ostream &os, ConstantPool &cp) override;

		std::string toString(const ConstantPool &cp) const override;

		uint16_t bootstrap_method_attr_index;

		uint16_t name_and_type_index;
	};

}
