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

// System.Security.Permissions.PublisherIdentityPermission
struct PublisherIdentityPermission_t2106095047;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"

// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void PublisherIdentityPermission__ctor_m343875429 (PublisherIdentityPermission_t2106095047 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void PublisherIdentityPermission__ctor_m1228301654 (PublisherIdentityPermission_t2106095047 * __this, X509Certificate_t3076817455 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::set_Certificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void PublisherIdentityPermission_set_Certificate_m4194255294 (PublisherIdentityPermission_t2106095047 * __this, X509Certificate_t3076817455 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Copy()
extern "C"  Il2CppObject * PublisherIdentityPermission_Copy_m4164204171 (PublisherIdentityPermission_t2106095047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void PublisherIdentityPermission_FromXml_m2079411638 (PublisherIdentityPermission_t2106095047 * __this, SecurityElement_t2125293618 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * PublisherIdentityPermission_Intersect_m49279070 (PublisherIdentityPermission_t2106095047 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.PublisherIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool PublisherIdentityPermission_IsSubsetOf_m986520328 (PublisherIdentityPermission_t2106095047 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.PublisherIdentityPermission::ToXml()
extern "C"  SecurityElement_t2125293618 * PublisherIdentityPermission_ToXml_m697138020 (PublisherIdentityPermission_t2106095047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * PublisherIdentityPermission_Union_m1915850542 (PublisherIdentityPermission_t2106095047 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PublisherIdentityPermission System.Security.Permissions.PublisherIdentityPermission::Cast(System.Security.IPermission)
extern "C"  PublisherIdentityPermission_t2106095047 * PublisherIdentityPermission_Cast_m3825174765 (PublisherIdentityPermission_t2106095047 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
