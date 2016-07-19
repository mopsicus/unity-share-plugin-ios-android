#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.PermissionSet
struct PermissionSet_t1199249641;
// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t3282897489;
// System.String
struct String_t;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t3755049006;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Policy_DefaultPolicies_Ke1696001620.h"

// System.Void System.Security.Policy.DefaultPolicies::.cctor()
extern "C"  void DefaultPolicies__cctor_m3360595871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_FullTrust()
extern "C"  PermissionSet_t1199249641 * DefaultPolicies_get_FullTrust_m4138398653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_LocalIntranet()
extern "C"  PermissionSet_t1199249641 * DefaultPolicies_get_LocalIntranet_m1077460990 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Internet()
extern "C"  PermissionSet_t1199249641 * DefaultPolicies_get_Internet_m2076906927 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_SkipVerification()
extern "C"  PermissionSet_t1199249641 * DefaultPolicies_get_SkipVerification_m2231664744 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Execution()
extern "C"  PermissionSet_t1199249641 * DefaultPolicies_get_Execution_m1581599244 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Nothing()
extern "C"  PermissionSet_t1199249641 * DefaultPolicies_get_Nothing_m3241160257 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.Policy.DefaultPolicies::get_Everything()
extern "C"  PermissionSet_t1199249641 * DefaultPolicies_get_Everything_m2384022881 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.StrongNameMembershipCondition System.Security.Policy.DefaultPolicies::FullTrustMembership(System.String,System.Security.Policy.DefaultPolicies/Key)
extern "C"  StrongNameMembershipCondition_t3282897489 * DefaultPolicies_FullTrustMembership_m841224806 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildFullTrust()
extern "C"  NamedPermissionSet_t3755049006 * DefaultPolicies_BuildFullTrust_m3549756851 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildLocalIntranet()
extern "C"  NamedPermissionSet_t3755049006 * DefaultPolicies_BuildLocalIntranet_m612425460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildInternet()
extern "C"  NamedPermissionSet_t3755049006 * DefaultPolicies_BuildInternet_m1226634489 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildSkipVerification()
extern "C"  NamedPermissionSet_t3755049006 * DefaultPolicies_BuildSkipVerification_m3922687410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildExecution()
extern "C"  NamedPermissionSet_t3755049006 * DefaultPolicies_BuildExecution_m992957442 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildNothing()
extern "C"  NamedPermissionSet_t3755049006 * DefaultPolicies_BuildNothing_m165690807 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::BuildEverything()
extern "C"  NamedPermissionSet_t3755049006 * DefaultPolicies_BuildEverything_m1315996203 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.DefaultPolicies::PrintingPermission(System.String)
extern "C"  SecurityElement_t2125293618 * DefaultPolicies_PrintingPermission_m2677500610 (Il2CppObject * __this /* static, unused */, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
