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

// Mono.Math.BigInteger
struct BigInteger_t3334373499;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger3334373498.h"
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor3802548591.h"

// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  int32_t PrimalityTests_GetSPPRounds_m3682781848 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi0, int32_t ___confidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::RabinMillerTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  bool PrimalityTests_RabinMillerTest_m776850607 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___n0, int32_t ___confidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
