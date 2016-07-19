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

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_t3771003169;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t3613479957;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2054899105;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UnityEngine_Touch4210255029.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve2820857440.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2054899105.h"

// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
extern "C"  void PointerInputModule__ctor_m2748126408 (PointerInputModule_t3771003169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
extern "C"  bool PointerInputModule_GetPointerData_m1554981113 (PointerInputModule_t3771003169 * __this, int32_t ___id0, PointerEventData_t1848751023 ** ___data1, bool ___create2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::RemovePointerData(UnityEngine.EventSystems.PointerEventData)
extern "C"  void PointerInputModule_RemovePointerData_m3101459861 (PointerInputModule_t3771003169 * __this, PointerEventData_t1848751023 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetTouchPointerEventData(UnityEngine.Touch,System.Boolean&,System.Boolean&)
extern "C"  PointerEventData_t1848751023 * PointerInputModule_GetTouchPointerEventData_m2194758459 (PointerInputModule_t3771003169 * __this, Touch_t4210255029  ___input0, bool* ___pressed1, bool* ___released2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
extern "C"  void PointerInputModule_CopyFromTo_m431867808 (PointerInputModule_t3771003169 * __this, PointerEventData_t1848751023 * ___from0, PointerEventData_t1848751023 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule::StateForMouseButton(System.Int32)
extern "C"  int32_t PointerInputModule_StateForMouseButton_m1241430345 (Il2CppObject * __this /* static, unused */, int32_t ___buttonId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData()
extern "C"  MouseState_t3613479957 * PointerInputModule_GetMousePointerEventData_m1489718224 (PointerInputModule_t3771003169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData(System.Int32)
extern "C"  MouseState_t3613479957 * PointerInputModule_GetMousePointerEventData_m3291859233 (PointerInputModule_t3771003169 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetLastPointerEventData(System.Int32)
extern "C"  PointerEventData_t1848751023 * PointerInputModule_GetLastPointerEventData_m238778665 (PointerInputModule_t3771003169 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C"  bool PointerInputModule_ShouldStartDrag_m1910083073 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___pressPos0, Vector2_t4282066565  ___currentPos1, float ___threshold2, bool ___useDragThreshold3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData)
extern "C"  void PointerInputModule_ProcessMove_m2382689080 (PointerInputModule_t3771003169 * __this, PointerEventData_t1848751023 * ___pointerEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void PointerInputModule_ProcessDrag_m1875452405 (PointerInputModule_t3771003169 * __this, PointerEventData_t1848751023 * ___pointerEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool PointerInputModule_IsPointerOverGameObject_m1132541469 (PointerInputModule_t3771003169 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::ClearSelection()
extern "C"  void PointerInputModule_ClearSelection_m1490775995 (PointerInputModule_t3771003169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerInputModule::ToString()
extern "C"  String_t* PointerInputModule_ToString_m1837754533 (PointerInputModule_t3771003169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C"  void PointerInputModule_DeselectIfSelectionChanged_m522880394 (PointerInputModule_t3771003169 * __this, GameObject_t3674682005 * ___currentOverGo0, BaseEventData_t2054899105 * ___pointerEvent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
