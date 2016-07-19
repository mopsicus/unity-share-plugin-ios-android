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

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t3355659985;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t2276120119;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste2276120119.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirect2840182460.h"

// System.Void UnityEngine.EventSystems.AxisEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C"  void AxisEventData__ctor_m3411840806 (AxisEventData_t3355659985 * __this, EventSystem_t2276120119 * ___eventSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
extern "C"  Vector2_t4282066565  AxisEventData_get_moveVector_m2997093594 (AxisEventData_t3355659985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveVector(UnityEngine.Vector2)
extern "C"  void AxisEventData_set_moveVector_m286185191 (AxisEventData_t3355659985 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
extern "C"  int32_t AxisEventData_get_moveDir_m2739466109 (AxisEventData_t3355659985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveDir(UnityEngine.EventSystems.MoveDirection)
extern "C"  void AxisEventData_set_moveDir_m2213568926 (AxisEventData_t3355659985 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
