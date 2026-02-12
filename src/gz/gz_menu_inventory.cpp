#include "d/dolzel.h"  // IWYU pragma: keep

#include "gz/gz_menu_inventory.h"
#include "gz/gz_menu_main.h"
#include "d/d_com_inf_game.h"
#include "d/d_meter2_info.h"
#include "d/d_item_data.h"
#include "d/d_pane_class.h"
#include "d/d_save.h"
#include "d/d_select_cursor.h"
#include "m_Do/m_Do_ext.h"
#include "JSystem/JKernel/JKRExpHeap.h"
#include "JSystem/JKernel/JKRAramArchive.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JMath/JMath.h"
#include "JSystem/J2DGraph/J2DScreen.h"
#include <cstdio>

static const u8 sRingItemList[] = {
    fpcNm_ITEM_NOENTRY_19,
    fpcNm_ITEM_BOOMERANG,
    fpcNm_ITEM_KANTERA,
    fpcNm_ITEM_PACHINKO,
    fpcNm_ITEM_FISHING_ROD_1,
    fpcNm_ITEM_LURE_ROD,
    fpcNm_ITEM_BEE_ROD,
    fpcNm_ITEM_WORM_ROD,
    fpcNm_ITEM_JEWEL_ROD,
    fpcNm_ITEM_JEWEL_BEE_ROD,
    fpcNm_ITEM_JEWEL_WORM_ROD,
    fpcNm_ITEM_HVY_BOOTS,
    fpcNm_ITEM_HOOKSHOT,
    fpcNm_ITEM_W_HOOKSHOT,
    fpcNm_ITEM_BOW,
    fpcNm_ITEM_LIGHT_ARROW,
    fpcNm_ITEM_BOMB_ARROW,
    fpcNm_ITEM_HAWK_ARROW,
    fpcNm_ITEM_HAWK_EYE,
    fpcNm_ITEM_NORMAL_BOMB,
    fpcNm_ITEM_WATER_BOMB,
    fpcNm_ITEM_POKE_BOMB,
    fpcNm_ITEM_SPINNER,
    fpcNm_ITEM_IRONBALL,
    fpcNm_ITEM_COPY_ROD,
    fpcNm_ITEM_COPY_ROD_2,
    fpcNm_ITEM_HORSE_FLUTE,
    fpcNm_ITEM_WOOD_STICK,
    fpcNm_ITEM_EMPTY_BOTTLE,
    fpcNm_ITEM_RED_BOTTLE,
    fpcNm_ITEM_GREEN_BOTTLE,
    fpcNm_ITEM_BLUE_BOTTLE,
    fpcNm_ITEM_MILK_BOTTLE,
    fpcNm_ITEM_HALF_MILK_BOTTLE,
    fpcNm_ITEM_WATER_BOTTLE,
    fpcNm_ITEM_HOT_SPRING,
    fpcNm_ITEM_OIL_BOTTLE,
    fpcNm_ITEM_UGLY_SOUP,
    fpcNm_ITEM_LV1_SOUP,
    fpcNm_ITEM_LV2_SOUP,
    fpcNm_ITEM_LV3_SOUP,
    fpcNm_ITEM_CHUCHU_RARE,
    fpcNm_ITEM_CHUCHU_RED,
    fpcNm_ITEM_CHUCHU_BLUE,
    fpcNm_ITEM_CHUCHU_GREEN,
    fpcNm_ITEM_CHUCHU_YELLOW,
    fpcNm_ITEM_CHUCHU_PURPLE,
    fpcNm_ITEM_BEE_CHILD,
    fpcNm_ITEM_FAIRY,
    fpcNm_ITEM_FAIRY_DROP,
    fpcNm_ITEM_WORM,
    fpcNm_ITEM_ZORAS_JEWEL,
    fpcNm_ITEM_LETTER,
    fpcNm_ITEM_BILL,
    fpcNm_ITEM_NONE,
};

static const int sRingItemCount = sizeof(sRingItemList) / sizeof(u8);

gzInventoryMenu_c::gzInventoryMenu_c() {
    mXPos = g_gzInfo.mBackgroundXPos + 170.0f;

    mCurrentTab = TAB_RING_MENU;
    mCurrentSlot = 0;
    mItemsTotal = 0;

    mRingRadiusH = 150.0f;
    mRingRadiusV = 140.0f;
    mOriginalItem = fpcNm_ITEM_NONE;

    for (int i = 0; i < gzInventoryMenu_c::RING_MAX_SLOTS; i++) {
        mItemSlots[i] = 0;
        mItemSlotPosX[i] = 0.0f;
        mItemSlotPosY[i] = 0.0f;
        mItemSlotScale[i] = 1.0f;
        mItemSlotParam1[i] = 1.0f;
        mItemSlotParam2[i] = 1.0f;
        for (int j = 0; j < 3; j++) {
            mpItemTex[i][j] = NULL;
            mpItemBuf[i][j] = NULL;
        }
    }

    for (int i = 0; i < 3; i++) {
        mPickerItems[i] = fpcNm_ITEM_NONE;
        for (int j = 0; j < 3; j++) {
            mpPickerTex[i][j] = NULL;
            mpPickerBuf[i][j] = NULL;
        }
    }

    mpRingScreen = NULL;
    mpRingResData = NULL;
    mpCenterPaneMgr = NULL;
    mpCirclePaneMgr = NULL;
    mpLabelPaneMgr = NULL;

    mPauseCursorRow = 0;
    mPauseCursorCol = 0;
    mPauseMenuInitialized = false;
    mpPauseFramePane = NULL;
    mpPauseFrameBuf = NULL;
    mpPoeIconPane = NULL;
    mpPoeIconBuf = NULL;
    mpBugsIconPane = NULL;
    mpBugsIconBuf = NULL;
    mpSkillsIconPane = NULL;
    mpSkillsIconBuf = NULL;
    mpFishIconPane = NULL;
    mpFishIconBuf = NULL;
    mpLettersIconPane = NULL;
    mpLettersIconBuf = NULL;
    for (int i = 0; i < HEART_TEX_COUNT; i++) {
        mpHeartPiecePanes[i] = NULL;
        mpHeartPieceBufs[i] = NULL;
    }
    for (int i = 0; i < HUD_HEART_TEX_COUNT; i++) {
        mpHudHeartPanes[i] = NULL;
        mpHudHeartBufs[i] = NULL;
    }
    mSkillSubMenuActive = false;
    mSkillSubMenuIndex = 0;
    mBugSubMenuActive = false;
    mBugSubMenuRow = 0;
    mBugSubMenuCol = 0;
    mLetterSubMenuActive = false;
    mLetterSubMenuRow = 0;
    mLetterSubMenuCol = 0;
    mpLetterIconPane = NULL;
    mpLetterIconBuf = NULL;
    mFishSubMenuActive = false;
    mFishSubMenuRow = 0;
    mFishSubMenuCol = 0;
    mFishEditField = 0;
    mFishAdjusting = false;
    mFishSizeTextW = 0.0f;
    mFishCountTextW = 0.0f;
    for (int i = 0; i < BUG_COUNT; i++) {
        mpBugIconPanes[i] = NULL;
        mpBugIconBufs[i] = NULL;
    }
    mpCheckIconPane = NULL;
    mpCheckIconBuf = NULL;
    mpXMarkIconPane = NULL;
    mpXMarkIconBuf = NULL;
    for (int row = 0; row < PAUSE_MAX_ROWS; row++) {
        for (int col = 0; col < PAUSE_MAX_COLS; col++) {
            mPauseSlotState[row][col] = 0;
            for (int k = 0; k < 3; k++) {
                mpPauseItemTex[row][col][k] = NULL;
                mpPauseItemBuf[row][col][k] = NULL;
            }
        }
    }
}

gzInventoryMenu_c::~gzInventoryMenu_c() {
    _delete();
}

void gzInventoryMenu_c::_delete() {
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);

    for (int i = 0; i < gzInventoryMenu_c::RING_MAX_SLOTS; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpItemTex[i][j];
            mpItemTex[i][j] = NULL;
            if (mpItemBuf[i][j] != NULL) {
                heap->free(mpItemBuf[i][j]);
                mpItemBuf[i][j] = NULL;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpPickerTex[i][j];
            mpPickerTex[i][j] = NULL;
            if (mpPickerBuf[i][j] != NULL) {
                heap->free(mpPickerBuf[i][j]);
                mpPickerBuf[i][j] = NULL;
            }
        }
    }

    freePauseTextures();

    delete mpLabelPaneMgr;
    mpLabelPaneMgr = NULL;
    delete mpCirclePaneMgr;
    mpCirclePaneMgr = NULL;
    delete mpCenterPaneMgr;
    mpCenterPaneMgr = NULL;
    delete mpRingScreen;
    mpRingScreen = NULL;
    if (mpRingResData != NULL) {
        gzHeap(GZ_GROUP_MENU)->free(mpRingResData);
        mpRingResData = NULL;
    }
}

void gzInventoryMenu_c::onEnterMenu() {
    gzMenu_c::onEnterMenu();
    mCurrentSlot = 0;
}

void gzInventoryMenu_c::onExitMenu() {
    gzMenu_c::onExitMenu();
    if (gzInfo_getTPCursor() != NULL) {
        gzInfo_getTPCursor()->setParam(0.96f, 0.84f, 0.03f, 0.5f, 0.5f);
    }
}

void gzInventoryMenu_c::onHighlight() {
    if (mCurrentTab == TAB_RING_MENU) {
        reloadRingScreen();
        initRingItems();
    } else if (mCurrentTab == TAB_PAUSE_MENU) {
        initPauseMenu();
    }
}

void gzInventoryMenu_c::onUnhighlight() {
    freeAllTextures();
    freePauseTextures();
    freeRingScreen();
}

void gzInventoryMenu_c::reloadRingScreen() {
    freeRingScreen();

    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
    JKRHeap* oldHeap = heap->becomeCurrentHeap();

    mpRingScreen = new (heap, 4) J2DScreen();
    JKRHeapOverrideScope heapScope(heap);
    dPaneClass_setPriority(&mpRingResData, heap, mpRingScreen,
                            "SCRN/zelda_item_select_icon3_center_parts.blo", 0x20000,
                            dComIfGp_getRingResArchive());
    dPaneClass_showNullPane(mpRingScreen);

    mpCenterPaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'center_n', 2, (JKRExpHeap*)heap);
    mpCirclePaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'circle_n', 2, (JKRExpHeap*)heap);
    mpLabelPaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'label_n', 1, (JKRExpHeap*)heap);

    oldHeap->becomeCurrentHeap();
}

void gzInventoryMenu_c::freeRingScreen() {
    delete mpLabelPaneMgr;
    mpLabelPaneMgr = NULL;

    delete mpCirclePaneMgr;
    mpCirclePaneMgr = NULL;

    delete mpCenterPaneMgr;
    mpCenterPaneMgr = NULL;

    delete mpRingScreen;
    mpRingScreen = NULL;

    if (mpRingResData != NULL) {
        gzHeap(GZ_GROUP_MENU)->free(mpRingResData);
        mpRingResData = NULL;
    }

    JKRArchive* ringArc = dComIfGp_getRingResArchive();
    if (ringArc != NULL) {
        JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
        u8* heapStart = (u8*)heap->getStartAddr();
        u8* heapEnd = (u8*)heap->getEndAddr();
        u32 numFiles = ringArc->countFile();
        JKRArchive::SDIFileEntry* files = ringArc->mFiles;
        for (u32 i = 0; i < numFiles; i++) {
            u8* data = (u8*)files[i].data;
            if (data != NULL && data >= heapStart && data < heapEnd) {
                heap->free(data);
                files[i].data = NULL;
            }
        }
    }
}

void gzInventoryMenu_c::freeAllTextures() {
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
    for (int i = 0; i < gzInventoryMenu_c::RING_MAX_SLOTS; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpItemTex[i][j];
            mpItemTex[i][j] = NULL;
            if (mpItemBuf[i][j] != NULL) {
                heap->free(mpItemBuf[i][j]);
                mpItemBuf[i][j] = NULL;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpPickerTex[i][j];
            mpPickerTex[i][j] = NULL;
            if (mpPickerBuf[i][j] != NULL) {
                heap->free(mpPickerBuf[i][j]);
                mpPickerBuf[i][j] = NULL;
            }
        }
        mPickerItems[i] = fpcNm_ITEM_NONE;
    }
}

void gzInventoryMenu_c::initRingItems() {
    for (int i = 0; i < gzInventoryMenu_c::RING_MAX_SLOTS; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpItemTex[i][j];
            mpItemTex[i][j] = NULL;
        }
    }

    mItemsTotal = 0;

    for (int i = 0; i < MAX_ITEM_SLOTS; i++) {
        u8 lineUpItem = dComIfGs_getLineUpItem(i);
        mItemSlots[i] = lineUpItem;
        if (lineUpItem != fpcNm_ITEM_NONE) {
            mItemsTotal++;
        }
    }

    if (mItemsTotal < 1) {
        mItemsTotal = MAX_ITEM_SLOTS;
        for (int i = 0; i < MAX_ITEM_SLOTS; i++) {
            mItemSlots[i] = i;
        }
    }

    for (int i = 0; i < mItemsTotal; i++) {
        loadItemTexture(i, mItemSlots[i]);
    }

    calcEllipsePlotAverage(mItemsTotal, 0.0f, 0.0f);
}

void gzInventoryMenu_c::loadItemTexture(int slotIdx, u8 slotNo) {
    u8 item = dComIfGs_getItem(slotNo, false);

    for (int j = 0; j < 3; j++) {
        delete mpItemTex[slotIdx][j];
        mpItemTex[slotIdx][j] = NULL;
    }

    if (item != fpcNm_ITEM_NONE) {
        if (item == fpcNm_ITEM_LIGHT_ARROW) {
            item = fpcNm_ITEM_BOW;
        }

        JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
        JKRHeap* oldHeap = heap->becomeCurrentHeap();

        for (int j = 0; j < 3; j++) {
            if (mpItemBuf[slotIdx][j] == NULL) {
                mpItemBuf[slotIdx][j] = (ResTIMG*)new (heap, 0x20) u8[0xC00];
            }
        }

        s32 textureNum = dMeter2Info_readItemTexture(
            item, mpItemBuf[slotIdx][0], NULL, mpItemBuf[slotIdx][1], NULL,
            mpItemBuf[slotIdx][2], NULL, NULL, NULL, -1);

        for (int k = 0; k < textureNum; k++) {
            mpItemTex[slotIdx][k] = new (heap, 4) J2DPicture(mpItemBuf[slotIdx][k]);
            mpItemTex[slotIdx][k]->setBasePosition(J2DBasePosition_4);
        }

        oldHeap->becomeCurrentHeap();

        dMeter2Info_setItemColor(item, mpItemTex[slotIdx][0], mpItemTex[slotIdx][1], mpItemTex[slotIdx][2], NULL);

        u8 texScale = dItem_data::getTexScale(item);
        mItemSlotScale[slotIdx] = texScale / 100.0f;

        f32 scale = texScale / 100.0f;
        f32 widthRatio = (mpItemBuf[slotIdx][0]->width / 48.0f) * scale;
        f32 heightRatio = (mpItemBuf[slotIdx][0]->height / 48.0f) * scale;
        mItemSlotParam1[slotIdx] = widthRatio;
        mItemSlotParam2[slotIdx] = heightRatio;
    } else {
        mItemSlotScale[slotIdx] = 1.0f;
        mItemSlotParam1[slotIdx] = 1.0f;
        mItemSlotParam2[slotIdx] = 1.0f;
    }
}

int gzInventoryMenu_c::findItemInList(u8 item) {
    for (int i = 0; i < sRingItemCount; i++) {
        if (sRingItemList[i] == item) {
            return i;
        }
    }
    return sRingItemCount - 1;
}

void gzInventoryMenu_c::setSlotItem(int slotIdx, u8 newItem) {
    u8 slotNo = mItemSlots[slotIdx];

    dComIfGs_setItem(slotNo, newItem);
    dComIfGp_setItem(slotNo, newItem);

    loadItemTexture(slotIdx, slotNo);
}

