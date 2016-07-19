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

// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t4190051248;
// System.Runtime.Remoting.Lifetime.ISponsor
struct ISponsor_t2406362949;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseSta4015278955.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern "C"  void Lease__ctor_m3651721351 (Lease_t4190051248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern "C"  TimeSpan_t413522987  Lease_get_CurrentLeaseTime_m2209505713 (Lease_t4190051248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern "C"  int32_t Lease_get_CurrentState_m2238924555 (Lease_t4190051248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern "C"  void Lease_Activate_m904773136 (Lease_t4190051248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern "C"  void Lease_set_InitialLeaseTime_m3110663295 (Lease_t4190051248 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern "C"  void Lease_set_RenewOnCallTime_m2263653821 (Lease_t4190051248 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern "C"  void Lease_set_SponsorshipTimeout_m2163989751 (Lease_t4190051248 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern "C"  TimeSpan_t413522987  Lease_Renew_m235269479 (Lease_t4190051248 * __this, TimeSpan_t413522987  ___renewalTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C"  void Lease_Unregister_m2597910745 (Lease_t4190051248 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern "C"  void Lease_UpdateState_m2503061997 (Lease_t4190051248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern "C"  void Lease_CheckNextSponsor_m4694172 (Lease_t4190051248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern "C"  void Lease_ProcessSponsorResponse_m1073931474 (Lease_t4190051248 * __this, Il2CppObject * ___state0, bool ___timedOut1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
