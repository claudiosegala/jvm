#pragma once

#include <vector>
#include "bit.hpp"
#include "reader.hpp"

namespace jvm {
	enum FLAGS : uint16_t {
		PUBLIC     = 0x0001,    // Declared public; may be accessed = from outside its package.
		PRIVATE	   = 0x0002,
		PROTECTED  = 0x0004,
		STATIC     = 0x0008,
		FINAL      = 0x0010,	// Declared final; no subclasses allowed.
		SUPER      = 0x0020,	// Treat superclass methods specially when invoked by the invokespecial instruction.
		VOLATILE   = 0x0040,
		TRANSIENT  = 0x0080,
		INTERFACE  = 0x0200,    // Is an interface, not a class.
		ABSTRACT   = 0x0400,    // Declared abstract; must not be instantiated.
		SYNTHETIC  = 0x1000,    // Declared synthetic; not present in the source code.
		ANNOTATION = 0x2000,    // Declared as an annotation type.
		ENUM       = 0x4000,    // Declared as an enum type.
	};
	
	enum CP_TAGS : uint16_t {
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

	class ConstantPool : public std::vector<CP_Entry*> {
	public:
		ConstantPool();
		ConstantPool(Reader &reader, size_type size);
		~ConstantPool();
		void fill(Reader &reader, size_type size);
		void printToStream(std::ostream& os);

		CP_Entry* &operator[](size_type index);

	private:
		CP_Entry *getNextEntry(Reader &reader, uint8_t tag);
	};

	class CP_Entry {
	public:
		virtual ~CP_Entry() = default;
		inline virtual CP_TAGS getTag() = 0;
		virtual void printToStream(std::ostream &os, jvm::ConstantPool &cp) = 0;
		template<class T> T& as() {
			auto toReturn = dynamic_cast<T*>(this);
			if (toReturn == nullptr) {
				throw "Invalid CP_Entry cast";
			}
			return *toReturn;
		}
	};

	struct CP_Class : public CP_Entry {
		explicit CP_Class(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord name_index;
	};

	struct CP_Fieldref : public CP_Entry {
		explicit CP_Fieldref(Reader& reader);
		~CP_Fieldref() override = default;
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord class_index;
		HalfWord name_and_class_index;
	};

	struct CP_Methodref : public CP_Entry {
		explicit CP_Methodref(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord class_index;
		HalfWord name_and_class_index;
	};

	struct CP_InterfaceMethodref : public CP_Entry {
		explicit CP_InterfaceMethodref(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord class_index;
		HalfWord name_and_class_index;
	};

	struct CP_String : public CP_Entry {
		explicit CP_String(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord string_index;
	};

	struct CP_Integer : public CP_Entry {
		explicit CP_Integer(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		Word _bytes;
	};

	struct CP_Float : public CP_Entry {
		explicit CP_Float(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		Word _bytes;
	};

	struct CP_Long : public CP_Entry {
		explicit CP_Long(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		Word high_bytes;
		Word low_bytes;
	};

	struct CP_Double : public CP_Entry {
		explicit CP_Double(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		Word high_bytes;
		Word low_bytes;
	};

	struct CP_NameAndType : public CP_Entry {
		explicit CP_NameAndType(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord name_index;
		HalfWord descriptor_index;
	};

	struct CP_Utf8 : public CP_Entry {
		explicit CP_Utf8(Reader& reader);
		~CP_Utf8() override;
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord _length;
		uint8_t *_bytes;
	};

	std::ostream& operator<< (std::ostream&, const CP_Utf8&);

	struct CP_MethodHandle : public CP_Entry {
		explicit CP_MethodHandle(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		Byte reference_kind;
		HalfWord reference_index;
	};

	struct CP_MethodType : public CP_Entry {
		explicit CP_MethodType(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord descriptor_index;
	};

	struct CP_InvokeDynamic : public CP_Entry {
		explicit CP_InvokeDynamic(Reader& reader);
		inline CP_TAGS getTag() override;
		void printToStream(std::ostream &os, ConstantPool &cp) override;
		HalfWord bootstrap_method_attr_index;
		HalfWord name_and_type_index;
	};

}
