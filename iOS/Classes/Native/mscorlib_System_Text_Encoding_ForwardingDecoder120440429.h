﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t2012439129;

#include "mscorlib_System_Text_Decoder2225063046.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t120440429  : public Decoder_t2225063046
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t2012439129 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t120440429, ___encoding_2)); }
	inline Encoding_t2012439129 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t2012439129 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t2012439129 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
