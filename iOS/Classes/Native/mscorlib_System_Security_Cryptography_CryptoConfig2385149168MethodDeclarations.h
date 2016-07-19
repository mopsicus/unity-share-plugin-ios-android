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

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct CryptoHandler_t2385149168;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t383390549;
// System.String
struct String_t;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t3948789402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "mscorlib_Mono_Xml_SmallXmlParser383390549.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::.ctor(System.Collections.Hashtable,System.Collections.Hashtable)
extern "C"  void CryptoHandler__ctor_m2727661314 (CryptoHandler_t2385149168 * __this, Hashtable_t1407064410 * ___algorithms0, Hashtable_t1407064410 * ___oid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void CryptoHandler_OnStartParsing_m3648449076 (CryptoHandler_t2385149168 * __this, SmallXmlParser_t383390549 * ___parser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void CryptoHandler_OnEndParsing_m3623355181 (CryptoHandler_t2385149168 * __this, SmallXmlParser_t383390549 * ___parser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig/CryptoHandler::Get(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C"  String_t* CryptoHandler_Get_m2020132057 (CryptoHandler_t2385149168 * __this, Il2CppObject * ___attrs0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void CryptoHandler_OnStartElement_m3610541563 (CryptoHandler_t2385149168 * __this, String_t* ___name0, Il2CppObject * ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndElement(System.String)
extern "C"  void CryptoHandler_OnEndElement_m2277163106 (CryptoHandler_t2385149168 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnProcessingInstruction(System.String,System.String)
extern "C"  void CryptoHandler_OnProcessingInstruction_m1721670208 (CryptoHandler_t2385149168 * __this, String_t* ___name0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnChars(System.String)
extern "C"  void CryptoHandler_OnChars_m1426696290 (CryptoHandler_t2385149168 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnIgnorableWhitespace(System.String)
extern "C"  void CryptoHandler_OnIgnorableWhitespace_m3777740021 (CryptoHandler_t2385149168 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
