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

// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t1082148534;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t1219038801;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Runtime.Remoting.ClientActivatedIdentity::.ctor(System.String,System.Type)
extern "C"  void ClientActivatedIdentity__ctor_m3634684463 (ClientActivatedIdentity_t1082148534 * __this, String_t* ___objectUri0, Type_t * ___objectType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C"  MarshalByRefObject_t1219038801 * ClientActivatedIdentity_GetServerObject_m1626506643 (ClientActivatedIdentity_t1082148534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientActivatedIdentity::OnLifetimeExpired()
extern "C"  void ClientActivatedIdentity_OnLifetimeExpired_m1622186081 (ClientActivatedIdentity_t1082148534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