void gzInventoryMenu_c::loadPickerItemTexture(int pickerIdx, u8 itemId) {
    for (int j = 0; j < 3; j++) {
        delete mpPickerTex[pickerIdx][j];
        mpPickerTex[pickerIdx][j] = NULL;
    }

    mPickerItems[pickerIdx] = itemId;

    if (itemId != fpcNm_ITEM_NONE) {
        u8 item = itemId;
        if (item == fpcNm_ITEM_LIGHT_ARROW) {
            item = fpcNm_ITEM_BOW;
        }

        JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
        JKRHeap* oldHeap = heap->becomeCurrentHeap();

        for (int j = 0; j < 3; j++) {
            if (mpPickerBuf[pickerIdx][j] == NULL) {
                mpPickerBuf[pickerIdx][j] = (ResTIMG*)new (heap, 0x20) u8[0xC00];
            }
        }

        s32 textureNum = dMeter2Info_readItemTexture(
            item, mpPickerBuf[pickerIdx][0], NULL, mpPickerBuf[pickerIdx][1], NULL,
            mpPickerBuf[pickerIdx][2], NULL, NULL, NULL, -1);

        for (int k = 0; k < textureNum; k++) {
            mpPickerTex[pickerIdx][k] = new (heap, 4) J2DPicture(mpPickerBuf[pickerIdx][k]);
            mpPickerTex[pickerIdx][k]->setBasePosition(J2DBasePosition_4);
        }

        oldHeap->becomeCurrentHeap();

        dMeter2Info_setItemColor(item, mpPickerTex[pickerIdx][0], mpPickerTex[pickerIdx][1], mpPickerTex[pickerIdx][2], NULL);
    }
}

void gzInventoryMenu_c::addSlot() {
    if (mItemsTotal >= MAX_ITEM_SLOTS) {
        return;
    }

    int newSlotNo = -1;
    for (int i = 0; i < MAX_ITEM_SLOTS; i++) {
        bool inUse = false;
        for (int j = 0; j < mItemsTotal; j++) {
            if (mItemSlots[j] == i) {
                inUse = true;
                break;
            }
        }
        if (!inUse) {
            newSlotNo = i;
            break;
        }
    }

    if (newSlotNo < 0) {
        return;
    }

    int insertPos = (mItemsTotal == 0) ? 0 : (mCurrentSlot + 1);

    for (int i = mItemsTotal; i > insertPos; i--) {
        mItemSlots[i] = mItemSlots[i - 1];
    }

    mItemSlots[insertPos] = newSlotNo;
    dComIfGs_setItem(newSlotNo, fpcNm_ITEM_NOENTRY_19);
    dComIfGp_setItem(newSlotNo, fpcNm_ITEM_NOENTRY_19);
    mItemsTotal++;

    for (int i = 0; i < gzInventoryMenu_c::RING_MAX_SLOTS; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpItemTex[i][j];
            mpItemTex[i][j] = NULL;
        }
    }

    for (int i = 0; i < mItemsTotal; i++) {
        loadItemTexture(i, mItemSlots[i]);
    }

    mCurrentSlot = insertPos;

    calcEllipsePlotAverage(mItemsTotal, 0.0f, 0.0f);
}

void gzInventoryMenu_c::deleteSlot() {
    if (mItemsTotal <= 0) {
        return;
    }

    u8 slotNo = mItemSlots[mCurrentSlot];
    dComIfGs_setItem(slotNo, fpcNm_ITEM_NONE);
    dComIfGp_setItem(slotNo, fpcNm_ITEM_NONE);

    for (int i = mCurrentSlot; i < mItemsTotal - 1; i++) {
        mItemSlots[i] = mItemSlots[i + 1];
    }

    mItemsTotal--;
    if (mItemsTotal == 0) {
        mCurrentSlot = 0;
    } else if (mCurrentSlot >= mItemsTotal) {
        mCurrentSlot = mItemsTotal - 1;
    }

    for (int i = 0; i < gzInventoryMenu_c::RING_MAX_SLOTS; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpItemTex[i][j];
            mpItemTex[i][j] = NULL;
        }
    }

    for (int i = 0; i < mItemsTotal; i++) {
        loadItemTexture(i, mItemSlots[i]);
    }

    if (mItemsTotal > 0) {
        calcEllipsePlotAverage(mItemsTotal, 0.0f, 0.0f);
    }
}

f32 gzInventoryMenu_c::calcEllipseFunction(f32 x, f32 radiusH, f32 radiusV) {
    return -JMAFastSqrt(radiusV * radiusV * (1.0f - (x * x) / (radiusH * radiusH)));
}

f32 gzInventoryMenu_c::calcDistance(f32 x1, f32 y1, f32 x2, f32 y2) {
    return JMAFastSqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// basically just a cleaned up version of dMenu_Ring_c::clacEllipsePlotAverage
void gzInventoryMenu_c::calcEllipsePlotAverage(int numItems, f32 centerX, f32 centerY) {
    if (numItems <= 0) return;

    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
    f32* ptrX = (f32*)new (heap, 4) u8[16000];
    f32* ptrY = (f32*)new (heap, 4) u8[16000];
    f32* ptrDist = (f32*)new (heap, 4) u8[16000];

    f32 x = 0.0f;
    f32 totalDist = 0.0f;

    for (int i = 0; i <= 1000; i++) {
        ptrX[i] = x;
        ptrY[i] = calcEllipseFunction(x, mRingRadiusH, mRingRadiusV);
        x += mRingRadiusH / 1000.0f;

        ptrX[i + 2000] = -ptrX[i];
        ptrY[i + 2000] = -ptrY[i];

        if (i > 0) {
            ptrDist[i - 1] = calcDistance(ptrX[i - 1], ptrY[i - 1], ptrX[i], ptrY[i]);
            ptrDist[2000 - i] = ptrDist[i - 1];
            ptrDist[i + 1999] = ptrDist[i - 1];
            ptrDist[4000 - i] = ptrDist[i - 1];
            totalDist += ptrDist[2000 - i] + ptrDist[i + 1999] + ptrDist[4000 - i] + ptrDist[i - 1];

            if (i < 1000) {
                ptrX[2000 - i] = ptrX[i];
                ptrY[2000 - i] = -ptrY[i];
                ptrX[4000 - i] = -ptrX[i];
                ptrY[4000 - i] = ptrY[i];
            }
        }
    }

    f32 segmentLength = totalDist / numItems;
    f32 accumDist = 0.0f;
    f32 prevAccum = 0.0f;
    s32 itemIdx = 0;

    mItemSlotPosX[0] = ptrX[0] + centerX;
    mItemSlotPosY[0] = ptrY[0] + centerY;

    for (int i = 0; i < 4000; i++) {
        accumDist += ptrDist[i];
        if (segmentLength >= prevAccum && segmentLength < accumDist) {
            itemIdx++;
            if (segmentLength - prevAccum <= accumDist - segmentLength) {
                accumDist = ptrDist[i];
                mItemSlotPosX[itemIdx] = centerX + ptrX[i - 1];
                mItemSlotPosY[itemIdx] = centerY + ptrY[i - 1];
            } else {
                accumDist = 0.0f;
                mItemSlotPosX[itemIdx] = centerX + ptrX[i];
                mItemSlotPosY[itemIdx] = centerY + ptrY[i];
            }
        }
        prevAccum = accumDist;
        if (itemIdx >= numItems - 1) break;
    }

    heap->free(ptrX);
    heap->free(ptrY);
    heap->free(ptrDist);
}

void gzInventoryMenu_c::drawItemOnRing(int slotIdx, f32 x, f32 y, f32 scale, bool selected) {
    f32 texW = mItemSlotParam1[slotIdx] * 48.0f * scale;
    f32 texH = mItemSlotParam2[slotIdx] * 48.0f * scale;
    f32 drawX = x - texW / 2.0f;
    f32 drawY = y - texH / 2.0f;

    for (int j = 0; j < 3; j++) {
        if (mpItemTex[slotIdx][j] != NULL) {
            u8 alpha = selected ? 255 : 180;
            mpItemTex[slotIdx][j]->setAlpha(alpha);
            mpItemTex[slotIdx][j]->draw(drawX, drawY, texW, texH, 0, 0, 0);
        }
    }
}

void gzInventoryMenu_c::drawItemPicker(f32 centerX, f32 centerY) {
    static const f32 ITEM_SIZE = 48.0f;
    static const f32 ITEM_SPACING = 60.0f;

    u8 slotNo = mItemSlots[mCurrentSlot];
    u8 currentItem = dComIfGs_getItem(slotNo, false);
    int listIdx = findItemInList(currentItem);

    int prevIdx = (listIdx - 1 + sRingItemCount) % sRingItemCount;
    int nextIdx = (listIdx + 1) % sRingItemCount;

    u8 prevItem = sRingItemList[prevIdx];
    u8 nextItem = sRingItemList[nextIdx];

    if (mPickerItems[0] != prevItem) {
        loadPickerItemTexture(0, prevItem);
    }
    if (mPickerItems[1] != currentItem) {
        loadPickerItemTexture(1, currentItem);
    }
    if (mPickerItems[2] != nextItem) {
        loadPickerItemTexture(2, nextItem);
    }

    f32 positions[3] = {
        centerX - ITEM_SPACING,
        centerX,
        centerX + ITEM_SPACING
    };

    u8 alphas[3] = { 120, 255, 120 };

    for (int i = 0; i < 3; i++) {
        f32 texW = ITEM_SIZE;
        f32 texH = ITEM_SIZE;

        if (mpPickerBuf[i][0] != NULL && mPickerItems[i] != fpcNm_ITEM_NONE) {
            u8 item = mPickerItems[i];
            if (item == fpcNm_ITEM_LIGHT_ARROW) {
                item = fpcNm_ITEM_BOW;
            }
            u8 texScale = dItem_data::getTexScale(item);
            f32 scale = texScale / 100.0f;
            texW = (mpPickerBuf[i][0]->width / 48.0f) * scale * ITEM_SIZE;
            texH = (mpPickerBuf[i][0]->height / 48.0f) * scale * ITEM_SIZE;
        }

        f32 itemX = positions[i] - texW / 2.0f;
        f32 itemY = centerY - texH / 2.0f;

        for (int j = 0; j < 3; j++) {
            if (mpPickerTex[i][j] != NULL) {
                mpPickerTex[i][j]->setAlpha(alphas[i]);
                mpPickerTex[i][j]->draw(itemX, itemY, texW, texH, 0, 0, 0);
            }
        }
    }

    const char* itemName = getItemName(currentItem);
    gzTextBox* nameText = gzTextBox_allocate();
    nameText->setFontSize(14.0f, 14.0f);
    nameText->setString(itemName);
    f32 nameX = centerX - 305.0f;
    f32 nameY = centerY + ITEM_SIZE / 2.0f + 30.0f;
    nameText->draw(nameX, nameY, COLOR_WHITE, HBIND_CENTER);
    gzTextBox_free(nameText);
}

void gzInventoryMenu_c::drawRingMenu() {
    f32 centerX = mXPos + 250.0f;
    f32 centerY = g_gzInfo.mBackgroundYPos + 230.0f;

    // gotta run this to prevent texture corruption
    gzSetup2DContext();
    
    if (mpRingScreen != NULL) {
        if (mpCenterPaneMgr != NULL) {
            mpCenterPaneMgr->setAlphaRate(0.6f);
        }
        if (mpCirclePaneMgr != NULL) {
            mpCirclePaneMgr->setAlphaRate(0.6f);
            mpCirclePaneMgr->scale(1.4f, 1.35f);
        }
        bool showLabel = mIsEntered && gzInfo_isMenuOption();
        J2DPane* labelPane = mpRingScreen->search('label_n');
        if (labelPane != NULL) {
            labelPane->mVisible = showLabel;
            if (showLabel) {
                labelPane->move(160.0f, 233.0f);
            }
        }
        f32 previewX = g_gzInfo.mBackgroundXPos + 170.0f;
        f32 enteredX = g_gzInfo.mBackgroundXPos + 20.0f;
        f32 t = (mXPos - enteredX) / (previewX - enteredX);
        if (t < 0.0f) t = 0.0f;
        if (t > 1.0f) t = 1.0f;
        f32 ringOffset = -50.0f * t;
        f32 ringScreenX = centerX - 300.0f + ringOffset;
        mpRingScreen->draw(ringScreenX, centerY - 220.0f, dComIfGp_getCurrentGrafPort());
    }

    gzSetup2DContext();

    f32 previewX = g_gzInfo.mBackgroundXPos + 170.0f;
    f32 enteredX = g_gzInfo.mBackgroundXPos + 20.0f;
    f32 t = (mXPos - enteredX) / (previewX - enteredX);
    if (t < 0.0f) t = 0.0f;
    if (t > 1.0f) t = 1.0f;
    f32 itemOffset = -50.0f * t;

    for (int i = 0; i < mItemsTotal; i++) {
        bool isSelected = (i == mCurrentSlot);
        f32 scale = isSelected ? 1.2f : 1.0f;
        drawItemOnRing(i, mItemSlotPosX[i] + centerX + itemOffset, mItemSlotPosY[i] + centerY, scale, isSelected);
    }

    if (mItemsTotal > 0 && mCurrentSlot < mItemsTotal) {
        if (mIsEntered && gzInfo_isCursorTypeTP() && gzInfo_getTPCursor() != NULL) {
            f32 itemX = mItemSlotPosX[mCurrentSlot] + centerX;
            f32 itemY = mItemSlotPosY[mCurrentSlot] + centerY;

            if (mpItemTex[mCurrentSlot][0] != NULL) {
                mpItemTex[mCurrentSlot][0]->mBounds.f.x = 48.0f;
                mpItemTex[mCurrentSlot][0]->mBounds.f.y = 48.0f;
                gzInfo_getTPCursor()->setPos(itemX, itemY, (J2DPane*)mpItemTex[mCurrentSlot][0], false);
                gzInfo_getTPCursor()->setParam(mItemSlotParam1[mCurrentSlot], mItemSlotParam2[mCurrentSlot], 0.1f, 0.6f, 0.5f);
            } else {
                gzInfo_getTPCursor()->setPos(itemX, itemY);
                gzInfo_getTPCursor()->setParam(mItemSlotParam2[mCurrentSlot], mItemSlotParam1[mCurrentSlot], 0.1f, 0.6f, 0.5f);
            }
            gzInfo_getTPCursor()->draw();
        }

        if (gzInfo_isMenuOption()) {
            drawItemPicker(centerX, centerY);
        }
    }
}

void gzInventoryMenu_c::freePauseItemTextures() {
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);

    for (int row = 0; row < PAUSE_MAX_ROWS; row++) {
        for (int col = 0; col < PAUSE_MAX_COLS; col++) {
            for (int k = 0; k < 3; k++) {
                delete mpPauseItemTex[row][col][k];
                mpPauseItemTex[row][col][k] = NULL;
                if (mpPauseItemBuf[row][col][k] != NULL) {
                    heap->free(mpPauseItemBuf[row][col][k]);
                    mpPauseItemBuf[row][col][k] = NULL;
                }
            }
        }
    }
}

