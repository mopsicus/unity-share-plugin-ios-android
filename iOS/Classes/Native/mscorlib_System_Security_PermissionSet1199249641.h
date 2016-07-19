#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1214940608;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t1199249641  : public Il2CppObject
{
public:
	// System.Security.Permissions.PermissionState System.Security.PermissionSet::state
	int32_t ___state_1;
	// System.Collections.ArrayList System.Security.PermissionSet::list
	ArrayList_t3948406897 * ___list_2;
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::_policyLevel
	PolicyLevel_t1214940608 * ____policyLevel_3;
	// System.Boolean System.Security.PermissionSet::_declsec
	bool ____declsec_4;
	// System.Boolean System.Security.PermissionSet::_readOnly
	bool ____readOnly_5;

public:
	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(PermissionSet_t1199249641, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(PermissionSet_t1199249641, ___list_2)); }
	inline ArrayList_t3948406897 * get_list_2() const { return ___list_2; }
	inline ArrayList_t3948406897 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ArrayList_t3948406897 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of__policyLevel_3() { return static_cast<int32_t>(offsetof(PermissionSet_t1199249641, ____policyLevel_3)); }
	inline PolicyLevel_t1214940608 * get__policyLevel_3() const { return ____policyLevel_3; }
	inline PolicyLevel_t1214940608 ** get_address_of__policyLevel_3() { return &____policyLevel_3; }
	inline void set__policyLevel_3(PolicyLevel_t1214940608 * value)
	{
		____policyLevel_3 = value;
		Il2CppCodeGenWriteBarrier(&____policyLevel_3, value);
	}

	inline static int32_t get_offset_of__declsec_4() { return static_cast<int32_t>(offsetof(PermissionSet_t1199249641, ____declsec_4)); }
	inline bool get__declsec_4() const { return ____declsec_4; }
	inline bool* get_address_of__declsec_4() { return &____declsec_4; }
	inline void set__declsec_4(bool value)
	{
		____declsec_4 = value;
	}

	inline static int32_t get_offset_of__readOnly_5() { return static_cast<int32_t>(offsetof(PermissionSet_t1199249641, ____readOnly_5)); }
	inline bool get__readOnly_5() const { return ____readOnly_5; }
	inline bool* get_address_of__readOnly_5() { return &____readOnly_5; }
	inline void set__readOnly_5(bool value)
	{
		____readOnly_5 = value;
	}
};

struct PermissionSet_t1199249641_StaticFields
{
public:
	// System.Object[] System.Security.PermissionSet::psUnrestricted
	ObjectU5BU5D_t1108656482* ___psUnrestricted_0;
	// System.Object[] System.Security.PermissionSet::action
	ObjectU5BU5D_t1108656482* ___action_6;

public:
	inline static int32_t get_offset_of_psUnrestricted_0() { return static_cast<int32_t>(offsetof(PermissionSet_t1199249641_StaticFields, ___psUnrestricted_0)); }
	inline ObjectU5BU5D_t1108656482* get_psUnrestricted_0() const { return ___psUnrestricted_0; }
	inline ObjectU5BU5D_t1108656482** get_address_of_psUnrestricted_0() { return &___psUnrestricted_0; }
	inline void set_psUnrestricted_0(ObjectU5BU5D_t1108656482* value)
	{
		___psUnrestricted_0 = value;
		Il2CppCodeGenWriteBarrier(&___psUnrestricted_0, value);
	}

	inline static int32_t get_offset_of_action_6() { return static_cast<int32_t>(offsetof(PermissionSet_t1199249641_StaticFields, ___action_6)); }
	inline ObjectU5BU5D_t1108656482* get_action_6() const { return ___action_6; }
	inline ObjectU5BU5D_t1108656482** get_address_of_action_6() { return &___action_6; }
	inline void set_action_6(ObjectU5BU5D_t1108656482* value)
	{
		___action_6 = value;
		Il2CppCodeGenWriteBarrier(&___action_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
