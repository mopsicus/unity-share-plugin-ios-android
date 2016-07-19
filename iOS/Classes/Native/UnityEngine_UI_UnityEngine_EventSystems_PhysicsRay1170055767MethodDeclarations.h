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

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t1170055767;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t835879620;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
extern "C"  void PhysicsRaycaster__ctor_m4288212754 (PhysicsRaycaster_t1170055767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
extern "C"  Camera_t2727095145 * PhysicsRaycaster_get_eventCamera_m810838145 (PhysicsRaycaster_t1170055767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
extern "C"  int32_t PhysicsRaycaster_get_depth_m589853138 (PhysicsRaycaster_t1170055767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
extern "C"  int32_t PhysicsRaycaster_get_finalEventMask_m2246936003 (PhysicsRaycaster_t1170055767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
extern "C"  LayerMask_t3236759763  PhysicsRaycaster_get_eventMask_m610257178 (PhysicsRaycaster_t1170055767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C"  void PhysicsRaycaster_set_eventMask_m3869486707 (PhysicsRaycaster_t1170055767 * __this, LayerMask_t3236759763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void PhysicsRaycaster_Raycast_m743134250 (PhysicsRaycaster_t1170055767 * __this, PointerEventData_t1848751023 * ___eventData0, List_1_t835879620 * ___resultAppendList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C"  int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m3832860601 (Il2CppObject * __this /* static, unused */, RaycastHit_t4003175726  ___r10, RaycastHit_t4003175726  ___r21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
