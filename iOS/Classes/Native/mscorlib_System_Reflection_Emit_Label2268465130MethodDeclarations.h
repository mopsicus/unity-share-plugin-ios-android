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

// System.Object
struct Il2CppObject;
// System.Reflection.Emit.Label
struct Label_t2268465130;
struct Label_t2268465130_marshaled_pinvoke;
struct Label_t2268465130_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_Label2268465130.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Reflection.Emit.Label::.ctor(System.Int32)
extern "C"  void Label__ctor_m1931948774 (Label_t2268465130 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.Label::Equals(System.Object)
extern "C"  bool Label_Equals_m383261700 (Label_t2268465130 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.Label::GetHashCode()
extern "C"  int32_t Label_GetHashCode_m4062306408 (Label_t2268465130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Label_t2268465130;
struct Label_t2268465130_marshaled_pinvoke;

extern "C" void Label_t2268465130_marshal_pinvoke(const Label_t2268465130& unmarshaled, Label_t2268465130_marshaled_pinvoke& marshaled);
extern "C" void Label_t2268465130_marshal_pinvoke_back(const Label_t2268465130_marshaled_pinvoke& marshaled, Label_t2268465130& unmarshaled);
extern "C" void Label_t2268465130_marshal_pinvoke_cleanup(Label_t2268465130_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Label_t2268465130;
struct Label_t2268465130_marshaled_com;

extern "C" void Label_t2268465130_marshal_com(const Label_t2268465130& unmarshaled, Label_t2268465130_marshaled_com& marshaled);
extern "C" void Label_t2268465130_marshal_com_back(const Label_t2268465130_marshaled_com& marshaled, Label_t2268465130& unmarshaled);
extern "C" void Label_t2268465130_marshal_com_cleanup(Label_t2268465130_marshaled_com& marshaled);
