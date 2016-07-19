﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3703825542;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_DateTime4283661327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t3222473765  : public Il2CppObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t4283661327  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t4283661327  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t3948406897 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t4260760469* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t3703825542 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t4260760469* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t4260760469* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier(&___issuer_0, value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___thisUpdate_2)); }
	inline DateTime_t4283661327  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t4283661327 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t4283661327  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___nextUpdate_3)); }
	inline DateTime_t4283661327  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t4283661327 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t4283661327  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___entries_4)); }
	inline ArrayList_t3948406897 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t3948406897 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t3948406897 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier(&___entries_4, value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier(&___signatureOID_5, value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___signature_6)); }
	inline ByteU5BU5D_t4260760469* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t4260760469** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t4260760469* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier(&___signature_6, value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___extensions_7)); }
	inline X509ExtensionCollection_t3703825542 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t3703825542 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t3703825542 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_7, value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___encoded_8)); }
	inline ByteU5BU5D_t4260760469* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t4260760469** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t4260760469* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier(&___encoded_8, value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765, ___hash_value_9)); }
	inline ByteU5BU5D_t4260760469* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t4260760469** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t4260760469* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier(&___hash_value_9, value);
	}
};

struct X509Crl_t3222473765_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map13_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_10() { return static_cast<int32_t>(offsetof(X509Crl_t3222473765_StaticFields, ___U3CU3Ef__switchU24map13_10)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map13_10() const { return ___U3CU3Ef__switchU24map13_10; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map13_10() { return &___U3CU3Ef__switchU24map13_10; }
	inline void set_U3CU3Ef__switchU24map13_10(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map13_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map13_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
