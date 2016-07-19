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

// System.Security.Permissions.GacIdentityPermission
struct GacIdentityPermission_t1916590740;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"

// System.Void System.Security.Permissions.GacIdentityPermission::.ctor()
extern "C"  void GacIdentityPermission__ctor_m3490903223 (GacIdentityPermission_t1916590740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Copy()
extern "C"  Il2CppObject * GacIdentityPermission_Copy_m3227385368 (GacIdentityPermission_t1916590740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * GacIdentityPermission_Intersect_m202359787 (GacIdentityPermission_t1916590740 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.GacIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool GacIdentityPermission_IsSubsetOf_m124031771 (GacIdentityPermission_t1916590740 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.GacIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * GacIdentityPermission_Union_m3157995835 (GacIdentityPermission_t1916590740 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.GacIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void GacIdentityPermission_FromXml_m459641219 (GacIdentityPermission_t1916590740 * __this, SecurityElement_t2125293618 * ___securityElement0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.GacIdentityPermission::ToXml()
extern "C"  SecurityElement_t2125293618 * GacIdentityPermission_ToXml_m1331802743 (GacIdentityPermission_t1916590740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.GacIdentityPermission System.Security.Permissions.GacIdentityPermission::Cast(System.Security.IPermission)
extern "C"  GacIdentityPermission_t1916590740 * GacIdentityPermission_Cast_m3520344147 (GacIdentityPermission_t1916590740 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
