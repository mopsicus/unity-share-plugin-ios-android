﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Match
struct Match_t2156507859;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection
struct  MatchCollection_t3437694865  : public Il2CppObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::current
	Match_t2156507859 * ___current_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::list
	ArrayList_t3948406897 * ___list_1;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(MatchCollection_t3437694865, ___current_0)); }
	inline Match_t2156507859 * get_current_0() const { return ___current_0; }
	inline Match_t2156507859 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Match_t2156507859 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier(&___current_0, value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(MatchCollection_t3437694865, ___list_1)); }
	inline ArrayList_t3948406897 * get_list_1() const { return ___list_1; }
	inline ArrayList_t3948406897 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t3948406897 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier(&___list_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
