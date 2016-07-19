﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Scrollbar
struct Scrollbar_t2601556940;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t3541123425;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t3355659985;
// UnityEngine.UI.Selectable
struct Selectable_t1885181538;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction522766867.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_ScrollEven3541123425.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate2847075725.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis4294105229.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_AxisEventD3355659985.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
extern "C"  void Scrollbar__ctor_m842961365 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
extern "C"  RectTransform_t972643934 * Scrollbar_get_handleRect_m2010533702 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
extern "C"  void Scrollbar_set_handleRect_m2375555625 (Scrollbar_t2601556940 * __this, RectTransform_t972643934 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
extern "C"  int32_t Scrollbar_get_direction_m2158550533 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
extern "C"  void Scrollbar_set_direction_m1167543746 (Scrollbar_t2601556940 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
extern "C"  float Scrollbar_get_value_m3398262479 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
extern "C"  void Scrollbar_set_value_m1765490852 (Scrollbar_t2601556940 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
extern "C"  float Scrollbar_get_size_m1139900549 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
extern "C"  void Scrollbar_set_size_m298852062 (Scrollbar_t2601556940 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
extern "C"  int32_t Scrollbar_get_numberOfSteps_m1873821577 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
extern "C"  void Scrollbar_set_numberOfSteps_m2505501262 (Scrollbar_t2601556940 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
extern "C"  ScrollEvent_t3541123425 * Scrollbar_get_onValueChanged_m312588368 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
extern "C"  void Scrollbar_set_onValueChanged_m2941912493 (Scrollbar_t2601556940 * __this, ScrollEvent_t3541123425 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
extern "C"  float Scrollbar_get_stepSize_m1660915953 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Scrollbar_Rebuild_m36029024 (Scrollbar_t2601556940 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::LayoutComplete()
extern "C"  void Scrollbar_LayoutComplete_m4096546066 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::GraphicUpdateComplete()
extern "C"  void Scrollbar_GraphicUpdateComplete_m3945082525 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
extern "C"  void Scrollbar_OnEnable_m2059823505 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
extern "C"  void Scrollbar_OnDisable_m4165923772 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
extern "C"  void Scrollbar_UpdateCachedReferences_m1478280386 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
extern "C"  void Scrollbar_Set_m2588040310 (Scrollbar_t2601556940 * __this, float ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
extern "C"  void Scrollbar_Set_m3384196167 (Scrollbar_t2601556940 * __this, float ___input0, bool ___sendCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
extern "C"  void Scrollbar_OnRectTransformDimensionsChange_m1089670457 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
extern "C"  int32_t Scrollbar_get_axis_m3425831999 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
extern "C"  bool Scrollbar_get_reverseValue_m581327093 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
extern "C"  void Scrollbar_UpdateVisuals_m2753592989 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_UpdateDrag_m494154322 (Scrollbar_t2601556940 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  bool Scrollbar_MayDrag_m2868972512 (Scrollbar_t2601556940 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnBeginDrag_m1703358541 (Scrollbar_t2601556940 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnDrag_m4023431036 (Scrollbar_t2601556940 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnPointerDown_m984641739 (Scrollbar_t2601556940 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
extern "C"  Il2CppObject * Scrollbar_ClickRepeat_m1553202218 (Scrollbar_t2601556940 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnPointerUp_m2249681202 (Scrollbar_t2601556940 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void Scrollbar_OnMove_m2506066825 (Scrollbar_t2601556940 * __this, AxisEventData_t3355659985 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
extern "C"  Selectable_t1885181538 * Scrollbar_FindSelectableOnLeft_m976215998 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
extern "C"  Selectable_t1885181538 * Scrollbar_FindSelectableOnRight_m1343135335 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
extern "C"  Selectable_t1885181538 * Scrollbar_FindSelectableOnUp_m2968886994 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
extern "C"  Selectable_t1885181538 * Scrollbar_FindSelectableOnDown_m756918681 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnInitializePotentialDrag_m2407430440 (Scrollbar_t2601556940 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
extern "C"  void Scrollbar_SetDirection_m826288644 (Scrollbar_t2601556940 * __this, int32_t ___direction0, bool ___includeRectLayouts1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m3229708772 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t1659122786 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m1065549160 (Scrollbar_t2601556940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
