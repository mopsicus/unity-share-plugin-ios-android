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

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t4133101135;
// System.String
struct String_t;
// System.Version
struct Version_t763695022;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t80533897;
struct SNIP_t80533897_marshaled_pinvoke;
struct SNIP_t80533897_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_StrongNameIdent80533897.h"
#include "mscorlib_System_Security_Permissions_StrongNamePub4133101135.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Version763695022.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission/SNIP::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C"  void SNIP__ctor_m3278824834 (SNIP_t80533897 * __this, StrongNamePublicKeyBlob_t4133101135 * ___pk0, String_t* ___name1, Version_t763695022 * ___version2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission/SNIP::CreateDefault()
extern "C"  SNIP_t80533897  SNIP_CreateDefault_m2821242104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsNameSubsetOf(System.String)
extern "C"  bool SNIP_IsNameSubsetOf_m2053063997 (SNIP_t80533897 * __this, String_t* ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsSubsetOf(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C"  bool SNIP_IsSubsetOf_m1761032335 (SNIP_t80533897 * __this, SNIP_t80533897  ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SNIP_t80533897;
struct SNIP_t80533897_marshaled_pinvoke;

extern "C" void SNIP_t80533897_marshal_pinvoke(const SNIP_t80533897& unmarshaled, SNIP_t80533897_marshaled_pinvoke& marshaled);
extern "C" void SNIP_t80533897_marshal_pinvoke_back(const SNIP_t80533897_marshaled_pinvoke& marshaled, SNIP_t80533897& unmarshaled);
extern "C" void SNIP_t80533897_marshal_pinvoke_cleanup(SNIP_t80533897_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SNIP_t80533897;
struct SNIP_t80533897_marshaled_com;

extern "C" void SNIP_t80533897_marshal_com(const SNIP_t80533897& unmarshaled, SNIP_t80533897_marshaled_com& marshaled);
extern "C" void SNIP_t80533897_marshal_com_back(const SNIP_t80533897_marshaled_com& marshaled, SNIP_t80533897& unmarshaled);
extern "C" void SNIP_t80533897_marshal_com_cleanup(SNIP_t80533897_marshaled_com& marshaled);
