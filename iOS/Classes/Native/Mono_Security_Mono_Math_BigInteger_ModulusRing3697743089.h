﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Math.BigInteger
struct BigInteger_t3334373499;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t3697743090  : public Il2CppObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t3334373499 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t3334373499 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t3697743090, ___mod_0)); }
	inline BigInteger_t3334373499 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t3334373499 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t3334373499 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier(&___mod_0, value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t3697743090, ___constant_1)); }
	inline BigInteger_t3334373499 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t3334373499 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t3334373499 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier(&___constant_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
