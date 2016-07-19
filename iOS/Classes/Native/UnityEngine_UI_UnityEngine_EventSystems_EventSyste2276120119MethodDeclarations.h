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

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t2276120119;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t15847059;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2054899105;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t835879620;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste2276120119.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2054899105.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastRes3762661364.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputMod15847059.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
extern "C"  void EventSystem__ctor_m1614698108 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
extern "C"  void EventSystem__cctor_m2328904881 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C"  EventSystem_t2276120119 * EventSystem_get_current_m3483537871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
extern "C"  void EventSystem_set_current_m3070848986 (Il2CppObject * __this /* static, unused */, EventSystem_t2276120119 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C"  bool EventSystem_get_sendNavigationEvents_m2758658484 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
extern "C"  void EventSystem_set_sendNavigationEvents_m332228817 (EventSystem_t2276120119 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
extern "C"  int32_t EventSystem_get_pixelDragThreshold_m3269248010 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
extern "C"  void EventSystem_set_pixelDragThreshold_m3094844391 (EventSystem_t2276120119 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
extern "C"  BaseInputModule_t15847059 * EventSystem_get_currentInputModule_m1694913485 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C"  GameObject_t3674682005 * EventSystem_get_firstSelectedGameObject_m540473918 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
extern "C"  void EventSystem_set_firstSelectedGameObject_m1040716465 (EventSystem_t2276120119 * __this, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C"  GameObject_t3674682005 * EventSystem_get_currentSelectedGameObject_m4236083783 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
extern "C"  GameObject_t3674682005 * EventSystem_get_lastSelectedGameObject_m2351525314 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
extern "C"  void EventSystem_UpdateModules_m2696555928 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
extern "C"  bool EventSystem_get_alreadySelecting_m3074958957 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventSystem_SetSelectedGameObject_m2116591616 (EventSystem_t2276120119 * __this, GameObject_t3674682005 * ___selected0, BaseEventData_t2054899105 * ___pointer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
extern "C"  BaseEventData_t2054899105 * EventSystem_get_baseEventDataCache_m1763003665 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C"  void EventSystem_SetSelectedGameObject_m1869236832 (EventSystem_t2276120119 * __this, GameObject_t3674682005 * ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
extern "C"  int32_t EventSystem_RaycastComparer_m3178660990 (Il2CppObject * __this /* static, unused */, RaycastResult_t3762661364  ___lhs0, RaycastResult_t3762661364  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void EventSystem_RaycastAll_m538533603 (EventSystem_t2276120119 * __this, PointerEventData_t1848751023 * ___eventData0, List_1_t835879620 * ___raycastResults1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C"  bool EventSystem_IsPointerOverGameObject_m4276458404 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
extern "C"  bool EventSystem_IsPointerOverGameObject_m4003394293 (EventSystem_t2276120119 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
extern "C"  void EventSystem_OnEnable_m1909198730 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
extern "C"  void EventSystem_OnDisable_m3791523043 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
extern "C"  void EventSystem_TickModules_m4074329476 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
extern "C"  void EventSystem_Update_m242895889 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
extern "C"  void EventSystem_ChangeEventModule_m1717769816 (EventSystem_t2276120119 * __this, BaseInputModule_t15847059 * ___module0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
extern "C"  String_t* EventSystem_ToString_m3844548247 (EventSystem_t2276120119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
