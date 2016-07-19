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

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t3613479957;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t2039702646;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEven384979233.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve2820857440.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
extern "C"  void MouseState__ctor_m2621211907 (MouseState_t3613479957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
extern "C"  bool MouseState_AnyPressesThisFrame_m3921583709 (MouseState_t3613479957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
extern "C"  bool MouseState_AnyReleasesThisFrame_m2672125158 (MouseState_t3613479957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C"  ButtonState_t2039702646 * MouseState_GetButtonState_m96912714 (MouseState_t3613479957 * __this, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
extern "C"  void MouseState_SetButtonState_m3470421591 (MouseState_t3613479957 * __this, int32_t ___button0, int32_t ___stateForMouseButton1, PointerEventData_t1848751023 * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
