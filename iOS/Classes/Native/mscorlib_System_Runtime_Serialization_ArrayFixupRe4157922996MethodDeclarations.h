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

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t4157922996;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2228689236;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord402472668.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2228689236.h"

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C"  void ArrayFixupRecord__ctor_m1595031114 (ArrayFixupRecord_t4157922996 * __this, ObjectRecord_t402472668 * ___objectToBeFixed0, int32_t ___index1, ObjectRecord_t402472668 * ___objectRequired2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void ArrayFixupRecord_FixupImpl_m3206607916 (ArrayFixupRecord_t4157922996 * __this, ObjectManager_t2228689236 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
