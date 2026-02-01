#ifndef GZ_MENU_INVENTORY_H
#define GZ_MENU_INVENTORY_H

#include "gz/gz_menu.h"
#include "gz/gz_textbox.h"
#include "JSystem/J2DGraph/J2DPicture.h"

class CPaneMgr;
class J2DScreen;

class gzInventoryMenu_c : public gzMenu_c {
public:
    enum gzInventoryMenu_Tabs_e {
        TAB_RING_MENU,
        TAB_PAUSE_MENU,

        TAB_MAX_e
    };

    static const int RING_MAX_SLOTS = 24;

    gzInventoryMenu_c();
    ~gzInventoryMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual gzTabInfo_s getTabInfo();
    virtual gzButtonHints_s getButtonHints();
    virtual void onEnterMenu();
    virtual void onExitMenu();
    virtual void onAButtonSound() {}
    void reloadRingScreen();

private:
    void initRingItems();
    void freeAllTextures();
    void loadItemTexture(int slotIdx, u8 slotNo);
    void loadPickerItemTexture(int pickerIdx, u8 itemId);
    int findItemInList(u8 item);
    void setSlotItem(int slotIdx, u8 newItem);
    void addSlot();
    void deleteSlot();
    void calcEllipsePlotAverage(int numItems, f32 centerX, f32 centerY);
    f32 calcEllipseFunction(f32 x, f32 radiusH, f32 radiusV);
    f32 calcDistance(f32 x1, f32 y1, f32 x2, f32 y2);
    void drawRingMenu();
    void drawPauseMenu();
    void drawItemOnRing(int slotIdx, f32 x, f32 y, f32 scale, bool selected);
    void drawItemPicker(f32 centerX, f32 centerY);
    const char* getItemName(u8 itemId);

private:
    gzTextBox* mpTabHeaders[TAB_MAX_e];

    int mCurrentTab;
    int mCurrentSlot;
    int mItemsTotal;

    f32 mRingRadiusH;
    f32 mRingRadiusV;

    u8 mItemSlots[RING_MAX_SLOTS];
    f32 mItemSlotPosX[RING_MAX_SLOTS];
    f32 mItemSlotPosY[RING_MAX_SLOTS];
    f32 mItemSlotScale[RING_MAX_SLOTS];
    f32 mItemSlotParam1[RING_MAX_SLOTS];
    f32 mItemSlotParam2[RING_MAX_SLOTS];

    J2DPicture* mpItemTex[RING_MAX_SLOTS][3];
    ResTIMG* mpItemBuf[RING_MAX_SLOTS][3];

    J2DPicture* mpPickerTex[3][3];
    ResTIMG* mpPickerBuf[3][3];
    u8 mPickerItems[3];

    J2DScreen* mpRingScreen;
    CPaneMgr* mpCenterPaneMgr;
    CPaneMgr* mpCirclePaneMgr;
    CPaneMgr* mpLabelPaneMgr;
    void* mpRingResData;

    u8 mOriginalItem;
};

#endif // GZ_MENU_INVENTORY_H
