#include "d/dolzel.h" // IWYU pragma: keep
#include "gz/gz.h"
#include "gz/gz_menu.h"
#include "m_Do/m_Do_ext.h"

void gzHeapsMenu_c::updateDynamicLines() {
    mJ2DTracker->mpTotalBlocks->setStringf("total blocks %d", mJ2DTracker->mTotalBlocks);
    mJ2DTracker->mpUsedBlocks->setStringf("used blocks %d", mJ2DTracker->mUsedBlocks);
    mJ2DTracker->mpFreeBlocks->setStringf("free blocks %d", mJ2DTracker->mFreeBlocks);
}

gzHeapsMenu_c::gzHeapsMenu_c() {
    OSReport("creating gzHeapsMenu_c\n");
    mJ2DTracker = new HeapTracker_c();
    mJ2DTracker->mpHeap = mDoExt_getJ2dHeap();
    mJ2DTracker->mpTitle->setString("j2d heap");

    mXPos = 200.0f;
}

gzHeapsMenu_c::~gzHeapsMenu_c() {
    _delete();
}

void gzHeapsMenu_c::_delete() {
    OSReport("deleting gzHeapsMenu_c\n");
}

void gzHeapsMenu_c::populateHeapTracker(HeapTracker_c* tracker) {
    tracker->mpHeap->lock();

    const int MAX_BLOCKS = 1024;
    JKRExpHeap::CMemBlock* blocks[MAX_BLOCKS];
    u32 starts[MAX_BLOCKS];

    int usedCount = 0;
    int freeCount = 0;
    int totalCount = 0;

    for (JKRExpHeap::CMemBlock* block = tracker->mpHeap->mHeadUsedList; block != NULL; block = block->getNextBlock()) {
        if (totalCount >= MAX_BLOCKS) {
            OSReport("Too many blocks\n");
            tracker->mpHeap->unlock();
            return;
        }
        blocks[totalCount] = block;
        usedCount++;
        totalCount++;
    }

    tracker->mUsedBlocks = usedCount;

    for (JKRExpHeap::CMemBlock* block = tracker->mpHeap->mHeadFreeList; block != NULL; block = block->getNextBlock()) {
        if (totalCount >= MAX_BLOCKS) {
            OSReport("Too many blocks\n");
            tracker->mpHeap->unlock();
            return;
        }
        blocks[totalCount] = block;
        freeCount++;
        totalCount++;
    }

    tracker->mFreeBlocks = freeCount;
    tracker->mTotalBlocks = totalCount;

    for (int i = 0; i < totalCount; i++) {
        JKRExpHeap::CMemBlock* b = blocks[i];
        u8 align = b->getAlignment();
        if (b->_isTempMemBlock()) {
            starts[i] = (u32)((u8*)b - align);
        } else {
            starts[i] = (u32)b;
        }
    }

    // bubble sort the blocks 
    int swapped;    
    do {
        swapped = 0;
        for (int i = 0; i < totalCount - 1; i++) {
            if (starts[i] > starts[i + 1]) {
                u32 temp_start = starts[i];
                starts[i] = starts[i + 1];
                starts[i + 1] = temp_start;

                JKRExpHeap::CMemBlock* temp_block = blocks[i];
                blocks[i] = blocks[i + 1];
                blocks[i + 1] = temp_block;

                swapped = 1;
            }
        }
    } while (swapped);

    for (int i = 0; i < totalCount; i++) {
        tracker->mBlocks[i] = blocks[i];
        tracker->mStarts[i] = starts[i];
    }

    tracker->mpHeap->unlock();
}

void gzHeapsMenu_c::execute() {
    if (g_gzInfo.mInputWaitTimer != 0) {
        g_gzInfo.mInputWaitTimer--;
        return;
    }

    gzCursor* l_cursor = gzInfo_getCursor();
    
    if (mJ2DTracker != NULL && mJ2DTracker->mpHeap != NULL) {
        populateHeapTracker(mJ2DTracker);
    }

    if (gzPad::getTrigB()) {
        l_cursor->x--;
        l_cursor->y = gzMainMenu_c::MENU_HEAPS;
        gzInfo_seStart(Z2SE_SY_EXP_WIN_CLOSE);
        g_gzInfo.mpMainMenu->startReverseTransition();
        return;
    }
}

