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

// System.Security.Policy.StrongName
struct StrongName_t2878058698;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t4133101135;
// System.String
struct String_t;
// System.Version
struct Version_t763695022;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub4133101135.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Version763695022.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Security.Policy.StrongName::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void StrongName__ctor_m552959324 (StrongName_t2878058698 * __this, StrongNamePublicKeyBlob_t4133101135 * ___blob0, String_t* ___name1, Version_t763695022 * ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::get_Name()
extern "C"  String_t* StrongName_get_Name_m2625731792 (StrongName_t2878058698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::get_PublicKey()
extern "C"  StrongNamePublicKeyBlob_t4133101135 * StrongName_get_PublicKey_m99431051 (StrongName_t2878058698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongName::get_Version()
extern "C"  Version_t763695022 * StrongName_get_Version_m1418835908 (StrongName_t2878058698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.StrongName::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * StrongName_CreateIdentityPermission_m3899981616 (StrongName_t2878058698 * __this, Evidence_t4141397151 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongName::Equals(System.Object)
extern "C"  bool StrongName_Equals_m3416747224 (StrongName_t2878058698 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongName::GetHashCode()
extern "C"  int32_t StrongName_GetHashCode_m1084673968 (StrongName_t2878058698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::ToString()
extern "C"  String_t* StrongName_ToString_m1987456872 (StrongName_t2878058698 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
