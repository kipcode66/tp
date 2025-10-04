#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"
#include "m_Do/m_Do_machine.h"
// #include "JSystem/J2DGraph/J2DTextBox.h"

#define COLOR_AMETHYST 0x9966FFFF
#define COLOR_AQUAMARINE 0x71D9E2FF
#define COLOR_BANANA_MANIA 0xFAE7B5FF
#define COLOR_BOLD_CRIMSON 0xDC143CFF
#define COLOR_BUBBLEGUM_PINK 0xFF69B4FF
#define COLOR_CERULEAN 0x007BA7FF
#define COLOR_COSMIC_COBALT 0x2E2D88FF
#define COLOR_ELECTRIC_BLUE 0x7DF9FFFF
#define COLOR_FIERY_ORANGE 0xFF4500FF
#define COLOR_FLAMINGO_FEATHER 0xFC8EACFF
#define COLOR_GOLD_DROP 0xEE8000FF
#define COLOR_LEMON_YELLOW 0xFFF44FFF
#define COLOR_LIME_GREEN 0x32CD32FF
#define COLOR_MAGENTA_MAGIC 0xFF00FFFF
#define COLOR_MIDNIGHT_BLUE 0x191970FF
#define COLOR_MYSTICAL_PURPLE 0x9370DBFF
#define COLOR_NEON_CARROT 0xFFA343FF
#define COLOR_PERIWINKLE 0xCCCCFFFF
#define COLOR_SAPPHIRE_SPARKLE 0x0F52BAFF
#define COLOR_SHAMROCK_GREEN 0x009E60FF
#define COLOR_SUNNY_YELLOW 0xFFFF00FF
#define COLOR_TANGERINE_TWIST 0xFFA500FF
#define COLOR_TROPICAL_TURQUOISE 0x40E0D0FF
#define COLOR_VIVID_VIOLET 0x9F00FFFF
#define COLOR_WILD_STRAWBERRY 0xFF43A4FF
#define COLOR_ZESTY_CHARTREUSE 0x7FFF00FF
#define COLOR_WHITE 0xFFFFFFFF

static const int COLOR_COUNT = 26;

static char* l_textColorName[] = {
    "amethyst",
    "aquamarine",
    "banana mania",
    "bold crimson",
    "bubblegum pink",
    "cerulean",
    "cosmic cobalt",
    "electric blue",
    "fiery orange",
    "flamingo feather",
    "gold drop",
    "lemon yellow",
    "lime green",
    "magenta magic",
    "midnight blue",
    "mystical purple",
    "neon carrot",
    "periwinkle",
    "sapphire sparkle",
    "shamrock green",
    "sunny yellow",
    "tangerine twist",
    "tropical turquoise",
    "vivid violet",
    "white",
    "wild strawberry",
    "zesty chartreuse"
};

static u32 l_textColorValue[] = {
    COLOR_AMETHYST,
    COLOR_AQUAMARINE,
    COLOR_BANANA_MANIA,
    COLOR_BOLD_CRIMSON,
    COLOR_BUBBLEGUM_PINK,
    COLOR_CERULEAN,
    COLOR_COSMIC_COBALT,
    COLOR_ELECTRIC_BLUE,
    COLOR_FIERY_ORANGE,
    COLOR_FLAMINGO_FEATHER,
    COLOR_GOLD_DROP,
    COLOR_LEMON_YELLOW,
    COLOR_LIME_GREEN,
    COLOR_MAGENTA_MAGIC,
    COLOR_MIDNIGHT_BLUE,
    COLOR_MYSTICAL_PURPLE,
    COLOR_NEON_CARROT,
    COLOR_PERIWINKLE,
    COLOR_SAPPHIRE_SPARKLE,
    COLOR_SHAMROCK_GREEN,
    COLOR_SUNNY_YELLOW,
    COLOR_TANGERINE_TWIST,
    COLOR_TROPICAL_TURQUOISE,
    COLOR_VIVID_VIOLET,
    COLOR_WHITE,
    COLOR_WILD_STRAWBERRY,
    COLOR_ZESTY_CHARTREUSE
};

u32 nextColor() {
    // Find current color index
    int currentIndex = -1;
    for (int i = 0; i < COLOR_COUNT; i++) {
        if (g_gzInfo.getTextColor() == l_textColorValue[i]) {
            currentIndex = i;
            break;
        }
    }
    
    // If not found, default to first color
    if (currentIndex == -1) {
        return l_textColorValue[0];
    }
    
    // Get next index with wrap around
    int nextIndex = (currentIndex + 1) % COLOR_COUNT;
    return l_textColorValue[nextIndex];
}

