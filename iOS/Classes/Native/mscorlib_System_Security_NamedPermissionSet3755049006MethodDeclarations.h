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

// System.Security.NamedPermissionSet
struct NamedPermissionSet_t3755049006;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t1199249641;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"
#include "mscorlib_System_Security_NamedPermissionSet3755049006.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Security.NamedPermissionSet::.ctor()
extern "C"  void NamedPermissionSet__ctor_m263038953 (NamedPermissionSet_t3755049006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.String,System.Security.Permissions.PermissionState)
extern "C"  void NamedPermissionSet__ctor_m3259299836 (NamedPermissionSet_t3755049006 * __this, String_t* ___name0, int32_t ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::.ctor(System.Security.NamedPermissionSet)
extern "C"  void NamedPermissionSet__ctor_m3776015712 (NamedPermissionSet_t3755049006 * __this, NamedPermissionSet_t3755049006 * ___permSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.NamedPermissionSet::get_Name()
extern "C"  String_t* NamedPermissionSet_get_Name_m1991316146 (NamedPermissionSet_t3755049006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::set_Name(System.String)
extern "C"  void NamedPermissionSet_set_Name_m868725343 (NamedPermissionSet_t3755049006 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.NamedPermissionSet::Copy()
extern "C"  PermissionSet_t1199249641 * NamedPermissionSet_Copy_m1595915871 (NamedPermissionSet_t3755049006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.NamedPermissionSet::FromXml(System.Security.SecurityElement)
extern "C"  void NamedPermissionSet_FromXml_m3714157713 (NamedPermissionSet_t3755049006 * __this, SecurityElement_t2125293618 * ___et0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.NamedPermissionSet::ToXml()
extern "C"  SecurityElement_t2125293618 * NamedPermissionSet_ToXml_m977658461 (NamedPermissionSet_t3755049006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.NamedPermissionSet::Equals(System.Object)
extern "C"  bool NamedPermissionSet_Equals_m1712129368 (NamedPermissionSet_t3755049006 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.NamedPermissionSet::GetHashCode()
extern "C"  int32_t NamedPermissionSet_GetHashCode_m3059829052 (NamedPermissionSet_t3755049006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
