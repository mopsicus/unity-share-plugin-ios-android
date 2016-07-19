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

// System.Security.Policy.FileCodeGroup
struct FileCodeGroup_t3153172996;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t23102852;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1214940608;
// System.Security.Policy.CodeGroup
struct CodeGroup_t4075050400;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t313031467;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_FileIOPermiss2673978341.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1214940608.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileCodeGroup__ctor_m1371733496 (FileCodeGroup_t3153172996 * __this, Il2CppObject * ___membershipCondition0, int32_t ___access1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup__ctor_m3408229349 (FileCodeGroup_t3153172996 * __this, SecurityElement_t2125293618 * ___e0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FileCodeGroup::Copy()
extern "C"  CodeGroup_t4075050400 * FileCodeGroup_Copy_m1605956822 (FileCodeGroup_t3153172996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FileCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t313031467 * FileCodeGroup_Resolve_m110064726 (FileCodeGroup_t3153172996 * __this, Evidence_t4141397151 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.FileCodeGroup::Equals(System.Object)
extern "C"  bool FileCodeGroup_Equals_m1325977752 (FileCodeGroup_t3153172996 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.FileCodeGroup::GetHashCode()
extern "C"  int32_t FileCodeGroup_GetHashCode_m2071225084 (FileCodeGroup_t3153172996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::ParseXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_ParseXml_m2264093595 (FileCodeGroup_t3153172996 * __this, SecurityElement_t2125293618 * ___e0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FileCodeGroup::CreateXml(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FileCodeGroup_CreateXml_m215596670 (FileCodeGroup_t3153172996 * __this, SecurityElement_t2125293618 * ___element0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
