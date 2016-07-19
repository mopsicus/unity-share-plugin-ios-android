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

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t595214213;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1002978443;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1918497079;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t1363945486;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t143663454;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder1002978443.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder595214213.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_TypeAttributes1370933187.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder1918497079.h"
#include "mscorlib_System_Reflection_Emit_PackingSize581671168.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"

// System.Void System.Reflection.Emit.ModuleBuilder::.ctor(System.Reflection.Emit.AssemblyBuilder,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void ModuleBuilder__ctor_m2747545556 (ModuleBuilder_t595214213 * __this, AssemblyBuilder_t1002978443 * ___assb0, String_t* ___name1, String_t* ___fullyqname2, bool ___emitSymbolInfo3, bool ___transient4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern "C"  void ModuleBuilder__cctor_m1218472467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilder_basic_init_m2717692595 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t595214213 * ___ab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)
extern "C"  void ModuleBuilder_set_wrappers_type_m3721446447 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t595214213 * ___mb0, Type_t * ___ab1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ModuleBuilder::IsTransient()
extern "C"  bool ModuleBuilder_IsTransient_m233883382 (ModuleBuilder_t595214213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type)
extern "C"  TypeBuilder_t1918497079 * ModuleBuilder_DefineType_m1318627618 (ModuleBuilder_t595214213 * __this, String_t* ___name0, int32_t ___attr1, Type_t * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::AddType(System.Reflection.Emit.TypeBuilder)
extern "C"  void ModuleBuilder_AddType_m2719739433 (ModuleBuilder_t595214213 * __this, TypeBuilder_t1918497079 * ___tb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32)
extern "C"  TypeBuilder_t1918497079 * ModuleBuilder_DefineType_m913734295 (ModuleBuilder_t595214213 * __this, String_t* ___name0, int32_t ___attr1, Type_t * ___parent2, TypeU5BU5D_t3339007067* ___interfaces3, int32_t ___packingSize4, int32_t ___typesize5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[])
extern "C"  TypeBuilder_t1918497079 * ModuleBuilder_DefineType_m4205468467 (ModuleBuilder_t595214213 * __this, String_t* ___name0, int32_t ___attr1, Type_t * ___parent2, TypeU5BU5D_t3339007067* ___interfaces3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String)
extern "C"  Type_t * ModuleBuilder_GetType_m624865332 (ModuleBuilder_t595214213 * __this, String_t* ___className0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C"  TypeBuilder_t1918497079 * ModuleBuilder_search_in_array_m695084018 (ModuleBuilder_t595214213 * __this, TypeBuilderU5BU5D_t1363945486* ___arr0, int32_t ___validElementsInArray1, String_t* ___className2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_nested_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C"  TypeBuilder_t1918497079 * ModuleBuilder_search_nested_in_array_m2114996452 (ModuleBuilder_t595214213 * __this, TypeBuilderU5BU5D_t1363945486* ___arr0, int32_t ___validElementsInArray1, String_t* ___className2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)
extern "C"  Type_t * ModuleBuilder_create_modified_type_m337888899 (Il2CppObject * __this /* static, unused */, TypeBuilder_t1918497079 * ___tb0, String_t* ___modifiers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::GetMaybeNested(System.Reflection.Emit.TypeBuilder,System.String)
extern "C"  TypeBuilder_t1918497079 * ModuleBuilder_GetMaybeNested_m2935224806 (ModuleBuilder_t595214213 * __this, TypeBuilder_t1918497079 * ___t0, String_t* ___className1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * ModuleBuilder_GetType_m3034338196 (ModuleBuilder_t595214213 * __this, String_t* ___className0, bool ___throwOnError1, bool ___ignoreCase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ModuleBuilder_get_next_table_index_m3600803990 (ModuleBuilder_t595214213 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.ModuleBuilder::GetTypes()
extern "C"  TypeU5BU5D_t3339007067* ModuleBuilder_GetTypes_m2017043429 (ModuleBuilder_t595214213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)
extern "C"  int32_t ModuleBuilder_getUSIndex_m2438061448 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t595214213 * ___mb0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C"  int32_t ModuleBuilder_getToken_m242473055 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t595214213 * ___mb0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilder_getMethodToken_m628227796 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t595214213 * ___mb0, MethodInfo_t * ___method1, TypeU5BU5D_t3339007067* ___opt_param_types2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.String)
extern "C"  int32_t ModuleBuilder_GetToken_m2742869337 (ModuleBuilder_t595214213 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilder_GetToken_m1580574749 (ModuleBuilder_t595214213 * __this, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilder_GetToken_m1483830599 (ModuleBuilder_t595214213 * __this, MethodInfo_t * ___method0, TypeU5BU5D_t3339007067* ___opt_param_types1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C"  void ModuleBuilder_RegisterToken_m2593402065 (ModuleBuilder_t595214213 * __this, Il2CppObject * ___obj0, int32_t ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern "C"  Il2CppObject * ModuleBuilder_GetTokenGenerator_m4211747974 (ModuleBuilder_t595214213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ModuleBuilder::get_FileName()
extern "C"  String_t* ModuleBuilder_get_FileName_m1846030717 (ModuleBuilder_t595214213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::CreateGlobalType()
extern "C"  void ModuleBuilder_CreateGlobalType_m3592496387 (ModuleBuilder_t595214213 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
