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

// System.Security.Cryptography.KeySizes
struct KeySizes_t2106826975;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1457372358;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void KeySizes__ctor_m428291391 (KeySizes_t2106826975 * __this, int32_t ___minSize0, int32_t ___maxSize1, int32_t ___skipSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MaxSize()
extern "C"  int32_t KeySizes_get_MaxSize_m213719012 (KeySizes_t2106826975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MinSize()
extern "C"  int32_t KeySizes_get_MinSize_m986197586 (KeySizes_t2106826975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_SkipSize()
extern "C"  int32_t KeySizes_get_SkipSize_m3502127683 (KeySizes_t2106826975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegal(System.Int32)
extern "C"  bool KeySizes_IsLegal_m1623778158 (KeySizes_t2106826975 * __this, int32_t ___keySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegalKeySize(System.Security.Cryptography.KeySizes[],System.Int32)
extern "C"  bool KeySizes_IsLegalKeySize_m620693618 (Il2CppObject * __this /* static, unused */, KeySizesU5BU5D_t1457372358* ___legalKeys0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
