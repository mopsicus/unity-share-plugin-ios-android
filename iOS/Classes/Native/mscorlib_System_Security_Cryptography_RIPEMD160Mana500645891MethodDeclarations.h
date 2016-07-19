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

// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_t500645891;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RIPEMD160Managed::.ctor()
extern "C"  void RIPEMD160Managed__ctor_m2275684522 (RIPEMD160Managed_t500645891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Initialize()
extern "C"  void RIPEMD160Managed_Initialize_m3724410922 (RIPEMD160Managed_t500645891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void RIPEMD160Managed_HashCore_m1945676962 (RIPEMD160Managed_t500645891 * __this, ByteU5BU5D_t4260760469* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::HashFinal()
extern "C"  ByteU5BU5D_t4260760469* RIPEMD160Managed_HashFinal_m3898709370 (RIPEMD160Managed_t500645891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Finalize()
extern "C"  void RIPEMD160Managed_Finalize_m3256301432 (RIPEMD160Managed_t500645891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C"  void RIPEMD160Managed_ProcessBlock_m2893762534 (RIPEMD160Managed_t500645891 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Compress()
extern "C"  void RIPEMD160Managed_Compress_m443778492 (RIPEMD160Managed_t500645891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::CompressFinal(System.UInt64)
extern "C"  void RIPEMD160Managed_CompressFinal_m4280869119 (RIPEMD160Managed_t500645891 * __this, uint64_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::ROL(System.UInt32,System.Int32)
extern "C"  uint32_t RIPEMD160Managed_ROL_m3397150607 (RIPEMD160Managed_t500645891 * __this, uint32_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::F(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_F_m1849119801 (RIPEMD160Managed_t500645891 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::G(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_G_m824425880 (RIPEMD160Managed_t500645891 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::H(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_H_m4094699255 (RIPEMD160Managed_t500645891 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::I(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_I_m3070005334 (RIPEMD160Managed_t500645891 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::J(System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t RIPEMD160Managed_J_m2045311413 (RIPEMD160Managed_t500645891 * __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_FF_m1086517667 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_GG_m1647075779 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_HH_m2207633891 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::II(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_II_m2768192003 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_JJ_m3328750115 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FFF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_FFF_m2515984407 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GGG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_GGG_m4207329144 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HHH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_HHH_m1603706585 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::III(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_III_m3295051322 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern "C"  void RIPEMD160Managed_JJJ_m691428763 (RIPEMD160Managed_t500645891 * __this, uint32_t* ___a0, uint32_t ___b1, uint32_t* ___c2, uint32_t ___d3, uint32_t ___e4, uint32_t ___x5, int32_t ___s6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
