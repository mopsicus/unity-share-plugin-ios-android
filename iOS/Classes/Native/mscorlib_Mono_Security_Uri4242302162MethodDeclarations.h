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

// Mono.Security.Uri
struct Uri_t4242302162;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_Mono_Security_UriPartial3152514177.h"

// System.Void Mono.Security.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m1155355095 (Uri_t4242302162 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean)
extern "C"  void Uri__ctor_m1769486534 (Uri_t4242302162 * __this, String_t* ___uriString0, bool ___dontEscape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean,System.Boolean)
extern "C"  void Uri__ctor_m3793925623 (Uri_t4242302162 * __this, String_t* ___uriString0, bool ___dontEscape1, bool ___reduce2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::.cctor()
extern "C"  void Uri__cctor_m742217218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m3277444635 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Host()
extern "C"  String_t* Uri_get_Host_m4135390343 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsFile()
extern "C"  bool Uri_get_IsFile_m2871841446 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsLoopback()
extern "C"  bool Uri_get_IsLoopback_m3836686965 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::get_IsUnc()
extern "C"  bool Uri_get_IsUnc_m1907746594 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_LocalPath()
extern "C"  String_t* Uri_get_LocalPath_m2667586067 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m869646788 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::Equals(System.Object)
extern "C"  bool Uri_Equals_m849712830 (Uri_t4242302162 * __this, Il2CppObject * ___comparant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetHashCode()
extern "C"  int32_t Uri_GetHashCode_m1494332310 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetLeftPart(Mono.Security.UriPartial)
extern "C"  String_t* Uri_GetLeftPart_m4236715940 (Uri_t4242302162 * __this, int32_t ___part0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::FromHex(System.Char)
extern "C"  int32_t Uri_FromHex_m595312135 (Il2CppObject * __this /* static, unused */, Il2CppChar ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::HexEscape(System.Char)
extern "C"  String_t* Uri_HexEscape_m4203453589 (Il2CppObject * __this /* static, unused */, Il2CppChar ___character0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Mono.Security.Uri::HexUnescape(System.String,System.Int32&)
extern "C"  Il2CppChar Uri_HexUnescape_m1235944411 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexDigit(System.Char)
extern "C"  bool Uri_IsHexDigit_m111893066 (Il2CppObject * __this /* static, unused */, Il2CppChar ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsHexEncoding(System.String,System.Int32)
extern "C"  bool Uri_IsHexEncoding_m3362216964 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::ToString()
extern "C"  String_t* Uri_ToString_m3655767874 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String)
extern "C"  String_t* Uri_EscapeString_m865399610 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Uri_EscapeString_m510645283 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___escapeReserved1, bool ___escapeHex2, bool ___escapeBrackets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse()
extern "C"  void Uri_Parse_m1614870044 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String)
extern "C"  String_t* Uri_Unescape_m986112850 (Uri_t4242302162 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Unescape(System.String,System.Boolean)
extern "C"  String_t* Uri_Unescape_m3291488747 (Uri_t4242302162 * __this, String_t* ___str0, bool ___excludeSharp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsUNC(System.String)
extern "C"  void Uri_ParseAsWindowsUNC_m3194052717 (Uri_t4242302162 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsWindowsAbsoluteFilePath_m840662803 (Uri_t4242302162 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C"  void Uri_ParseAsUnixAbsoluteFilePath_m2645699316 (Uri_t4242302162 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Uri::Parse(System.String)
extern "C"  void Uri_Parse_m2988602982 (Uri_t4242302162 * __this, String_t* ___uriString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::Reduce(System.String)
extern "C"  String_t* Uri_Reduce_m4136862598 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetSchemeDelimiter(System.String)
extern "C"  String_t* Uri_GetSchemeDelimiter_m2082537472 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Uri::GetDefaultPort(System.String)
extern "C"  int32_t Uri_GetDefaultPort_m3664069177 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C"  String_t* Uri_GetOpaqueWiseSchemeDelimiter_m2374833565 (Uri_t4242302162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Uri::IsPredefinedScheme(System.String)
extern "C"  bool Uri_IsPredefinedScheme_m2138553750 (Il2CppObject * __this /* static, unused */, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
