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

// System.Security.Policy.GacInstalled
struct GacInstalled_t3491099257;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Security.Policy.GacInstalled::.ctor()
extern "C"  void GacInstalled__ctor_m467431830 (GacInstalled_t3491099257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.GacInstalled::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * GacInstalled_CreateIdentityPermission_m1169412449 (GacInstalled_t3491099257 * __this, Evidence_t4141397151 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.GacInstalled::Equals(System.Object)
extern "C"  bool GacInstalled_Equals_m3408881033 (GacInstalled_t3491099257 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.GacInstalled::GetHashCode()
extern "C"  int32_t GacInstalled_GetHashCode_m1051929313 (GacInstalled_t3491099257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.GacInstalled::ToString()
extern "C"  String_t* GacInstalled_ToString_m1114539927 (GacInstalled_t3491099257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
