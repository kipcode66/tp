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
#include "d/d_lib.h"
#include "JSystem/JKernel/JKRExpHeap.h"
#include "JSystem/JKernel/JKRAramArchive.h"
#include "JSystem/JSupport/JSUMemoryStream.h"
#include "JSystem/JMath/JMath.h"
#include "JSystem/J2DGraph/J2DScreen.h"

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
    JKRExpHeap* j2dHeap = mDoExt_getJ2dHeap();
    OSReport("creating gzInventoryMenu_c - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());
    mXPos = g_gzInfo.mBackgroundXPos + 170.0f;

    for (int i = 0; i < TAB_MAX_e; i++) {
        mpTabHeaders[i] = gzTextBox_allocate();
        mpTabHeaders[i]->setFontSize(15.0f, 15.0f);
    }
    mpTabHeaders[TAB_RING_MENU]->setString("ring menu");
    mpTabHeaders[TAB_PAUSE_MENU]->setString("pause menu");
    OSReport("after tab headers - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());

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

    mpRingResData = NULL;
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
    JKRHeap* oldHeap = heap->becomeCurrentHeap();
    OSReport("after becomeCurrentHeap - J2DHeap free: %d, current heap: %p, gzHeap: %p\n",
             j2dHeap->getTotalFreeSize(), JKRHeap::getCurrentHeap(), heap);
    mpRingScreen = new (heap, 4) J2DScreen();
    OSReport("after new J2DScreen - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());

    // Inline dPaneClass_setPriority with logging
    JKRArchive* archive = dComIfGp_getRingResArchive();
    const char* resName = "SCRN/zelda_item_select_icon3_center_parts.blo";
    u32 size = dLib_getExpandSizeFromAramArchive((JKRAramArchive*)archive, resName);
    OSReport("after getExpandSize - J2DHeap free: %d, size: %d\n", j2dHeap->getTotalFreeSize(), size);
    mpRingResData = heap->alloc(size, 0x20);
    OSReport("after alloc resData - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());
    u32 len = archive->readResource(mpRingResData, size, resName);
    OSReport("after readResource - J2DHeap free: %d, len: %d\n", j2dHeap->getTotalFreeSize(), len);
    if (len != 0) {
        JSUMemoryInputStream stream(mpRingResData, len);
        mpRingScreen->setPriority(&stream, 0x20000, archive);
    }
    OSReport("after setPriority - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());
    dPaneClass_showNullPane(mpRingScreen);
    mpCenterPaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'center_n', 2, (JKRExpHeap*)heap);
    OSReport("after mpCenterPaneMgr - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());
    mpCirclePaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'circle_n', 2, (JKRExpHeap*)heap);
    OSReport("after mpCirclePaneMgr - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());
    mpLabelPaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'label_n', 1, (JKRExpHeap*)heap);
    OSReport("after mpLabelPaneMgr - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());
    oldHeap->becomeCurrentHeap();
    OSReport("end of constructor - J2DHeap free: %d\n", j2dHeap->getTotalFreeSize());
}

gzInventoryMenu_c::~gzInventoryMenu_c() {
    _delete();
}

void gzInventoryMenu_c::_delete() {
    OSReport("deleting gzInventoryMenu_c\n");
    for (int i = 0; i < TAB_MAX_e; i++) {
        gzTextBox_free(mpTabHeaders[i]);
        mpTabHeaders[i] = NULL;
    }

    for (int i = 0; i < gzInventoryMenu_c::RING_MAX_SLOTS; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpItemTex[i][j];
            mpItemTex[i][j] = NULL;
            delete[] (u8*)mpItemBuf[i][j];
            mpItemBuf[i][j] = NULL;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpPickerTex[i][j];
            mpPickerTex[i][j] = NULL;
            delete[] (u8*)mpPickerBuf[i][j];
            mpPickerBuf[i][j] = NULL;
        }
    }

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
    initRingItems();
    reloadRingScreen();
}

void gzInventoryMenu_c::reloadRingScreen() {
    delete mpLabelPaneMgr;
    delete mpCirclePaneMgr;
    delete mpCenterPaneMgr;
    delete mpRingScreen;
    if (mpRingResData != NULL) {
        gzHeap(GZ_GROUP_MENU)->free(mpRingResData);
        mpRingResData = NULL;
    }
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);
    JKRHeap* oldHeap = heap->becomeCurrentHeap();
    mpRingScreen = new (heap, 4) J2DScreen();
    dPaneClass_setPriority(&mpRingResData, heap, mpRingScreen,
                           "SCRN/zelda_item_select_icon3_center_parts.blo", 0x20000,
                           dComIfGp_getRingResArchive());
    dPaneClass_showNullPane(mpRingScreen);
    mpCenterPaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'center_n', 2, (JKRExpHeap*)heap);
    mpCirclePaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'circle_n', 2, (JKRExpHeap*)heap);
    mpLabelPaneMgr = new (heap, 4) CPaneMgr(mpRingScreen, 'label_n', 1, (JKRExpHeap*)heap);
    oldHeap->becomeCurrentHeap();
}

