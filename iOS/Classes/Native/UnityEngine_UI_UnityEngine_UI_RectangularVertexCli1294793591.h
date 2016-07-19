#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RectangularVertexClipper
struct  RectangularVertexClipper_t1294793591  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] UnityEngine.UI.RectangularVertexClipper::m_WorldCorners
	Vector3U5BU5D_t215400611* ___m_WorldCorners_0;
	// UnityEngine.Vector3[] UnityEngine.UI.RectangularVertexClipper::m_CanvasCorners
	Vector3U5BU5D_t215400611* ___m_CanvasCorners_1;

public:
	inline static int32_t get_offset_of_m_WorldCorners_0() { return static_cast<int32_t>(offsetof(RectangularVertexClipper_t1294793591, ___m_WorldCorners_0)); }
	inline Vector3U5BU5D_t215400611* get_m_WorldCorners_0() const { return ___m_WorldCorners_0; }
	inline Vector3U5BU5D_t215400611** get_address_of_m_WorldCorners_0() { return &___m_WorldCorners_0; }
	inline void set_m_WorldCorners_0(Vector3U5BU5D_t215400611* value)
	{
		___m_WorldCorners_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_WorldCorners_0, value);
	}

	inline static int32_t get_offset_of_m_CanvasCorners_1() { return static_cast<int32_t>(offsetof(RectangularVertexClipper_t1294793591, ___m_CanvasCorners_1)); }
	inline Vector3U5BU5D_t215400611* get_m_CanvasCorners_1() const { return ___m_CanvasCorners_1; }
	inline Vector3U5BU5D_t215400611** get_address_of_m_CanvasCorners_1() { return &___m_CanvasCorners_1; }
	inline void set_m_CanvasCorners_1(Vector3U5BU5D_t215400611* value)
	{
		___m_CanvasCorners_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_CanvasCorners_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
