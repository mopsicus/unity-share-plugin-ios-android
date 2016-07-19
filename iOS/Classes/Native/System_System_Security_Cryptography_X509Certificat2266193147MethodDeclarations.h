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

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t2266193147;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t3645370647;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
extern "C"  void X509ExtensionEnumerator__ctor_m2165217671 (X509ExtensionEnumerator_t2266193147 * __this, ArrayList_t3948406897 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m936939552 (X509ExtensionEnumerator_t2266193147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
extern "C"  X509Extension_t3645370647 * X509ExtensionEnumerator_get_Current_m3895268839 (X509ExtensionEnumerator_t2266193147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
extern "C"  bool X509ExtensionEnumerator_MoveNext_m1312248716 (X509ExtensionEnumerator_t2266193147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::Reset()
extern "C"  void X509ExtensionEnumerator_Reset_m1710656691 (X509ExtensionEnumerator_t2266193147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
