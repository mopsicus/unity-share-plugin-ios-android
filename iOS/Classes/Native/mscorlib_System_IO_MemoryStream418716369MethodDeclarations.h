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

// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m3603177736 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C"  void MemoryStream__ctor_m1061194329 (MemoryStream_t418716369 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C"  void MemoryStream__ctor_m1231145921 (MemoryStream_t418716369 * __this, ByteU5BU5D_t4260760469* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C"  void MemoryStream_InternalConstructor_m661185350 (MemoryStream_t418716369 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___index1, int32_t ___count2, bool ___writable3, bool ___publicallyVisible4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
extern "C"  void MemoryStream_CheckIfClosedThrowDisposed_m1053557526 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanRead()
extern "C"  bool MemoryStream_get_CanRead_m3791450881 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanSeek()
extern "C"  bool MemoryStream_get_CanSeek_m3820205923 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanWrite()
extern "C"  bool MemoryStream_get_CanWrite_m2093513846 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
extern "C"  void MemoryStream_set_Capacity_m760203076 (MemoryStream_t418716369 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Length()
extern "C"  int64_t MemoryStream_get_Length_m588315720 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Position()
extern "C"  int64_t MemoryStream_get_Position_m2952192395 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
extern "C"  void MemoryStream_set_Position_m2686019828 (MemoryStream_t418716369 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
extern "C"  void MemoryStream_Dispose_m1459815420 (MemoryStream_t418716369 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Flush()
extern "C"  void MemoryStream_Flush_m3687125034 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t MemoryStream_Read_m3200606651 (MemoryStream_t418716369 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::ReadByte()
extern "C"  int32_t MemoryStream_ReadByte_m2432485142 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t MemoryStream_Seek_m3823297180 (MemoryStream_t418716369 * __this, int64_t ___offset0, int32_t ___loc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
extern "C"  int32_t MemoryStream_CalculateNewCapacity_m358068701 (MemoryStream_t418716369 * __this, int32_t ___minimum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Expand(System.Int32)
extern "C"  void MemoryStream_Expand_m292277479 (MemoryStream_t418716369 * __this, int32_t ___newSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
extern "C"  void MemoryStream_SetLength_m2006253408 (MemoryStream_t418716369 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::ToArray()
extern "C"  ByteU5BU5D_t4260760469* MemoryStream_ToArray_m3844655770 (MemoryStream_t418716369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void MemoryStream_Write_m1111852548 (MemoryStream_t418716369 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
extern "C"  void MemoryStream_WriteByte_m3865159134 (MemoryStream_t418716369 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
