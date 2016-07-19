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

// System.Security.Permissions.StrongNameIdentityPermission
struct StrongNameIdentityPermission_t25715679;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t4133101135;
// System.String
struct String_t;
// System.Version
struct Version_t763695022;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub4133101135.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Version763695022.h"
#include "mscorlib_System_Security_Permissions_StrongNameIdent25715679.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Security_Permissions_StrongNameIdent80533897.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void StrongNameIdentityPermission__ctor_m1585978751 (StrongNameIdentityPermission_t25715679 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongNameIdentityPermission__ctor_m373253377 (StrongNameIdentityPermission_t25715679 * __this, StrongNamePublicKeyBlob_t4133101135 * ___blob0, String_t* ___name1, Version_t763695022 * ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.ctor(System.Security.Permissions.StrongNameIdentityPermission)
extern "C"  void StrongNameIdentityPermission__ctor_m2700203362 (StrongNameIdentityPermission_t25715679 * __this, StrongNameIdentityPermission_t25715679 * ___snip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::.cctor()
extern "C"  void StrongNameIdentityPermission__cctor_m3340932259 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Permissions.StrongNameIdentityPermission::get_Name()
extern "C"  String_t* StrongNameIdentityPermission_get_Name_m1169073777 (StrongNameIdentityPermission_t25715679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t4133101135 * StrongNameIdentityPermission_get_PublicKey_m3395278810 (StrongNameIdentityPermission_t25715679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Permissions.StrongNameIdentityPermission::get_Version()
extern "C"  Version_t763695022 * StrongNameIdentityPermission_get_Version_m756233413 (StrongNameIdentityPermission_t25715679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Copy()
extern "C"  Il2CppObject * StrongNameIdentityPermission_Copy_m2924906233 (StrongNameIdentityPermission_t25715679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void StrongNameIdentityPermission_FromXml_m2359444560 (StrongNameIdentityPermission_t25715679 * __this, SecurityElement_t2125293618 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission::FromSecurityElement(System.Security.SecurityElement)
extern "C"  SNIP_t80533897  StrongNameIdentityPermission_FromSecurityElement_m1843625365 (StrongNameIdentityPermission_t25715679 * __this, SecurityElement_t2125293618 * ___se0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * StrongNameIdentityPermission_Intersect_m1350863052 (StrongNameIdentityPermission_t25715679 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool StrongNameIdentityPermission_IsSubsetOf_m659635050 (StrongNameIdentityPermission_t25715679 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.StrongNameIdentityPermission::ToXml()
extern "C"  SecurityElement_t2125293618 * StrongNameIdentityPermission_ToXml_m741921598 (StrongNameIdentityPermission_t25715679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.StrongNameIdentityPermission::ToSecurityElement(System.Security.SecurityElement,System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  void StrongNameIdentityPermission_ToSecurityElement_m4288897919 (StrongNameIdentityPermission_t25715679 * __this, SecurityElement_t2125293618 * ___se0, SNIP_t80533897  ___snip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.StrongNameIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * StrongNameIdentityPermission_Union_m1188007580 (StrongNameIdentityPermission_t25715679 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsUnrestricted()
extern "C"  bool StrongNameIdentityPermission_IsUnrestricted_m660845434 (StrongNameIdentityPermission_t25715679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Contains(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool StrongNameIdentityPermission_Contains_m2100415886 (StrongNameIdentityPermission_t25715679 * __this, SNIP_t80533897  ___snip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool StrongNameIdentityPermission_IsEmpty_m1650442496 (StrongNameIdentityPermission_t25715679 * __this, SNIP_t80533897  ___snip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::IsEmpty()
extern "C"  bool StrongNameIdentityPermission_IsEmpty_m3430747881 (StrongNameIdentityPermission_t25715679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission System.Security.Permissions.StrongNameIdentityPermission::Cast(System.Security.IPermission)
extern "C"  StrongNameIdentityPermission_t25715679 * StrongNameIdentityPermission_Cast_m2158221389 (StrongNameIdentityPermission_t25715679 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission::Match(System.String)
extern "C"  bool StrongNameIdentityPermission_Match_m1262725559 (StrongNameIdentityPermission_t25715679 * __this, String_t* ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