u32 previousColor() {
    // Find current color index
    int currentIndex = -1;
    for (int i = 0; i < COLOR_COUNT; i++) {
        if (g_gzInfo.getTextColor() == l_textColorValue[i]) {
            currentIndex = i;
            break;
        }
    }
    
    // If not found, default to first color
    if (currentIndex == -1) {
        return l_textColorValue[0];
    }
    
    // Get previous index with wrap around
    int previousIndex = (currentIndex - 1 + COLOR_COUNT) % COLOR_COUNT;
    return l_textColorValue[previousIndex];
}

void gzSettingsMenu_c::updateDynamicLines() {
    mpLineOptions[SETTING_AREA_RELOAD_BEHAVIOR]->setStringf("%s", g_gzInfo.getAreaReload() ? "load area" : "load file");
    mpLineOptions[SETTING_CURSOR_TYPE]->setStringf("%s", getCursorTypeText());

    // Find current color name
    char* currentColorName = "unknown";
    for (int i = 0; i < COLOR_COUNT; i++) {
        if (g_gzInfo.getTextColor() == l_textColorValue[i]) {
            currentColorName = l_textColorName[i];
            break;
        }
    }
    mpLineOptions[SETTING_CURSOR_COLOR]->setStringf("%s", currentColorName);

    mpLines[SETTING_DROP_SHADOW]->setStringf("drop shadows: [%s]", g_gzInfo.getDropShadows() ? "X" : " ");
    mpLines[SETTING_SWAP_EQUIPS]->setStringf("swap equips: [%s]", g_gzInfo.getSwapEquips() ? "X" : " ");
    mpLines[SETTING_PROGRESSIVE_MODE]->setStringf("progressive mode: [%s]", g_gzInfo.getProgressiveMode() ? "X" : " ");

    J2DTextBox::TFontSize font_size;

    // update option box bounds
    for (int i = 0; i < LINE_NUM; i++) {
        mpLineOptions[i]->getFontSize(font_size);
        // applying font_size.mSizeX against a scaling factor 
        // to create a linear relationship between string length 
        // and text box bound size
        font_size.mSizeX *= 0.5f;
        mpLineOptions[i]->mBounds.f.x = mpLineOptions[i]->mStringLength * font_size.mSizeX;
    }
}

gzMenu_c::gzCursor gzSettingsMenu_c::mCursor = {0, 0};

gzSettingsMenu_c::gzSettingsMenu_c() {
    OSReport("creating gzSettingsMenu_c\n");

    for (int i = 0; i < LINE_NUM; i++) {
        mpLines[i] = new gzTextBox();
        mpLines[i]->mBounds.f.x = 430.0f;
        mpLines[i]->mBounds.f.y = 10.0f;
        // mpLines[i]->setLineSpace(0.0f);

        mpLineOptions[i] = new gzTextBox();
        mpLineOptions[i]->mBounds.f.y = 10.0f;
    }

    mpLines[SETTING_AREA_RELOAD_BEHAVIOR]->setString("area reload behavior");
    mpLines[SETTING_CURSOR_TYPE]->setString("cursor type");
    mpLines[SETTING_CURSOR_COLOR]->setString("cursor color");
    mpLines[SETTING_FONT]->setString("font");
    mpLines[SETTING_DROP_SHADOW]->setString("drop shadows");
    mpLines[SETTING_SWAP_EQUIPS]->setString("swap equips");
    mpLines[SETTING_PROGRESSIVE_MODE]->setString("progressive mode");
    mpLines[SETTING_SAVE_CARD]->setString("save card");
    mpLines[SETTING_LOAD_CARD]->setString("load card");
    mpLines[SETTING_DELETE_CARD]->setString("delete card");
    mpLines[SETTING_COMMAND_COMBOS]->setString("command combos");
    mpLines[SETTING_MENU_POSITIONS]->setString("menu positions");
    mpLines[SETTING_CREDITS]->setString("credits");

    mpDrawCursor = new dSelect_cursor_c(2, 1.0f, NULL);
    mpDrawCursor->setParam(0.96f, 0.84f, 0.06f, 0.5f, 0.5f);
    mpDrawCursor->setAlphaRate(1.0f);

    mpMeterHaihai = new dMeterHaihai_c(3);
}

gzSettingsMenu_c::~gzSettingsMenu_c() {
    _delete();
}

void gzSettingsMenu_c::_delete() {
    OSReport("deleting gzSettingsMenu_c\n");
    for (int i = 0; i < LINE_NUM; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;
    }

    delete mpDrawCursor;
    delete mpMeterHaihai;
}

