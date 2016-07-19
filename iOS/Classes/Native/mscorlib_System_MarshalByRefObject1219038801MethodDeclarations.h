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

// System.MarshalByRefObject
struct MarshalByRefObject_t1219038801;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2542955999;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2484604634;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity2542955999.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.MarshalByRefObject::.ctor()
extern "C"  void MarshalByRefObject__ctor_m2306543480 (MarshalByRefObject_t1219038801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C"  ServerIdentity_t2542955999 * MarshalByRefObject_get_ObjectIdentity_m426029982 (MarshalByRefObject_t1219038801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C"  void MarshalByRefObject_set_ObjectIdentity_m3718301103 (MarshalByRefObject_t1219038801 * __this, ServerIdentity_t2542955999 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C"  ObjRef_t2484604634 * MarshalByRefObject_CreateObjRef_m574784494 (MarshalByRefObject_t1219038801 * __this, Type_t * ___requestedType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C"  Il2CppObject * MarshalByRefObject_InitializeLifetimeService_m3037236935 (MarshalByRefObject_t1219038801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
