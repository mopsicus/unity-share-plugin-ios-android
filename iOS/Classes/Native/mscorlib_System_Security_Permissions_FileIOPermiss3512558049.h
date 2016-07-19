#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Security_CodeAccessPermission2127220.h"
#include "mscorlib_System_Security_Permissions_FileIOPermiss2673978341.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermission
struct  FileIOPermission_t3512558049  : public CodeAccessPermission_t2127220
{
public:
	// System.Boolean System.Security.Permissions.FileIOPermission::m_Unrestricted
	bool ___m_Unrestricted_2;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllFilesAccess
	int32_t ___m_AllFilesAccess_3;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllLocalFilesAccess
	int32_t ___m_AllLocalFilesAccess_4;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::readList
	ArrayList_t3948406897 * ___readList_5;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::writeList
	ArrayList_t3948406897 * ___writeList_6;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::appendList
	ArrayList_t3948406897 * ___appendList_7;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::pathList
	ArrayList_t3948406897 * ___pathList_8;

public:
	inline static int32_t get_offset_of_m_Unrestricted_2() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049, ___m_Unrestricted_2)); }
	inline bool get_m_Unrestricted_2() const { return ___m_Unrestricted_2; }
	inline bool* get_address_of_m_Unrestricted_2() { return &___m_Unrestricted_2; }
	inline void set_m_Unrestricted_2(bool value)
	{
		___m_Unrestricted_2 = value;
	}

	inline static int32_t get_offset_of_m_AllFilesAccess_3() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049, ___m_AllFilesAccess_3)); }
	inline int32_t get_m_AllFilesAccess_3() const { return ___m_AllFilesAccess_3; }
	inline int32_t* get_address_of_m_AllFilesAccess_3() { return &___m_AllFilesAccess_3; }
	inline void set_m_AllFilesAccess_3(int32_t value)
	{
		___m_AllFilesAccess_3 = value;
	}

	inline static int32_t get_offset_of_m_AllLocalFilesAccess_4() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049, ___m_AllLocalFilesAccess_4)); }
	inline int32_t get_m_AllLocalFilesAccess_4() const { return ___m_AllLocalFilesAccess_4; }
	inline int32_t* get_address_of_m_AllLocalFilesAccess_4() { return &___m_AllLocalFilesAccess_4; }
	inline void set_m_AllLocalFilesAccess_4(int32_t value)
	{
		___m_AllLocalFilesAccess_4 = value;
	}

	inline static int32_t get_offset_of_readList_5() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049, ___readList_5)); }
	inline ArrayList_t3948406897 * get_readList_5() const { return ___readList_5; }
	inline ArrayList_t3948406897 ** get_address_of_readList_5() { return &___readList_5; }
	inline void set_readList_5(ArrayList_t3948406897 * value)
	{
		___readList_5 = value;
		Il2CppCodeGenWriteBarrier(&___readList_5, value);
	}

	inline static int32_t get_offset_of_writeList_6() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049, ___writeList_6)); }
	inline ArrayList_t3948406897 * get_writeList_6() const { return ___writeList_6; }
	inline ArrayList_t3948406897 ** get_address_of_writeList_6() { return &___writeList_6; }
	inline void set_writeList_6(ArrayList_t3948406897 * value)
	{
		___writeList_6 = value;
		Il2CppCodeGenWriteBarrier(&___writeList_6, value);
	}

	inline static int32_t get_offset_of_appendList_7() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049, ___appendList_7)); }
	inline ArrayList_t3948406897 * get_appendList_7() const { return ___appendList_7; }
	inline ArrayList_t3948406897 ** get_address_of_appendList_7() { return &___appendList_7; }
	inline void set_appendList_7(ArrayList_t3948406897 * value)
	{
		___appendList_7 = value;
		Il2CppCodeGenWriteBarrier(&___appendList_7, value);
	}

	inline static int32_t get_offset_of_pathList_8() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049, ___pathList_8)); }
	inline ArrayList_t3948406897 * get_pathList_8() const { return ___pathList_8; }
	inline ArrayList_t3948406897 ** get_address_of_pathList_8() { return &___pathList_8; }
	inline void set_pathList_8(ArrayList_t3948406897 * value)
	{
		___pathList_8 = value;
		Il2CppCodeGenWriteBarrier(&___pathList_8, value);
	}
};

struct FileIOPermission_t3512558049_StaticFields
{
public:
	// System.Char[] System.Security.Permissions.FileIOPermission::BadPathNameCharacters
	CharU5BU5D_t3324145743* ___BadPathNameCharacters_0;
	// System.Char[] System.Security.Permissions.FileIOPermission::BadFileNameCharacters
	CharU5BU5D_t3324145743* ___BadFileNameCharacters_1;

public:
	inline static int32_t get_offset_of_BadPathNameCharacters_0() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049_StaticFields, ___BadPathNameCharacters_0)); }
	inline CharU5BU5D_t3324145743* get_BadPathNameCharacters_0() const { return ___BadPathNameCharacters_0; }
	inline CharU5BU5D_t3324145743** get_address_of_BadPathNameCharacters_0() { return &___BadPathNameCharacters_0; }
	inline void set_BadPathNameCharacters_0(CharU5BU5D_t3324145743* value)
	{
		___BadPathNameCharacters_0 = value;
		Il2CppCodeGenWriteBarrier(&___BadPathNameCharacters_0, value);
	}

	inline static int32_t get_offset_of_BadFileNameCharacters_1() { return static_cast<int32_t>(offsetof(FileIOPermission_t3512558049_StaticFields, ___BadFileNameCharacters_1)); }
	inline CharU5BU5D_t3324145743* get_BadFileNameCharacters_1() const { return ___BadFileNameCharacters_1; }
	inline CharU5BU5D_t3324145743** get_address_of_BadFileNameCharacters_1() { return &___BadFileNameCharacters_1; }
	inline void set_BadFileNameCharacters_1(CharU5BU5D_t3324145743* value)
	{
		___BadFileNameCharacters_1 = value;
		Il2CppCodeGenWriteBarrier(&___BadFileNameCharacters_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
