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

// System.Security.Permissions.IsolatedStorageFilePermission
struct IsolatedStorageFilePermission_t3238287339;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"

// System.Void System.Security.Permissions.IsolatedStorageFilePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void IsolatedStorageFilePermission__ctor_m3990648777 (IsolatedStorageFilePermission_t3238287339 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Copy()
extern "C"  Il2CppObject * IsolatedStorageFilePermission_Copy_m1157463919 (IsolatedStorageFilePermission_t3238287339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * IsolatedStorageFilePermission_Intersect_m3468437826 (IsolatedStorageFilePermission_t3238287339 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStorageFilePermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool IsolatedStorageFilePermission_IsSubsetOf_m3644678308 (IsolatedStorageFilePermission_t3238287339 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.IsolatedStorageFilePermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * IsolatedStorageFilePermission_Union_m2024135186 (IsolatedStorageFilePermission_t3238287339 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStorageFilePermission::ToXml()
extern "C"  SecurityElement_t2125293618 * IsolatedStorageFilePermission_ToXml_m138485760 (IsolatedStorageFilePermission_t3238287339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.IsolatedStorageFilePermission System.Security.Permissions.IsolatedStorageFilePermission::Cast(System.Security.IPermission)
extern "C"  IsolatedStorageFilePermission_t3238287339 * IsolatedStorageFilePermission_Cast_m1171738277 (IsolatedStorageFilePermission_t3238287339 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
