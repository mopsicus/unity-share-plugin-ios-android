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

// Sharing
struct Sharing_t3718875324;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Sharing::.ctor()
extern "C"  void Sharing__ctor_m2359802415 (Sharing_t3718875324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sharing::shareVia(System.String,System.String,System.String,System.String)
extern "C"  void Sharing_shareVia_m1149332146 (Il2CppObject * __this /* static, unused */, String_t* ___app0, String_t* ___message1, String_t* ___url2, String_t* ___param3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sharing::ShareVia(System.String,System.String,System.String)
extern "C"  void Sharing_ShareVia_m3216142550 (Il2CppObject * __this /* static, unused */, String_t* ___app0, String_t* ___message1, String_t* ___param2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sharing::OnShareError(System.String)
extern "C"  void Sharing_OnShareError_m2677511749 (Sharing_t3718875324 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
