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

// System.Text.RegularExpressions.PatternCompiler
struct PatternCompiler_t3989440925;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t48641242;
// System.Collections.BitArray
struct BitArray_t3577534870;
// System.String
struct String_t;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t378484359;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_OpCode2459786422.h"
#include "System_System_Text_RegularExpressions_OpFlags3204502900.h"
#include "System_System_Text_RegularExpressions_Category1962353414.h"
#include "mscorlib_System_Collections_BitArray3577534870.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Text_RegularExpressions_Position2659647281.h"
#include "System_System_Text_RegularExpressions_LinkRef378484359.h"

// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
extern "C"  void PatternCompiler__ctor_m640185722 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C"  uint16_t PatternCompiler_EncodeOp_m3438255148 (Il2CppObject * __this /* static, unused */, uint16_t ___op0, uint16_t ___flags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
extern "C"  Il2CppObject * PatternCompiler_GetMachineFactory_m1519739313 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
extern "C"  void PatternCompiler_EmitFalse_m722778152 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
extern "C"  void PatternCompiler_EmitTrue_m2656833483 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
extern "C"  void PatternCompiler_EmitCount_m3183303781 (PatternCompiler_t3989440925 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitCharacter_m3311297038 (PatternCompiler_t3989440925 * __this, Il2CppChar ___c0, bool ___negate1, bool ___ignore2, bool ___reverse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitCategory_m2446864524 (PatternCompiler_t3989440925 * __this, uint16_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitNotCategory_m3974981937 (PatternCompiler_t3989440925 * __this, uint16_t ___cat0, bool ___negate1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitRange_m3212229739 (PatternCompiler_t3989440925 * __this, Il2CppChar ___lo0, Il2CppChar ___hi1, bool ___negate2, bool ___ignore3, bool ___reverse4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitSet_m2895987935 (PatternCompiler_t3989440925 * __this, Il2CppChar ___lo0, BitArray_t3577534870 * ___set1, bool ___negate2, bool ___ignore3, bool ___reverse4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitString_m2313515668 (PatternCompiler_t3989440925 * __this, String_t* ___str0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C"  void PatternCompiler_EmitPosition_m3189000342 (PatternCompiler_t3989440925 * __this, uint16_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
extern "C"  void PatternCompiler_EmitOpen_m1906123864 (PatternCompiler_t3989440925 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
extern "C"  void PatternCompiler_EmitClose_m2953485710 (PatternCompiler_t3989440925 * __this, int32_t ___gid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitBalanceStart_m153593536 (PatternCompiler_t3989440925 * __this, int32_t ___gid0, int32_t ___balance1, bool ___capture2, LinkRef_t378484359 * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
extern "C"  void PatternCompiler_EmitBalance_m1234756257 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitReference_m2226804289 (PatternCompiler_t3989440925 * __this, int32_t ___gid0, bool ___ignore1, bool ___reverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitIfDefined_m1998800056 (PatternCompiler_t3989440925 * __this, int32_t ___gid0, LinkRef_t378484359 * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitSub_m1250623225 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___tail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitTest_m3519274007 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___yes0, LinkRef_t378484359 * ___tail1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitBranch_m2313940051 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___next0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitJump_m4159061471 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitRepeat_m3913724843 (PatternCompiler_t3989440925 * __this, int32_t ___min0, int32_t ___max1, bool ___lazy2, LinkRef_t378484359 * ___until3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitUntil_m2917116183 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___repeat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitFastRepeat_m1340139951 (PatternCompiler_t3989440925 * __this, int32_t ___min0, int32_t ___max1, bool ___lazy2, LinkRef_t378484359 * ___tail3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitIn_m2264896214 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___tail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitAnchor_m1283354284 (PatternCompiler_t3989440925 * __this, bool ___reverse0, int32_t ___offset1, LinkRef_t378484359 * ___tail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C"  void PatternCompiler_EmitInfo_m2915026460 (PatternCompiler_t3989440925 * __this, int32_t ___count0, int32_t ___min1, int32_t ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
extern "C"  LinkRef_t378484359 * PatternCompiler_NewLink_m629334431 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_ResolveLink_m1754537234 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___lref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
extern "C"  void PatternCompiler_EmitBranchEnd_m676018014 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
extern "C"  void PatternCompiler_EmitAlternationEnd_m2098295803 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  uint16_t PatternCompiler_MakeFlags_m1692978267 (Il2CppObject * __this /* static, unused */, bool ___negate0, bool ___ignore1, bool ___reverse2, bool ___lazy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
extern "C"  void PatternCompiler_Emit_m992741850 (PatternCompiler_t3989440925 * __this, uint16_t ___op0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C"  void PatternCompiler_Emit_m1318559571 (PatternCompiler_t3989440925 * __this, uint16_t ___op0, uint16_t ___flags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
extern "C"  void PatternCompiler_Emit_m2066671991 (PatternCompiler_t3989440925 * __this, uint16_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
extern "C"  int32_t PatternCompiler_get_CurrentAddress_m1919164478 (PatternCompiler_t3989440925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_BeginLink_m4071458319 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___lref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitLink_m116538795 (PatternCompiler_t3989440925 * __this, LinkRef_t378484359 * ___lref0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
