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

// System.Security.Policy.UnionCodeGroup
struct UnionCodeGroup_t1990104843;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t23102852;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t313031467;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1214940608;
// System.Security.Policy.CodeGroup
struct CodeGroup_t4075050400;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Policy_PolicyStatement313031467.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1214940608.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"

// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void UnionCodeGroup__ctor_m1956265457 (UnionCodeGroup_t1990104843 * __this, Il2CppObject * ___membershipCondition0, PolicyStatement_t313031467 * ___policy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.UnionCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void UnionCodeGroup__ctor_m1694248832 (UnionCodeGroup_t1990104843 * __this, SecurityElement_t2125293618 * ___e0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy()
extern "C"  CodeGroup_t4075050400 * UnionCodeGroup_Copy_m1862744463 (UnionCodeGroup_t1990104843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.UnionCodeGroup::Copy(System.Boolean)
extern "C"  CodeGroup_t4075050400 * UnionCodeGroup_Copy_m627476678 (UnionCodeGroup_t1990104843 * __this, bool ___childs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.UnionCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t313031467 * UnionCodeGroup_Resolve_m1015759173 (UnionCodeGroup_t1990104843 * __this, Evidence_t4141397151 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
