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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1499877190;
// System.Reflection.Module
struct Module_t1394482686;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t143663454;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t194563060;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t4136801618;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module1394482686.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Reflection_Emit_OpCode3389331186.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_Emit_Label2268465130.h"
#include "mscorlib_System_Reflection_ConstructorInfo4136801618.h"
#include "mscorlib_System_Reflection_FieldInfo3973053266.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder194563060.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator1499877190.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C"  void ILGenerator__ctor_m363767667 (ILGenerator_t1499877190 * __this, Module_t1394482686 * ___m0, Il2CppObject * ___token_gen1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C"  void ILGenerator__cctor_m152040660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C"  void ILGenerator_add_token_fixup_m1030891159 (ILGenerator_t1499877190 * __this, MemberInfo_t * ___mi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C"  void ILGenerator_make_room_m3150005908 (ILGenerator_t1499877190 * __this, int32_t ___nbytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C"  void ILGenerator_emit_int_m1452131359 (ILGenerator_t1499877190 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_ll_emit_m2322068804 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C"  int32_t ILGenerator_target_len_m3025186431 (Il2CppObject * __this /* static, unused */, OpCode_t3389331186  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C"  LocalBuilder_t194563060 * ILGenerator_DeclareLocal_m431075649 (ILGenerator_t1499877190 * __this, Type_t * ___localType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern "C"  LocalBuilder_t194563060 * ILGenerator_DeclareLocal_m1507842076 (ILGenerator_t1499877190 * __this, Type_t * ___localType0, bool ___pinned1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern "C"  Label_t2268465130  ILGenerator_DefineLabel_m2892013666 (ILGenerator_t1499877190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_Emit_m1513421455 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C"  void ILGenerator_Emit_m1177588532 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, uint8_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C"  void ILGenerator_Emit_m726728631 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, ConstructorInfo_t4136801618 * ___con1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern "C"  void ILGenerator_Emit_m899075895 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, FieldInfo_t * ___field1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C"  void ILGenerator_Emit_m2335703720 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, int32_t ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern "C"  void ILGenerator_Emit_m628373050 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, Label_t2268465130  ___label1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern "C"  void ILGenerator_Emit_m3548472916 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, LocalBuilder_t194563060 * ___local1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C"  void ILGenerator_Emit_m1087212740 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, MethodInfo_t * ___meth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern "C"  void ILGenerator_Emit_m1535602323 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, MethodInfo_t * ___method1, int32_t ___token2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern "C"  void ILGenerator_Emit_m4144037003 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C"  void ILGenerator_Emit_m1194208066 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, Type_t * ___cls1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern "C"  void ILGenerator_EmitCall_m3720990163 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, MethodInfo_t * ___methodInfo1, TypeU5BU5D_t3339007067* ___optionalParameterTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern "C"  void ILGenerator_MarkLabel_m2628862049 (ILGenerator_t1499877190 * __this, Label_t2268465130  ___loc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C"  void ILGenerator_label_fixup_m2969084380 (ILGenerator_t1499877190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t ILGenerator_Mono_GetCurrentOffset_m436459828 (Il2CppObject * __this /* static, unused */, ILGenerator_t1499877190 * ___ig0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
