#include "gz/gz_warp_preview.h"
#include "JSystem/JKernel/JKRExpHeap.h"
#include "m_Do/m_Do_ext.h"
#include "dolphin/dvd.h"
#include <cstring>
#include <cstdio>

// 256x192 CMPR format = 256 * 192 * 0.5 bytes/pixel = 24576 bytes
// Add BTI header size (32 bytes) = 24608, round up to 25600 for safety
static const u32 PREVIEW_BUFFER_SIZE = 25600;

static bool tryLoadPreviewFile(const char* path, void* buffer, u32 maxSize) {
    DVDFileInfo fileInfo;
    if (!DVDOpen(path, &fileInfo)) return false;

    // Read only actual file size, not buffer size
    u32 readSize = fileInfo.length;
    if (readSize > maxSize) readSize = maxSize;

    s32 bytesRead = DVDReadPrio(&fileInfo, buffer, readSize, 0, 2);
    DVDClose(&fileInfo);
    return bytesRead > 0;
}

gzWarpPreview_c::gzWarpPreview_c()
    : mpPicture(NULL), mpTextureData(NULL), mCurrentRoom(0xFF), mCurrentSpawn(0xFF) {
    mCurrentStage[0] = '\0';
}

gzWarpPreview_c::~gzWarpPreview_c() {
    unloadPreview();
}

void gzWarpPreview_c::loadPreview(const char* stageId, u8 roomId, u8 spawnId) {
    if (stageId == NULL) return;

    // Skip if already attempted for this exact location (whether successful or not)
    if (strcmp(mCurrentStage, stageId) == 0 && mCurrentRoom == roomId && mCurrentSpawn == spawnId)
        return;

    unloadPreview();

    // Track what we're attempting to load (even if it fails)
    strncpy(mCurrentStage, stageId, 7);
    mCurrentStage[7] = '\0';
    mCurrentRoom = roomId;
    mCurrentSpawn = spawnId;

    JKRExpHeap* archiveHeap = mDoExt_getArchiveHeap();
    mpTextureData = archiveHeap->alloc(PREVIEW_BUFFER_SIZE, 32);
    if (mpTextureData == NULL) return;

    char path[64];
    snprintf(path, sizeof(path), "/gz/previews/%s_%02d_%02d.bti", stageId, roomId, spawnId);
    bool loaded = tryLoadPreviewFile(path, mpTextureData, PREVIEW_BUFFER_SIZE);

    if (loaded) {
        mpPicture = new J2DPicture((ResTIMG*)mpTextureData);
    } else {
        archiveHeap->free(mpTextureData);
        mpTextureData = NULL;
    }
}

void gzWarpPreview_c::unloadPreview() {
    if (mpPicture != NULL) {
        delete mpPicture;
        mpPicture = NULL;
    }
    if (mpTextureData != NULL) {
        JKRExpHeap* archiveHeap = mDoExt_getArchiveHeap();
        archiveHeap->free(mpTextureData);
        mpTextureData = NULL;
    }
    mCurrentStage[0] = '\0';
    mCurrentRoom = 0xFF;
    mCurrentSpawn = 0xFF;
}

void gzWarpPreview_c::draw(f32 x, f32 y, f32 w, f32 h) {
    if (mpPicture != NULL) {
        mpPicture->draw(x, y, w, h, false, false, false);
    }
}
