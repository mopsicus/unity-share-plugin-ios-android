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

// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Security.PermissionSet
struct PermissionSet_t1199249641;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1214940608;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Reflection.MethodBase
struct MethodBase_t318515428;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly1418687608.h"
#include "mscorlib_System_Security_PermissionSet1199249641.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1214940608.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityAction2571204719.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C"  void SecurityManager__cctor_m3992604439 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C"  bool SecurityManager_get_CheckExecutionRights_m435735708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m2857115566 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C"  bool SecurityManager_IsGranted_m3390952480 (Il2CppObject * __this /* static, unused */, Assembly_t1418687608 * ___a0, Il2CppObject * ___perm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C"  Il2CppObject * SecurityManager_CheckPermissionSet_m570850096 (Il2CppObject * __this /* static, unused */, Assembly_t1418687608 * ___a0, PermissionSet_t1199249641 * ___ps1, bool ___noncas2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C"  PermissionSet_t1199249641 * SecurityManager_ResolvePolicy_m2327773485 (Il2CppObject * __this /* static, unused */, Evidence_t4141397151 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C"  PermissionSet_t1199249641 * SecurityManager_ResolvePolicy_m524737311 (Il2CppObject * __this /* static, unused */, Evidence_t4141397151 * ___evidence0, PermissionSet_t1199249641 * ___reqdPset1, PermissionSet_t1199249641 * ___optPset2, PermissionSet_t1199249641 * ___denyPset3, PermissionSet_t1199249641 ** ___denied4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C"  Il2CppObject * SecurityManager_get_Hierarchy_m1281665942 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C"  void SecurityManager_InitializePolicyHierarchy_m2179572647 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C"  bool SecurityManager_ResolvePolicyLevel_m1396758681 (Il2CppObject * __this /* static, unused */, PermissionSet_t1199249641 ** ___ps0, PolicyLevel_t1214940608 * ___pl1, Evidence_t4141397151 * ___evidence2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C"  void SecurityManager_ResolveIdentityPermissions_m1190675822 (Il2CppObject * __this /* static, unused */, PermissionSet_t1199249641 * ___ps0, Evidence_t4141397151 * ___evidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C"  PolicyLevel_t1214940608 * SecurityManager_get_ResolvingPolicyLevel_m2992460474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C"  void SecurityManager_set_ResolvingPolicyLevel_m3245737967 (Il2CppObject * __this /* static, unused */, PolicyLevel_t1214940608 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C"  PermissionSet_t1199249641 * SecurityManager_Decode_m1966008144 (Il2CppObject * __this /* static, unused */, IntPtr_t ___permissions0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C"  PermissionSet_t1199249641 * SecurityManager_Decode_m958562396 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___encodedPermissions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_GetLinkDemandSecurity_m888694131 (Il2CppObject * __this /* static, unused */, MethodBase_t318515428 * ___method0, RuntimeDeclSecurityActions_t2571204719 * ___cdecl1, RuntimeDeclSecurityActions_t2571204719 * ___mdecl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C"  void SecurityManager_ReflectedLinkDemandInvoke_m361815255 (Il2CppObject * __this /* static, unused */, MethodBase_t318515428 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C"  bool SecurityManager_ReflectedLinkDemandQuery_m2178382589 (Il2CppObject * __this /* static, unused */, MethodBase_t318515428 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_LinkDemand_m1921264063 (Il2CppObject * __this /* static, unused */, Assembly_t1418687608 * ___a0, RuntimeDeclSecurityActions_t2571204719 * ___klass1, RuntimeDeclSecurityActions_t2571204719 * ___method2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
