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

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t3788085887;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t595214213;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder595214213.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilderTokenGenerator__ctor_m3538557064 (ModuleBuilderTokenGenerator_t3788085887 * __this, ModuleBuilder_t595214213 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.String)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m1745023583 (ModuleBuilderTokenGenerator_t3788085887 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m2106467927 (ModuleBuilderTokenGenerator_t3788085887 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m399214081 (ModuleBuilderTokenGenerator_t3788085887 * __this, MethodInfo_t * ___method0, TypeU5BU5D_t3339007067* ___opt_param_types1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
