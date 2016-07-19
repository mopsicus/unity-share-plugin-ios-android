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

// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t2627072750;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t3355659985;
// UnityEngine.UI.Selectable
struct Selectable_t1885181538;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction94975348.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_SliderEvent2627072750.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate2847075725.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis3565360268.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_AxisEventD3355659985.h"

// System.Void UnityEngine.UI.Slider::.ctor()
extern "C"  void Slider__ctor_m347403018 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
extern "C"  RectTransform_t972643934 * Slider_get_fillRect_m2450877128 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
extern "C"  void Slider_set_fillRect_m3297119715 (Slider_t79469677 * __this, RectTransform_t972643934 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
extern "C"  RectTransform_t972643934 * Slider_get_handleRect_m2151134125 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
extern "C"  void Slider_set_handleRect_m3189108254 (Slider_t79469677 * __this, RectTransform_t972643934 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
extern "C"  int32_t Slider_get_direction_m2329138173 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
extern "C"  void Slider_set_direction_m1506600084 (Slider_t79469677 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
extern "C"  float Slider_get_minValue_m84589142 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C"  void Slider_set_minValue_m3023646485 (Slider_t79469677 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C"  float Slider_get_maxValue_m1907557124 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C"  void Slider_set_maxValue_m4261736743 (Slider_t79469677 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
extern "C"  bool Slider_get_wholeNumbers_m3990960296 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
extern "C"  void Slider_set_wholeNumbers_m3974827169 (Slider_t79469677 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
extern "C"  float Slider_get_value_m2021634844 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
extern "C"  void Slider_set_value_m4201041935 (Slider_t79469677 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
extern "C"  float Slider_get_normalizedValue_m2918004645 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
extern "C"  void Slider_set_normalizedValue_m3382161958 (Slider_t79469677 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C"  SliderEvent_t2627072750 * Slider_get_onValueChanged_m3585429728 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
extern "C"  void Slider_set_onValueChanged_m544103115 (Slider_t79469677 * __this, SliderEvent_t2627072750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
extern "C"  float Slider_get_stepSize_m3189751172 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Slider_Rebuild_m204900683 (Slider_t79469677 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::LayoutComplete()
extern "C"  void Slider_LayoutComplete_m3716644733 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::GraphicUpdateComplete()
extern "C"  void Slider_GraphicUpdateComplete_m837060050 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
extern "C"  void Slider_OnEnable_m683704380 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
extern "C"  void Slider_OnDisable_m160936561 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDidApplyAnimationProperties()
extern "C"  void Slider_OnDidApplyAnimationProperties_m317765809 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
extern "C"  void Slider_UpdateCachedReferences_m3913831469 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::ClampValue(System.Single)
extern "C"  float Slider_ClampValue_m4124802439 (Slider_t79469677 * __this, float ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
extern "C"  void Slider_Set_m2575079457 (Slider_t79469677 * __this, float ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
extern "C"  void Slider_Set_m2043565372 (Slider_t79469677 * __this, float ___input0, bool ___sendCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
extern "C"  void Slider_OnRectTransformDimensionsChange_m4044006958 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
extern "C"  int32_t Slider_get_axis_m591825817 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
extern "C"  bool Slider_get_reverseValue_m1915319492 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
extern "C"  void Slider_UpdateVisuals_m1355864786 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
extern "C"  void Slider_UpdateDrag_m913163651 (Slider_t79469677 * __this, PointerEventData_t1848751023 * ___eventData0, Camera_t2727095145 * ___cam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  bool Slider_MayDrag_m2965973935 (Slider_t79469677 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnPointerDown_m2064356406 (Slider_t79469677 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnDrag_m2689187441 (Slider_t79469677 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void Slider_OnMove_m3684755636 (Slider_t79469677 * __this, AxisEventData_t3355659985 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
extern "C"  Selectable_t1885181538 * Slider_FindSelectableOnLeft_m601280629 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
extern "C"  Selectable_t1885181538 * Slider_FindSelectableOnRight_m2605040784 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
extern "C"  Selectable_t1885181538 * Slider_FindSelectableOnUp_m3326038345 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
extern "C"  Selectable_t1885181538 * Slider_FindSelectableOnDown_m381983312 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnInitializePotentialDrag_m3120616467 (Slider_t79469677 * __this, PointerEventData_t1848751023 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
extern "C"  void Slider_SetDirection_m1955116790 (Slider_t79469677 * __this, int32_t ___direction0, bool ___includeRectLayouts1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m1155329269 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t1659122786 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m2086174425 (Slider_t79469677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
