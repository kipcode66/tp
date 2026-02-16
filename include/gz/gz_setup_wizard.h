#ifndef GZ_SETUP_WIZARD_H
#define GZ_SETUP_WIZARD_H

#include "gz/gz.h"

class gzTextBox;
class dSelect_cursor_c;

class gzSetupWizard_c {
public:
    enum WizardStep_e {
        STEP_WELCOME,
        STEP_CURSOR_TYPE,
        STEP_THEME,
        STEP_BOOT_TARGET,
        STEP_MENU_PAUSES,
        STEP_DISPLAY_MODE,
        STEP_MENU_SFX,
        STEP_COMPLETE,
        STEP_DONE,
    };

    gzSetupWizard_c();
    ~gzSetupWizard_c();

    void execute();
    void draw();
    bool isComplete() const { return mStep == STEP_DONE; }

    bool mBootToMenu;
    bool mMenuPauses;
    bool mDisplayMode;
    bool mMenuSfx;
    u8 mCursorType;
    int mThemeIndex;

private:
    void applySettings();

    WizardStep_e mStep;
    int mSelection;

    gzTextBox* mpTitle;
    gzTextBox* mpQuestion;
    gzTextBox* mpOption0;
    gzTextBox* mpOption1;
    gzTextBox* mpOption2;
    gzTextBox* mpHint;
    dSelect_cursor_c* mpTPCursor;
};

#endif // GZ_SETUP_WIZARD_H
