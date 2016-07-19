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
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_BigInteger_Sign162809939.h"
#include "Mono_Security_Mono_Math_BigInteger3334373498.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber1757673517.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C"  void BigInteger__ctor_m2610662484 (BigInteger_t3334373499 * __this, int32_t ___sign0, uint32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C"  void BigInteger__ctor_m1318440774 (BigInteger_t3334373499 * __this, BigInteger_t3334373499 * ___bi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C"  void BigInteger__ctor_m3547305722 (BigInteger_t3334373499 * __this, BigInteger_t3334373499 * ___bi0, uint32_t ___len1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m2747162922 (BigInteger_t3334373499 * __this, ByteU5BU5D_t4260760469* ___inData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C"  void BigInteger__ctor_m1050530395 (BigInteger_t3334373499 * __this, uint32_t ___ui0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m2261677710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C"  RandomNumberGenerator_t1757673517 * BigInteger_get_Rng_m1505693788 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C"  BigInteger_t3334373499 * BigInteger_GenerateRandom_m2595866790 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, RandomNumberGenerator_t1757673517 * ___rng1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t3334373499 * BigInteger_GenerateRandom_m1343108780 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C"  int32_t BigInteger_BitCount_m3880753871 (BigInteger_t3334373499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C"  bool BigInteger_TestBit_m4085687739 (BigInteger_t3334373499 * __this, int32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C"  void BigInteger_SetBit_m3067778314 (BigInteger_t3334373499 * __this, uint32_t ___bitNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C"  void BigInteger_SetBit_m989579571 (BigInteger_t3334373499 * __this, uint32_t ___bitNum0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C"  int32_t BigInteger_LowestSetBit_m644775850 (BigInteger_t3334373499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t4260760469* BigInteger_GetBytes_m561587716 (BigInteger_t3334373499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C"  String_t* BigInteger_ToString_m3209284166 (BigInteger_t3334373499 * __this, uint32_t ___radix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C"  String_t* BigInteger_ToString_m2413330434 (BigInteger_t3334373499 * __this, uint32_t ___radix0, String_t* ___characterSet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C"  void BigInteger_Normalize_m2451454954 (BigInteger_t3334373499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C"  void BigInteger_Clear_m542683434 (BigInteger_t3334373499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m3211366534 (BigInteger_t3334373499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m1505524532 (BigInteger_t3334373499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m4043809186 (BigInteger_t3334373499 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373499 * BigInteger_ModInverse_m560616920 (BigInteger_t3334373499 * __this, BigInteger_t3334373499 * ___modulus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373499 * BigInteger_ModPow_m837755469 (BigInteger_t3334373499 * __this, BigInteger_t3334373499 * ___exp0, BigInteger_t3334373499 * ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C"  BigInteger_t3334373499 * BigInteger_GeneratePseudoPrime_m323167868 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C"  void BigInteger_Incr2_m1628594427 (BigInteger_t3334373499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C"  BigInteger_t3334373499 * BigInteger_op_Implicit_m638921272 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t3334373499 * BigInteger_op_Implicit_m2620841043 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373499 * BigInteger_op_Addition_m1737862829 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373499 * BigInteger_op_Subtraction_m3436814701 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t BigInteger_op_Modulus_m465134612 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi0, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373499 * BigInteger_op_Modulus_m2858145418 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373499 * BigInteger_op_Division_m1824126044 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373499 * BigInteger_op_Multiply_m2896976517 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t3334373499 * BigInteger_op_LeftShift_m2333016656 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t3334373499 * BigInteger_op_RightShift_m3774983213 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, int32_t ___shiftVal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Equality_m1195898850 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Inequality_m4000708231 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, uint32_t ___ui1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Equality_m1709618143 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Inequality_m549511578 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m3422164694 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m1693109759 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m2091126915 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThanOrEqual_m2413275450 (Il2CppObject * __this /* static, unused */, BigInteger_t3334373499 * ___bi10, BigInteger_t3334373499 * ___bi21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
