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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1002978443;
// System.Reflection.AssemblyName
struct AssemblyName_t2915647011;
// System.String
struct String_t;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t595214213;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1003119691;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_AssemblyName2915647011.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc2771074959.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder1002978443.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C"  void AssemblyBuilder__ctor_m558768500 (AssemblyBuilder_t1002978443 * __this, AssemblyName_t2915647011 * ___n0, String_t* ___directory1, int32_t ___access2, bool ___corlib_internal3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C"  void AssemblyBuilder_basic_init_m2666501043 (Il2CppObject * __this /* static, unused */, AssemblyBuilder_t1002978443 * ___ab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m2002209681 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.Boolean)
extern "C"  ModuleBuilder_t595214213 * AssemblyBuilder_DefineDynamicModule_m1810872554 (AssemblyBuilder_t1002978443 * __this, String_t* ___name0, bool ___emitSymbolInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  ModuleBuilder_t595214213 * AssemblyBuilder_DefineDynamicModule_m3735477071 (AssemblyBuilder_t1002978443 * __this, String_t* ___name0, String_t* ___fileName1, bool ___emitSymbolInfo2, bool ___transient3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t1003119691* AssemblyBuilder_GetModulesInternal_m2718782039 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t3339007067* AssemblyBuilder_GetTypes_m3461115874 (AssemblyBuilder_t1002978443 * __this, bool ___exportedOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m332025933 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C"  bool AssemblyBuilder_get_IsSave_m1537194370 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C"  bool AssemblyBuilder_get_IsRun_m1296175624 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C"  String_t* AssemblyBuilder_get_AssemblyDir_m1726853645 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t3991598821 * AssemblyBuilder_not_supported_m186391929 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C"  void AssemblyBuilder_check_name_and_filename_m153452157 (AssemblyBuilder_t1002978443 * __this, String_t* ___name0, String_t* ___fileName1, bool ___fileNeedsToExists2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t2915647011 * AssemblyBuilder_UnprotectedGetName_m3388533202 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
