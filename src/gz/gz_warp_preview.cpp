#include "gz/gz_warp_preview.h"
#include "gz/gz.h"
#include "d/d_com_inf_game.h"
#include "dolphin/dvd.h"
#include <cstring>
#include <cstdio>

// 512x384 CMPR format = 512 * 384 * 0.5 bytes/pixel = 98304 bytes
// Add BTI header size (32 bytes) = 98336, round up to 99000
static const u32 PREVIEW_BUFFER_SIZE = 99000;

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
    : mpPicture(NULL), mpTextureData(NULL), mCurrentRoom(0xFF), mCurrentSpawn(0xFF),
      mOwnsTextureData(false) {
    mCurrentStage[0] = '\0';
}

gzWarpPreview_c::~gzWarpPreview_c() {
    unloadPreview();
}

void gzWarpPreview_c::loadPreview(const char* stageId, u8 roomId, u8 spawnId) {
    if (stageId == NULL) return;

    // Skip if already attempted for this stage/room (whether successful or not)
    if (strcmp(mCurrentStage, stageId) == 0 && mCurrentRoom == roomId)
        return;

    unloadPreview();

    // Track what we're attempting to load (even if it fails)
    strncpy(mCurrentStage, stageId, 7);
    mCurrentStage[7] = '\0';
    mCurrentRoom = roomId;
    mCurrentSpawn = spawnId;

    JKRHeap* heap = gzHeap(GZ_GROUP_GRAPHICS);
    mpTextureData = heap->alloc(PREVIEW_BUFFER_SIZE, 32);
    if (mpTextureData == NULL) return;

    char path[64];
    snprintf(path, sizeof(path), "/gz/previews/%s_%02d.bti", stageId, roomId);
    bool loaded = tryLoadPreviewFile(path, mpTextureData, PREVIEW_BUFFER_SIZE);

    if (loaded) {
        mpPicture = new (heap, 4) J2DPicture((ResTIMG*)mpTextureData);
        mOwnsTextureData = true;
    } else {
        heap->free(mpTextureData);
        mpTextureData = NULL;

        // Use tt_block8x8.bti from Main2D archive as placeholder
        ResTIMG* fallbackTex =
            (ResTIMG*)dComIfGp_getMain2DArchive()->getResource('TIMG', "tt_block8x8.bti");
        if (fallbackTex != NULL) {
            mpPicture = new (heap, 4) J2DPicture(fallbackTex);
            mpPicture->setBlackWhite(JUtility::TColor(0, 0, 0, 0),
                                     JUtility::TColor(48, 48, 48, 255));
            mOwnsTextureData = false;
        }
    }
}

void gzWarpPreview_c::unloadPreview() {
    if (mpPicture != NULL) {
        delete mpPicture;
        mpPicture = NULL;
    }
    if (mpTextureData != NULL && mOwnsTextureData) {
        JKRHeap* heap = gzHeap(GZ_GROUP_GRAPHICS);
        heap->free(mpTextureData);
    }
    mpTextureData = NULL;
    mOwnsTextureData = false;
    mCurrentStage[0] = '\0';
    mCurrentRoom = 0xFF;
    mCurrentSpawn = 0xFF;
}

void gzWarpPreview_c::draw(f32 x, f32 y, f32 w, f32 h) {
    if (mpPicture != NULL) {
        mpPicture->draw(x, y, w, h, false, false, false);
    }
}
