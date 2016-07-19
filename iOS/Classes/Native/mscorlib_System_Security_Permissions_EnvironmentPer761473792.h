#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Security_CodeAccessPermission2127220.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermission
struct  EnvironmentPermission_t761473792  : public CodeAccessPermission_t2127220
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.EnvironmentPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::readList
	ArrayList_t3948406897 * ___readList_1;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::writeList
	ArrayList_t3948406897 * ___writeList_2;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t761473792, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_readList_1() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t761473792, ___readList_1)); }
	inline ArrayList_t3948406897 * get_readList_1() const { return ___readList_1; }
	inline ArrayList_t3948406897 ** get_address_of_readList_1() { return &___readList_1; }
	inline void set_readList_1(ArrayList_t3948406897 * value)
	{
		___readList_1 = value;
		Il2CppCodeGenWriteBarrier(&___readList_1, value);
	}

	inline static int32_t get_offset_of_writeList_2() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t761473792, ___writeList_2)); }
	inline ArrayList_t3948406897 * get_writeList_2() const { return ___writeList_2; }
	inline ArrayList_t3948406897 ** get_address_of_writeList_2() { return &___writeList_2; }
	inline void set_writeList_2(ArrayList_t3948406897 * value)
	{
		___writeList_2 = value;
		Il2CppCodeGenWriteBarrier(&___writeList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
