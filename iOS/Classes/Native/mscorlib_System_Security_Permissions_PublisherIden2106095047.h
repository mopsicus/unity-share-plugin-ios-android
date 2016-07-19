#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;

#include "mscorlib_System_Security_CodeAccessPermission2127220.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PublisherIdentityPermission
struct  PublisherIdentityPermission_t2106095047  : public CodeAccessPermission_t2127220
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Permissions.PublisherIdentityPermission::x509
	X509Certificate_t3076817455 * ___x509_0;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(PublisherIdentityPermission_t2106095047, ___x509_0)); }
	inline X509Certificate_t3076817455 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t3076817455 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t3076817455 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier(&___x509_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
