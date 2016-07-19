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

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t15847059;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t2276120119;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t835879620;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t3355659985;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2054899105;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastRes3762661364.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirect2840182460.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C"  void BaseInputModule__ctor_m2920801056 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C"  EventSystem_t2276120119 * BaseInputModule_get_eventSystem_m3949125731 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
extern "C"  void BaseInputModule_OnEnable_m3913388134 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
extern "C"  void BaseInputModule_OnDisable_m1496885127 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  RaycastResult_t3762661364  BaseInputModule_FindFirstRaycast_m3775114583 (Il2CppObject * __this /* static, unused */, List_1_t835879620 * ___candidates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
extern "C"  int32_t BaseInputModule_DetermineMoveDirection_m1298463611 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
extern "C"  int32_t BaseInputModule_DetermineMoveDirection_m1501057824 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___deadZone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  GameObject_t3674682005 * BaseInputModule_FindCommonRoot_m1904275501 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___g10, GameObject_t3674682005 * ___g21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
extern "C"  void BaseInputModule_HandlePointerExitAndEnter_m779127058 (BaseInputModule_t15847059 * __this, PointerEventData_t1848751023 * ___currentPointerData0, GameObject_t3674682005 * ___newEnterTarget1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
extern "C"  AxisEventData_t3355659985 * BaseInputModule_GetAxisEventData_m3789039491 (BaseInputModule_t15847059 * __this, float ___x0, float ___y1, float ___moveDeadZone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
extern "C"  BaseEventData_t2054899105 * BaseInputModule_GetBaseEventData_m1707430642 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool BaseInputModule_IsPointerOverGameObject_m674758553 (BaseInputModule_t15847059 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
extern "C"  bool BaseInputModule_ShouldActivateModule_m222600132 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
extern "C"  void BaseInputModule_DeactivateModule_m2572518820 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
extern "C"  void BaseInputModule_ActivateModule_m1091790819 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
extern "C"  void BaseInputModule_UpdateModule_m2691994233 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
extern "C"  bool BaseInputModule_IsModuleSupported_m4245324872 (BaseInputModule_t15847059 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
