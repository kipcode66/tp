#ifndef GZ_EXI_H
#define GZ_EXI_H

#include "dolphin/types.h"

#define GZ_EXI_CHAN 0

#define TPGZ_MAGIC 0x475A
#define TPGZ_CMD_WRITE 0x01
#define TPGZ_CMD_READ 0x02
#define TPGZ_CMD_DELETE 0x03
#define TPGZ_CMD_NET_SEND 0x04
#define TPGZ_CMD_NET_RECV 0x05

#define TPGZ_CMD_WORD(cmd) (((u32)TPGZ_MAGIC << 16) | ((u32)(cmd) << 8))

#define DMA_ALIGN(x) (((x) + 31) & ~31)

bool gzExiTransfer(void* buf, u32 len, u32 mode);
bool gzDetectNintendont();
void gzReturnToLoader();

#endif
