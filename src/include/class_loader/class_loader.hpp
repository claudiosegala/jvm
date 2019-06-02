#pragma once

#include "interface.hpp"
#include "method.hpp"
#include "field.hpp"

namespace jvm {

	class ClassLoader {
	public:
		std::basic_string<char> filename;			///< The filename loaded as .class

		uint32_t magic_number;                      ///< Identifies that this is a class file format

        std::map<std::uint16_t, std::string> JavaVersions = {
            {46, "Java 1.2"} ,
            {47, "Java 1.3"} ,
            {48, "Java 1.4"} ,
            {49, "Java SE 5"} ,
            {50, "Java SE 6"} ,
            {51, "Java SE 7"} ,
            {52, "Java SE 8"} ,
            {53, "Java SE 9"} ,
            {54, "Java SE 10"} ,
            {55, "Java SE 11"} ,
            {56, "Java SE 12"} ,
            {57, "Java SE 13"}
        };

		uint16_t min_version;                       ///< Minor version of this class file

		uint16_t max_version;                       ///< Major version of this class filez

		uint16_t cp_count;                          ///< Number of entries in the constant_pool entity plus one

		ConstantPool constant_pool;                 ///< Vector of entries that are constants

		uint16_t access_flags;                      ///< Mask of flags used to denote access permissions to and properties of this class or interface

		uint16_t this_class;                        ///< Index to the constant_pool wich entry is a CONSTANT_Class_info structure

		uint16_t super_class;                       ///< Index to the direct superclass of this class. If zero, it must be the Object class

		uint16_t interfaces_count;                  ///< Number of direct superinterfaces of this class or interface type

		std::vector<jvm::InterfaceInfo> interfaces; ///< Vector of direct superinterface of this class or interface type, in the left-to-right order

		uint16_t fields_count;                      ///< Number of FieldInfo in the fields entity

		std::vector<jvm::FieldInfo> fields;         ///< Vector of fields that are declared by this class or interface

		uint16_t methods_count;                     ///< Number of MethodInfo in the methods entity

		std::unordered_map<std::string, MethodInfo> methods;       ///< Vector of all MethodInfo structures declared by this class or interface type
		
		uint16_t attributes_count;                  ///< Number of AttributeInfo in the attributes entity

		jvm::AttributeInfo attributes;              ///< Vector of AttributeInfo structures

		/**
		 * Default constructor
		 */
		ClassLoader ();

		/**
		 * Reads all the class file
		 */
		void read (std::basic_string<char>);

		/**
		 * Prints the whole class file to the console
		 */
		void show ();

	private:
		/**
		 * Prints interfaces count and it's content to the console if it's not null
		 */
		void print_interfaces ();

		/**
		 * Prints fields count and it's content to the console if it's not null
		 */
		void print_fields ();

		/**
		 * Prints methods count and it's content to the console if it's not null
		 */
		void print_methods ();

		/**
		 * Prints attributes count and it's content to the console if it's not null
		 */
		void print_attributes ();

		/**
		 * Prints this_class to the console
		 */
		void print_this_class ();

		/**
		 * Prints the superclass to the console, if it's not the Object class
		 */
		void print_super_class ();

		/**
		 * Prints minor and major version numbers of this class file to the console
		 */
		void print_version ();

		/**
		 * prints the constant pool to the console
		 */
		void print_cp ();

		/**
		 * Prints access flags of this class or interface to the console
		 */
		void print_class_flags();

		/**
		 * Reads the major and minor version of this class file
		 */
		void read_version (Reader&);

		/**
		 * Reads the constant pool
		 */
		void read_cp (Reader&);

		/**
		 * Reads access_flags, this_class and super_class
		 */
		void read_flags(Reader&);

		/**
		 * Reads interfaces_count and interfaces if any exists
		 */
		void read_interfaces (Reader&);

		/**
		 * Reads fields_count and fields if any exists
		 */
		void read_fields (Reader&);

		/**
		 * Reads methods_count and methods if any exists
		 */
		void read_methods (Reader&);



		/**
		 * Reads attributes_count and attributes if any exists
		 */
		void read_attributes (Reader&);

	};

	namespace _class {

		enum Flags : uint16_t {
			PUBLIC     = 0x0001,		// Declared public; may be accessed from outside its package.
			PRIVATE	   = 0x0002,		// Declared private; accessible only within the defining class.
			PROTECTED  = 0x0004,		// Declared protected; may be accessed within subclasses.
			STATIC     = 0x0008,		// Declared static.
			FINAL      = 0x0010,		// Declared final; no subclasses allowed.
			SUPER      = 0x0020,		// Treat superclass methods specially when invoked by the invokespecial instruction.
			VOLATILE   = 0x0040,		// Declared volatile; cannot be cached.
			TRANSIENT  = 0x0080,		// Declared transient; not written or read by a persistent object manager.
			INTERFACE  = 0x0200,		// Is an interface, not a class.
			ABSTRACT   = 0x0400,		// Declared abstract; must not be instantiated.
			SYNTHETIC  = 0x1000,		// Declared synthetic; not present in the source code.
			ANNOTATION = 0x2000,		// Declared as an annotation type.
			ENUM       = 0x4000			// Declared as an enum type.
		};

	}

}