void gzInventoryMenu_c::freePauseTextures(bool freeArchiveCache) {
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);

    freePauseItemTextures();

    delete mpPauseFramePane;
    mpPauseFramePane = NULL;

    if (mpPauseFrameBuf != NULL) {
        heap->free(mpPauseFrameBuf);
        mpPauseFrameBuf = NULL;
    }

    delete mpPoeIconPane;
    mpPoeIconPane = NULL;
    if (mpPoeIconBuf != NULL) {
        heap->free(mpPoeIconBuf);
        mpPoeIconBuf = NULL;
    }

    delete mpBugsIconPane;
    mpBugsIconPane = NULL;
    if (mpBugsIconBuf != NULL) {
        heap->free(mpBugsIconBuf);
        mpBugsIconBuf = NULL;
    }

    delete mpSkillsIconPane;
    mpSkillsIconPane = NULL;
    if (mpSkillsIconBuf != NULL) {
        heap->free(mpSkillsIconBuf);
        mpSkillsIconBuf = NULL;
    }

    delete mpFishIconPane;
    mpFishIconPane = NULL;
    if (mpFishIconBuf != NULL) {
        heap->free(mpFishIconBuf);
        mpFishIconBuf = NULL;
    }

    delete mpLettersIconPane;
    mpLettersIconPane = NULL;
    if (mpLettersIconBuf != NULL) {
        heap->free(mpLettersIconBuf);
        mpLettersIconBuf = NULL;
    }

    for (int i = 0; i < HEART_TEX_COUNT; i++) {
        delete mpHeartPiecePanes[i];
        mpHeartPiecePanes[i] = NULL;
        if (mpHeartPieceBufs[i] != NULL) {
            heap->free(mpHeartPieceBufs[i]);
            mpHeartPieceBufs[i] = NULL;
        }
    }

    for (int i = 0; i < HUD_HEART_TEX_COUNT; i++) {
        delete mpHudHeartPanes[i];
        mpHudHeartPanes[i] = NULL;
        if (mpHudHeartBufs[i] != NULL) {
            heap->free(mpHudHeartBufs[i]);
            mpHudHeartBufs[i] = NULL;
        }
    }

    freeBugIcons();

    delete mpLetterIconPane;
    mpLetterIconPane = NULL;
    if (mpLetterIconBuf != NULL) {
        heap->free(mpLetterIconBuf);
        mpLetterIconBuf = NULL;
    }

    delete mpCheckIconPane;
    mpCheckIconPane = NULL;
    if (mpCheckIconBuf != NULL) {
        heap->free(mpCheckIconBuf);
        mpCheckIconBuf = NULL;
    }
    delete mpXMarkIconPane;
    mpXMarkIconPane = NULL;
    if (mpXMarkIconBuf != NULL) {
        heap->free(mpXMarkIconBuf);
        mpXMarkIconBuf = NULL;
    }

    mPauseMenuInitialized = false;
}

int gzInventoryMenu_c::getMaxColsForRow(int row) {
    switch (row) {
    case 0: return 3;
    case 1: return 3;
    case 2: return 3;
    case 3: return 4;
    case 4: return 4;
    default: return 0;
    }
}

void gzInventoryMenu_c::readPauseSlotStates() {
    if (dComIfGs_isItemFirstBit(fpcNm_ITEM_SWORD)) {
        mPauseSlotState[0][0] = 2;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_WOOD_STICK)) {
        mPauseSlotState[0][0] = 1;
    } else {
        mPauseSlotState[0][0] = 0;
    }

    if (dComIfGs_isItemFirstBit(fpcNm_ITEM_LIGHT_SWORD)) {
        mPauseSlotState[0][1] = 2;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_MASTER_SWORD)) {
        mPauseSlotState[0][1] = 1;
    } else {
        mPauseSlotState[0][1] = 0;
    }

    if (dComIfGs_isItemFirstBit(fpcNm_ITEM_SHIELD)) {
        mPauseSlotState[1][0] = 2;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_WOOD_SHIELD)) {
        mPauseSlotState[1][0] = 1;
    } else {
        mPauseSlotState[1][0] = 0;
    }
    
    mPauseSlotState[1][1] = dComIfGs_isItemFirstBit(fpcNm_ITEM_HYLIA_SHIELD) ? 1 : 0;

    mPauseSlotState[2][0] = dComIfGs_isItemFirstBit(fpcNm_ITEM_WEAR_KOKIRI) ? 1 : 0;
    mPauseSlotState[2][1] = dComIfGs_isItemFirstBit(fpcNm_ITEM_WEAR_ZORA) ? 1 : 0;
    mPauseSlotState[2][2] = dComIfGs_isItemFirstBit(fpcNm_ITEM_ARMOR) ? 1 : 0;

    mPauseSlotState[3][0] = dComIfGs_getWalletSize();
    if (dComIfGs_isItemFirstBit(fpcNm_ITEM_ARROW_LV3)) {
        mPauseSlotState[3][1] = 3;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_ARROW_LV2)) {
        mPauseSlotState[3][1] = 2;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_ARROW_LV1)) {
        mPauseSlotState[3][1] = 1;
    } else {
        mPauseSlotState[3][1] = 0;
    }
    mPauseSlotState[3][2] = 0;
    mPauseSlotState[3][3] = dComIfGs_getEventReg(0x30ff) & 0x7;

    if (dComIfGs_isItemFirstBit(fpcNm_ITEM_SMELL_POH)) {
        mPauseSlotState[4][0] = 5;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_SMELL_MEDICINE)) {
        mPauseSlotState[4][0] = 4;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_SMELL_FISH)) {
        mPauseSlotState[4][0] = 3;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_SMELL_YELIA_POUCH)) {
        mPauseSlotState[4][0] = 2;
    } else if (dComIfGs_isItemFirstBit(fpcNm_ITEM_SMELL_CHILDREN)) {
        mPauseSlotState[4][0] = 1;
    } else {
        mPauseSlotState[4][0] = 0;
    }
    mPauseSlotState[4][2] = 0;
    mPauseSlotState[4][3] = 0;
}

u8 gzInventoryMenu_c::getItemForSlot(int row, int col) {
    u8 state = mPauseSlotState[row][col];

    switch (row) {
    case 0:
        if (col == 0) {
            if (state == 2) return fpcNm_ITEM_SWORD;
            if (state == 1) return fpcNm_ITEM_WOOD_STICK;
            return fpcNm_ITEM_NONE;
        } else {
            if (state == 2) return fpcNm_ITEM_LIGHT_SWORD;
            if (state == 1) return fpcNm_ITEM_MASTER_SWORD;
            return fpcNm_ITEM_NONE;
        }
    case 1:
        if (col == 0) {
            if (state == 2) return fpcNm_ITEM_SHIELD;
            if (state == 1) return fpcNm_ITEM_WOOD_SHIELD;
            return fpcNm_ITEM_NONE;
        } else {
            return state ? fpcNm_ITEM_HYLIA_SHIELD : fpcNm_ITEM_NONE;
        }
    case 2:
        if (col == 0) return state ? fpcNm_ITEM_WEAR_KOKIRI : fpcNm_ITEM_NONE;
        if (col == 1) return state ? fpcNm_ITEM_WEAR_ZORA : fpcNm_ITEM_NONE;
        if (col == 2) return state ? fpcNm_ITEM_ARMOR : fpcNm_ITEM_NONE;
        break;
    case 3:
        if (col == 0) {
            if (state >= 3) return fpcNm_ITEM_WALLET_LV3;
            if (state == 2) return fpcNm_ITEM_WALLET_LV2;
            if (state == 1) return fpcNm_ITEM_WALLET_LV1;
            return fpcNm_ITEM_NONE;
        }
        if (col == 1) {
            if (state >= 3) return fpcNm_ITEM_ARROW_LV3;
            if (state == 2) return fpcNm_ITEM_ARROW_LV2;
            if (state == 1) return fpcNm_ITEM_ARROW_LV1;
            return fpcNm_ITEM_NONE;
        }
        if (col == 2) return fpcNm_ITEM_NONE;
        if (col == 3) return fpcNm_ITEM_NONE;
        break;
    case 4:
        if (col == 0) {
            if (state == 5) return fpcNm_ITEM_SMELL_POH;
            if (state == 4) return fpcNm_ITEM_SMELL_MEDICINE;
            if (state == 3) return fpcNm_ITEM_SMELL_FISH;
            if (state == 2) return fpcNm_ITEM_SMELL_YELIA_POUCH;
            if (state == 1) return fpcNm_ITEM_SMELL_CHILDREN;
            return fpcNm_ITEM_NONE;
        }
        if (col == 1) return fpcNm_ITEM_NONE;
        if (col == 2) return fpcNm_ITEM_NONE;
        if (col == 3) return fpcNm_ITEM_NONE;
        break;
    }
    return fpcNm_ITEM_NONE;
}

u8 gzInventoryMenu_c::getDisplayItemForSlot(int row, int col) {
    u8 item = getItemForSlot(row, col);
    if (item != fpcNm_ITEM_NONE) return item;

    switch (row) {
    case 0:
        return (col == 0) ? fpcNm_ITEM_WOOD_STICK : fpcNm_ITEM_MASTER_SWORD;
    case 1:
        return (col == 0) ? fpcNm_ITEM_WOOD_SHIELD : fpcNm_ITEM_HYLIA_SHIELD;
    case 2:
        if (col == 0) return fpcNm_ITEM_WEAR_KOKIRI;
        if (col == 1) return fpcNm_ITEM_WEAR_ZORA;
        if (col == 2) return fpcNm_ITEM_ARMOR;
        break;
    case 3:
        if (col == 0) return fpcNm_ITEM_WALLET_LV1;
        if (col == 1) return fpcNm_ITEM_ARROW_LV1;
        break;
    case 4:
        if (col == 0) return fpcNm_ITEM_SMELL_CHILDREN;
        break;
    }
    return fpcNm_ITEM_NONE;
}

static const char* getScentTextureName(u8 itemId) {
    switch (itemId) {
    case fpcNm_ITEM_SMELL_CHILDREN:
        return "ni_nioi_child.bti";
    case fpcNm_ITEM_SMELL_YELIA_POUCH:
        return "ni_nioi_iria.bti";
    case fpcNm_ITEM_SMELL_FISH:
        return "ni_nioi_fish.bti";
    case fpcNm_ITEM_SMELL_MEDICINE:
        return "ni_nioi_medicin.bti";
    case fpcNm_ITEM_SMELL_POH:
        return "ni_nioi_pou.bti";
    default:
        return NULL;
    }
}

void gzInventoryMenu_c::loadPauseItemTexture(int row, int col, u8 itemId) {
    for (int k = 0; k < 3; k++) {
        delete mpPauseItemTex[row][col][k];
        mpPauseItemTex[row][col][k] = NULL;
    }

    if (itemId == fpcNm_ITEM_NONE) {
        return;
    }

    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
    JKRHeap* oldHeap = heap->becomeCurrentHeap();

    for (int k = 0; k < 3; k++) {
        if (mpPauseItemBuf[row][col][k] == NULL) {
            mpPauseItemBuf[row][col][k] = (ResTIMG*)new (heap, 0x20) u8[0xC00];
        }
    }

    const char* scentTex = getScentTextureName(itemId);
    s32 textureNum = 0;

    if (scentTex != NULL) {
        JKRArchive* collectArc = dComIfGp_getCollectResArchive();
        if (collectArc != NULL) {
            u32 readSize = collectArc->readResource(
                mpPauseItemBuf[row][col][0], 0xC00, 'TIMG', scentTex);
            if (readSize > 0) {
                DCStoreRangeNoSync(mpPauseItemBuf[row][col][0], 0xC00);
                textureNum = 1;
            }
        }
    } else {
        textureNum = dMeter2Info_readItemTexture(
            itemId, mpPauseItemBuf[row][col][0], NULL, mpPauseItemBuf[row][col][1], NULL,
            mpPauseItemBuf[row][col][2], NULL, NULL, NULL, -1);
    }

    for (int k = 0; k < textureNum; k++) {
        mpPauseItemTex[row][col][k] = new (heap, 4) J2DPicture(mpPauseItemBuf[row][col][k]);
        mpPauseItemTex[row][col][k]->setBasePosition(J2DBasePosition_4);
    }

    if (scentTex == NULL) {
        dMeter2Info_setItemColor(itemId, mpPauseItemTex[row][col][0], mpPauseItemTex[row][col][1], mpPauseItemTex[row][col][2], NULL);
    }

    oldHeap->becomeCurrentHeap();
}

void gzInventoryMenu_c::loadBugIcons() {
    static const u8 sBugItemIds[BUG_COUNT] = {
        fpcNm_ITEM_M_ANT, fpcNm_ITEM_F_ANT, fpcNm_ITEM_M_MAYFLY, fpcNm_ITEM_F_MAYFLY,
        fpcNm_ITEM_M_BEETLE, fpcNm_ITEM_F_BEETLE, fpcNm_ITEM_M_MANTIS, fpcNm_ITEM_F_MANTIS,
        fpcNm_ITEM_M_STAG_BEETLE, fpcNm_ITEM_F_STAG_BEETLE, fpcNm_ITEM_M_DANGOMUSHI,
        fpcNm_ITEM_F_DANGOMUSHI, fpcNm_ITEM_M_BUTTERFLY, fpcNm_ITEM_F_BUTTERFLY,
        fpcNm_ITEM_M_LADYBUG, fpcNm_ITEM_F_LADYBUG, fpcNm_ITEM_M_SNAIL, fpcNm_ITEM_F_SNAIL,
        fpcNm_ITEM_M_NANAFUSHI, fpcNm_ITEM_F_NANAFUSHI, fpcNm_ITEM_M_GRASSHOPPER,
        fpcNm_ITEM_F_GRASSHOPPER, fpcNm_ITEM_M_DRAGONFLY, fpcNm_ITEM_F_DRAGONFLY,
    };
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
    JKRHeap* oldHeap = heap->becomeCurrentHeap();
    for (int i = 0; i < BUG_COUNT; i++) {
        if (mpBugIconPanes[i] != NULL) continue;
        if (mpBugIconBufs[i] == NULL) {
            mpBugIconBufs[i] = (ResTIMG*)new (heap, 0x20) u8[0xC00];
        }
        if (mpBugIconBufs[i] != NULL) {
            int texNum = dMeter2Info_readItemTexture(
                sBugItemIds[i], mpBugIconBufs[i], NULL, NULL, NULL,
                NULL, NULL, NULL, NULL, -1);
            if (texNum > 0) {
                mpBugIconPanes[i] = new (heap, 4) J2DPicture(mpBugIconBufs[i]);
            }
        }
    }
    oldHeap->becomeCurrentHeap();
}

void gzInventoryMenu_c::freeBugIcons() {
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
    for (int i = 0; i < BUG_COUNT; i++) {
        delete mpBugIconPanes[i];
        mpBugIconPanes[i] = NULL;
        if (mpBugIconBufs[i] != NULL) {
            heap->free(mpBugIconBufs[i]);
            mpBugIconBufs[i] = NULL;
        }
    }
}

