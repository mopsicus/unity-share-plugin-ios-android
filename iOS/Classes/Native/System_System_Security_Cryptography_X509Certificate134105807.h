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

#include "System_System_Security_Cryptography_X509Certificat3645370647.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1762590658.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct  X509BasicConstraintsExtension_t134105807  : public X509Extension_t3645370647
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_certificateAuthority
	bool ____certificateAuthority_6;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_hasPathLengthConstraint
	bool ____hasPathLengthConstraint_7;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_pathLengthConstraint
	int32_t ____pathLengthConstraint_8;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_status
	int32_t ____status_9;

public:
	inline static int32_t get_offset_of__certificateAuthority_6() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t134105807, ____certificateAuthority_6)); }
	inline bool get__certificateAuthority_6() const { return ____certificateAuthority_6; }
	inline bool* get_address_of__certificateAuthority_6() { return &____certificateAuthority_6; }
	inline void set__certificateAuthority_6(bool value)
	{
		____certificateAuthority_6 = value;
	}

	inline static int32_t get_offset_of__hasPathLengthConstraint_7() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t134105807, ____hasPathLengthConstraint_7)); }
	inline bool get__hasPathLengthConstraint_7() const { return ____hasPathLengthConstraint_7; }
	inline bool* get_address_of__hasPathLengthConstraint_7() { return &____hasPathLengthConstraint_7; }
	inline void set__hasPathLengthConstraint_7(bool value)
	{
		____hasPathLengthConstraint_7 = value;
	}

	inline static int32_t get_offset_of__pathLengthConstraint_8() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t134105807, ____pathLengthConstraint_8)); }
	inline int32_t get__pathLengthConstraint_8() const { return ____pathLengthConstraint_8; }
	inline int32_t* get_address_of__pathLengthConstraint_8() { return &____pathLengthConstraint_8; }
	inline void set__pathLengthConstraint_8(int32_t value)
	{
		____pathLengthConstraint_8 = value;
	}

	inline static int32_t get_offset_of__status_9() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t134105807, ____status_9)); }
	inline int32_t get__status_9() const { return ____status_9; }
	inline int32_t* get_address_of__status_9() { return &____status_9; }
	inline void set__status_9(int32_t value)
	{
		____status_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
