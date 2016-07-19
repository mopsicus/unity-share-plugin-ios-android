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

// System.Security.Policy.StrongNameMembershipCondition
struct StrongNameMembershipCondition_t3282897489;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t4133101135;
// System.String
struct String_t;
// System.Version
struct Version_t763695022;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t23102852;
// System.Object
struct Il2CppObject;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1214940608;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub4133101135.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Version763695022.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1214940608.h"

// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameMembershipCondition__ctor_m754934707 (StrongNameMembershipCondition_t3282897489 * __this, StrongNamePublicKeyBlob_t4133101135 * ___blob0, String_t* ___name1, Version_t763695022 * ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition__ctor_m1628815593 (StrongNameMembershipCondition_t3282897489 * __this, SecurityElement_t2125293618 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::.ctor()
extern "C"  void StrongNameMembershipCondition__ctor_m2967433980 (StrongNameMembershipCondition_t3282897489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::get_Name()
extern "C"  String_t* StrongNameMembershipCondition_get_Name_m2614020095 (StrongNameMembershipCondition_t3282897489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongNameMembershipCondition::get_Version()
extern "C"  Version_t763695022 * StrongNameMembershipCondition_get_Version_m2447114487 (StrongNameMembershipCondition_t3282897489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t4133101135 * StrongNameMembershipCondition_get_PublicKey_m1184535308 (StrongNameMembershipCondition_t3282897489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Check(System.Security.Policy.Evidence)
extern "C"  bool StrongNameMembershipCondition_Check_m585580238 (StrongNameMembershipCondition_t3282897489 * __this, Evidence_t4141397151 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.IMembershipCondition System.Security.Policy.StrongNameMembershipCondition::Copy()
extern "C"  Il2CppObject * StrongNameMembershipCondition_Copy_m409071111 (StrongNameMembershipCondition_t3282897489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongNameMembershipCondition::Equals(System.Object)
extern "C"  bool StrongNameMembershipCondition_Equals_m4020133803 (StrongNameMembershipCondition_t3282897489 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongNameMembershipCondition::GetHashCode()
extern "C"  int32_t StrongNameMembershipCondition_GetHashCode_m3589122319 (StrongNameMembershipCondition_t3282897489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameMembershipCondition_FromXml_m2687545310 (StrongNameMembershipCondition_t3282897489 * __this, SecurityElement_t2125293618 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.StrongNameMembershipCondition::FromXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void StrongNameMembershipCondition_FromXml_m3118542947 (StrongNameMembershipCondition_t3282897489 * __this, SecurityElement_t2125293618 * ___e0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongNameMembershipCondition::ToString()
extern "C"  String_t* StrongNameMembershipCondition_ToString_m1975745175 (StrongNameMembershipCondition_t3282897489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml()
extern "C"  SecurityElement_t2125293618 * StrongNameMembershipCondition_ToXml_m616346352 (StrongNameMembershipCondition_t3282897489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Policy.StrongNameMembershipCondition::ToXml(System.Security.Policy.PolicyLevel)
extern "C"  SecurityElement_t2125293618 * StrongNameMembershipCondition_ToXml_m42267883 (StrongNameMembershipCondition_t3282897489 * __this, PolicyLevel_t1214940608 * ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
