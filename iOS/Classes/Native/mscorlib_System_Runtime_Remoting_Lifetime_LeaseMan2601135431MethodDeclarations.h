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

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t2601135431;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2542955999;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity2542955999.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern "C"  void LeaseManager__ctor_m2522116882 (LeaseManager_t2601135431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
extern "C"  void LeaseManager_SetPollTime_m4066717374 (LeaseManager_t2601135431 * __this, TimeSpan_t413522987  ___timeSpan0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C"  void LeaseManager_TrackLifetime_m1439053293 (LeaseManager_t2601135431 * __this, ServerIdentity_t2542955999 * ___identity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern "C"  void LeaseManager_StartManager_m4134605085 (LeaseManager_t2601135431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C"  void LeaseManager_StopManager_m1415465851 (LeaseManager_t2601135431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern "C"  void LeaseManager_ManageLeases_m1070826756 (LeaseManager_t2601135431 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
