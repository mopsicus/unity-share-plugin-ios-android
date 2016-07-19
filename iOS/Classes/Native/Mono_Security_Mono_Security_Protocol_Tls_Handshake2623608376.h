#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream89550253.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3359671455.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy2370127397.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct  HandshakeMessage_t2623608376  : public TlsStream_t89550253
{
public:
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::context
	Context_t658806145 * ___context_6;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::handshakeType
	uint8_t ___handshakeType_7;
	// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::contentType
	uint8_t ___contentType_8;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::cache
	ByteU5BU5D_t4260760469* ___cache_9;

public:
	inline static int32_t get_offset_of_context_6() { return static_cast<int32_t>(offsetof(HandshakeMessage_t2623608376, ___context_6)); }
	inline Context_t658806145 * get_context_6() const { return ___context_6; }
	inline Context_t658806145 ** get_address_of_context_6() { return &___context_6; }
	inline void set_context_6(Context_t658806145 * value)
	{
		___context_6 = value;
		Il2CppCodeGenWriteBarrier(&___context_6, value);
	}

	inline static int32_t get_offset_of_handshakeType_7() { return static_cast<int32_t>(offsetof(HandshakeMessage_t2623608376, ___handshakeType_7)); }
	inline uint8_t get_handshakeType_7() const { return ___handshakeType_7; }
	inline uint8_t* get_address_of_handshakeType_7() { return &___handshakeType_7; }
	inline void set_handshakeType_7(uint8_t value)
	{
		___handshakeType_7 = value;
	}

	inline static int32_t get_offset_of_contentType_8() { return static_cast<int32_t>(offsetof(HandshakeMessage_t2623608376, ___contentType_8)); }
	inline uint8_t get_contentType_8() const { return ___contentType_8; }
	inline uint8_t* get_address_of_contentType_8() { return &___contentType_8; }
	inline void set_contentType_8(uint8_t value)
	{
		___contentType_8 = value;
	}

	inline static int32_t get_offset_of_cache_9() { return static_cast<int32_t>(offsetof(HandshakeMessage_t2623608376, ___cache_9)); }
	inline ByteU5BU5D_t4260760469* get_cache_9() const { return ___cache_9; }
	inline ByteU5BU5D_t4260760469** get_address_of_cache_9() { return &___cache_9; }
	inline void set_cache_9(ByteU5BU5D_t4260760469* value)
	{
		___cache_9 = value;
		Il2CppCodeGenWriteBarrier(&___cache_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
