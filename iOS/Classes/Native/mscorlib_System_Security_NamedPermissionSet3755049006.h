#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Security_PermissionSet1199249641.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.NamedPermissionSet
struct  NamedPermissionSet_t3755049006  : public PermissionSet_t1199249641
{
public:
	// System.String System.Security.NamedPermissionSet::name
	String_t* ___name_7;
	// System.String System.Security.NamedPermissionSet::description
	String_t* ___description_8;

public:
	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t3755049006, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier(&___name_7, value);
	}

	inline static int32_t get_offset_of_description_8() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t3755049006, ___description_8)); }
	inline String_t* get_description_8() const { return ___description_8; }
	inline String_t** get_address_of_description_8() { return &___description_8; }
	inline void set_description_8(String_t* value)
	{
		___description_8 = value;
		Il2CppCodeGenWriteBarrier(&___description_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
