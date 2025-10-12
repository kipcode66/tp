#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

gzPracticeMenu_c::gzPracticeMenu_c() {
    OSReport("creating gzPracticeMenu_c\n");

    for (int i = 0; i < TAB_MAX; i++) {
        mpTabHeaders[i] = new gzTextBox;
    }

    mpTabHeaders[TAB_ANY]->setString("any%");
    mpTabHeaders[TAB_BITE]->setString("any% bite");
    mpTabHeaders[TAB_HUNDO]->setString("100%");
    mpTabHeaders[TAB_ALLDUNGEONS]->setString("all dungeons");
    mpTabHeaders[TAB_GLITCHLESS]->setString("glitchless");
    mpTabHeaders[TAB_MEMFILES]->setString("memfiles");

    for (int i = 0; i < ANY_LINE_NUM; i++) {
        mpLinesAny[i] = new gzTextBox;
        if (i % 2 == 0) mpLinesAny[i]->setString("a");
        if (i % 2 == 1) mpLinesAny[i]->setString("b");
    }

    for (int i = 0; i < ALL_DUNGEONS_LINE_NUM; i++) {
        mpLinesAllDungeons[i] = new gzTextBox;
        if (i % 2 == 0) mpLinesAllDungeons[i]->setString("b");
        if (i % 2 == 1) mpLinesAllDungeons[i]->setString("c");
    }

    for (int i = 0; i < HUNDO_LINE_NUM; i++) {
        mpLinesHundo[i] = new gzTextBox;
        if (i % 2 == 0) mpLinesHundo[i]->setString("c");
        if (i % 2 == 1) mpLinesHundo[i]->setString("d");
    }

    for (int i = 0; i < MEMFILE_MAX_NUM; i++) {
        mpLinesMemfiles[i] = new gzTextBox;
        mpLinesMemfiles[i]->setStringf("%d. -- empty --", i + 1);
    }

    mTopLine = 0;

    mpMeterHaihai = new dMeterHaihai_c(3);
    mpKeyboard = NULL;
}

gzPracticeMenu_c::~gzPracticeMenu_c() {
    _delete();
}

void gzPracticeMenu_c::_delete() {
    OSReport("deleting gzPracticeMenu_c\n");

    for (int i = 0; i < TAB_MAX; i++) {
        delete mpTabHeaders[i];
        mpTabHeaders[i] = NULL;
    }

    for (int i = 0; i < ANY_LINE_NUM; i++) {
        delete mpLinesAny[i];
        mpLinesAny[i] = NULL;
    }

    for (int i = 0; i < ALL_DUNGEONS_LINE_NUM; i++) {
        delete mpLinesAllDungeons[i];
        mpLinesAllDungeons[i] = NULL;
    }

    for (int i = 0; i < HUNDO_LINE_NUM; i++) {
        delete mpLinesHundo[i];
        mpLinesHundo[i] = NULL;
    }
}

static int memfileNameFinishCb(gzKeyboardMenu_c* i_keyboard, void* i_data) {
    gzPracticeMenu_c* menu = (gzPracticeMenu_c*)i_data;
    gzCursor* l_cursor = gzInfo_getCursor();

    menu->mpLinesMemfiles[l_cursor->y]->setStringf("%d. %s", l_cursor->y + 1, i_keyboard->mString);
    return 1;
}

void gzPracticeMenu_c::execute() {
    gzCursor* l_cursor = gzInfo_getCursor();
    int current_max_line;

    switch (mCurrentTab) {
    case TAB_ANY:
        current_max_line = ANY_LINE_NUM;
        break;
    case TAB_ALLDUNGEONS:
        current_max_line = ALL_DUNGEONS_LINE_NUM;
        break;
    case TAB_HUNDO:
        current_max_line = HUNDO_LINE_NUM;
        break;
    case TAB_MEMFILES:
        // temp for debugging, these should be handled by dedicated tab execute functions
        if (mpKeyboard != NULL) {
            int rt = mpKeyboard->execute();
            if (rt == 1 || rt == 2) {
                delete mpKeyboard;
                mpKeyboard = NULL;
            }
            return;
        }

        if (gzPad::getTrigA()) {
            mpKeyboard = new gzKeyboardMenu_c(memfileNameFinishCb, NULL, this);
            gzInfo_seStart(Z2SE_SY_CURSOR_OK);
        }

        if (gzPad::getTrigZ()) {
            // TODO: handle actual memfile deletion
            mpLinesMemfiles[l_cursor->y]->setStringf("%d. -- empty --", l_cursor->y + 1);
            gzInfo_seStart(Z2SE_SY_FILE_DELETE_OK);
        }

        current_max_line = MEMFILE_MAX_NUM;
        break;
    default:  // temp
        current_max_line = ANY_LINE_NUM;
        break;
    }

    if (gzPad::getTrigRight()) {
        mCurrentTab = (mCurrentTab + 1) % TAB_MAX;
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
    }

    if (gzPad::getTrigLeft())  {
        mCurrentTab = (mCurrentTab - 1 + TAB_MAX) % TAB_MAX;
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
    }

    if (gzPad::getTrigB()) {
        l_cursor->x--;
        l_cursor->y = gzMainMenu_c::MENU_PRACTICE;
        gzInfo_seStart(Z2SE_SY_EXP_WIN_CLOSE);
        return;
    }

    mpMeterHaihai->_execute(0);

    if (current_max_line == 0)
        return;

    if (gzPad::getTrigDown()) {
        l_cursor->y = (l_cursor->y + 1) % current_max_line;
        gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
    }

    if (gzPad::getTrigUp()) {
        l_cursor->y = (l_cursor->y - 1 + current_max_line) % current_max_line;
        gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
    }
}

