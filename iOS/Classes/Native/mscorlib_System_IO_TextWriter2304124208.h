#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t3324145743;
// System.IO.TextWriter
struct TextWriter_t2304124208;

#include "mscorlib_System_MarshalByRefObject1219038801.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t2304124208  : public MarshalByRefObject_t1219038801
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3324145743* ___CoreNewLine_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_1() { return static_cast<int32_t>(offsetof(TextWriter_t2304124208, ___CoreNewLine_1)); }
	inline CharU5BU5D_t3324145743* get_CoreNewLine_1() const { return ___CoreNewLine_1; }
	inline CharU5BU5D_t3324145743** get_address_of_CoreNewLine_1() { return &___CoreNewLine_1; }
	inline void set_CoreNewLine_1(CharU5BU5D_t3324145743* value)
	{
		___CoreNewLine_1 = value;
		Il2CppCodeGenWriteBarrier(&___CoreNewLine_1, value);
	}
};

struct TextWriter_t2304124208_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t2304124208 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t2304124208_StaticFields, ___Null_2)); }
	inline TextWriter_t2304124208 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t2304124208 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t2304124208 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier(&___Null_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
