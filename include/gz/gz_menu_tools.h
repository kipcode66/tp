#ifndef GZ_MENU_TOOLS_H
#define GZ_MENU_TOOLS_H

#include "gz/gz_menu.h"
#include "gz/gz_textbox.h"

class J2DPicture;

class gzToolsMenu_c : public gzMenu_c {
public:
    enum gzToolsMenuTabs_e {
        TAB_CHECKERS_e,
        TAB_DISPLAYS_e,
        TAB_LINK_e,

        TAB_MAX_e
    };

    static const int C_MAX = 7;  // checkers tab count
    static const int D_MAX = 7;  // displays tab count
    static const int L_MAX = 6;  // link tab count

    gzToolsMenu_c();
    ~gzToolsMenu_c();

    static const int ICON_BTI_SIZE = 544;

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual gzTabInfo_s getTabInfo();
    virtual void onHighlight();
    virtual void onUnhighlight();

private:
    int getCurrentLineNum();
    void loadIcons();
    void freeIcons();

private:
    gzTextBox* mpTabHeaders[TAB_MAX_e];
    gzBoolOptionLine* mpLinesCheckers[C_MAX];
    gzBoolOptionLine* mpLinesDisplays[D_MAX];
    gzBoolOptionLine* mpLinesLink[L_MAX];

    int mCurrentTab;

    J2DPicture* mpCheckIconPane;
    void* mpCheckIconBuf;
    J2DPicture* mpXMarkIconPane;
    void* mpXMarkIconBuf;
};

#endif // GZ_MENU_TOOLS_H