void gzPracticeMenu_c::draw() {
    gzCursor* l_cursor = gzInfo_getCursor();

    static const f32 X_POS[TAB_MAX] = {200.0f, 280.0f, 420.0f};
    static const f32 Y_HEADER = 58.0f;
    static const f32 X_ALIGNMENT = 0.0f;
    static const f32 Y_ALIGNMENT = 100.0f;
    static const f32 LINE_SPACING = 22.0f;
    static const f32 HAIHAI_X_OFFSET = 6.0f;
    static const f32 HAIHAI_Y_OFFSET = 125.0f;
    static const f32 HAIHAI_Y_SIZE = 355.0f; // TODO(Pheenoh): make this dynamic based on VISIBLE_LINES and mFontSizeY
    static const int VISIBLE_LINES = 15;

    u32 cursor_color = gzInfo_getCursorColor();

    f32 x_alignment_haihai = X_ALIGNMENT + HAIHAI_X_OFFSET;
    f32 y_alignment_haihai = Y_ALIGNMENT + HAIHAI_Y_OFFSET;

    int current_max_line;
    gzTextBox** currentLines;

    if (mpKeyboard != NULL) {
        mpKeyboard->draw();
        return;
    }

    // Draw tab headers
    for (int i = 0; i < VISIBLE_TABS; i++) {
        // TODO: normalize x positions so text doesn't overwrite itself
        mpTabHeaders[(mCurrentTab + i) % TAB_MAX]->draw(X_POS[i], Y_HEADER, i == 0 ? cursor_color : COLOR_WHITE);
    }

    switch (mCurrentTab) {
    case TAB_ANY:
        current_max_line = ANY_LINE_NUM;
        currentLines = mpLinesAny;
        break;
    case TAB_ALLDUNGEONS:
        current_max_line = ALL_DUNGEONS_LINE_NUM;
        currentLines = mpLinesAllDungeons;
        break;
    case TAB_HUNDO:
        current_max_line = HUNDO_LINE_NUM;
        currentLines = mpLinesHundo;
        break;
    case TAB_MEMFILES:
        current_max_line = MEMFILE_MAX_NUM;
        currentLines = mpLinesMemfiles;
        break;
    default: // temp
        current_max_line = ANY_LINE_NUM;
        currentLines = mpLinesAny;
        break;
    }

    if (l_cursor->y < mTopLine) {
        mTopLine = l_cursor->y;
    } else if (l_cursor->y >= mTopLine + VISIBLE_LINES) {
        mTopLine = l_cursor->y - VISIBLE_LINES + 1;
    }

    // Clamp mTopLine to valid range
    int maxTop = current_max_line - VISIBLE_LINES;
    if (maxTop < 0) maxTop = 0;
    if (mTopLine > maxTop) mTopLine = maxTop;
    if (mTopLine < 0) mTopLine = 0;

    for (int screenIdx = 0; screenIdx < VISIBLE_LINES; screenIdx++) {
        int lineIdx = mTopLine + screenIdx;
        if (lineIdx >= current_max_line) break;

        if (currentLines[lineIdx] != NULL) {
            f32 y_pos = Y_ALIGNMENT + ((screenIdx - 1) * LINE_SPACING);

            if (l_cursor->y == lineIdx && l_cursor->x > 0) {
                currentLines[lineIdx]->draw(200.0f, y_pos, cursor_color);
            } else {
                currentLines[lineIdx]->draw(200.0f, y_pos, COLOR_WHITE);
            }
        }
    }

    if (mpMeterHaihai != NULL && l_cursor->x > 0) {
        // TODO: make sure haihai always fits tabs
        mpMeterHaihai->drawHaihai(gzMainMenu_c::ARROW_LEFT | gzMainMenu_c::ARROW_RIGHT, 335.0f, 50.0f, 320.0f, 0.0f);
    }
}
