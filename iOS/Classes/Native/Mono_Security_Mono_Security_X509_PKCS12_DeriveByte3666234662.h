﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t3666234663  : public Il2CppObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t4260760469* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t4260760469* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t3666234663, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier(&____hashName_3, value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t3666234663, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t3666234663, ____password_5)); }
	inline ByteU5BU5D_t4260760469* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t4260760469** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t4260760469* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier(&____password_5, value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t3666234663, ____salt_6)); }
	inline ByteU5BU5D_t4260760469* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t4260760469** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t4260760469* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier(&____salt_6, value);
	}
};

struct DeriveBytes_t3666234663_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t4260760469* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t4260760469* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t4260760469* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t3666234663_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t4260760469* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t4260760469** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t4260760469* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier(&___keyDiversifier_0, value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t3666234663_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t4260760469* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t4260760469** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t4260760469* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier(&___ivDiversifier_1, value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t3666234663_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t4260760469* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t4260760469** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t4260760469* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier(&___macDiversifier_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
