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

// System.Security.Permissions.UIPermission
struct UIPermission_t3504199347;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"
#include "mscorlib_System_Security_Permissions_UIPermissionW3699106243.h"
#include "mscorlib_System_Security_Permissions_UIPermissionC1570897969.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"

// System.Void System.Security.Permissions.UIPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void UIPermission__ctor_m3026554963 (UIPermission_t3504199347 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::.ctor(System.Security.Permissions.UIPermissionWindow,System.Security.Permissions.UIPermissionClipboard)
extern "C"  void UIPermission__ctor_m3645516508 (UIPermission_t3504199347 * __this, int32_t ___windowFlag0, int32_t ___clipboardFlag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::set_Clipboard(System.Security.Permissions.UIPermissionClipboard)
extern "C"  void UIPermission_set_Clipboard_m1837576971 (UIPermission_t3504199347 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::set_Window(System.Security.Permissions.UIPermissionWindow)
extern "C"  void UIPermission_set_Window_m163921199 (UIPermission_t3504199347 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Copy()
extern "C"  Il2CppObject * UIPermission_Copy_m3297917901 (UIPermission_t3504199347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::FromXml(System.Security.SecurityElement)
extern "C"  void UIPermission_FromXml_m248868900 (UIPermission_t3504199347 * __this, SecurityElement_t2125293618 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * UIPermission_Intersect_m2711088544 (UIPermission_t3504199347 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool UIPermission_IsSubsetOf_m3875897622 (UIPermission_t3504199347 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsUnrestricted()
extern "C"  bool UIPermission_IsUnrestricted_m1103716174 (UIPermission_t3504199347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UIPermission::ToXml()
extern "C"  SecurityElement_t2125293618 * UIPermission_ToXml_m1273381098 (UIPermission_t3504199347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * UIPermission_Union_m1767800176 (UIPermission_t3504199347 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsEmpty(System.Security.Permissions.UIPermissionWindow,System.Security.Permissions.UIPermissionClipboard)
extern "C"  bool UIPermission_IsEmpty_m583190139 (UIPermission_t3504199347 * __this, int32_t ___w0, int32_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UIPermission System.Security.Permissions.UIPermission::Cast(System.Security.IPermission)
extern "C"  UIPermission_t3504199347 * UIPermission_Cast_m1234840013 (UIPermission_t3504199347 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
