﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Rendering_StencilOp3324967291.h"
#include "UnityEngine_UnityEngine_Rendering_CompareFunction2661816155.h"
#include "UnityEngine_UnityEngine_Rendering_ColorWriteMask3214369688.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.StencilMaterial/MatEntry
struct  MatEntry_t1574154081  : public Il2CppObject
{
public:
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::baseMat
	Material_t3870600107 * ___baseMat_0;
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::customMat
	Material_t3870600107 * ___customMat_1;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::count
	int32_t ___count_2;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::stencilId
	int32_t ___stencilId_3;
	// UnityEngine.Rendering.StencilOp UnityEngine.UI.StencilMaterial/MatEntry::operation
	int32_t ___operation_4;
	// UnityEngine.Rendering.CompareFunction UnityEngine.UI.StencilMaterial/MatEntry::compareFunction
	int32_t ___compareFunction_5;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::readMask
	int32_t ___readMask_6;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::writeMask
	int32_t ___writeMask_7;
	// System.Boolean UnityEngine.UI.StencilMaterial/MatEntry::useAlphaClip
	bool ___useAlphaClip_8;
	// UnityEngine.Rendering.ColorWriteMask UnityEngine.UI.StencilMaterial/MatEntry::colorMask
	int32_t ___colorMask_9;

public:
	inline static int32_t get_offset_of_baseMat_0() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___baseMat_0)); }
	inline Material_t3870600107 * get_baseMat_0() const { return ___baseMat_0; }
	inline Material_t3870600107 ** get_address_of_baseMat_0() { return &___baseMat_0; }
	inline void set_baseMat_0(Material_t3870600107 * value)
	{
		___baseMat_0 = value;
		Il2CppCodeGenWriteBarrier(&___baseMat_0, value);
	}

	inline static int32_t get_offset_of_customMat_1() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___customMat_1)); }
	inline Material_t3870600107 * get_customMat_1() const { return ___customMat_1; }
	inline Material_t3870600107 ** get_address_of_customMat_1() { return &___customMat_1; }
	inline void set_customMat_1(Material_t3870600107 * value)
	{
		___customMat_1 = value;
		Il2CppCodeGenWriteBarrier(&___customMat_1, value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_stencilId_3() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___stencilId_3)); }
	inline int32_t get_stencilId_3() const { return ___stencilId_3; }
	inline int32_t* get_address_of_stencilId_3() { return &___stencilId_3; }
	inline void set_stencilId_3(int32_t value)
	{
		___stencilId_3 = value;
	}

	inline static int32_t get_offset_of_operation_4() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___operation_4)); }
	inline int32_t get_operation_4() const { return ___operation_4; }
	inline int32_t* get_address_of_operation_4() { return &___operation_4; }
	inline void set_operation_4(int32_t value)
	{
		___operation_4 = value;
	}

	inline static int32_t get_offset_of_compareFunction_5() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___compareFunction_5)); }
	inline int32_t get_compareFunction_5() const { return ___compareFunction_5; }
	inline int32_t* get_address_of_compareFunction_5() { return &___compareFunction_5; }
	inline void set_compareFunction_5(int32_t value)
	{
		___compareFunction_5 = value;
	}

	inline static int32_t get_offset_of_readMask_6() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___readMask_6)); }
	inline int32_t get_readMask_6() const { return ___readMask_6; }
	inline int32_t* get_address_of_readMask_6() { return &___readMask_6; }
	inline void set_readMask_6(int32_t value)
	{
		___readMask_6 = value;
	}

	inline static int32_t get_offset_of_writeMask_7() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___writeMask_7)); }
	inline int32_t get_writeMask_7() const { return ___writeMask_7; }
	inline int32_t* get_address_of_writeMask_7() { return &___writeMask_7; }
	inline void set_writeMask_7(int32_t value)
	{
		___writeMask_7 = value;
	}

	inline static int32_t get_offset_of_useAlphaClip_8() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___useAlphaClip_8)); }
	inline bool get_useAlphaClip_8() const { return ___useAlphaClip_8; }
	inline bool* get_address_of_useAlphaClip_8() { return &___useAlphaClip_8; }
	inline void set_useAlphaClip_8(bool value)
	{
		___useAlphaClip_8 = value;
	}

	inline static int32_t get_offset_of_colorMask_9() { return static_cast<int32_t>(offsetof(MatEntry_t1574154081, ___colorMask_9)); }
	inline int32_t get_colorMask_9() const { return ___colorMask_9; }
	inline int32_t* get_address_of_colorMask_9() { return &___colorMask_9; }
	inline void set_colorMask_9(int32_t value)
	{
		___colorMask_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
