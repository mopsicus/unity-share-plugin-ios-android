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

// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t3046059246;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t532578791;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm532578791.h"

// System.Void Mono.Security.Authenticode.AuthenticodeBase::.ctor()
extern "C"  void AuthenticodeBase__ctor_m2245584568 (AuthenticodeBase_t3046059246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::get_PEOffset()
extern "C"  int32_t AuthenticodeBase_get_PEOffset_m2839794753 (AuthenticodeBase_t3046059246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Open(System.String)
extern "C"  void AuthenticodeBase_Open_m378302316 (AuthenticodeBase_t3046059246 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeBase::Close()
extern "C"  void AuthenticodeBase_Close_m3956444110 (AuthenticodeBase_t3046059246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeBase::ReadFirstBlock()
extern "C"  bool AuthenticodeBase_ReadFirstBlock_m2251075389 (AuthenticodeBase_t3046059246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetSecurityEntry()
extern "C"  ByteU5BU5D_t4260760469* AuthenticodeBase_GetSecurityEntry_m1581271934 (AuthenticodeBase_t3046059246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::GetHash(System.Security.Cryptography.HashAlgorithm)
extern "C"  ByteU5BU5D_t4260760469* AuthenticodeBase_GetHash_m546000790 (AuthenticodeBase_t3046059246 * __this, HashAlgorithm_t532578791 * ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
