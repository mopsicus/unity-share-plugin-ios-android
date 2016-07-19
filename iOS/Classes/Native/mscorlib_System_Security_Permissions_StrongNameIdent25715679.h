#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t763695022;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Security_CodeAccessPermission2127220.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t25715679  : public CodeAccessPermission_t2127220
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t3948406897 * ____list_2;

public:
	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t25715679, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t25715679, ____list_2)); }
	inline ArrayList_t3948406897 * get__list_2() const { return ____list_2; }
	inline ArrayList_t3948406897 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t3948406897 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier(&____list_2, value);
	}
};

struct StrongNameIdentityPermission_t25715679_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t763695022 * ___defaultVersion_0;

public:
	inline static int32_t get_offset_of_defaultVersion_0() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t25715679_StaticFields, ___defaultVersion_0)); }
	inline Version_t763695022 * get_defaultVersion_0() const { return ___defaultVersion_0; }
	inline Version_t763695022 ** get_address_of_defaultVersion_0() { return &___defaultVersion_0; }
	inline void set_defaultVersion_0(Version_t763695022 * value)
	{
		___defaultVersion_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultVersion_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
