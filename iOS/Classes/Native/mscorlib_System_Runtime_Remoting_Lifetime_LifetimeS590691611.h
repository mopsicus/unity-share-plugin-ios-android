﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t2601135431;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_TimeSpan413522987.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t590691611  : public Il2CppObject
{
public:

public:
};

struct LifetimeServices_t590691611_StaticFields
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t413522987  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t413522987  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t413522987  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t413522987  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t2601135431 * ____leaseManager_4;

public:
	inline static int32_t get_offset_of__leaseManagerPollTime_0() { return static_cast<int32_t>(offsetof(LifetimeServices_t590691611_StaticFields, ____leaseManagerPollTime_0)); }
	inline TimeSpan_t413522987  get__leaseManagerPollTime_0() const { return ____leaseManagerPollTime_0; }
	inline TimeSpan_t413522987 * get_address_of__leaseManagerPollTime_0() { return &____leaseManagerPollTime_0; }
	inline void set__leaseManagerPollTime_0(TimeSpan_t413522987  value)
	{
		____leaseManagerPollTime_0 = value;
	}

	inline static int32_t get_offset_of__leaseTime_1() { return static_cast<int32_t>(offsetof(LifetimeServices_t590691611_StaticFields, ____leaseTime_1)); }
	inline TimeSpan_t413522987  get__leaseTime_1() const { return ____leaseTime_1; }
	inline TimeSpan_t413522987 * get_address_of__leaseTime_1() { return &____leaseTime_1; }
	inline void set__leaseTime_1(TimeSpan_t413522987  value)
	{
		____leaseTime_1 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_2() { return static_cast<int32_t>(offsetof(LifetimeServices_t590691611_StaticFields, ____renewOnCallTime_2)); }
	inline TimeSpan_t413522987  get__renewOnCallTime_2() const { return ____renewOnCallTime_2; }
	inline TimeSpan_t413522987 * get_address_of__renewOnCallTime_2() { return &____renewOnCallTime_2; }
	inline void set__renewOnCallTime_2(TimeSpan_t413522987  value)
	{
		____renewOnCallTime_2 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_3() { return static_cast<int32_t>(offsetof(LifetimeServices_t590691611_StaticFields, ____sponsorshipTimeout_3)); }
	inline TimeSpan_t413522987  get__sponsorshipTimeout_3() const { return ____sponsorshipTimeout_3; }
	inline TimeSpan_t413522987 * get_address_of__sponsorshipTimeout_3() { return &____sponsorshipTimeout_3; }
	inline void set__sponsorshipTimeout_3(TimeSpan_t413522987  value)
	{
		____sponsorshipTimeout_3 = value;
	}

	inline static int32_t get_offset_of__leaseManager_4() { return static_cast<int32_t>(offsetof(LifetimeServices_t590691611_StaticFields, ____leaseManager_4)); }
	inline LeaseManager_t2601135431 * get__leaseManager_4() const { return ____leaseManager_4; }
	inline LeaseManager_t2601135431 ** get_address_of__leaseManager_4() { return &____leaseManager_4; }
	inline void set__leaseManager_4(LeaseManager_t2601135431 * value)
	{
		____leaseManager_4 = value;
		Il2CppCodeGenWriteBarrier(&____leaseManager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
