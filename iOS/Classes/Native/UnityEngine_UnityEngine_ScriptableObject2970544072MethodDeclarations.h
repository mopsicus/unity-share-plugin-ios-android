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

// UnityEngine.ScriptableObject
struct ScriptableObject_t2970544072;
// System.String
struct String_t;
// System.Type
struct Type_t;
struct ScriptableObject_t2970544072_marshaled_pinvoke;
struct ScriptableObject_t2970544072_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1827087273 (ScriptableObject_t2970544072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C"  void ScriptableObject_Internal_CreateScriptableObject_m2334361070 (Il2CppObject * __this /* static, unused */, ScriptableObject_t2970544072 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C"  ScriptableObject_t2970544072 * ScriptableObject_CreateInstance_m750914562 (Il2CppObject * __this /* static, unused */, String_t* ___className0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t2970544072 * ScriptableObject_CreateInstance_m3255479417 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C"  ScriptableObject_t2970544072 * ScriptableObject_CreateInstanceFromType_m3795352533 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ScriptableObject_t2970544072;
struct ScriptableObject_t2970544072_marshaled_pinvoke;

extern "C" void ScriptableObject_t2970544072_marshal_pinvoke(const ScriptableObject_t2970544072& unmarshaled, ScriptableObject_t2970544072_marshaled_pinvoke& marshaled);
extern "C" void ScriptableObject_t2970544072_marshal_pinvoke_back(const ScriptableObject_t2970544072_marshaled_pinvoke& marshaled, ScriptableObject_t2970544072& unmarshaled);
extern "C" void ScriptableObject_t2970544072_marshal_pinvoke_cleanup(ScriptableObject_t2970544072_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ScriptableObject_t2970544072;
struct ScriptableObject_t2970544072_marshaled_com;

extern "C" void ScriptableObject_t2970544072_marshal_com(const ScriptableObject_t2970544072& unmarshaled, ScriptableObject_t2970544072_marshaled_com& marshaled);
extern "C" void ScriptableObject_t2970544072_marshal_com_back(const ScriptableObject_t2970544072_marshaled_com& marshaled, ScriptableObject_t2970544072& unmarshaled);
extern "C" void ScriptableObject_t2970544072_marshal_com_cleanup(ScriptableObject_t2970544072_marshaled_com& marshaled);