void gzHeapsMenu_c::drawHeapVisualization(HeapTracker_c* tracker, f32 x, f32 y, f32 width) {
    f32 bar_h = 20.0f;

    u32 heap_start_addr = (u32)tracker->mpHeap->getStartAddr();
    u32 heap_size = tracker->mpHeap->getSize();

    // Set up GX for 2D drawing
    Mtx44 proj;
    MTXOrtho(proj, 0, 480, 0, 640, 0, 1);
    GXSetProjection(proj, GX_ORTHOGRAPHIC);

    // Set viewport and scissor to match ortho
    GXSetViewport(0.0f, 0.0f, 640.0f, 480.0f, 0.0f, 1.0f);
    GXSetScissor(0, 0, 640, 480);

    Mtx model;
    MTXIdentity(model);
    GXLoadPosMtxImm(model, 0);
    GXSetCurrentMtx(0);

    GXSetNumChans(1);
    GXSetNumTexGens(0);
    GXSetNumTevStages(1);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
    GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_VTX, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);

    GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    GXSetCullMode(GX_CULL_NONE);
    GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);

    GXSetColorUpdate(GX_TRUE);
    GXSetAlphaUpdate(GX_FALSE);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XY, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);

    GXInvalidateVtxCache();
    GXPixModeSync();

    // Draw black rectangle for entire heap
    GXBegin(GX_QUADS, GX_VTXFMT0, 4);
    GXPosition2f32(x, y);
    GXColor4u8(0, 0, 0, 255);
    GXPosition2f32(x + width, y);
    GXColor4u8(0, 0, 0, 255);
    GXPosition2f32(x + width, y + bar_h);
    GXColor4u8(0, 0, 0, 255);
    GXPosition2f32(x, y + bar_h);
    GXColor4u8(0, 0, 0, 255);
    GXEnd();

    // Draw red rectangles for used blocks
    for (int i = 0; i < tracker->mTotalBlocks; i++) {
        JKRExpHeap::CMemBlock* b = tracker->mBlocks[i];
        if (!b->isValid()) continue;  // Skip free blocks

        u32 block_start_byte = tracker->mStarts[i] - heap_start_addr;
        u32 header_addr = (u32)b;
        u32 block_end = header_addr + 0x10 + b->getSize();
        u32 block_byte_size = block_end - tracker->mStarts[i];

        f32 pixel_x = x + ((f32)block_start_byte / (f32)heap_size) * width;
        f32 pixel_w = ((f32)block_byte_size / (f32)heap_size) * width;

        GXBegin(GX_QUADS, GX_VTXFMT0, 4);
        GXPosition2f32(pixel_x, y);
        GXColor4u8(255, 0, 0, 255);
        GXPosition2f32(pixel_x + pixel_w, y);
        GXColor4u8(255, 0, 0, 255);
        GXPosition2f32(pixel_x + pixel_w, y + bar_h);
        GXColor4u8(255, 0, 0, 255);
        GXPosition2f32(pixel_x, y + bar_h);
        GXColor4u8(255, 0, 0, 255);
        GXEnd();
    }

    GXFlush();
}

void gzHeapsMenu_c::draw() {
    gzCursor* l_cursor = gzInfo_getCursor();

    updateDynamicLines();

    mJ2DTracker->mpTitle->draw(mXPos+100.0f,70.0f, COLOR_WHITE);
    mJ2DTracker->mpUsedBlocks->draw(mXPos,120.0f, COLOR_WHITE);
    mJ2DTracker->mpFreeBlocks->draw(mXPos+160.0f,120.0f, COLOR_WHITE);
    mJ2DTracker->mpTotalBlocks->draw(mXPos+100.0f,140.0f, COLOR_WHITE);

    drawHeapVisualization(mJ2DTracker, mXPos, 80.0f, 300.0f);
}
