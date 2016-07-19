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

// System.String
struct String_t;
// UnityEngine.Color32
struct Color32_t598853688;
struct Color32_t598853688_marshaled_pinvoke;
struct Color32_t598853688_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void Color32__ctor_m576906339 (Color32_t598853688 * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color32::ToString()
extern "C"  String_t* Color32_ToString_m909782902 (Color32_t598853688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
extern "C"  Color32_t598853688  Color32_op_Implicit_m3684884838 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
extern "C"  Color_t4194546905  Color32_op_Implicit_m358459656 (Il2CppObject * __this /* static, unused */, Color32_t598853688  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Color32_t598853688;
struct Color32_t598853688_marshaled_pinvoke;

extern "C" void Color32_t598853688_marshal_pinvoke(const Color32_t598853688& unmarshaled, Color32_t598853688_marshaled_pinvoke& marshaled);
extern "C" void Color32_t598853688_marshal_pinvoke_back(const Color32_t598853688_marshaled_pinvoke& marshaled, Color32_t598853688& unmarshaled);
extern "C" void Color32_t598853688_marshal_pinvoke_cleanup(Color32_t598853688_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Color32_t598853688;
struct Color32_t598853688_marshaled_com;

extern "C" void Color32_t598853688_marshal_com(const Color32_t598853688& unmarshaled, Color32_t598853688_marshaled_com& marshaled);
extern "C" void Color32_t598853688_marshal_com_back(const Color32_t598853688_marshaled_com& marshaled, Color32_t598853688& unmarshaled);
extern "C" void Color32_t598853688_marshal_com_cleanup(Color32_t598853688_marshaled_com& marshaled);
