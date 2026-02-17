#ifndef GZ_NET_H
#define GZ_NET_H

#include "dolphin/types.h"

// Send a UDP packet to the given IPv4 address and port via Nintendont.
// Returns 0 on success, negative on error.
// ip is in network byte order (big-endian), e.g. 192.168.1.100 = 0xC0A80164
// port is in host byte order (will be converted internally)
int gzNetSendUDP(u32 ip, u16 port, const void* data, u32 len);

// Poll for a received UDP packet from Nintendont's listener.
// Returns bytes received (>0), 0 if no data, or negative on error.
// buf must be at least maxLen bytes.
int gzNetRecvUDP(void* buf, u32 maxLen);

// Build an IPv4 address from octets: gzNetMakeIP(192,168,1,100) = 0xC0A80164
inline u32 gzNetMakeIP(u8 a, u8 b, u8 c, u8 d) {
    return ((u32)a << 24) | ((u32)b << 16) | ((u32)c << 8) | (u32)d;
}

#endif
