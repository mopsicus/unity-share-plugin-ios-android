#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.Graphic
struct Graphic_t836799438;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou2511441271.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Mask
struct  Mask_t8826680  : public UIBehaviour_t2511441271
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t972643934 * ___m_RectTransform_2;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t836799438 * ___m_Graphic_4;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t3870600107 * ___m_MaskMaterial_5;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t3870600107 * ___m_UnmaskMaterial_6;

public:
	inline static int32_t get_offset_of_m_RectTransform_2() { return static_cast<int32_t>(offsetof(Mask_t8826680, ___m_RectTransform_2)); }
	inline RectTransform_t972643934 * get_m_RectTransform_2() const { return ___m_RectTransform_2; }
	inline RectTransform_t972643934 ** get_address_of_m_RectTransform_2() { return &___m_RectTransform_2; }
	inline void set_m_RectTransform_2(RectTransform_t972643934 * value)
	{
		___m_RectTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_2, value);
	}

	inline static int32_t get_offset_of_m_ShowMaskGraphic_3() { return static_cast<int32_t>(offsetof(Mask_t8826680, ___m_ShowMaskGraphic_3)); }
	inline bool get_m_ShowMaskGraphic_3() const { return ___m_ShowMaskGraphic_3; }
	inline bool* get_address_of_m_ShowMaskGraphic_3() { return &___m_ShowMaskGraphic_3; }
	inline void set_m_ShowMaskGraphic_3(bool value)
	{
		___m_ShowMaskGraphic_3 = value;
	}

	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(Mask_t8826680, ___m_Graphic_4)); }
	inline Graphic_t836799438 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_t836799438 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_t836799438 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Graphic_4, value);
	}

	inline static int32_t get_offset_of_m_MaskMaterial_5() { return static_cast<int32_t>(offsetof(Mask_t8826680, ___m_MaskMaterial_5)); }
	inline Material_t3870600107 * get_m_MaskMaterial_5() const { return ___m_MaskMaterial_5; }
	inline Material_t3870600107 ** get_address_of_m_MaskMaterial_5() { return &___m_MaskMaterial_5; }
	inline void set_m_MaskMaterial_5(Material_t3870600107 * value)
	{
		___m_MaskMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_MaskMaterial_5, value);
	}

	inline static int32_t get_offset_of_m_UnmaskMaterial_6() { return static_cast<int32_t>(offsetof(Mask_t8826680, ___m_UnmaskMaterial_6)); }
	inline Material_t3870600107 * get_m_UnmaskMaterial_6() const { return ___m_UnmaskMaterial_6; }
	inline Material_t3870600107 ** get_address_of_m_UnmaskMaterial_6() { return &___m_UnmaskMaterial_6; }
	inline void set_m_UnmaskMaterial_6(Material_t3870600107 * value)
	{
		___m_UnmaskMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_UnmaskMaterial_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
