#include "d/dolzel.h" // IWYU pragma: keep

#ifndef __REVOLUTION_SDK__

#include "umbra/umbra_storage.h"
#include "umbra/umbra_nintendont.h"
#include <dolphin/card.h>
#include <dolphin/os.h>

static const u32 CMD_SIZE = 4;
static u8 s_cardWorkArea[CARD_WORKAREA_SIZE] ATTRIBUTE_ALIGN(32);

int umbraStorageNintendont::write(const void* data, u32 size) {
    u32 payloadSize = CMD_SIZE + size;
    u32 bufSize = DMA_ALIGN(payloadSize);
    u8 buf[DMA_ALIGN(512)] ATTRIBUTE_ALIGN(32);
    if (bufSize > sizeof(buf)) {
        return -1;
    }

    memset(buf, 0, bufSize);
    *(u32*)buf = UMBRA_CMD_WORD(UMBRA_CMD_WRITE);
    memcpy(buf + CMD_SIZE, data, size);

    if (!ninMailboxTransfer(buf, bufSize, 1)) {
        return -1;
    }

    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);
    memset(statusBuf, 0, sizeof(statusBuf));
    ninMailboxTransfer(statusBuf, sizeof(statusBuf), 0);
    u32 status = *(u32*)statusBuf;
    return (status == 0) ? 0 : -1;
}

int umbraStorageNintendont::read(void* data, u32 size) {
    u8 cmdBuf[32] ATTRIBUTE_ALIGN(32);
    memset(cmdBuf, 0, sizeof(cmdBuf));
    *(u32*)cmdBuf = UMBRA_CMD_WORD(UMBRA_CMD_READ);
    if (!ninMailboxTransfer(cmdBuf, sizeof(cmdBuf), 1)) {
        return -1;
    }

    u32 bufSize = DMA_ALIGN(size);
    u8 buf[DMA_ALIGN(512)] ATTRIBUTE_ALIGN(32);
    if (bufSize > sizeof(buf)) {
        return -1;
    }

    memset(buf, 0, bufSize);
    if (!ninMailboxTransfer(buf, bufSize, 0)) {
        return -1;
    }

    memcpy(data, buf, size);
    return 0;
}

int umbraStorageNintendont::remove() {
    u8 cmdBuf[32] ATTRIBUTE_ALIGN(32);
    memset(cmdBuf, 0, sizeof(cmdBuf));
    *(u32*)cmdBuf = UMBRA_CMD_WORD(UMBRA_CMD_DELETE);
    if (!ninMailboxTransfer(cmdBuf, sizeof(cmdBuf), 1)) {
        return -1;
    }

    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);
    memset(statusBuf, 0, sizeof(statusBuf));
    ninMailboxTransfer(statusBuf, sizeof(statusBuf), 0);
    u32 status = *(u32*)statusBuf;
    return (status == 0) ? 0 : -1;
}

int umbraStorageMemcard::write(const void* data, u32 size) {
    s32 result;
    CARDFileInfo fileInfo;

    result = CARDMount(UMBRA_CARD_CHAN, s_cardWorkArea, NULL);
    if (result != CARD_RESULT_READY) {
        return -1;
    }

    u32 cardSize = (size + CARD_READ_SIZE - 1) & ~(CARD_READ_SIZE - 1);

    result = CARDOpen(UMBRA_CARD_CHAN, mFilename, &fileInfo);
    if (result == CARD_RESULT_NOFILE) {
        result = CARDCreate(UMBRA_CARD_CHAN, mFilename, cardSize, &fileInfo);
        if (result != CARD_RESULT_READY) {
            CARDUnmount(UMBRA_CARD_CHAN);
            return -1;
        }
    } else if (result != CARD_RESULT_READY) {
        CARDUnmount(UMBRA_CARD_CHAN);
        return -1;
    }

    u8 writeBuf[DMA_ALIGN(512)] ATTRIBUTE_ALIGN(32);
    if (cardSize > sizeof(writeBuf)) {
        CARDClose(&fileInfo);
        CARDUnmount(UMBRA_CARD_CHAN);
        return -1;
    }
    memset(writeBuf, 0, cardSize);
    memcpy(writeBuf, data, size);

    result = CARDWrite(&fileInfo, writeBuf, cardSize, 0);
    CARDClose(&fileInfo);
    CARDUnmount(UMBRA_CARD_CHAN);
    return (result == CARD_RESULT_READY) ? 0 : -1;
}

int umbraStorageMemcard::read(void* data, u32 size) {
    s32 result;
    CARDFileInfo fileInfo;

    result = CARDMount(UMBRA_CARD_CHAN, s_cardWorkArea, NULL);
    if (result != CARD_RESULT_READY) {
        return -1;
    }

    result = CARDOpen(UMBRA_CARD_CHAN, mFilename, &fileInfo);
    if (result != CARD_RESULT_READY) {
        CARDUnmount(UMBRA_CARD_CHAN);
        return -1;
    }

    u32 cardSize = (size + CARD_READ_SIZE - 1) & ~(CARD_READ_SIZE - 1);
    u8 readBuf[DMA_ALIGN(512)] ATTRIBUTE_ALIGN(32);
    if (cardSize > sizeof(readBuf)) {
        CARDClose(&fileInfo);
        CARDUnmount(UMBRA_CARD_CHAN);
        return -1;
    }
    memset(readBuf, 0, cardSize);

    result = CARDRead(&fileInfo, readBuf, cardSize, 0);
    CARDClose(&fileInfo);
    CARDUnmount(UMBRA_CARD_CHAN);

    if (result != CARD_RESULT_READY) {
        return -1;
    }
    memcpy(data, readBuf, size);
    return 0;
}

int umbraStorageMemcard::remove() {
    s32 result;

    result = CARDMount(UMBRA_CARD_CHAN, s_cardWorkArea, NULL);
    if (result != CARD_RESULT_READY) {
        return -1;
    }

    result = CARDDelete(UMBRA_CARD_CHAN, mFilename);
    CARDUnmount(UMBRA_CARD_CHAN);
    return (result == CARD_RESULT_READY) ? 0 : -1;
}

#endif // !__REVOLUTION_SDK__
