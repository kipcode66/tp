#ifndef GZ_MENU_CHEATS_H
#define GZ_MENU_CHEATS_H

#include "gz/gz_menu.h"
#include "gz/gz_textbox.h"

class J2DPicture;

class gzCheatsMenu_c : public gzMenu_c {
public:
    enum gzCheatsMenu_e {
        CHEAT_DISABLE_ITEM_TIMER,
        CHEAT_DISABLE_WALLS,
        CHEAT_INF_AIR,
        CHEAT_INF_ARROWS,
        CHEAT_INF_BOMBS,
        CHEAT_INF_HEARTS,
        CHEAT_INF_OIL,
        CHEAT_INF_RUPEES,
        CHEAT_INF_SLINGSHOT,
        CHEAT_INVINCIBLE_LINK,
        CHEAT_INVINCIBLE_ENEMIES,
        CHEAT_MOON_JUMP,
        CHEAT_SUPER_CLAWSHOT,
        CHEAT_TRANSFORM_ANYWHERE,
        CHEAT_UNRESTRICTED_ITEMS,

        CHEAT_MAX
    };

    gzCheatsMenu_c();
    ~gzCheatsMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual void onHighlight();
    virtual void onUnhighlight();

    static const int LINE_NUM = CHEAT_MAX;
    static const int ICON_BTI_SIZE = 544;

private:
    void loadIcons();
    void freeIcons();

private:
    gzBoolOptionLine* mpLines[LINE_NUM];
    J2DPicture* mpCheckIconPane;
    void* mpCheckIconBuf;
    J2DPicture* mpXMarkIconPane;
    void* mpXMarkIconBuf;
};

#endif // GZ_MENU_CHEATS_H
