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

// UnityEngine.UI.Toggle
struct Toggle_t110812896;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1990156785;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2054899105;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ToggleGroup1990156785.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate2847075725.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2054899105.h"

// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C"  void Toggle__ctor_m4173251063 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C"  ToggleGroup_t1990156785 * Toggle_get_group_m514230010 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C"  void Toggle_set_group_m4294827183 (Toggle_t110812896 * __this, ToggleGroup_t1990156785 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Toggle_Rebuild_m1120034174 (Toggle_t110812896 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::LayoutComplete()
extern "C"  void Toggle_LayoutComplete_m3030592304 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::GraphicUpdateComplete()
extern "C"  void Toggle_GraphicUpdateComplete_m1104468671 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C"  void Toggle_OnEnable_m975679023 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C"  void Toggle_OnDisable_m622215902 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDidApplyAnimationProperties()
extern "C"  void Toggle_OnDidApplyAnimationProperties_m3936866462 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C"  void Toggle_SetToggleGroup_m4196871663 (Toggle_t110812896 * __this, ToggleGroup_t1990156785 * ___newGroup0, bool ___setMemberValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m2105608497 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C"  void Toggle_set_isOn_m3467664234 (Toggle_t110812896 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C"  void Toggle_Set_m1284620590 (Toggle_t110812896 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C"  void Toggle_Set_m1795838095 (Toggle_t110812896 * __this, bool ___value0, bool ___sendCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C"  void Toggle_PlayEffect_m2897367561 (Toggle_t110812896 * __this, bool ___instant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Start()
extern "C"  void Toggle_Start_m3120388855 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C"  void Toggle_InternalToggle_m3534245278 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Toggle_OnPointerClick_m3273211815 (Toggle_t110812896 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void Toggle_OnSubmit_m2658606814 (Toggle_t110812896 * __this, BaseEventData_t2054899105 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Toggle_UnityEngine_UI_ICanvasElement_IsDestroyed_m3606481250 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t1659122786 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m4001149958 (Toggle_t110812896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
