﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Security_Policy_CodeGroup4075050400.h"
#include "mscorlib_System_Security_Permissions_FileIOPermiss2673978341.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FileCodeGroup
struct  FileCodeGroup_t3153172996  : public CodeGroup_t4075050400
{
public:
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Policy.FileCodeGroup::m_access
	int32_t ___m_access_6;

public:
	inline static int32_t get_offset_of_m_access_6() { return static_cast<int32_t>(offsetof(FileCodeGroup_t3153172996, ___m_access_6)); }
	inline int32_t get_m_access_6() const { return ___m_access_6; }
	inline int32_t* get_address_of_m_access_6() { return &___m_access_6; }
	inline void set_m_access_6(int32_t value)
	{
		___m_access_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
