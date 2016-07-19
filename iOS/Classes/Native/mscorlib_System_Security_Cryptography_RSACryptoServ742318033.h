﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t165013882;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t3258726067;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Security_Cryptography_RSA2466814310.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t742318033  : public RSA_t2466814310
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t165013882 * ___store_2;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t3258726067 * ___rsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t742318033, ___store_2)); }
	inline KeyPairPersistence_t165013882 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t165013882 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t165013882 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier(&___store_2, value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t742318033, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t742318033, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t742318033, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t742318033, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_rsa_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t742318033, ___rsa_7)); }
	inline RSAManaged_t3258726067 * get_rsa_7() const { return ___rsa_7; }
	inline RSAManaged_t3258726067 ** get_address_of_rsa_7() { return &___rsa_7; }
	inline void set_rsa_7(RSAManaged_t3258726067 * value)
	{
		___rsa_7 = value;
		Il2CppCodeGenWriteBarrier(&___rsa_7, value);
	}
};

struct RSACryptoServiceProvider_t742318033_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.RSACryptoServiceProvider::<>f__switch$map2D
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map2D_9;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t742318033_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2D_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t742318033_StaticFields, ___U3CU3Ef__switchU24map2D_9)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map2D_9() const { return ___U3CU3Ef__switchU24map2D_9; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map2D_9() { return &___U3CU3Ef__switchU24map2D_9; }
	inline void set_U3CU3Ef__switchU24map2D_9(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map2D_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2D_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
