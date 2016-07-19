#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t3253367090;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t115197445;
// UnityEngine.UI.Graphic
struct Graphic_t836799438;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t775636365;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou2511441271.h"
#include "UnityEngine_UI_UnityEngine_UI_Navigation1108456480.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transitio1922345195.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock508458230.h"
#include "UnityEngine_UI_UnityEngine_UI_SpriteState2895308594.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Selection1293548283.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t1885181538  : public UIBehaviour_t2511441271
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1108456480  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t508458230  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t2895308594  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t115197445 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t836799438 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t775636365 * ___m_CanvasGroupCache_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_Navigation_3)); }
	inline Navigation_t1108456480  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t1108456480 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t1108456480  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_Colors_5)); }
	inline ColorBlock_t508458230  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t508458230 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t508458230  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_SpriteState_6)); }
	inline SpriteState_t2895308594  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t2895308594 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t2895308594  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t115197445 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t115197445 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t115197445 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_AnimationTriggers_7, value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_TargetGraphic_9)); }
	inline Graphic_t836799438 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t836799438 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t836799438 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_TargetGraphic_9, value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_12() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___m_CanvasGroupCache_12)); }
	inline List_1_t775636365 * get_m_CanvasGroupCache_12() const { return ___m_CanvasGroupCache_12; }
	inline List_1_t775636365 ** get_address_of_m_CanvasGroupCache_12() { return &___m_CanvasGroupCache_12; }
	inline void set_m_CanvasGroupCache_12(List_1_t775636365 * value)
	{
		___m_CanvasGroupCache_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_CanvasGroupCache_12, value);
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___U3CisPointerInsideU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_13() const { return ___U3CisPointerInsideU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_13() { return &___U3CisPointerInsideU3Ek__BackingField_13; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___U3CisPointerDownU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_14() const { return ___U3CisPointerDownU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_14() { return &___U3CisPointerDownU3Ek__BackingField_14; }
	inline void set_U3CisPointerDownU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t1885181538, ___U3ChasSelectionU3Ek__BackingField_15)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_15() const { return ___U3ChasSelectionU3Ek__BackingField_15; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_15() { return &___U3ChasSelectionU3Ek__BackingField_15; }
	inline void set_U3ChasSelectionU3Ek__BackingField_15(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_15 = value;
	}
};

struct Selectable_t1885181538_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t3253367090 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t1885181538_StaticFields, ___s_List_2)); }
	inline List_1_t3253367090 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t3253367090 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t3253367090 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_List_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
