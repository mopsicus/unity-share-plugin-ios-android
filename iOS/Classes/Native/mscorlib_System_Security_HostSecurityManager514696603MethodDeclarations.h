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

// System.Security.HostSecurityManager
struct HostSecurityManager_t514696603;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Reflection.Assembly
struct Assembly_t1418687608;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_HostSecurityManagerOption2658022701.h"
#include "mscorlib_System_Reflection_Assembly1418687608.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"

// System.Void System.Security.HostSecurityManager::.ctor()
extern "C"  void HostSecurityManager__ctor_m3629435166 (HostSecurityManager_t514696603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.HostSecurityManagerOptions System.Security.HostSecurityManager::get_Flags()
extern "C"  int32_t HostSecurityManager_get_Flags_m3049980733 (HostSecurityManager_t514696603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.HostSecurityManager::ProvideAssemblyEvidence(System.Reflection.Assembly,System.Security.Policy.Evidence)
extern "C"  Evidence_t4141397151 * HostSecurityManager_ProvideAssemblyEvidence_m3937790759 (HostSecurityManager_t514696603 * __this, Assembly_t1418687608 * ___loadedAssembly0, Evidence_t4141397151 * ___inputEvidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
