#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"
#include "m_Do/m_Do_MemCard.h"

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

    mMemfileTab.create();

    mTopLine = 0;

    mpMeterHaihai = new dMeterHaihai_c(3);
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

    if (g_gzInfo.mInputWaitTimer != 0) {
        g_gzInfo.mInputWaitTimer--;
        return;
    }

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
        if (mMemfileTab.execute() == 0)
            return;
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

    // TODO: extract tab drawing to separate functions
    if (mMemfileTab.mpKeyboard != NULL) {
        mMemfileTab.mpKeyboard->draw();
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
        currentLines = mMemfileTab.mpLines;
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

void gzPracticeMenu_c::gzMemfileTab_c::create() {
    for (int i = 0; i < MEMFILE_MAX_NUM; i++) {
        mpLines[i] = new gzTextBox;
        mpLines[i]->setStringf("%d. -- empty --", i + 1);
    }

    readMemfileNames();

    mpKeyboard = NULL;
}

int gzPracticeMenu_c::gzMemfileTab_c::readMemfileNames() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        OSReport("readMemfileNames: card not ready\n");
        return 0;
    }

    for (int i = 0; i < MEMFILE_MAX_NUM; i++) {
        char filename_buf[9];
        sprintf(filename_buf, "tpgz_s%02d", i + 1);

        ret = CARDOpen(0, filename_buf, &file);
        if (ret == CARD_RESULT_READY) {
            // read name section from each memfile
            // TODO: can this be optimized?
            ret = CARDRead(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
            if (ret == CARD_RESULT_READY) {
                gzSaveLoaderMng_c::memfileExData_s* exdata = (gzSaveLoaderMng_c::memfileExData_s*)(mDoMemCd_Ctrl_c::sTmpBuf + sizeof(dSv_save_c));

                OSReport("read memfile name (%d. %s)\n", i + 1, exdata->name);
                mpLines[i]->setStringf("%d. %s", i + 1, exdata->name);
                setMemfileExists(i, true);
            } else {
                OSReport("readMemfileNames: read error (%d)\n", ret);
            }
        }

        CARDClose(&file);
    }

    return 1;
}

int gzPracticeMenu_c::gzMemfileTab_c::memfileNameFinishCb(gzKeyboardMenu_c* i_keyboard, void* i_data) {
    gzPracticeMenu_c::gzMemfileTab_c* menu = (gzPracticeMenu_c::gzMemfileTab_c*)i_data;
    gzCursor* l_cursor = gzInfo_getCursor();
    int slot_no = l_cursor->y + 1;

    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return 0;
    }

    char filename_buf[9];
    sprintf(filename_buf, "tpgz_s%02d", slot_no);

    ret = CARDCreate(0, filename_buf, SECTOR_SIZE, &file);
    if (ret == CARD_RESULT_READY || ret == CARD_RESULT_EXIST) {
        ret = CARDOpen(0, filename_buf, &file);
        if (ret == CARD_RESULT_READY) {
            // overwrite the save location to avoid the game trying to normalize it to something we dont want
            dSv_save_c* savedata = dComIfGs_getSaveData();
            savedata->getPlayer().getPlayerReturnPlace().set(dComIfGp_getStartStageName(), dComIfGp_roomControl_getStayNo(), 0);

            // write main save data
            memcpy(mDoMemCd_Ctrl_c::sTmpBuf, dComIfGs_getSaveData(), sizeof(dSv_save_c));

            // write any extra data we want
            gzSaveLoaderMng_c::memfileExData_s exdata;
            strcpy(exdata.name, i_keyboard->mString);
            exdata.player_pos.set(dComIfGp_getPlayer(0)->current.pos);

            memcpy(mDoMemCd_Ctrl_c::sTmpBuf + sizeof(dSv_save_c), &exdata, sizeof(gzSaveLoaderMng_c::memfileExData_s));

            ret = CARDWrite(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
            if (ret == CARD_RESULT_READY) {
                OSReport("saved memfile (%d. %s) to memcard!\n", slot_no, i_keyboard->mString);
                gzInfo_sendNotification("memfile saved!");
                menu->mpLines[l_cursor->y]->setStringf("%d. %s", slot_no, i_keyboard->mString);
                menu->setMemfileExists(l_cursor->y, true);
            }

            CARDClose(&file);
        }
    }

    return 1;
}

int gzPracticeMenu_c::gzMemfileTab_c::loadMemfile(int i_no) {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    char filename_buf[9];
    sprintf(filename_buf, "tpgz_s%02d", i_no + 1);

    ret = CARDOpen(0, filename_buf, &file);
    if (ret == CARD_RESULT_READY) {
        ret = CARDRead(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
        if (ret == CARD_RESULT_READY) {
            OSReport("loadMemfile: read memfile from memcard\n");
            gzInfo_sendNotification("memfile loaded!");
            
            dSv_save_c* savep = (dSv_save_c*)mDoMemCd_Ctrl_c::sTmpBuf;
            dComIfGp_setNextStage(savep->getPlayer().getPlayerReturnPlace().getName(),
                                savep->getPlayer().getPlayerReturnPlace().getPlayerStatus(),
                                savep->getPlayer().getPlayerReturnPlace().getRoomNo(),
                                -1);

            OS_REPORT("attempting to load stage: [S]%s [R]%d [P]%d\n",
                     savep->getPlayer().getPlayerReturnPlace().getName(),
                     savep->getPlayer().getPlayerReturnPlace().getRoomNo(),
                     savep->getPlayer().getPlayerReturnPlace().getPlayerStatus());

            gzSaveLoaderMng_c::memfileExData_s* exdata = (gzSaveLoaderMng_c::memfileExData_s*)(mDoMemCd_Ctrl_c::sTmpBuf + sizeof(dSv_save_c));
            memcpy(&g_gzInfo.mSaveLoaderMng.mMemfileExData, exdata, sizeof(gzSaveLoaderMng_c::memfileExData_s));

            g_gzInfo.mSaveLoaderMng.start();
        }

        CARDClose(&file);
    }

    return ret;
}

int gzPracticeMenu_c::gzMemfileTab_c::deleteMemfile(int i_slotNo) {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return 0;
    }

    char filename_buf[9];
    sprintf(filename_buf, "tpgz_s%02d", i_slotNo);

    ret = CARDDelete(0, filename_buf);
    if (ret == CARD_RESULT_READY) {
        OSReport("deleted memfile %d\n", i_slotNo);
        gzInfo_sendNotification("memfile deleted!");
        mpLines[i_slotNo - 1]->setStringf("%d. -- empty --", i_slotNo);
        setMemfileExists(i_slotNo - 1, false);
    }

    return ret;
}

int gzPracticeMenu_c::gzMemfileTab_c::execute() {
    gzCursor* l_cursor = gzInfo_getCursor();

    if (mpKeyboard != NULL) {
        int rt = mpKeyboard->execute();
        if (rt == 1 || rt == 2) {
            delete mpKeyboard;
            mpKeyboard = NULL;
        }
        return 0;
    }

    if (gzPad::getTrigA()) {
        if (isMemfileExist(l_cursor->y)) {
            loadMemfile(l_cursor->y);
        } else {
            mpKeyboard = new gzKeyboardMenu_c(memfileNameFinishCb, NULL, this);
            gzInfo_seStart(Z2SE_SY_CURSOR_OK);
        }
    }

    if (gzPad::getTrigZ()) {
        if (isMemfileExist(l_cursor->y)) {
            deleteMemfile(l_cursor->y + 1);
            gzInfo_seStart(Z2SE_SY_FILE_DELETE_OK);
        }
    }

    return 1;
}
