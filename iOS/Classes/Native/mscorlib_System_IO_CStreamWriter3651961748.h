#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.TermInfoDriver
struct TermInfoDriver_t3844120886;

#include "mscorlib_System_IO_StreamWriter2705123075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.CStreamWriter
struct  CStreamWriter_t3651961748  : public StreamWriter_t2705123075
{
public:
	// System.TermInfoDriver System.IO.CStreamWriter::driver
	TermInfoDriver_t3844120886 * ___driver_13;

public:
	inline static int32_t get_offset_of_driver_13() { return static_cast<int32_t>(offsetof(CStreamWriter_t3651961748, ___driver_13)); }
	inline TermInfoDriver_t3844120886 * get_driver_13() const { return ___driver_13; }
	inline TermInfoDriver_t3844120886 ** get_address_of_driver_13() { return &___driver_13; }
	inline void set_driver_13(TermInfoDriver_t3844120886 * value)
	{
		___driver_13 = value;
		Il2CppCodeGenWriteBarrier(&___driver_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