void gzInventoryMenu_c::initPauseMenu() {
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);

    readPauseSlotStates();

    for (int row = 0; row < PAUSE_MAX_ROWS; row++) {
        int maxCols = getMaxColsForRow(row);
        for (int col = 0; col < maxCols; col++) {
            u8 item = getDisplayItemForSlot(row, col);
            loadPauseItemTexture(row, col, item);
        }
    }

    JKRArchive* collectArc = dComIfGp_getCollectResArchive();
    if (collectArc != NULL && mpPauseFramePane == NULL) {
        JKRArchive::SDIFileEntry* frameEntry =
            collectArc->findTypeResource('TIMG', "tt_spot_square3.bti");
        bool frameCached = (frameEntry != NULL && frameEntry->data != NULL);

        ResTIMG* frameTex;
        {
            JKRHeapOverrideScope scope(heap);
            frameTex = (ResTIMG*)collectArc->getResource('TIMG', "tt_spot_square3.bti");
        }

        if (frameTex != NULL) {
            JKRHeap* oldHeap = heap->becomeCurrentHeap();
            u32 imgSize = GXGetTexBufferSize(frameTex->width, frameTex->height, frameTex->format,
                                              frameTex->mipmapEnabled, frameTex->mipmapCount);
            u32 totalSize = frameTex->imageOffset + imgSize;
            mpPauseFrameBuf = (ResTIMG*)heap->alloc(totalSize, 32);
            if (mpPauseFrameBuf != NULL) {
                memcpy(mpPauseFrameBuf, frameTex, totalSize);
                mpPauseFramePane = new (heap, 4) J2DPicture(mpPauseFrameBuf);
                if (mpPauseFramePane != NULL) {
                    mpPauseFramePane->setBasePosition(J2DBasePosition_4);
                }
            }
            oldHeap->becomeCurrentHeap();

            if (!frameCached) {
                collectArc->detachResource(frameTex);
                heap->free(frameTex);
            }
        }
    }

    if (collectArc != NULL && mpPoeIconPane == NULL) {
        JKRArchive::SDIFileEntry* poeEntry =
            collectArc->findTypeResource('TIMG', "ni_item_icon_pou.bti");
        bool poeCached = (poeEntry != NULL && poeEntry->data != NULL);

        ResTIMG* poeIconTex;
        {
            JKRHeapOverrideScope scope(heap);
            poeIconTex = (ResTIMG*)collectArc->getResource('TIMG', "ni_item_icon_pou.bti");
        }

        if (poeIconTex != NULL) {
            JKRHeap* oldHeap = heap->becomeCurrentHeap();
            u32 imgSize = GXGetTexBufferSize(poeIconTex->width, poeIconTex->height, poeIconTex->format,
                                              poeIconTex->mipmapEnabled, poeIconTex->mipmapCount);
            u32 totalSize = poeIconTex->imageOffset + imgSize;
            if (poeIconTex->indexTexture && poeIconTex->numColors > 0) {
                u32 palEnd = poeIconTex->paletteOffset + poeIconTex->numColors * 2;
                if (palEnd > totalSize) {
                    totalSize = palEnd;
                }
            }
            mpPoeIconBuf = (ResTIMG*)heap->alloc(totalSize, 32);
            if (mpPoeIconBuf != NULL) {
                memcpy(mpPoeIconBuf, poeIconTex, totalSize);
                DCStoreRangeNoSync(mpPoeIconBuf, totalSize);
                mpPoeIconPane = new (heap, 4) J2DPicture(mpPoeIconBuf);
                if (mpPoeIconPane != NULL) {
                    mpPoeIconPane->setBasePosition(J2DBasePosition_4);
                }
            }
            oldHeap->becomeCurrentHeap();

            if (!poeCached) {
                collectArc->detachResource(poeIconTex);
                heap->free(poeIconTex);
            }
        }
    }

    struct CollectIconLoad {
        const char* texName;
        J2DPicture** pPane;
        ResTIMG** pBuf;
    };
    CollectIconLoad iconLoads[] = {
        {"ni_kab_o.bti", &mpBugsIconPane, &mpBugsIconBuf},
        {"ni_item_icon_makimono.bti", &mpSkillsIconPane, &mpSkillsIconBuf},
        {"ni_item_icon_fish.bti", &mpFishIconPane, &mpFishIconBuf},
        {"ni_item_icon_letter.bti", &mpLettersIconPane, &mpLettersIconBuf},
    };
    for (int i = 0; i < 4; i++) {
        if (collectArc != NULL && *iconLoads[i].pPane == NULL) {
            JKRArchive::SDIFileEntry* entry =
                collectArc->findTypeResource('TIMG', iconLoads[i].texName);
            bool wasCached = (entry != NULL && entry->data != NULL);

            ResTIMG* tex;
            {
                JKRHeapOverrideScope scope(heap);
                tex = (ResTIMG*)collectArc->getResource('TIMG', iconLoads[i].texName);
            }

            if (tex != NULL) {
                JKRHeap* oldHeap = heap->becomeCurrentHeap();
                u32 imgSize = GXGetTexBufferSize(tex->width, tex->height, tex->format,
                                                  tex->mipmapEnabled, tex->mipmapCount);
                u32 totalSize = tex->imageOffset + imgSize;
                if (tex->indexTexture && tex->numColors > 0) {
                    u32 palEnd = tex->paletteOffset + tex->numColors * 2;
                    if (palEnd > totalSize) {
                        totalSize = palEnd;
                    }
                }
                *iconLoads[i].pBuf = (ResTIMG*)heap->alloc(totalSize, 32);
                if (*iconLoads[i].pBuf != NULL) {
                    memcpy(*iconLoads[i].pBuf, tex, totalSize);
                    DCStoreRangeNoSync(*iconLoads[i].pBuf, totalSize);
                    *iconLoads[i].pPane = new (heap, 4) J2DPicture(*iconLoads[i].pBuf);
                    if (*iconLoads[i].pPane != NULL) {
                        (*iconLoads[i].pPane)->setBasePosition(J2DBasePosition_4);
                    }
                }
                oldHeap->becomeCurrentHeap();

                if (!wasCached) {
                    collectArc->detachResource(tex);
                    heap->free(tex);
                }
            }
        }
    }

    if (collectArc != NULL && mpHeartPiecePanes[0] == NULL) {
        static const char* heartTexNames[HEART_TEX_COUNT] = {
            "zelda_heart_parts_iwasawa_ver2_base_00.bti",
            "zelda_heart_parts_iwasawa_ver2_parts1.bti",
            "zelda_heart_parts_iwasawa_ver2_parts2.bti",
            "zelda_heart_parts_iwasawa_ver2_parts3.bti",
            "zelda_heart_parts_iwasawa_ver2_parts4.bti",
        };
        for (int i = 0; i < HEART_TEX_COUNT; i++) {
            JKRArchive::SDIFileEntry* entry =
                collectArc->findTypeResource('TIMG', heartTexNames[i]);
            bool wasCached = (entry != NULL && entry->data != NULL);

            ResTIMG* tex;
            {
                JKRHeapOverrideScope scope(heap);
                tex = (ResTIMG*)collectArc->getResource('TIMG', heartTexNames[i]);
            }

            if (tex != NULL) {
                JKRHeap* oldHeap = heap->becomeCurrentHeap();
                u32 imgSize = GXGetTexBufferSize(tex->width, tex->height, tex->format,
                                                  tex->mipmapEnabled, tex->mipmapCount);
                u32 totalSize = tex->imageOffset + imgSize;
                if (tex->indexTexture && tex->numColors > 0) {
                    u32 palEnd = tex->paletteOffset + tex->numColors * 2;
                    if (palEnd > totalSize) {
                        totalSize = palEnd;
                    }
                }
                mpHeartPieceBufs[i] = (ResTIMG*)heap->alloc(totalSize, 32);
                if (mpHeartPieceBufs[i] != NULL) {
                    memcpy(mpHeartPieceBufs[i], tex, totalSize);
                    DCStoreRangeNoSync(mpHeartPieceBufs[i], totalSize);
                    mpHeartPiecePanes[i] = new (heap, 4) J2DPicture(mpHeartPieceBufs[i]);
                }
                oldHeap->becomeCurrentHeap();

                if (!wasCached) {
                    collectArc->detachResource(tex);
                    heap->free(tex);
                }
            }
        }
    }

    JKRArchive* main2DArc = dComIfGp_getMain2DArchive();
    if (main2DArc != NULL && mpHudHeartPanes[0] == NULL) {
        static const char* hudHeartTexNames[HUD_HEART_TEX_COUNT] = {
            "tt_heart_00.bti",
            "tt_heart_base_wave_24.bti",
        };
        for (int i = 0; i < HUD_HEART_TEX_COUNT; i++) {
            JKRArchive::SDIFileEntry* entry =
                main2DArc->findTypeResource('TIMG', hudHeartTexNames[i]);
            bool wasCached = (entry != NULL && entry->data != NULL);

            ResTIMG* tex;
            {
                JKRHeapOverrideScope scope(heap);
                tex = (ResTIMG*)main2DArc->getResource('TIMG', hudHeartTexNames[i]);
            }

            if (tex != NULL) {
                JKRHeap* oldHeap = heap->becomeCurrentHeap();
                u32 imgSize = GXGetTexBufferSize(tex->width, tex->height, tex->format,
                                                  tex->mipmapEnabled, tex->mipmapCount);
                u32 totalSize = tex->imageOffset + imgSize;
                mpHudHeartBufs[i] = (ResTIMG*)heap->alloc(totalSize, 32);
                if (mpHudHeartBufs[i] != NULL) {
                    memcpy(mpHudHeartBufs[i], tex, totalSize);
                    DCStoreRangeNoSync(mpHudHeartBufs[i], totalSize);
                    mpHudHeartPanes[i] = new (heap, 4) J2DPicture(mpHudHeartBufs[i]);
                }
                oldHeap->becomeCurrentHeap();

                if (!wasCached) {
                    main2DArc->detachResource(tex);
                    heap->free(tex);
                }
            }
        }
    }

    loadBugIcons();

    if (mpLetterIconPane == NULL) {
        if (mpLetterIconBuf == NULL) {
            mpLetterIconBuf = (ResTIMG*)new (heap, 0x20) u8[0xC00];
        }
        if (mpLetterIconBuf != NULL) {
            JKRHeap* oldHeap = heap->becomeCurrentHeap();
            int texNum = dMeter2Info_readItemTexture(
                fpcNm_ITEM_LETTER, mpLetterIconBuf, NULL, NULL, NULL,
                NULL, NULL, NULL, NULL, -1);
            if (texNum > 0) {
                mpLetterIconPane = new (heap, 4) J2DPicture(mpLetterIconBuf);
            }
            oldHeap->becomeCurrentHeap();
        }
    }

    if (mpCheckIconPane == NULL) {
        mpCheckIconBuf = JKRHeap::alloc(SKILL_ICON_BTI_SIZE, 32, heap);
        if (mpCheckIconBuf != NULL) {
            gzDVDLoadFile("/gz/check.bti", mpCheckIconBuf, SKILL_ICON_BTI_SIZE, 0);
            mpCheckIconPane = new (heap, 4) J2DPicture((ResTIMG*)mpCheckIconBuf);
            if (mpCheckIconPane != NULL) {
                mpCheckIconPane->setBlackWhite(
                    JUtility::TColor(0, 0, 0, 0), JUtility::TColor(76, 175, 80, 255));
            }
        }
    }
    if (mpXMarkIconPane == NULL) {
        mpXMarkIconBuf = JKRHeap::alloc(SKILL_ICON_BTI_SIZE, 32, heap);
        if (mpXMarkIconBuf != NULL) {
            gzDVDLoadFile("/gz/x_mark.bti", mpXMarkIconBuf, SKILL_ICON_BTI_SIZE, 0);
            mpXMarkIconPane = new (heap, 4) J2DPicture((ResTIMG*)mpXMarkIconBuf);
            if (mpXMarkIconPane != NULL) {
                mpXMarkIconPane->setBlackWhite(
                    JUtility::TColor(0, 0, 0, 0), JUtility::TColor(244, 67, 54, 255));
            }
        }
    }

    mPauseMenuInitialized = true;
}

void gzInventoryMenu_c::cyclePauseSlot(int row, int col) {
    u8 state = mPauseSlotState[row][col];

    switch (row) {
    case 0:
        if (col == 0) {
            state = (state + 1) % 3;
            dComIfGs_offItemFirstBit(fpcNm_ITEM_WOOD_STICK);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_SWORD);
            if (state == 1) dComIfGs_onItemFirstBit(fpcNm_ITEM_WOOD_STICK);
            if (state == 2) dComIfGs_onItemFirstBit(fpcNm_ITEM_SWORD);
        } else {
            state = (state + 1) % 3;
            dComIfGs_offItemFirstBit(fpcNm_ITEM_MASTER_SWORD);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_LIGHT_SWORD);
            if (state == 1) dComIfGs_onItemFirstBit(fpcNm_ITEM_MASTER_SWORD);
            if (state == 2) {
                dComIfGs_onItemFirstBit(fpcNm_ITEM_MASTER_SWORD);
                dComIfGs_onItemFirstBit(fpcNm_ITEM_LIGHT_SWORD);
            }
        }
        break;
    case 1:
        if (col == 0) {
            state = (state + 1) % 3;
            dComIfGs_offItemFirstBit(fpcNm_ITEM_WOOD_SHIELD);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_SHIELD);
            if (state == 1) dComIfGs_onItemFirstBit(fpcNm_ITEM_WOOD_SHIELD);
            if (state == 2) dComIfGs_onItemFirstBit(fpcNm_ITEM_SHIELD);
        } else {
            state = state ? 0 : 1;
            if (state) {
                dComIfGs_onItemFirstBit(fpcNm_ITEM_HYLIA_SHIELD);
            } else {
                dComIfGs_offItemFirstBit(fpcNm_ITEM_HYLIA_SHIELD);
            }
        }
        break;
    case 2:
        state = state ? 0 : 1;
        if (col == 0) {
            if (state) dComIfGs_onItemFirstBit(fpcNm_ITEM_WEAR_KOKIRI);
            else dComIfGs_offItemFirstBit(fpcNm_ITEM_WEAR_KOKIRI);
        } else if (col == 1) {
            if (state) dComIfGs_onItemFirstBit(fpcNm_ITEM_WEAR_ZORA);
            else dComIfGs_offItemFirstBit(fpcNm_ITEM_WEAR_ZORA);
        } else if (col == 2) {
            if (state) dComIfGs_onItemFirstBit(fpcNm_ITEM_ARMOR);
            else dComIfGs_offItemFirstBit(fpcNm_ITEM_ARMOR);
        }
        break;
    case 3:
        if (col == 0) {
            state = (state + 1) % 4;
            dComIfGs_setWalletSize(state);
        } else if (col == 1) {
            state = (state + 1) % 4;
            dComIfGs_offItemFirstBit(fpcNm_ITEM_ARROW_LV1);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_ARROW_LV2);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_ARROW_LV3);
            if (state >= 1) dComIfGs_onItemFirstBit(fpcNm_ITEM_ARROW_LV1);
            if (state >= 2) dComIfGs_onItemFirstBit(fpcNm_ITEM_ARROW_LV2);
            if (state >= 3) dComIfGs_onItemFirstBit(fpcNm_ITEM_ARROW_LV3);
        } else if (col == 2) {
            state = state ? 0 : 1;
        } else if (col == 3) {
            state = (state + 1) % 8;
            dComIfGs_setEventReg(0x30ff, state);
        }
        break;
    case 4:
        if (col == 0) {
            state = (state + 1) % 6;
            dComIfGs_offItemFirstBit(fpcNm_ITEM_SMELL_CHILDREN);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_SMELL_YELIA_POUCH);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_SMELL_FISH);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_SMELL_MEDICINE);
            dComIfGs_offItemFirstBit(fpcNm_ITEM_SMELL_POH);
            if (state == 1) {
                dComIfGs_onItemFirstBit(fpcNm_ITEM_SMELL_CHILDREN);
                dComIfGs_setCollectSmell(fpcNm_ITEM_SMELL_CHILDREN);
            } else if (state == 2) {
                dComIfGs_onItemFirstBit(fpcNm_ITEM_SMELL_YELIA_POUCH);
                dComIfGs_setCollectSmell(fpcNm_ITEM_SMELL_YELIA_POUCH);
            } else if (state == 3) {
                dComIfGs_onItemFirstBit(fpcNm_ITEM_SMELL_FISH);
                dComIfGs_setCollectSmell(fpcNm_ITEM_SMELL_FISH);
            } else if (state == 4) {
                dComIfGs_onItemFirstBit(fpcNm_ITEM_SMELL_MEDICINE);
                dComIfGs_setCollectSmell(fpcNm_ITEM_SMELL_MEDICINE);
            } else if (state == 5) {
                dComIfGs_onItemFirstBit(fpcNm_ITEM_SMELL_POH);
                dComIfGs_setCollectSmell(fpcNm_ITEM_SMELL_POH);
            } else {
                dComIfGs_setCollectSmell(fpcNm_ITEM_NONE);
            }
        } else if (col == 1) {
        } else if (col == 2) {
            state = state ? 0 : 1;
        } else if (col == 3) {
            state = state ? 0 : 1;
        }
        break;
    }

    bool wasEquipped = isSlotEquipped(row, col);
    mPauseSlotState[row][col] = state;
    u8 item = getDisplayItemForSlot(row, col);
    loadPauseItemTexture(row, col, item);
    if (wasEquipped && getItemForSlot(row, col) != fpcNm_ITEM_NONE) {
        equipPauseSlot(row, col);
    }
}

void gzInventoryMenu_c::equipPauseSlot(int row, int col) {
    if (row > 2) return;

    u8 state = mPauseSlotState[row][col];
    if (state == 0) return;

    u8 item = getItemForSlot(row, col);
    if (item == fpcNm_ITEM_NONE) return;

    switch (row) {
    case 0:
        dMeter2Info_setSword(item, false);
        break;
    case 1:
        dMeter2Info_setShield(item, false);
        break;
    case 2:
        dMeter2Info_setCloth(item, false);
        break;
    }
}