void gzInventoryMenu_c::onExitMenu() {
    gzMenu_c::onExitMenu();
    freeAllTextures();
    if (gzInfo_getTPCursor() != NULL) {
        gzInfo_getTPCursor()->setParam(0.96f, 0.84f, 0.03f, 0.5f, 0.5f);
    }
}

void gzInventoryMenu_c::freeAllTextures() {
    for (int i = 0; i < gzInventoryMenu_c::RING_MAX_SLOTS; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpItemTex[i][j];
            mpItemTex[i][j] = NULL;
            delete[] (u8*)mpItemBuf[i][j];
            mpItemBuf[i][j] = NULL;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            delete mpPickerTex[i][j];
            mpPickerTex[i][j] = NULL;
            delete[] (u8*)mpPickerBuf[i][j];
            mpPickerBuf[i][j] = NULL;
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

    f32 centerX = mXPos + 250.0f;
    f32 centerY = g_gzInfo.mBackgroundYPos + 200.0f;
    calcEllipsePlotAverage(mItemsTotal, centerX, centerY);
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

        for (int j = 0; j < 3; j++) {
            if (mpItemBuf[slotIdx][j] == NULL) {
                mpItemBuf[slotIdx][j] = (ResTIMG*)new (gzHeap(GZ_GROUP_MENU), 0x20) u8[0xC00];
            }
        }

        s32 textureNum = dMeter2Info_readItemTexture(
            item, mpItemBuf[slotIdx][0], NULL, mpItemBuf[slotIdx][1], NULL,
            mpItemBuf[slotIdx][2], NULL, NULL, NULL, -1);

        for (int k = 0; k < textureNum; k++) {
            mpItemTex[slotIdx][k] = new (gzHeap(GZ_GROUP_MENU), 4) J2DPicture(mpItemBuf[slotIdx][k]);
            mpItemTex[slotIdx][k]->setBasePosition(J2DBasePosition_4);
        }

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

        for (int j = 0; j < 3; j++) {
            if (mpPickerBuf[pickerIdx][j] == NULL) {
                mpPickerBuf[pickerIdx][j] = (ResTIMG*)new (gzHeap(GZ_GROUP_MENU), 0x20) u8[0xC00];
            }
        }

        s32 textureNum = dMeter2Info_readItemTexture(
            item, mpPickerBuf[pickerIdx][0], NULL, mpPickerBuf[pickerIdx][1], NULL,
            mpPickerBuf[pickerIdx][2], NULL, NULL, NULL, -1);

        for (int k = 0; k < textureNum; k++) {
            mpPickerTex[pickerIdx][k] = new (gzHeap(GZ_GROUP_MENU), 4) J2DPicture(mpPickerBuf[pickerIdx][k]);
            mpPickerTex[pickerIdx][k]->setBasePosition(J2DBasePosition_4);
        }

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

    f32 centerX = mXPos + 250.0f;
    f32 centerY = g_gzInfo.mBackgroundYPos + 200.0f;
    calcEllipsePlotAverage(mItemsTotal, centerX, centerY);
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
        f32 centerX = mXPos + 250.0f;
        f32 centerY = g_gzInfo.mBackgroundYPos + 200.0f;
        calcEllipsePlotAverage(mItemsTotal, centerX, centerY);
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

    f32* ptrX = (f32*)new (gzHeap(GZ_GROUP_MENU), 4) u8[16000];
    f32* ptrY = (f32*)new (gzHeap(GZ_GROUP_MENU), 4) u8[16000];
    f32* ptrDist = (f32*)new (gzHeap(GZ_GROUP_MENU), 4) u8[16000];

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

    delete[] (u8*)ptrX;
    delete[] (u8*)ptrY;
    delete[] (u8*)ptrDist;
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

    calcEllipsePlotAverage(mItemsTotal, centerX, centerY);

    gzSetup2DContext();

    for (int i = 0; i < mItemsTotal; i++) {
        bool isSelected = (i == mCurrentSlot);
        f32 scale = isSelected ? 1.2f : 1.0f;
        drawItemOnRing(i, mItemSlotPosX[i], mItemSlotPosY[i], scale, isSelected);
    }

    if (mItemsTotal > 0 && mCurrentSlot < mItemsTotal) {
        if (mIsEntered && gzInfo_isCursorTypeTP() && gzInfo_getTPCursor() != NULL) {
            f32 itemX = mItemSlotPosX[mCurrentSlot];
            f32 itemY = mItemSlotPosY[mCurrentSlot];

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

void gzInventoryMenu_c::drawPauseMenu() {
    gzTextBox* placeholder = gzTextBox_allocate();
    placeholder->setFontSize(14.0f, 14.0f);
    placeholder->setString("pause menu (coming soon)");
    placeholder->draw(mXPos, g_gzInfo.mBackgroundYPos + gzMenuLayout::Y_ALIGNMENT, 0xAAAAAAAA);
    gzTextBox_free(placeholder);
}

void gzInventoryMenu_c::execute() {
    if (checkInputWait()) return;

    if (gzInfo_isMenuOption() && gzPad::getTrigB()) {
        setSlotItem(mCurrentSlot, mOriginalItem);
        gzInfo_offMenuOption();
        gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
        return;
    }

    if (handleBackButton(gzMainMenu_c::MENU_INVENTORY)) return;

    gzCursor* l_cursor = gzInfo_getCursor();

    if (!gzInfo_isMenuOption()) {
        u32 dpadTrig = gzPad::getTrig() & (PAD_BUTTON_LEFT | PAD_BUTTON_RIGHT);
        if (dpadTrig & PAD_BUTTON_RIGHT) {
            mCurrentTab = (mCurrentTab + 1) % TAB_MAX_e;
            l_cursor->y = 0;
            mCurrentSlot = 0;
            gzInfo_resetTopLine();
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }
        if (dpadTrig & PAD_BUTTON_LEFT) {
            mCurrentTab = (mCurrentTab - 1 + TAB_MAX_e) % TAB_MAX_e;
            l_cursor->y = 0;
            mCurrentSlot = 0;
            gzInfo_resetTopLine();
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }
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
    static const f32 TAB_PADDING = 5.0f;
    f32 tabXPositions[TAB_MAX_e];
    f32 tabBaseX = mXPos;
    tabXPositions[0] = tabBaseX;
    for (int i = 1; i < TAB_MAX_e; i++) {
        mpTabHeaders[i - 1]->updateBounds();
        tabXPositions[i] = tabXPositions[i - 1] + mpTabHeaders[i - 1]->mBounds.f.x + TAB_PADDING;
    }

    f32 yHeader = g_gzInfo.mBackgroundYPos + gzMenuLayout::TAB_HEADER_Y_OFFSET;
    drawTabHeaders(mpTabHeaders, tabXPositions, TAB_MAX_e, mCurrentTab, yHeader, gzInfo_getCursorColor());

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
    info.hasTabs = true;
    info.currentTab = mCurrentTab;
    info.numTabs = TAB_MAX_e;

    static const f32 TAB_PADDING = 5.0f;
    f32 tabBaseX = mXPos;
    info.tabX[0] = tabBaseX;
    for (int i = 0; i < TAB_MAX_e; i++) {
        mpTabHeaders[i]->updateBounds();
        info.tabWidth[i] = mpTabHeaders[i]->mBounds.f.x;
        if (i < TAB_MAX_e - 1) {
            info.tabX[i + 1] = info.tabX[i] + info.tabWidth[i] + TAB_PADDING;
        }
    }

    return info;
}

gzButtonHints_s gzInventoryMenu_c::getButtonHints() {
    gzButtonHints_s hints;
    hints.count = 0;

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
    case fpcNm_ITEM_WOOD_STICK: return "Ordon Sword";
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
    case fpcNm_ITEM_NONE: return "None";
    default: return "Unknown";
    }
}
