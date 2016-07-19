#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "mscorlib_System_Coord1148324363.h"
#include "mscorlib_System_SmallRect886681121.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t1990999783 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t1148324363  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t1148324363  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t886681121  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t1148324363  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t1990999783, ___Size_0)); }
	inline Coord_t1148324363  get_Size_0() const { return ___Size_0; }
	inline Coord_t1148324363 * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t1148324363  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t1990999783, ___CursorPosition_1)); }
	inline Coord_t1148324363  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t1148324363 * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t1148324363  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t1990999783, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t1990999783, ___Window_3)); }
	inline SmallRect_t886681121  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t886681121 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t886681121  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t1990999783, ___MaxWindowSize_4)); }
	inline Coord_t1148324363  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t1148324363 * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t1148324363  value)
	{
		___MaxWindowSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.ConsoleScreenBufferInfo
struct ConsoleScreenBufferInfo_t1990999783_marshaled_pinvoke
{
	Coord_t1148324363_marshaled_pinvoke ___Size_0;
	Coord_t1148324363_marshaled_pinvoke ___CursorPosition_1;
	int16_t ___Attribute_2;
	SmallRect_t886681121_marshaled_pinvoke ___Window_3;
	Coord_t1148324363_marshaled_pinvoke ___MaxWindowSize_4;
};
// Native definition for marshalling of: System.ConsoleScreenBufferInfo
struct ConsoleScreenBufferInfo_t1990999783_marshaled_com
{
	Coord_t1148324363_marshaled_com ___Size_0;
	Coord_t1148324363_marshaled_com ___CursorPosition_1;
	int16_t ___Attribute_2;
	SmallRect_t886681121_marshaled_com ___Window_3;
	Coord_t1148324363_marshaled_com ___MaxWindowSize_4;
};
