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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2542955999;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t515654137;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t1275921413;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2484604634;
// System.MarshalByRefObject
struct MarshalByRefObject_t1219038801;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t4190051248;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context515654137.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_MarshalByRefObject1219038801.h"

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C"  void ServerIdentity__ctor_m2878147351 (ServerIdentity_t2542955999 * __this, String_t* ___objectUri0, Context_t515654137 * ___context1, Type_t * ___objectType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C"  Type_t * ServerIdentity_get_ObjectType_m2513984357 (ServerIdentity_t2542955999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern "C"  void ServerIdentity_StartTrackingLifetime_m3780129911 (ServerIdentity_t2542955999 * __this, Il2CppObject * ___lease0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C"  void ServerIdentity_OnLifetimeExpired_m3354721750 (ServerIdentity_t2542955999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C"  ObjRef_t2484604634 * ServerIdentity_CreateObjRef_m4237980959 (ServerIdentity_t2542955999 * __this, Type_t * ___requestedType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern "C"  void ServerIdentity_AttachServerObject_m3921472677 (ServerIdentity_t2542955999 * __this, MarshalByRefObject_t1219038801 * ___serverObject0, Context_t515654137 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C"  Lease_t4190051248 * ServerIdentity_get_Lease_m1464633578 (ServerIdentity_t2542955999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern "C"  void ServerIdentity_DisposeServerObject_m1713667002 (ServerIdentity_t2542955999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
