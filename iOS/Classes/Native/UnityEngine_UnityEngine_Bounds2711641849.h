#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2711641849 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t4282066566  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t4282066566  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2711641849, ___m_Center_0)); }
	inline Vector3_t4282066566  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t4282066566 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t4282066566  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2711641849, ___m_Extents_1)); }
	inline Vector3_t4282066566  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t4282066566 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t4282066566  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Bounds
struct Bounds_t2711641849_marshaled_pinvoke
{
	Vector3_t4282066566_marshaled_pinvoke ___m_Center_0;
	Vector3_t4282066566_marshaled_pinvoke ___m_Extents_1;
};
// Native definition for marshalling of: UnityEngine.Bounds
struct Bounds_t2711641849_marshaled_com
{
	Vector3_t4282066566_marshaled_com ___m_Center_0;
	Vector3_t4282066566_marshaled_com ___m_Extents_1;
};
