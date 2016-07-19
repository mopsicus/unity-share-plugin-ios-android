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

// System.Security.Permissions.KeyContainerPermission
struct KeyContainerPermission_t2656552033;
// System.Security.Permissions.KeyContainerPermissionAccessEntry[]
struct KeyContainerPermissionAccessEntryU5BU5D_t356632218;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"
#include "mscorlib_System_Security_Permissions_KeyContainerPe860156468.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"

// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void KeyContainerPermission__ctor_m2592369089 (KeyContainerPermission_t2656552033 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C"  void KeyContainerPermission__ctor_m4113174669 (KeyContainerPermission_t2656552033 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::.ctor(System.Security.Permissions.KeyContainerPermissionFlags,System.Security.Permissions.KeyContainerPermissionAccessEntry[])
extern "C"  void KeyContainerPermission__ctor_m2706132339 (KeyContainerPermission_t2656552033 * __this, int32_t ___flags0, KeyContainerPermissionAccessEntryU5BU5D_t356632218* ___accessList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Copy()
extern "C"  Il2CppObject * KeyContainerPermission_Copy_m3636084155 (KeyContainerPermission_t2656552033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::FromXml(System.Security.SecurityElement)
extern "C"  void KeyContainerPermission_FromXml_m3879901970 (KeyContainerPermission_t2656552033 * __this, SecurityElement_t2125293618 * ___securityElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * KeyContainerPermission_Intersect_m3960256398 (KeyContainerPermission_t2656552033 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool KeyContainerPermission_IsSubsetOf_m2192394984 (KeyContainerPermission_t2656552033 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.KeyContainerPermission::IsUnrestricted()
extern "C"  bool KeyContainerPermission_IsUnrestricted_m1833417148 (KeyContainerPermission_t2656552033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.KeyContainerPermission::ToXml()
extern "C"  SecurityElement_t2125293618 * KeyContainerPermission_ToXml_m2148075452 (KeyContainerPermission_t2656552033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.KeyContainerPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * KeyContainerPermission_Union_m3920719454 (KeyContainerPermission_t2656552033 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.KeyContainerPermission::SetFlags(System.Security.Permissions.KeyContainerPermissionFlags)
extern "C"  void KeyContainerPermission_SetFlags_m2501633588 (KeyContainerPermission_t2656552033 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.KeyContainerPermission System.Security.Permissions.KeyContainerPermission::Cast(System.Security.IPermission)
extern "C"  KeyContainerPermission_t2656552033 * KeyContainerPermission_Cast_m3959170957 (KeyContainerPermission_t2656552033 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
