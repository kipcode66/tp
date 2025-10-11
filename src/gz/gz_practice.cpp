#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

gzPracticeMenu_c::gzPracticeMenu_c() {
    OSReport("creating gzPracticeMenu_c\n");

    for (int i = 0; i < TAB_MAX; i++) {
        mpTabHeaders[i] = new gzTextBox;
    }

    mpTabHeaders[TAB_ANY]->setString("any%");
    mpTabHeaders[TAB_ALLDUNGEONS]->setString("all dungeons");
    mpTabHeaders[TAB_HUNDO]->setString("hundo");

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

    mTopLine = 0;
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
    }

    if (gzPad::getTrigDown()) l_cursor->y = (l_cursor->y + 1) % current_max_line;
    if (gzPad::getTrigUp()) l_cursor->y = (l_cursor->y - 1 + current_max_line) % current_max_line;
    if (gzPad::getTrigR()) mCurrentTab = (mCurrentTab + 1) % TAB_MAX;
    if (gzPad::getTrigL()) mCurrentTab = (mCurrentTab - 1 + TAB_MAX) % TAB_MAX;

    if (gzPad::getTrigB()) {
        l_cursor->x--;
        l_cursor->y = gzMainMenu_c::MENU_PRACTICE;
        return;
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

    // Draw tab headers
    for (int c = 0; c < TAB_MAX; c++) {
        mpTabHeaders[c]->draw(X_POS[c], Y_HEADER, c == mCurrentTab ? cursor_color : COLOR_WHITE);
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
                currentLines[lineIdx]->draw(X_ALIGNMENT, y_pos, cursor_color, HBIND_CENTER);
            } else {
                currentLines[lineIdx]->draw(X_ALIGNMENT, y_pos, COLOR_WHITE, HBIND_CENTER);
            }
        }
    }
}
