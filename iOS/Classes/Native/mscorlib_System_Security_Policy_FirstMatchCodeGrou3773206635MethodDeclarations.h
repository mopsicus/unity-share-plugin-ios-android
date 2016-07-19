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

// System.Security.Policy.FirstMatchCodeGroup
struct FirstMatchCodeGroup_t3773206635;
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

// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.Policy.IMembershipCondition,System.Security.Policy.PolicyStatement)
extern "C"  void FirstMatchCodeGroup__ctor_m842302031 (FirstMatchCodeGroup_t3773206635 * __this, Il2CppObject * ___membershipCondition0, PolicyStatement_t313031467 * ___policy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.FirstMatchCodeGroup::.ctor(System.Security.SecurityElement,System.Security.Policy.PolicyLevel)
extern "C"  void FirstMatchCodeGroup__ctor_m3518427102 (FirstMatchCodeGroup_t3773206635 * __this, SecurityElement_t2125293618 * ___e0, PolicyLevel_t1214940608 * ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.CodeGroup System.Security.Policy.FirstMatchCodeGroup::Copy()
extern "C"  CodeGroup_t4075050400 * FirstMatchCodeGroup_Copy_m3316016893 (FirstMatchCodeGroup_t3773206635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyStatement System.Security.Policy.FirstMatchCodeGroup::Resolve(System.Security.Policy.Evidence)
extern "C"  PolicyStatement_t313031467 * FirstMatchCodeGroup_Resolve_m707000573 (FirstMatchCodeGroup_t3773206635 * __this, Evidence_t4141397151 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.FirstMatchCodeGroup System.Security.Policy.FirstMatchCodeGroup::CopyNoChildren()
extern "C"  FirstMatchCodeGroup_t3773206635 * FirstMatchCodeGroup_CopyNoChildren_m2107878674 (FirstMatchCodeGroup_t3773206635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