void gzInventoryMenu_c::executePauseMenu() {
    if (!mIsEntered) {
        return;
    }
    if (!mPauseMenuInitialized) {
        initPauseMenu();
    }

    int maxCols = getMaxColsForRow(mPauseCursorRow);


    if (inSkillSubMenu()) {
        if (gzPad::getTrigDown()) {
            mSkillSubMenuIndex = (mSkillSubMenuIndex + 1) % 7;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigUp()) {
            mSkillSubMenuIndex = (mSkillSubMenuIndex - 1 + 7) % 7;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigA()) {
            static const u16 sSkillFlags[] = {
                dSv_event_flag_c::F_0339, dSv_event_flag_c::F_0338,
                dSv_event_flag_c::F_0340, dSv_event_flag_c::F_0341,
                dSv_event_flag_c::F_0342, dSv_event_flag_c::F_0343,
                dSv_event_flag_c::F_0344,
            };
            u16 flag = sSkillFlags[mSkillSubMenuIndex];
            if (dComIfGs_isEventBit(flag)) {
                dComIfGs_offEventBit(flag);
            } else {
                dComIfGs_onEventBit(flag);
            }
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }
        if (gzPad::getTrigB()) {
            mSkillSubMenuActive = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
            return;
        }
    } else if (inBugSubMenu()) {
        if (gzPad::getTrigDown()) {
            mBugSubMenuRow = (mBugSubMenuRow + 1) % BUG_GRID_ROWS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigUp()) {
            mBugSubMenuRow = (mBugSubMenuRow - 1 + BUG_GRID_ROWS) % BUG_GRID_ROWS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigRight()) {
            mBugSubMenuCol = (mBugSubMenuCol + 1) % BUG_GRID_COLS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigLeft()) {
            mBugSubMenuCol = (mBugSubMenuCol - 1 + BUG_GRID_COLS) % BUG_GRID_COLS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigA()) {
            static const u8 sBugItemIds[BUG_COUNT] = {
                fpcNm_ITEM_M_ANT, fpcNm_ITEM_F_ANT,
                fpcNm_ITEM_M_MAYFLY, fpcNm_ITEM_F_MAYFLY,
                fpcNm_ITEM_M_BEETLE, fpcNm_ITEM_F_BEETLE,
                fpcNm_ITEM_M_MANTIS, fpcNm_ITEM_F_MANTIS,
                fpcNm_ITEM_M_STAG_BEETLE, fpcNm_ITEM_F_STAG_BEETLE,
                fpcNm_ITEM_M_DANGOMUSHI, fpcNm_ITEM_F_DANGOMUSHI,
                fpcNm_ITEM_M_BUTTERFLY, fpcNm_ITEM_F_BUTTERFLY,
                fpcNm_ITEM_M_LADYBUG, fpcNm_ITEM_F_LADYBUG,
                fpcNm_ITEM_M_SNAIL, fpcNm_ITEM_F_SNAIL,
                fpcNm_ITEM_M_NANAFUSHI, fpcNm_ITEM_F_NANAFUSHI,
                fpcNm_ITEM_M_GRASSHOPPER, fpcNm_ITEM_F_GRASSHOPPER,
                fpcNm_ITEM_M_DRAGONFLY, fpcNm_ITEM_F_DRAGONFLY,
            };
            int idx = mBugSubMenuRow * BUG_GRID_COLS + mBugSubMenuCol;
            u8 itemId = sBugItemIds[idx];
            if (dComIfGs_isItemFirstBit(itemId)) {
                dComIfGs_offItemFirstBit(itemId);
            } else {
                dComIfGs_onItemFirstBit(itemId);
            }
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }
        if (gzPad::getTrigB()) {
            mBugSubMenuActive = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
            return;
        }
    } else if (inLetterSubMenu()) {
        if (gzPad::getTrigDown()) {
            mLetterSubMenuRow = (mLetterSubMenuRow + 1) % LETTER_GRID_ROWS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigUp()) {
            mLetterSubMenuRow = (mLetterSubMenuRow - 1 + LETTER_GRID_ROWS) % LETTER_GRID_ROWS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigRight()) {
            mLetterSubMenuCol = (mLetterSubMenuCol + 1) % LETTER_GRID_COLS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigLeft()) {
            mLetterSubMenuCol = (mLetterSubMenuCol - 1 + LETTER_GRID_COLS) % LETTER_GRID_COLS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigA()) {
            int idx = mLetterSubMenuRow * LETTER_GRID_COLS + mLetterSubMenuCol;
            if (dComIfGs_isLetterGetFlag(idx)) {
                dComIfGs_offLetterGetFlag(idx);
                for (int j = 0; j < 64; j++) {
                    if (dComIfGs_getGetNumber(j) == idx + 1) {
                        for (int k = j; k < 63; k++) {
                            dComIfGs_setGetNumber(k, dComIfGs_getGetNumber(k + 1));
                        }
                        dComIfGs_setGetNumber(63, 0);
                        break;
                    }
                }
            } else {
                dComIfGs_onLetterGetFlag(idx);
                u8 letterNum = dMeter2Info_getRecieveLetterNum() - 1;
                dComIfGs_setGetNumber(letterNum, idx + 1);
            }
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }
        if (gzPad::getTrigB()) {
            mLetterSubMenuActive = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
            return;
        }
    } else if (inFishAdjusting()) {
        static const u8 sFishGridIdx2[FISH_COUNT] = { 3, 5, 4, 0, 2, 1 };
        int gridIdx = mFishSubMenuRow * FISH_GRID_COLS + mFishSubMenuCol;
        u8 fishIdx = sFishGridIdx2[gridIdx];

        if (mFishEditField == 0) {
            u16 count = dComIfGs_getFishNum(fishIdx);
            if (gzPad::getTrigRight()) {
                dComIfGs_setFishNum(fishIdx, count >= 999 ? 0 : count + 1);
                gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
            }
            if (gzPad::getTrigLeft()) {
                dComIfGs_setFishNum(fishIdx, count == 0 ? 999 : count - 1);
                gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
            }
        } else {
            u8 size = dComIfGs_getFishSize(fishIdx);
            if (gzPad::getTrigRight()) {
                dComIfGs_setFishSize(fishIdx, size >= 255 ? 0 : size + 1);
                gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
            }
            if (gzPad::getTrigLeft()) {
                dComIfGs_setFishSize(fishIdx, size == 0 ? 255 : size - 1);
                gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
            }
        }

        mpHaihai->_execute(0);

        if (gzPad::getTrigA() || gzPad::getTrigB()) {
            mFishAdjusting = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
            return;
        }
    } else if (inFishEditMode()) {
        if (gzPad::getTrigUp() || gzPad::getTrigDown()) {
            mFishEditField ^= 1;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }

        if (gzPad::getTrigA()) {
            mFishAdjusting = true;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        }

        if (gzPad::getTrigB()) {
            gzInfo_offMenuOption();
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
            return;
        }
    } else if (inFishSubMenu()) {
        static const u8 sFishGridIdx[FISH_COUNT] = { 3, 5, 4, 0, 2, 1 };
        if (gzPad::getTrigDown()) {
            mFishSubMenuRow = (mFishSubMenuRow + 1) % FISH_GRID_ROWS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigUp()) {
            mFishSubMenuRow = (mFishSubMenuRow - 1 + FISH_GRID_ROWS) % FISH_GRID_ROWS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigRight()) {
            mFishSubMenuCol = (mFishSubMenuCol + 1) % FISH_GRID_COLS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigLeft()) {
            mFishSubMenuCol = (mFishSubMenuCol - 1 + FISH_GRID_COLS) % FISH_GRID_COLS;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigA()) {
            mFishEditField = 0;
            mFishAdjusting = false;
            gzInfo_onMenuOption();
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        }
        if (gzPad::getTrigB()) {
            mFishSubMenuActive = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
            return;
        }
    } else if (inPoeEditMode()) {
        u8 poeCount = dComIfGs_getPohSpiritNum();

        if (gzPad::getTrigRight()) {
            poeCount = (poeCount >= 60) ? 0 : poeCount + 1;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }

        if (gzPad::getTrigLeft()) {
            poeCount = (poeCount == 0) ? 60 : poeCount - 1;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }

        dComIfGs_setPohSpiritNum(poeCount);

        if (gzPad::getTrigB()) {
            gzInfo_offMenuOption();
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
            return;
        }
    } else if (inHeartPieceEditMode()) {
        u16 maxLife = dComIfGs_getMaxLife();

        if (gzPad::getTrigRight()) {
            if (maxLife < 100) {
                dComIfGs_setMaxLife(maxLife + 1);
                gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
            }
        }

        if (gzPad::getTrigLeft()) {
            if (maxLife > 5) {
                dComIfGs_setMaxLife(maxLife - 1);
                gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
            }
        }

        if (gzPad::getTrigB()) {
            gzInfo_offMenuOption();
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
            return;
        }
    } else {
        if (gzPad::getTrigDown()) {
            if (isHeartPieceSlotSelected()) {
                mPauseCursorRow = 2;
            } else {
                mPauseCursorRow = (mPauseCursorRow + 1) % PAUSE_MAX_ROWS;
            }
            int newMaxCols = getMaxColsForRow(mPauseCursorRow);
            if (mPauseCursorCol >= newMaxCols) {
                mPauseCursorCol = newMaxCols - 1;
            }
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigUp()) {
            if (isHeartPieceSlotSelected()) {
                mPauseCursorRow = PAUSE_MAX_ROWS - 1;
            } else {
                mPauseCursorRow = (mPauseCursorRow - 1 + PAUSE_MAX_ROWS) % PAUSE_MAX_ROWS;
            }
            int newMaxCols = getMaxColsForRow(mPauseCursorRow);
            if (mPauseCursorCol >= newMaxCols) {
                mPauseCursorCol = newMaxCols - 1;
            }
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigRight()) {
            mPauseCursorCol = (mPauseCursorCol + 1) % maxCols;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
        if (gzPad::getTrigLeft()) {
            mPauseCursorCol = (mPauseCursorCol - 1 + maxCols) % maxCols;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
    }

    if (gzPad::getTrigZ() && !isPoeSlotSelected() && !isHeartPieceSlotSelected() &&
        !isSkillSlotSelected() && !isBugSlotSelected() && !isLetterSlotSelected() &&
        !isFishSlotSelected()) {
        cyclePauseSlot(mPauseCursorRow, mPauseCursorCol);
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
    }

    if (gzPad::getTrigA()) {
        if (isBugSlotSelected() && !inBugSubMenu()) {
            mBugSubMenuActive = true;
            mBugSubMenuRow = 0;
            mBugSubMenuCol = 0;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        } else if (isSkillSlotSelected() && !inSkillSubMenu()) {
            mSkillSubMenuActive = true;
            mSkillSubMenuIndex = 0;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        } else if (isLetterSlotSelected() && !inLetterSubMenu()) {
            mLetterSubMenuActive = true;
            mLetterSubMenuRow = 0;
            mLetterSubMenuCol = 0;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        } else if (isFishSlotSelected() && !inFishSubMenu()) {
            mFishSubMenuActive = true;
            mFishSubMenuRow = 0;
            mFishSubMenuCol = 0;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        } else if (isPoeSlotSelected() || isHeartPieceSlotSelected()) {
            if (gzInfo_isMenuOption()) {
                gzInfo_offMenuOption();
            } else {
                gzInfo_onMenuOption();
            }
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        } else if (mPauseCursorRow <= 2) {
            bool hasItem = mPauseSlotState[mPauseCursorRow][mPauseCursorCol] > 0;
            bool alreadyEquipped = isSlotEquipped(mPauseCursorRow, mPauseCursorCol);
            if (hasItem && !alreadyEquipped) {
                equipPauseSlot(mPauseCursorRow, mPauseCursorCol);
                gzInfo_seStart(Z2SE_SY_ITEM_SET_X);
            }
        }
    }

    u8 currentItem = getDisplayItemForSlot(mPauseCursorRow, mPauseCursorCol);
    const char* itemName = getItemName(currentItem);
    if (mPauseCursorCol == 2 && mPauseCursorRow <= 1) {
        itemName = "Heart Pieces";
    } else if (mPauseCursorRow == 3 && mPauseCursorCol == 2) {
        static const char* sBugNames[] = {
            "Male Ant", "Female Ant", "Male Dayfly", "Female Dayfly",
            "Male Beetle", "Female Beetle", "Male Mantis", "Female Mantis",
            "Male Stag Beetle", "Female Stag Beetle", "Male Pill Bug", "Female Pill Bug",
            "Male Butterfly", "Female Butterfly", "Male Ladybug", "Female Ladybug",
            "Male Snail", "Female Snail", "Male Phasmid", "Female Phasmid",
            "Male Grasshopper", "Female Grasshopper", "Male Dragonfly", "Female Dragonfly",
        };
        if (inBugSubMenu()) {
            itemName = sBugNames[mBugSubMenuRow * BUG_GRID_COLS + mBugSubMenuCol];
        } else {
            itemName = "Golden Bugs";
        }
    } else if (mPauseCursorRow == 3 && mPauseCursorCol == 3) {
        static const char* sSkillNames[] = {
            "Ending Blow", "Shield Attack", "Back Slice", "Helm Splitter",
            "Mortal Draw", "Jump Strike", "Great Spin",
        };
        if (inSkillSubMenu()) {
            itemName = sSkillNames[mSkillSubMenuIndex];
        } else {
            itemName = "Hidden Skills";
        }
    } else if (mPauseCursorRow == 4 && mPauseCursorCol == 1) {
        itemName = "Poe Souls";
    } else if (mPauseCursorRow == 4 && mPauseCursorCol == 2) {
        static const char* sFishNames[] = {
            "Ordon Catfish", "Greengill", "Reekfish",
            "Hyrule Bass", "Hylian Pike", "Hylian Loach",
        };
        if (inFishEditMode() || inFishSubMenu()) {
            int idx = mFishSubMenuRow * FISH_GRID_COLS + mFishSubMenuCol;
            itemName = sFishNames[idx];
        } else {
            itemName = "Fish Journal";
        }
    } else if (mPauseCursorRow == 4 && mPauseCursorCol == 3) {
        static const char* sLetterSenders[] = {
            "Renado", "Ooccoo (1)", "Ooccoo (2)", "The Postman",
            "Kakariko Goods", "Barnes (1)", "Barnes (2)", "Barnes Bombs",
            "Malo Mart", "Telma", "Purlo", "From Jr.",
            "Princess Agitha", "Lanayru Tourism", "Shad", "Yeta",
        };
        if (inLetterSubMenu()) {
            int idx = mLetterSubMenuRow * LETTER_GRID_COLS + mLetterSubMenuCol;
            itemName = sLetterSenders[idx];
        } else {
            itemName = "Letters";
        }
    }
    gzInfo_getMenuDescription()->setString(itemName);
}

bool gzInventoryMenu_c::isSlotEquipped(int row, int col) {
    u8 item = getItemForSlot(row, col);
    if (item == fpcNm_ITEM_NONE) return false;

    switch (row) {
    case 0:
        return item == dComIfGs_getSelectEquipSword();
    case 1:
        return item == dComIfGs_getSelectEquipShield();
    case 2:
        return item == dComIfGs_getSelectEquipClothes();
    default:
        return false;
    }
}

void gzInventoryMenu_c::drawPauseMenuContent() {
    static const f32 GRID_START_X = -15.0f;
    static const f32 GRID_START_Y = 70.0f;
    static const f32 CELL_SIZE = 52.0f;
    static const f32 ROW_SPACING = 56.0f;

    f32 baseX = mXPos + GRID_START_X;
    f32 baseY = g_gzInfo.mBackgroundYPos + GRID_START_Y;

    if (mpHudHeartPanes[0] != NULL && mpHudHeartPanes[1] != NULL) {
        mpHudHeartPanes[0]->setBlackWhite(
            JUtility::TColor(231, 25, 0, 0), JUtility::TColor(255, 255, 255, 255));
        mpHudHeartPanes[1]->setBlackWhite(
            JUtility::TColor(0, 0, 0, 0), JUtility::TColor(255, 242, 170, 140));

        u16 maxLife = dComIfGs_getMaxLife();
        int numFull = maxLife / 5;
        static const f32 HH_W = 20.0f;
        static const f32 HH_H = 18.0f;
        static const f32 HH_GAP = 1.0f;
        static const int HH_PER_ROW = 10;
        f32 heartsX = baseX + 24.0f;
        f32 heartsY = g_gzInfo.mBackgroundYPos + 48.0f;

        for (int i = 0; i < numFull; i++) {
            int hRow = i / HH_PER_ROW;
            int hCol = i % HH_PER_ROW;
            f32 hx = heartsX + hCol * (HH_W + HH_GAP);
            f32 hy = heartsY + hRow * (HH_H + HH_GAP);

            gzSetup2DContext();
            mpHudHeartPanes[1]->setAlpha(255);
            mpHudHeartPanes[1]->draw(hx, hy, HH_W, HH_H, true, true, false);

            gzSetup2DContext();
            mpHudHeartPanes[0]->setAlpha(255);
            mpHudHeartPanes[0]->draw(hx, hy, HH_W, HH_H, false, false, false);
        }
    }

    for (int row = 0; row < PAUSE_MAX_ROWS; row++) {
        f32 rowY = baseY + row * ROW_SPACING;
        int maxCols = getMaxColsForRow(row);

        for (int col = 0; col < maxCols; col++) {
            f32 cellX = baseX + col * CELL_SIZE;
            f32 cellY = rowY;

            bool isHeartSlot = (col == 2 && row <= 1);
            if (isHeartSlot) {
                cellX += 20.0f;
                cellY = baseY + ROW_SPACING / 2.0f;
            }

            bool isSelected = (row == mPauseCursorRow && col == mPauseCursorCol);

            if (isHeartSlot) {
                if (row == 0 && mpHeartPiecePanes[0] != NULL) {
                    bool heartSelected = mIsEntered && isHeartPieceSlotSelected();
                    f32 heartW = 80.0f;
                    f32 heartH = 66.0f;
                    if (heartSelected) {
                        heartW *= 1.1f;
                        heartH *= 1.1f;
                    }
                    f32 heartX = cellX + 48.0f - heartW / 2.0f;
                    f32 heartY = cellY + 48.0f - heartH / 2.0f;

                    if (heartSelected && gzInfo_isCursorTypeClassic()) {
                        GXColor outlineColor = gzGetThemedBorderColor(gzInfo_getTextColor(), 255);
                        gzDrawRectOutline(heartX - 3.0f, heartY - 3.0f,
                                          heartW + 6.0f, heartH + 6.0f, 2.0f, outlineColor);
                    }

                    gzSetup2DContext();
                    mpHeartPiecePanes[0]->setAlpha(255);
                    mpHeartPiecePanes[0]->draw(heartX, heartY, heartW, heartH,
                                               false, false, false);

                    u16 maxLife = dComIfGs_getMaxLife();
                    s32 pieces = maxLife % 5;
                    for (int p = 1; p <= pieces; p++) {
                        if (mpHeartPiecePanes[p] != NULL) {
                            gzSetup2DContext();
                            mpHeartPiecePanes[p]->setAlpha(255);
                            mpHeartPiecePanes[p]->draw(heartX, heartY, heartW, heartH,
                                                       false, false, false);
                        }
                    }
                }

                if (isSelected && mIsEntered && gzInfo_isCursorTypeTP() &&
                    gzInfo_getTPCursor() != NULL) {
                    gzInfo_getTPCursor()->setPos(cellX + 49.0f, cellY + 49.0f);
                    gzInfo_getTPCursor()->setParam(1.5f, 1.5f, 0.1f, 0.6f, 0.5f);
                    gzInfo_getTPCursor()->draw();
                }
                continue;
            }

            bool hasItem = mPauseSlotState[row][col] > 0;
            bool isEquipped = isSlotEquipped(row, col);

            if (mpPauseFramePane != NULL) {
                gzSetup2DContext();
                JUtility::TColor frameColor(107, 107, 107, 255);
                if (mIsEntered && isSelected && gzInfo_isCursorTypeClassic()) {
                    u32 themeColor = gzInfo_getTextColor();
                    frameColor.r = (themeColor >> 24) & 0xFF;
                    frameColor.g = (themeColor >> 16) & 0xFF;
                    frameColor.b = (themeColor >> 8) & 0xFF;
                } else if (hasItem && isEquipped) {
                    frameColor = JUtility::TColor(255, 255, 0, 255);
                }
                mpPauseFramePane->setBlackWhite(JUtility::TColor(0, 0, 0, 0), frameColor);
                mpPauseFramePane->draw(cellX + 24.0f, cellY + 24.0f, 48.0f, 48.0f, false, false, false);
            }

            J2DPicture* staticIcon = NULL;
            if (row == 3 && col == 2) staticIcon = mpBugsIconPane;
            if (row == 3 && col == 3) staticIcon = mpSkillsIconPane;
            if (row == 4 && col == 1) staticIcon = mpPoeIconPane;
            if (row == 4 && col == 2) staticIcon = mpFishIconPane;
            if (row == 4 && col == 3) staticIcon = mpLettersIconPane;

            u8 iconAlpha = hasItem ? 255 : 80;

            if (staticIcon != NULL) {
                gzSetup2DContext();
                f32 itemSize = (mIsEntered && isSelected) ? 56.0f : 48.0f;
                if (row == 4 && col == 1) {
                    iconAlpha = dComIfGs_getPohSpiritNum() > 0 ? 255 : 80;
                }
                if (row == 4 && col == 2) {
                    bool anyFish = false;
                    for (int f = 0; f < FISH_COUNT; f++) {
                        if (dComIfGs_getFishNum(f) > 0) { anyFish = true; break; }
                    }
                    iconAlpha = anyFish ? 255 : 80;
                }
                if (row == 4 && col == 3) {
                    iconAlpha = dMeter2Info_getRecieveLetterNum() > 0 ? 255 : 80;
                }
                staticIcon->setAlpha(iconAlpha);
                f32 sizeOff = (itemSize - 48.0f) / 2.0f;
                if (row == 3 && col == 3) {
                    f32 scrollW = itemSize * 32.0f / 80.0f;
                    f32 scrollH = itemSize;
                    f32 scrollX = cellX + 48.0f - scrollW / 2.0f;
                    f32 scrollY = cellY + 24.0f - sizeOff;
                    staticIcon->rotate(scrollW / 2.0f, scrollH / 2.0f, ROTATE_Z, 45.0f);
                    staticIcon->draw(scrollX, scrollY, scrollW, scrollH, false, false, false);
                } else {
                    staticIcon->draw(cellX + 24.0f - sizeOff, cellY + 24.0f - sizeOff,
                                     itemSize, itemSize, false, false, false);
                }

                if (row == 4 && col == 1) {
                    u8 poeCount = dComIfGs_getPohSpiritNum();
                    char numStr[8];
                    sprintf(numStr, "%d", poeCount);
                    gzTextBox* poeText = gzTextBox_allocate();
                    f32 fontSize = (mIsEntered && isSelected) ? 16.0f : 14.0f;
                    poeText->setFontSize(fontSize, fontSize);
                    poeText->setString(numStr);
                    f32 textCenter = cellX + 58.0f;
                    f32 textX = textCenter - 305.0f;
                    f32 textY = cellY + 76.0f;
                    poeText->draw(textX, textY, COLOR_WHITE, HBIND_CENTER);
                    gzTextBox_free(poeText);

                    if (inPoeEditMode() && mpHaihai != NULL) {
                        mpHaihai->_execute(0);
                        mpHaihai->setScale(0.5f);
                        u8 arrowFlags = ARROW_LEFT | ARROW_RIGHT;
                        if (poeCount == 0) arrowFlags &= ~ARROW_LEFT;
                        if (poeCount >= 60) arrowFlags &= ~ARROW_RIGHT;
                        mpHaihai->drawHaihai(arrowFlags, textCenter, textY - 5.0f,
                                             40.0f, 0.0f);
                    }
                }
            } else {
                gzSetup2DContext();
                f32 itemSize = (mIsEntered && isSelected) ? 56.0f : 48.0f;
                f32 sizeOff = (itemSize - 48.0f) / 2.0f;
                for (int k = 0; k < 3; k++) {
                    if (mpPauseItemTex[row][col][k] != NULL) {
                        mpPauseItemTex[row][col][k]->setAlpha(iconAlpha);
                        mpPauseItemTex[row][col][k]->draw(cellX + 24.0f - sizeOff,
                                                          cellY + 24.0f - sizeOff,
                                                          itemSize, itemSize, false, false, false);
                    }
                }
            }

            if (isSelected && mIsEntered && !inSkillSubMenu() && !inBugSubMenu() &&
                !inLetterSubMenu() && !inFishSubMenu() && gzInfo_isCursorTypeTP() && gzInfo_getTPCursor() != NULL) {
                if (mpPauseFramePane != NULL) {
                    mpPauseFramePane->mBounds.f.x = 48.0f;
                    mpPauseFramePane->mBounds.f.y = 48.0f;
                    gzInfo_getTPCursor()->setPos(cellX + 49.0f, cellY + 49.0f, (J2DPane*)mpPauseFramePane, false);
                } else {
                    gzInfo_getTPCursor()->setPos(cellX + 49.0f, cellY + 49.0f);
                }
                gzInfo_getTPCursor()->setParam(1.0f, 1.0f, 0.1f, 0.6f, 0.5f);
                gzInfo_getTPCursor()->draw();
            }
        }
    }

    if (isSkillSlotSelected() || inSkillSubMenu()) {
        drawSkillSubMenu();
    }
    if (isBugSlotSelected() || inBugSubMenu()) {
        drawBugSubMenu();
    }
    if (isLetterSlotSelected() || inLetterSubMenu()) {
        drawLetterSubMenu();
    }
    if (isFishSlotSelected() || inFishSubMenu()) {
        drawFishSubMenu();
    }
}

void gzInventoryMenu_c::drawSkillSubMenu() {
    static const char* sSkillNames[] = {
        "Ending Blow", "Shield Attack", "Back Slice", "Helm Splitter",
        "Mortal Draw", "Jump Strike", "Great Spin",
    };
    static const char* sSkillNumbers[] = {
        "Skill One", "Skill Two", "Skill Three", "Skill Four",
        "Skill Five", "Skill Six", "Skill Seven",
    };
    static const u16 sSkillFlags[] = {
        dSv_event_flag_c::F_0339, dSv_event_flag_c::F_0338,
        dSv_event_flag_c::F_0340, dSv_event_flag_c::F_0341,
        dSv_event_flag_c::F_0342, dSv_event_flag_c::F_0343,
        dSv_event_flag_c::F_0344,
    };

    static const f32 GRID_START_X = -15.0f;
    static const f32 GRID_START_Y = 70.0f;
    static const f32 CELL_SIZE = 52.0f;
    static const f32 LINE_H = 20.0f;
    static const f32 SCROLL_ICON_H = 16.0f;
    static const f32 SCROLL_ICON_W = SCROLL_ICON_H * 32.0f / 80.0f;
    static const f32 STATUS_ICON_SIZE = 14.0f;
    static const f32 ICON_PAD_X = 8.0f;

    static const f32 ROW_SPACING = 56.0f;

    f32 baseX = mXPos + GRID_START_X;
    f32 baseY = g_gzInfo.mBackgroundYPos + GRID_START_Y;
    f32 panelX = baseX + PAUSE_MAX_COLS * CELL_SIZE + 26.0f;
    f32 bgRight = g_gzInfo.mBackgroundXPos + g_gzInfo.mBackgroundWidth;
    f32 bgBottom = g_gzInfo.mBackgroundYPos + g_gzInfo.mBackgroundHeight;
    f32 panelW = bgRight - panelX - 10.0f;
    f32 panelY = g_gzInfo.mBackgroundYPos + 42.0f;
    f32 panelH = bgBottom - panelY - 10.0f;

    u32 themeColor = gzInfo_getTextColor();
    GXColor borderColor = gzGetThemedBorderColor(themeColor, 255);
    gzDrawVerticalLine(panelX, panelY, panelY + panelH, 1.0f, borderColor);

    for (int i = 0; i < 7; i++) {
        f32 lineY = panelY + 8.0f + i * LINE_H;
        bool enabled = dComIfGs_isEventBit(sSkillFlags[i]);

        u32 textColor;
        if (inSkillSubMenu() && mSkillSubMenuIndex == i) {
            textColor = themeColor;
        } else if (enabled) {
            textColor = COLOR_WHITE;
        } else {
            textColor = 0x808080FFu;
        }

        if (mpSkillsIconPane != NULL) {
            gzSetup2DContext();
            u8 iconAlpha = enabled ? 255 : 80;
            mpSkillsIconPane->setAlpha(iconAlpha);
            mpSkillsIconPane->rotate(0.0f, 0.0f, ROTATE_Z, 0.0f);
            f32 iconX = panelX + ICON_PAD_X;
            f32 iconY = lineY + (LINE_H - SCROLL_ICON_H) / 2.0f;
            mpSkillsIconPane->draw(iconX, iconY, SCROLL_ICON_W, SCROLL_ICON_H,
                                   false, false, false);
        }

        gzSetup2DContext();
        gzTextBox* numText = gzTextBox_allocate();
        numText->setFontSize(14.0f, 14.0f);
        numText->setString(sSkillNumbers[i]);
        f32 textX = panelX + ICON_PAD_X + SCROLL_ICON_W + 4.0f;
        numText->draw(textX, lineY + 16.0f, textColor);
        gzTextBox_free(numText);

        f32 statusRightEdge = panelX + panelW - ICON_PAD_X;
        f32 statusX = statusRightEdge - STATUS_ICON_SIZE;

        gzSetup2DContext();
        gzTextBox* nameText = gzTextBox_allocate();
        nameText->setFontSize(12.0f, 12.0f);
        nameText->setString(sSkillNames[i]);
        f32 nameRightEdge = statusX - 4.0f;
        f32 nameDrawX = nameRightEdge - 608.0f;
        nameText->draw(nameDrawX, lineY + 16.0f, textColor, HBIND_RIGHT);
        gzTextBox_free(nameText);

        J2DPicture* statusIcon = enabled ? mpCheckIconPane : mpXMarkIconPane;
        if (statusIcon != NULL) {
            gzSetup2DContext();
            statusIcon->setAlpha(255);
            f32 statusY = lineY + (LINE_H - STATUS_ICON_SIZE) / 2.0f;
            statusIcon->draw(statusX, statusY, STATUS_ICON_SIZE, STATUS_ICON_SIZE,
                             false, false, false);
        }
    }

    if (inSkillSubMenu() && mIsEntered && gzInfo_isCursorTypeTP() &&
        gzInfo_getTPCursor() != NULL) {
        f32 cursorY = panelY + 8.0f + mSkillSubMenuIndex * LINE_H + LINE_H / 2.0f;
        f32 cursorX = panelX + panelW / 2.0f;
        gzInfo_getTPCursor()->setPos(cursorX, cursorY);
        gzInfo_getTPCursor()->setParam(7.0f, 0.4f, 0.03f, 0.6f, 0.5f);
        gzInfo_getTPCursor()->draw();
    }
}

void gzInventoryMenu_c::drawBugSubMenu() {
    static const u8 sBugItemIds[BUG_COUNT] = {
        fpcNm_ITEM_M_ANT, fpcNm_ITEM_F_ANT, fpcNm_ITEM_M_MAYFLY, fpcNm_ITEM_F_MAYFLY,
        fpcNm_ITEM_M_BEETLE, fpcNm_ITEM_F_BEETLE, fpcNm_ITEM_M_MANTIS, fpcNm_ITEM_F_MANTIS,
        fpcNm_ITEM_M_STAG_BEETLE, fpcNm_ITEM_F_STAG_BEETLE, fpcNm_ITEM_M_DANGOMUSHI,
        fpcNm_ITEM_F_DANGOMUSHI, fpcNm_ITEM_M_BUTTERFLY, fpcNm_ITEM_F_BUTTERFLY,
        fpcNm_ITEM_M_LADYBUG, fpcNm_ITEM_F_LADYBUG, fpcNm_ITEM_M_SNAIL, fpcNm_ITEM_F_SNAIL,
        fpcNm_ITEM_M_NANAFUSHI, fpcNm_ITEM_F_NANAFUSHI, fpcNm_ITEM_M_GRASSHOPPER,
        fpcNm_ITEM_F_GRASSHOPPER, fpcNm_ITEM_M_DRAGONFLY, fpcNm_ITEM_F_DRAGONFLY,
    };
    static const char* sSpeciesNames[] = {
        "Ant", "Dayfly", "Beetle", "Mantis", "Stag Beetle", "Pill Bug",
        "Butterfly", "Ladybug", "Snail", "Phasmid", "Grasshopper", "Dragonfly",
    };

    static const f32 GRID_START_X = -15.0f;
    static const f32 CELL_SIZE = 52.0f;
    static const f32 BUG_ICON_SIZE = 28.0f;
    static const f32 STATUS_ICON_SIZE = 10.0f;

    f32 baseX = mXPos + GRID_START_X;
    f32 panelX = baseX + PAUSE_MAX_COLS * CELL_SIZE + 26.0f;
    f32 bgRight = g_gzInfo.mBackgroundXPos + g_gzInfo.mBackgroundWidth;
    f32 bgBottom = g_gzInfo.mBackgroundYPos + g_gzInfo.mBackgroundHeight;
    f32 panelW = bgRight - panelX - 10.0f;
    f32 panelY = g_gzInfo.mBackgroundYPos + 42.0f;
    f32 panelH = bgBottom - panelY - 10.0f;

    u32 themeColor = gzInfo_getTextColor();
    GXColor borderColor = gzGetThemedBorderColor(themeColor, 255);
    gzDrawVerticalLine(panelX, panelY, panelY + panelH, 1.0f, borderColor);

    f32 cellW = panelW / (f32)BUG_GRID_COLS;
    f32 cellH = panelH / (f32)BUG_GRID_ROWS;

    for (int row = 0; row < BUG_GRID_ROWS; row++) {
        for (int col = 0; col < BUG_GRID_COLS; col++) {
            int idx = row * BUG_GRID_COLS + col;
            f32 cellX = panelX + col * cellW;
            f32 cellY = panelY + row * cellH;
            bool collected = dComIfGs_isItemFirstBit(sBugItemIds[idx]) != 0;
            bool isSelected = inBugSubMenu() && mBugSubMenuRow == row && mBugSubMenuCol == col;

            f32 iconX = cellX + (cellW - BUG_ICON_SIZE) / 2.0f;
            f32 iconY = cellY + 4.0f;

            if (mpBugIconPanes[idx] != NULL) {
                gzSetup2DContext();
                mpBugIconPanes[idx]->setAlpha(collected ? 255 : 80);
                mpBugIconPanes[idx]->draw(iconX, iconY, BUG_ICON_SIZE, BUG_ICON_SIZE,
                                          false, false, false);
            }

            J2DPicture* statusIcon = collected ? mpCheckIconPane : mpXMarkIconPane;
            if (statusIcon != NULL) {
                gzSetup2DContext();
                statusIcon->setAlpha(200);
                f32 statusX = iconX + BUG_ICON_SIZE - STATUS_ICON_SIZE + 2.0f;
                f32 statusY = iconY + BUG_ICON_SIZE - STATUS_ICON_SIZE + 2.0f;
                statusIcon->draw(statusX, statusY, STATUS_ICON_SIZE, STATUS_ICON_SIZE,
                                 false, false, false);
            }

        }

        gzSetup2DContext();
        int speciesIdx = row * (BUG_GRID_COLS / 2);
        for (int pair = 0; pair < BUG_GRID_COLS / 2; pair++) {
            gzTextBox* nameText = gzTextBox_allocate();
            nameText->setFontSize(9.0f, 9.0f);
            nameText->setString(sSpeciesNames[speciesIdx + pair]);
            f32 pairCenterX = panelX + (pair * 2) * cellW + cellW;
            f32 nameY = panelY + row * cellH + 4.0f + BUG_ICON_SIZE + 16.0f;
            nameText->draw(pairCenterX - 305.0f, nameY, 0xA0A0A0FFu, HBIND_CENTER);
            gzTextBox_free(nameText);
        }
    }

    if (inBugSubMenu() && mIsEntered && gzInfo_isCursorTypeTP() &&
        gzInfo_getTPCursor() != NULL) {
        f32 cellX = panelX + mBugSubMenuCol * cellW;
        f32 cellY = panelY + mBugSubMenuRow * cellH;
        f32 cursorX = cellX + cellW / 2.0f;
        f32 cursorY = cellY + 4.0f + (BUG_ICON_SIZE + 4.0f) / 2.0f;
        gzInfo_getTPCursor()->setPos(cursorX, cursorY);
        gzInfo_getTPCursor()->setParam(0.7f, 0.55f, 0.03f, 0.6f, 0.5f);
        gzInfo_getTPCursor()->draw();
    }
}

void gzInventoryMenu_c::drawLetterSubMenu() {
    static const char* sLetterSenders[] = {
        "Renado", "Ooccoo (1)", "Ooccoo (2)", "Postman",
        "Kakariko", "Barnes (1)", "Barnes (2)", "Barnes B.",
        "Malo Mart", "Telma", "Purlo", "From Jr.",
        "Agitha", "Lanayru", "Shad", "Yeta",
    };

    static const f32 GRID_START_X = -15.0f;
    static const f32 CELL_SIZE = 52.0f;
    static const f32 LETTER_ICON_SIZE = 28.0f;
    static const f32 STATUS_ICON_SIZE = 10.0f;

    f32 baseX = mXPos + GRID_START_X;
    f32 panelX = baseX + PAUSE_MAX_COLS * CELL_SIZE + 26.0f;
    f32 bgRight = g_gzInfo.mBackgroundXPos + g_gzInfo.mBackgroundWidth;
    f32 bgBottom = g_gzInfo.mBackgroundYPos + g_gzInfo.mBackgroundHeight;
    f32 panelW = bgRight - panelX - 10.0f;
    f32 panelY = g_gzInfo.mBackgroundYPos + 42.0f;
    f32 panelH = bgBottom - panelY - 10.0f;

    u32 themeColor = gzInfo_getTextColor();
    GXColor borderColor = gzGetThemedBorderColor(themeColor, 255);
    gzDrawVerticalLine(panelX, panelY, panelY + panelH, 1.0f, borderColor);

    f32 cellW = panelW / (f32)LETTER_GRID_COLS;
    f32 cellH = panelH / (f32)LETTER_GRID_ROWS;

    for (int row = 0; row < LETTER_GRID_ROWS; row++) {
        for (int col = 0; col < LETTER_GRID_COLS; col++) {
            int idx = row * LETTER_GRID_COLS + col;
            f32 cellX = panelX + col * cellW;
            f32 cellY = panelY + row * cellH;
            bool received = dComIfGs_isLetterGetFlag(idx) != 0;
            bool isSelected = inLetterSubMenu() && mLetterSubMenuRow == row &&
                              mLetterSubMenuCol == col;

            f32 iconX = cellX + (cellW - LETTER_ICON_SIZE) / 2.0f;
            f32 iconY = cellY + 14.0f;

            if (mpLetterIconPane != NULL) {
                gzSetup2DContext();
                mpLetterIconPane->setAlpha(received ? 255 : 80);
                mpLetterIconPane->draw(iconX, iconY, LETTER_ICON_SIZE, LETTER_ICON_SIZE,
                                       false, false, false);
            }

            J2DPicture* statusIcon = received ? mpCheckIconPane : mpXMarkIconPane;
            if (statusIcon != NULL) {
                gzSetup2DContext();
                statusIcon->setAlpha(200);
                f32 statusX = iconX + LETTER_ICON_SIZE - STATUS_ICON_SIZE + 2.0f;
                f32 statusY = iconY + LETTER_ICON_SIZE - STATUS_ICON_SIZE + 2.0f;
                statusIcon->draw(statusX, statusY, STATUS_ICON_SIZE, STATUS_ICON_SIZE,
                                 false, false, false);
            }

            gzSetup2DContext();
            gzTextBox* nameText = gzTextBox_allocate();
            nameText->setFontSize(9.0f, 9.0f);
            nameText->setString(sLetterSenders[idx]);
            u32 textColor = isSelected ? themeColor : (received ? COLOR_WHITE : 0x808080FFu);
            f32 textX = cellX + cellW / 2.0f - 305.0f;
            f32 textY = iconY + LETTER_ICON_SIZE + 10.0f;
            nameText->draw(textX, textY, textColor, HBIND_CENTER);
            gzTextBox_free(nameText);
        }
    }

    if (inLetterSubMenu() && mIsEntered && gzInfo_isCursorTypeTP() &&
        gzInfo_getTPCursor() != NULL) {
        f32 cellX = panelX + mLetterSubMenuCol * cellW;
        f32 cellY = panelY + mLetterSubMenuRow * cellH;
        f32 cursorX = cellX + cellW / 2.0f;
        f32 cursorY = cellY + 19.0f + (LETTER_ICON_SIZE + 4.0f) / 2.0f;
        gzInfo_getTPCursor()->setPos(cursorX, cursorY);
        gzInfo_getTPCursor()->setParam(1.0f, 1.0f, 0.03f, 0.6f, 0.5f);
        gzInfo_getTPCursor()->draw();
    }
}

void gzInventoryMenu_c::drawFishSubMenu() {
    static const char* sFishNames[] = {
        "Ordon Catfish", "Greengill", "Reekfish",
        "Hyrule Bass", "Hylian Pike", "Hylian Loach",
    };
    static const u8 sFishGridIdx[FISH_COUNT] = { 3, 5, 4, 0, 2, 1 };

    static const f32 GRID_START_X = -15.0f;
    static const f32 CELL_SIZE = 52.0f;
    static const f32 FISH_ICON_SIZE = 28.0f;
    static const f32 STATUS_ICON_SIZE = 10.0f;

    f32 baseX = mXPos + GRID_START_X;
    f32 panelX = baseX + PAUSE_MAX_COLS * CELL_SIZE + 26.0f;
    f32 bgRight = g_gzInfo.mBackgroundXPos + g_gzInfo.mBackgroundWidth;
    f32 bgBottom = g_gzInfo.mBackgroundYPos + g_gzInfo.mBackgroundHeight;
    f32 panelW = bgRight - panelX - 10.0f;
    f32 lineTop = g_gzInfo.mBackgroundYPos + 40.0f;
    f32 lineBot = bgBottom - 7.0f;
    f32 panelY = lineTop + 2.0f;
    f32 panelH = lineBot - panelY - 2.0f;

    u32 themeColor = gzInfo_getTextColor();
    GXColor borderColor = gzGetThemedBorderColor(themeColor, 255);
    gzDrawVerticalLine(panelX, lineTop, lineBot, 1.0f, borderColor);

    f32 cellW = panelW / (f32)FISH_GRID_COLS;
    f32 cellH = panelH / (f32)FISH_GRID_ROWS;

    for (int row = 0; row < FISH_GRID_ROWS; row++) {
        for (int col = 0; col < FISH_GRID_COLS; col++) {
            int gridIdx = row * FISH_GRID_COLS + col;
            u8 fishIdx = sFishGridIdx[gridIdx];
            f32 cellX = panelX + col * cellW;
            f32 cellY = panelY + row * cellH;
            bool caught = dComIfGs_getFishNum(fishIdx) > 0;
            bool isSelected = inFishSubMenu() && mFishSubMenuRow == row &&
                              mFishSubMenuCol == col;

            f32 iconX = cellX + 35.0f + (col == 1 ? 20.0f : 0.0f);
            f32 iconY = cellY + 39.0f;

            if (mpFishIconPane != NULL) {
                gzSetup2DContext();
                mpFishIconPane->setAlpha(caught ? 255 : 80);
                mpFishIconPane->draw(iconX, iconY, FISH_ICON_SIZE, FISH_ICON_SIZE,
                                      false, false, false);
            }

            u8 fishSize = dComIfGs_getFishSize(fishIdx);
            u16 fishCount = dComIfGs_getFishNum(fishIdx);
            bool isEditing = inFishEditMode() && isSelected;

            static char sSizeBuf[16];
            static char sCountBuf[16];
            snprintf(sSizeBuf, sizeof(sSizeBuf), "%d in.", fishSize);
            snprintf(sCountBuf, sizeof(sCountBuf), "%d fish", fishCount);

            f32 valX = iconX + FISH_ICON_SIZE + 35.0f;
            f32 valTopY = iconY + 5.0f;
            f32 nameY = iconY + FISH_ICON_SIZE + 10.0f;
            f32 valBotY = nameY;

            bool useClassicColors = gzInfo_isCursorTypeClassic();
            u32 sizeColor, countColor;
            if (isEditing && useClassicColors) {
                sizeColor = (mFishEditField == 1) ? themeColor : 0xAAAAAAFFu;
                countColor = (mFishEditField == 0) ? themeColor : 0xAAAAAAFFu;
            } else if (isSelected && useClassicColors) {
                sizeColor = themeColor;
                countColor = themeColor;
            } else {
                sizeColor = caught ? COLOR_WHITE : 0x808080FFu;
                countColor = sizeColor;
            }

            gzSetup2DContext();
            gzTextBox* sizeText = gzTextBox_allocate();
            sizeText->setFontSize(10.0f, 10.0f);
            sizeText->setString(sSizeBuf);
            sizeText->draw(valX, valTopY, sizeColor, HBIND_LEFT);
            sizeText->updateBounds();
            if (isSelected) mFishSizeTextW = sizeText->mBounds.f.x;

            if (inFishAdjusting() && isSelected && mFishEditField == 1 && mpHaihai != NULL) {
                gzSetup2DContext();
                mpHaihai->setScale(10.0f * gzMenuLayout::HAIHAI_SCALE_FACTOR);
                f32 haihaiX = valX + (sizeText->mBounds.f.x / 2.0f) + gzMenuLayout::HAIHAI_X_OFFSET;
                f32 haihaiY = valTopY + gzMenuLayout::HAIHAI_Y_OFFSET + 2.0f;
                f32 haihaiW = sizeText->mBounds.f.x + 14.0f;
                u8 arrows = 0;
                if (fishSize > 0) arrows |= ARROW_LEFT;
                if (fishSize < 255) arrows |= ARROW_RIGHT;
                if (arrows) mpHaihai->drawHaihai(arrows, haihaiX, haihaiY, haihaiW, 0.0f);
            }
            gzTextBox_free(sizeText);

            gzSetup2DContext();
            gzTextBox* countText = gzTextBox_allocate();
            countText->setFontSize(10.0f, 10.0f);
            countText->setString(sCountBuf);
            countText->draw(valX, valBotY, countColor, HBIND_LEFT);
            countText->updateBounds();
            if (isSelected) mFishCountTextW = countText->mBounds.f.x;

            if (inFishAdjusting() && isSelected && mFishEditField == 0 && mpHaihai != NULL) {
                gzSetup2DContext();
                mpHaihai->setScale(10.0f * gzMenuLayout::HAIHAI_SCALE_FACTOR);
                f32 haihaiX = valX + (countText->mBounds.f.x / 2.0f) + gzMenuLayout::HAIHAI_X_OFFSET;
                f32 haihaiY = valBotY + gzMenuLayout::HAIHAI_Y_OFFSET + 2.0f;
                f32 haihaiW = countText->mBounds.f.x + 14.0f;
                u8 arrows = 0;
                if (fishCount > 0) arrows |= ARROW_LEFT;
                if (fishCount < 999) arrows |= ARROW_RIGHT;
                if (arrows) mpHaihai->drawHaihai(arrows, haihaiX, haihaiY, haihaiW, 0.0f);
            }
            gzTextBox_free(countText);

            gzSetup2DContext();
            gzTextBox* nameText = gzTextBox_allocate();
            nameText->setFontSize(9.0f, 9.0f);
            nameText->setString(sFishNames[gridIdx]);
            u32 textColor = (isSelected && useClassicColors) ? themeColor : (caught ? COLOR_WHITE : 0x808080FFu);
            f32 textX = iconX + FISH_ICON_SIZE / 2.0f - 304.0f;
            f32 textY = iconY + FISH_ICON_SIZE + 10.0f;
            nameText->draw(textX, textY, textColor, HBIND_CENTER);
            gzTextBox_free(nameText);
        }
    }

    if (inFishSubMenu() && mIsEntered && gzInfo_isCursorTypeTP() &&
        gzInfo_getTPCursor() != NULL) {
        f32 cellX = panelX + mFishSubMenuCol * cellW;
        f32 cellY = panelY + mFishSubMenuRow * cellH;
        f32 iconX = cellX + 35.0f + (mFishSubMenuCol == 1 ? 20.0f : 0.0f);
        f32 iconY = cellY + 39.0f;

        if (inFishEditMode()) {
            f32 valX = iconX + FISH_ICON_SIZE + 35.0f;
            f32 valTopY = iconY + 5.0f;
            f32 valBotY = iconY + FISH_ICON_SIZE + 10.0f;

            f32 textW = (mFishEditField == 1) ? mFishSizeTextW : mFishCountTextW;
            f32 targetY = (mFishEditField == 1) ? valTopY : valBotY;
            f32 cursorX = valX + textW / 2.0f;
            f32 xScale = (textW + 30.0f) * 0.02f;
            gzInfo_getTPCursor()->setPos(cursorX, targetY - 4.0f);
            gzInfo_getTPCursor()->setParam(xScale, 0.2f, 0.03f, 0.6f, 0.5f);
        } else {
            f32 cursorX = iconX + FISH_ICON_SIZE / 2.0f + 25.0f;
            f32 cursorY = cellY + cellH / 2.0f;
            gzInfo_getTPCursor()->setPos(cursorX, cursorY);
            gzInfo_getTPCursor()->setParam(2.5f, 2.2f, 0.03f, 0.8f, 0.5f);
        }
        gzInfo_getTPCursor()->draw();
    }
}

void gzInventoryMenu_c::drawPauseMenu() {
    if (!mPauseMenuInitialized && mIsEntered) {
        initPauseMenu();
    }
    if (!mPauseMenuInitialized) {
        return;
    }
    drawPauseMenuContent();
}

void gzInventoryMenu_c::execute() {
    if (checkInputWait()) return;

    if (gzInfo_isMenuOption() && gzPad::getTrigB() && !inFishEditMode()) {
        setSlotItem(mCurrentSlot, mOriginalItem);
        gzInfo_offMenuOption();
        gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
        return;
    }

    if (!inSkillSubMenu() && !inBugSubMenu() && !inLetterSubMenu() && !inFishSubMenu() && handleBackButton(gzMainMenu_c::MENU_INVENTORY)) return;

    gzCursor* l_cursor = gzInfo_getCursor();

    u32 lrTrig = gzPad::getTrig() & (PAD_TRIGGER_L | PAD_TRIGGER_R);
    if ((lrTrig & PAD_TRIGGER_R) && mCurrentTab == TAB_RING_MENU && !inPoeEditMode()) {
        mCurrentTab = TAB_PAUSE_MENU;
        l_cursor->y = 0;
        mCurrentSlot = 0;
        gzInfo_resetTopLine();
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        freeAllTextures();
        freeRingScreen();
        mPauseMenuInitialized = false;
    }

    if ((lrTrig & PAD_TRIGGER_L) && mCurrentTab == TAB_PAUSE_MENU && !inPoeEditMode() && !inHeartPieceEditMode() && !inSkillSubMenu() && !inBugSubMenu() && !inLetterSubMenu() && !inFishSubMenu()) {
        mCurrentTab = TAB_RING_MENU;
        l_cursor->y = 0;
        mCurrentSlot = 0;
        gzInfo_resetTopLine();
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        freePauseTextures(false);
        reloadRingScreen();
        initRingItems();
    }

    if (mCurrentTab == TAB_PAUSE_MENU) {
        executePauseMenu();
        return;
    }

    if (mCurrentTab == TAB_RING_MENU) {
        if (!gzInfo_isMenuOption() && mItemsTotal > 1) {
            f32 stickValue = gzPad::getStickValue();
            bool useStick = stickValue >= 0.75f && gzInfo_isMenuPausesGame();
            if (!useStick) {
                if (gzPad::getTrigDown()) {
                    mCurrentSlot = (mCurrentSlot + 1) % mItemsTotal;
                    gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
                }
                if (gzPad::getTrigUp()) {
                    mCurrentSlot = (mCurrentSlot - 1 + mItemsTotal) % mItemsTotal;
                    gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
                }
            } else {
                s16 stickAngle = gzPad::getStickAngle();
                u16 normalizedAngle = (u16)(stickAngle + 0x8000);
                s32 anglePerItem = 0x10000 / mItemsTotal;
                u8 rawTarget = (u8)(((s32)normalizedAngle + anglePerItem / 2) / anglePerItem) % mItemsTotal;
                u8 targetSlot = (mItemsTotal - rawTarget) % mItemsTotal;

                if (targetSlot != mCurrentSlot) {
                    u8 prevSlot = mCurrentSlot;
                    if (gzPad::getHoldL()) {
                        mCurrentSlot = targetSlot;
                    } else {
                        s32 diff = (s32)targetSlot - (s32)mCurrentSlot;
                        if (diff > (s32)mItemsTotal / 2) diff -= mItemsTotal;
                        if (diff < -(s32)mItemsTotal / 2) diff += mItemsTotal;
                        mCurrentSlot = (mCurrentSlot + (diff > 0 ? 1 : -1) + mItemsTotal) % mItemsTotal;
                    }
                    if (mCurrentSlot != prevSlot) {
                        gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
                    }
                }
            }
        } else if (gzInfo_isMenuOption() && mItemsTotal > 0) {
            u8 slotNo = mItemSlots[mCurrentSlot];
            u8 currentItem = dComIfGs_getItem(slotNo, false);
            int listIdx = findItemInList(currentItem);

            if (gzPad::getTrigRight()) {
                listIdx = (listIdx + 1) % sRingItemCount;
                setSlotItem(mCurrentSlot, sRingItemList[listIdx]);
                gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
            }
            if (gzPad::getTrigLeft()) {
                listIdx = (listIdx - 1 + sRingItemCount) % sRingItemCount;
                setSlotItem(mCurrentSlot, sRingItemList[listIdx]);
                gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
            }
        }

        if (mItemsTotal > 0 && gzPad::getTrigA()) {
            if (!gzInfo_isMenuOption()) {
                u8 slotNo = mItemSlots[mCurrentSlot];
                mOriginalItem = dComIfGs_getItem(slotNo, false);
                gzInfo_onMenuOption();
            } else {
                gzInfo_offMenuOption();
            }
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        }

        if (!gzInfo_isMenuOption()) {
            if (gzPad::getTrigY()) {
                if (mItemsTotal < MAX_ITEM_SLOTS) {
                    addSlot();
                    gzInfo_seStart(Z2SE_SY_EXP_WIN_OPEN);
                }
            }

            if (gzPad::getTrigX()) {
                if (mItemsTotal > 0) {
                    deleteSlot();
                    gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
                }
            }
        }
    }
}

void gzInventoryMenu_c::draw() {
    switch (mCurrentTab) {
    case TAB_RING_MENU:
        drawRingMenu();
        break;
    case TAB_PAUSE_MENU:
        drawPauseMenu();
        break;
    }
}

gzTabInfo_s gzInventoryMenu_c::getTabInfo() {
    gzTabInfo_s info;
    info.hasTabs = false;
    info.currentTab = mCurrentTab;
    info.numTabs = TAB_MAX_e;
    return info;
}

gzButtonHints_s gzInventoryMenu_c::getButtonHints() {
    gzButtonHints_s hints;
    hints.count = 0;

    if (mCurrentTab == TAB_PAUSE_MENU) {
        bool isPoeSlot = isPoeSlotSelected();
        bool isHeartSlot = isHeartPieceSlotSelected();
        bool hasItem = mPauseSlotState[mPauseCursorRow][mPauseCursorCol] > 0;
        bool alreadyEquipped = isSlotEquipped(mPauseCursorRow, mPauseCursorCol);

        if (isPoeSlot || isHeartSlot) {
            hints.hints[hints.count].button = GZ_BTN_A;
            hints.hints[hints.count].text = gzInfo_isMenuOption() ? "Done" : "Edit";
            hints.count++;
        } else {
            if (mPauseCursorRow <= 2 && hasItem && !alreadyEquipped) {
                hints.hints[hints.count].button = GZ_BTN_A;
                hints.hints[hints.count].text = "Equip";
                hints.count++;
            }
        }

        if (!isPoeSlot && !isHeartSlot) {
            hints.hints[hints.count].button = GZ_BTN_Z;
            hints.hints[hints.count].text = "Cycle";
            hints.count++;
        }

        hints.hints[hints.count].button = GZ_BTN_B;
        hints.hints[hints.count].text = "Back";
        hints.count++;

        if (!inPoeEditMode() && !inHeartPieceEditMode()) {
            hints.hints[hints.count].button = GZ_BTN_L;
            hints.hints[hints.count].text = "Ring";
            hints.count++;
        }

        return hints;
    }

    if (mItemsTotal > 0) {
        hints.hints[hints.count].button = GZ_BTN_A;
        hints.hints[hints.count].text = gzInfo_isMenuOption() ? "Select" : "Edit";
        hints.count++;
    }

    hints.hints[hints.count].button = GZ_BTN_B;
    hints.hints[hints.count].text = "Back";
    hints.count++;

    if (!gzInfo_isMenuOption()) {
        if (mItemsTotal < MAX_ITEM_SLOTS) {
            hints.hints[hints.count].button = GZ_BTN_Y;
            hints.hints[hints.count].text = "Add";
            hints.count++;
        }

        if (mItemsTotal > 0) {
            hints.hints[hints.count].button = GZ_BTN_X;
            hints.hints[hints.count].text = "Delete";
            hints.count++;
        }
    }

    if (!gzInfo_isMenuOption()) {
        hints.hints[hints.count].button = GZ_BTN_R;
        hints.hints[hints.count].text = "Pause";
        hints.count++;
    }

    return hints;
}

const char* gzInventoryMenu_c::getItemName(u8 itemId) {
    switch (itemId) {
    case fpcNm_ITEM_NOENTRY_19: return "Black Rupee";
    case fpcNm_ITEM_BOOMERANG: return "Gale Boomerang";
    case fpcNm_ITEM_KANTERA: return "Lantern";
    case fpcNm_ITEM_PACHINKO: return "Slingshot";
    case fpcNm_ITEM_FISHING_ROD_1: return "Fishing Rod";
    case fpcNm_ITEM_LURE_ROD: return "Fishing Rod (Lure)";
    case fpcNm_ITEM_BEE_ROD: return "Fishing Rod (Bee)";
    case fpcNm_ITEM_WORM_ROD: return "Fishing Rod (Worm)";
    case fpcNm_ITEM_JEWEL_ROD: return "Fishing Rod (Coral)";
    case fpcNm_ITEM_JEWEL_BEE_ROD: return "Fishing Rod (Coral+Bee)";
    case fpcNm_ITEM_JEWEL_WORM_ROD: return "Fishing Rod (Coral+Worm)";
    case fpcNm_ITEM_HVY_BOOTS: return "Iron Boots";
    case fpcNm_ITEM_HOOKSHOT: return "Clawshot";
    case fpcNm_ITEM_W_HOOKSHOT: return "Double Clawshots";
    case fpcNm_ITEM_BOW: return "Hero's Bow";
    case fpcNm_ITEM_LIGHT_ARROW: return "Bow (Light Arrows)";
    case fpcNm_ITEM_BOMB_ARROW: return "Bow (Bomb Arrows)";
    case fpcNm_ITEM_HAWK_ARROW: return "Bow (Hawkeye)";
    case fpcNm_ITEM_HAWK_EYE: return "Hawkeye";
    case fpcNm_ITEM_NORMAL_BOMB: return "Bomb";
    case fpcNm_ITEM_WATER_BOMB: return "Water Bomb";
    case fpcNm_ITEM_POKE_BOMB: return "Bomblings";
    case fpcNm_ITEM_SPINNER: return "Spinner";
    case fpcNm_ITEM_IRONBALL: return "Ball and Chain";
    case fpcNm_ITEM_COPY_ROD: return "Dominion Rod";
    case fpcNm_ITEM_COPY_ROD_2: return "Dominion Rod (Powered)";
    case fpcNm_ITEM_HORSE_FLUTE: return "Horse Call";
    case fpcNm_ITEM_WOOD_STICK: return "Wooden Sword";
    case fpcNm_ITEM_EMPTY_BOTTLE: return "Empty Bottle";
    case fpcNm_ITEM_RED_BOTTLE: return "Red Potion";
    case fpcNm_ITEM_GREEN_BOTTLE: return "Green Potion";
    case fpcNm_ITEM_BLUE_BOTTLE: return "Blue Potion";
    case fpcNm_ITEM_MILK_BOTTLE: return "Milk";
    case fpcNm_ITEM_HALF_MILK_BOTTLE: return "Half Milk";
    case fpcNm_ITEM_WATER_BOTTLE: return "Water";
    case fpcNm_ITEM_HOT_SPRING: return "Hot Spring Water";
    case fpcNm_ITEM_OIL_BOTTLE: return "Lantern Oil";
    case fpcNm_ITEM_UGLY_SOUP: return "Nasty Soup";
    case fpcNm_ITEM_LV1_SOUP: return "Simple Soup";
    case fpcNm_ITEM_LV2_SOUP: return "Good Soup";
    case fpcNm_ITEM_LV3_SOUP: return "Superb Soup";
    case fpcNm_ITEM_CHUCHU_RARE: return "Rare Chu Jelly";
    case fpcNm_ITEM_CHUCHU_RED: return "Red Chu Jelly";
    case fpcNm_ITEM_CHUCHU_BLUE: return "Blue Chu Jelly";
    case fpcNm_ITEM_CHUCHU_GREEN: return "Green Chu Jelly";
    case fpcNm_ITEM_CHUCHU_YELLOW: return "Yellow Chu Jelly";
    case fpcNm_ITEM_CHUCHU_PURPLE: return "Purple Chu Jelly";
    case fpcNm_ITEM_BEE_CHILD: return "Bee Larva";
    case fpcNm_ITEM_FAIRY: return "Fairy";
    case fpcNm_ITEM_FAIRY_DROP: return "Fairy's Tears";
    case fpcNm_ITEM_WORM: return "Worm";
    case fpcNm_ITEM_ZORAS_JEWEL: return "Reekfish Scent";
    case fpcNm_ITEM_LETTER: return "Letter";
    case fpcNm_ITEM_BILL: return "Invoice";
    case fpcNm_ITEM_SWORD: return "Ordon Sword";
    case fpcNm_ITEM_MASTER_SWORD: return "Master Sword";
    case fpcNm_ITEM_LIGHT_SWORD: return "Master Sword (Light)";
    case fpcNm_ITEM_WOOD_SHIELD: return "Ordon Shield";
    case fpcNm_ITEM_SHIELD: return "Wooden Shield";
    case fpcNm_ITEM_HYLIA_SHIELD: return "Hylian Shield";
    case fpcNm_ITEM_WEAR_KOKIRI: return "Hero's Clothes";
    case fpcNm_ITEM_WEAR_ZORA: return "Zora Armor";
    case fpcNm_ITEM_ARMOR: return "Magic Armor";
    case fpcNm_ITEM_WALLET_LV1: return "Wallet (300)";
    case fpcNm_ITEM_WALLET_LV2: return "Wallet (600)";
    case fpcNm_ITEM_WALLET_LV3: return "Wallet (1000)";
    case fpcNm_ITEM_ARROW_LV1: return "Quiver (30)";
    case fpcNm_ITEM_ARROW_LV2: return "Quiver (60)";
    case fpcNm_ITEM_ARROW_LV3: return "Quiver (100)";
    case fpcNm_ITEM_SMELL_CHILDREN: return "Youth's Scent";
    case fpcNm_ITEM_SMELL_YELIA_POUCH: return "Scent of Ilia";
    case fpcNm_ITEM_SMELL_FISH: return "Reekfish Scent";
    case fpcNm_ITEM_SMELL_MEDICINE: return "Medicine Scent";
    case fpcNm_ITEM_SMELL_POH: return "Poe Scent";
    case fpcNm_ITEM_NONE: return "";
    default: return "Unknown";
    }
}
