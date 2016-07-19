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

// System.Security.Policy.NetCodeGroup
struct NetCodeGroup_t1277793085;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t23102852;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1214940608;
// System.Security.Policy.CodeGroup
struct CodeGroup_t4075050400;
// System.Security.Policy.CodeConnectAccess[]
struct CodeConnectAccessU5BU5D_t3404668630;
// System.Object
struct Il2CppObject;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t313031467;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1214940608.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"

// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.Policy.IMembershipCondition)
extern "C"  void NetCodeGroup__ctor_m788856791 (NetCodeGroup_t1277793085 * __this, Il2CppObject * ___membershipCondition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup__ctor_m4154652750 (NetCodeGroup_t1277793085 * __this, SecurityElement_t2125293618 * ___e0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::.cctor()
extern "C"  void NetCodeGroup__cctor_m4061792411 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.NetCodeGroup::Copy()
extern "C"  CodeGroup_t4075050400 * NetCodeGroup_Copy_m982483457 (NetCodeGroup_t1277793085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Security.Policy.CodeConnectAccess[],System.Security.Policy.CodeConnectAccess[])
extern "C"  bool NetCodeGroup_Equals_m2953689207 (NetCodeGroup_t1277793085 * __this, CodeConnectAccessU5BU5D_t3404668630* ___rules10, CodeConnectAccessU5BU5D_t3404668630* ___rules21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.NetCodeGroup::Equals(System.Object)
extern "C"  bool NetCodeGroup_Equals_m1413032005 (NetCodeGroup_t1277793085 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.NetCodeGroup::GetHashCode()
extern "C"  int32_t NetCodeGroup_GetHashCode_m2560190877 (NetCodeGroup_t1277793085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.NetCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t313031467 * NetCodeGroup_Resolve_m3128595447 (NetCodeGroup_t1277793085 * __this, Evidence_t4141397151 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup_CreateXml_m4240238183 (NetCodeGroup_t1277793085 * __this, SecurityElement_t2125293618 * ___element0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.NetCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void NetCodeGroup_ParseXml_m3917941394 (NetCodeGroup_t1277793085 * __this, SecurityElement_t2125293618 * ___e0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