void gzSettingsMenu_c::execute() {
    if (gzPad::getTrigDown() && mCursor.y < LINE_NUM) {
        mCursor.y++;
    }

    if (gzPad::getTrigUp() && mCursor.y >= 0) {
        mCursor.y--;
    }

    if (mCursor.y < 0) {
        mCursor.y = LINE_NUM - 1;
    } else if (mCursor.y > LINE_NUM - 1) {
        mCursor.y = 0;
    }

    if (gzPad::getTrigB()) {
        gzChangeMenu<gzMainMenu_c>();
        return;
    }

    if (gzPad::getTrigA()) {
        switch (mCursor.y) {
        case SETTING_DROP_SHADOW:
            g_gzInfo.setDropShadows(!g_gzInfo.getDropShadows());
            break;
        case SETTING_SWAP_EQUIPS:
            g_gzInfo.setSwapEquips(!g_gzInfo.getSwapEquips());
            break;
        case SETTING_PROGRESSIVE_MODE:
            g_gzInfo.getProgressiveMode() ? mDoMch_render_c::setProgressiveMode() : mDoMch_render_c::setInterlacedMode();
            g_gzInfo.setProgressiveMode(!g_gzInfo.getProgressiveMode());
            break;
        case SETTING_SAVE_CARD:
            g_gzInfo.storeSettingsMemcard();
            break;
        case SETTING_LOAD_CARD:
            g_gzInfo.loadSettingsMemcard();
            break;
        case SETTING_CREDITS:
            gzChangeMenu<gzCreditsMenu_c>();
            return;
        }
    }

    if (gzPad::getTrigRight()) {
        switch (mCursor.y) {
        case SETTING_CURSOR_TYPE:
            g_gzInfo.setCursorType(g_gzInfo.nextCursorType());
            break;
        case SETTING_CURSOR_COLOR:
            g_gzInfo.setTextColor(nextColor());
            break;
        case SETTING_AREA_RELOAD_BEHAVIOR:
            g_gzInfo.setAreaReload(!g_gzInfo.getAreaReload());
            break;
        }
    }

    if (gzPad::getTrigLeft()) {
        switch (mCursor.y) {
        case SETTING_CURSOR_TYPE:
            g_gzInfo.setCursorType(g_gzInfo.previousCursorType());
            break;
        case SETTING_CURSOR_COLOR:
            g_gzInfo.setTextColor(previousColor());
            break;
        case SETTING_AREA_RELOAD_BEHAVIOR:
            g_gzInfo.setAreaReload(!g_gzInfo.getAreaReload());
            break;
        }
    }
}

void gzSettingsMenu_c::draw() {
    f32 x_alignment = 30.0f;
    f32 y_alignment = 90.0f;

    f32 x_alignment_opts = x_alignment - 50.0f;

    f32 x_alignment_haihai = x_alignment_opts + 305.0f;
    f32 y_alignment_haihai = y_alignment - 7.0f;

    J2DTextBox::TFontSize font_size;
    
    updateDynamicLines();
    mpMeterHaihai->_execute(0);

    for (int i = 0; i < LINE_NUM; i++) {
        if (mpLines[i] != NULL && mpLineOptions[i] != NULL && mpMeterHaihai != NULL) {
            mpLineOptions[i]->getFontSize(font_size);
            mpMeterHaihai->setScale(font_size.mSizeY * 0.04f);
        
            if (mCursor.y == i) {
                // spacing between arrows will be determined off text box bound size
                f32 x_size_haihai = mpLineOptions[i]->mBounds.f.x + 30.0f;
                u32 cursor_color = g_gzInfo.getCursorType() & g_gzInfo.CURSOR_CLASSIC ? g_gzInfo.getTextColor() : COLOR_WHITE;
                
                if (mpLineOptions[i]->mStringLength != 0) {
                    mpMeterHaihai->drawHaihai((ARROW_LEFT | ARROW_RIGHT), x_alignment_haihai, y_alignment_haihai + ((i - 1) * 22.0f), x_size_haihai, 0.0f);
                }

                mpLines[i]->draw(x_alignment, y_alignment + ((i - 1) * 22.0f), cursor_color);
                mpDrawCursor->setPos(170.0f, 82.5f + ((i - 1) * 22.0f), (J2DPane*)mpLines[i], true);
                mpLineOptions[i]->draw(x_alignment_opts, y_alignment + ((i - 1) * 22.0f), cursor_color, HBIND_CENTER);
            } else {
                mpLines[i]->draw(x_alignment, y_alignment + ((i - 1) * 22.0f), COLOR_WHITE);
                mpLineOptions[i]->draw(x_alignment_opts, y_alignment + ((i - 1) * 22.0f), COLOR_WHITE, HBIND_CENTER);
            }
        }
    }

    if (g_gzInfo.getCursorType() & g_gzInfo.CURSOR_TP) mpDrawCursor->draw();
}
