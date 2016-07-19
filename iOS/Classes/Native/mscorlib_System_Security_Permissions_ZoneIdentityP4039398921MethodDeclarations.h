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

// System.Security.Permissions.ZoneIdentityPermission
struct ZoneIdentityPermission_t4039398921;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityZone3089400096.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"

// System.Void System.Security.Permissions.ZoneIdentityPermission::.ctor(System.Security.SecurityZone)
extern "C"  void ZoneIdentityPermission__ctor_m17979109 (ZoneIdentityPermission_t4039398921 * __this, int32_t ___zone0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Copy()
extern "C"  Il2CppObject * ZoneIdentityPermission_Copy_m250521443 (ZoneIdentityPermission_t4039398921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.ZoneIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool ZoneIdentityPermission_IsSubsetOf_m121812544 (ZoneIdentityPermission_t4039398921 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * ZoneIdentityPermission_Union_m1795968006 (ZoneIdentityPermission_t4039398921 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.ZoneIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * ZoneIdentityPermission_Intersect_m1676706102 (ZoneIdentityPermission_t4039398921 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void ZoneIdentityPermission_FromXml_m4116355770 (ZoneIdentityPermission_t4039398921 * __this, SecurityElement_t2125293618 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.ZoneIdentityPermission::ToXml()
extern "C"  SecurityElement_t2125293618 * ZoneIdentityPermission_ToXml_m274846484 (ZoneIdentityPermission_t4039398921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.ZoneIdentityPermission::set_SecurityZone(System.Security.SecurityZone)
extern "C"  void ZoneIdentityPermission_set_SecurityZone_m2364940914 (ZoneIdentityPermission_t4039398921 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.ZoneIdentityPermission System.Security.Permissions.ZoneIdentityPermission::Cast(System.Security.IPermission)
extern "C"  ZoneIdentityPermission_t4039398921 * ZoneIdentityPermission_Cast_m1565530253 (ZoneIdentityPermission_t4039398921 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
