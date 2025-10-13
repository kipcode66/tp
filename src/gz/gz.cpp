#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"
#include "JSystem/JKernel/JKRExpHeap.h"
#include "JSystem/JUtility/JUTDbPrint.h"
#include "m_Do/m_Do_MemCard.h"
#include "dolphin/card.h"
#include "d/d_meter_HIO.h"
#include "f_op/f_op_camera_mng.h"
#include "d/actor/d_a_alink.h"

gzInfo_c g_gzInfo;

int gzPrint(int x, int y, u32 color, char const* string, ...) {
    JUTDbPrint::getManager()->setVisible(true);
    char buffer[256];

    va_list list;
    va_start(list, string);
    vsnprintf(buffer, sizeof(buffer), string, list);
    va_end(list);

    JUTDbPrint::getManager()->flush();

    static JUtility::TColor ShadowDarkColor(0, 0, 0, 0x80);
    JUTDbPrint::getManager()->setCharColor(ShadowDarkColor);

    JUTReport(x + 2, y + 2, buffer);
    JUTDbPrint::getManager()->flush();

    JUTDbPrint::getManager()->setCharColor(color);
    JUTReport(x, y, buffer);

    JUTDbPrint::getManager()->flush();
    return 1;
}

void gzInfo_c::loadDefaultSettings() {
    mSettings.mTextColor = 0xEE8000FF;
    mSettings.mCommandCombos.mMoveLink = PAD_TRIGGER_L | PAD_TRIGGER_R | PAD_BUTTON_Y;
    setCursorType(1);
    mpFont = mDoExt_getMesgFont();
    mCursor.x = 0;
    mCursor.y = 0;
    mSettings.mMenuSfx = true;
}


int gzInfo_c::_create() {
    OSReport("creating gzInfo_c\n");
    loadDefaultSettings();

    ResTIMG* icon = (ResTIMG*)dComIfGp_getMain2DArchive()->getResource('TIMG', "midona64.bti");
    mpIcon = new J2DPicture(icon);

    // TODO: Once critical game setup code is pulled out of d_s_logo
    // we should create our own heap and alloc an image buffer from that instead
    void* buf = JKRHeap::alloc(108960, 32, NULL);
    loadFile("/gz/bg.bti", buf, 108960, 0);
    ResTIMG* bg = (ResTIMG*)buf;
    mpBackground = new J2DPicture(bg);
    mpHeader = new gzTextBox("tpgz v1.2.0", mSettings.mTextColor);
    
    mpMainMenu = new gzMainMenu_c();
    if (mpMainMenu == NULL) {
        return 0;
    }

    mpNotification = new gzNotification_c();

    mInputWaitTimer = 2;
    mGZInitialized = true;

    loadSettingsMemcard();

    // JUTDbPrint::getManager()->changeFont(mDoExt_getMesgFont());
    return 1;
}

int gzInfo_c::_delete() {
    OSReport("deleting gzInfo_c\n");
    delete mpIcon;
    mpIcon = NULL;

    delete mpHeader;
    mpHeader = NULL;

    delete mpBackground;
    mpBackground = NULL;

    mpCurrentMenu = NULL;

    delete mpMainMenu;
    mpMainMenu = NULL;

    delete mpNotification;
    mpNotification = NULL;
    return 1;
}

int gzInfo_c::execute() {
    if (!mGZInitialized) return 0;

    if (gzPad::getHoldL() && gzPad::getHoldR() && gzPad::getTrigDown()) {
        mDisplay = !mDisplay;

        if (mDisplay)
            mInputWaitTimer = 2;
    }

    if (mDisplay) {
        if (mInputWaitTimer != 0) {
            mInputWaitTimer--;
            return 1;
        }
        if (mpMainMenu != NULL && mCursor.x == 0) mpMainMenu->execute();
        if (mpCurrentMenu != NULL && mCursor.x > 0) mpCurrentMenu->execute();
    }

    setButtonFlags();
    executeTools();

    return 1;
}

int gzInfo_c::draw() {
    if (!mGZInitialized) return 0;

    if (mDisplay) {
        
        if (mpBackground != NULL) mpBackground->draw(30.0f, 5.0f, 550.0f, 400.0f, false, false, false);
        if (mpIcon != NULL) mpIcon->draw(30.0f, 5.0f, 30.0f, 30.0f, false, false, false);
        if (mpHeader != NULL) mpHeader->draw(65.0f, 30.0f, mSettings.mTextColor);
        if (mpMainMenu != NULL) dComIfGd_set2DOpaTop(mpMainMenu);
        if (mpCurrentMenu != NULL) dComIfGd_set2DOpaTop(mpCurrentMenu);

        // randomly crashes?
        // if (mpCurrentMenu != NULL) mpCurrentMenu->draw();

        // showHeapUsage();
    }

    // Draw any notifications
    if (mpNotification != NULL) mpNotification->draw();

    return 1;
}

void gzInfo_c::showHeapUsage() {
    if (zeldaHeap != NULL && gameHeap != NULL && archiveHeap != NULL) {
        u32 zeldaFree = zeldaHeap->getFreeSize();
        u32 gameFree = gameHeap->getFreeSize();
        u32 archiveFree = archiveHeap->getFreeSize();
        u32 zeldaTotal = zeldaHeap->getTotalFreeSize();
        u32 gameTotal = gameHeap->getTotalFreeSize();
        u32 archiveTotal = archiveHeap->getTotalFreeSize();

        gzPrint(200, 30, 0xFFFFFFFF, "  Zelda %5d / %5d\n", zeldaFree / 1024, zeldaTotal / 1024);
        gzPrint(200, 50, 0xFFFFFFFF, "   Game %5d / %5d\n", gameFree / 1024, gameTotal / 1024);
        gzPrint(200, 70, 0xFFFFFFFF, "Archive %5d / %5d\n", archiveFree / 1024, archiveTotal / 1024);
    }
}

int gzInfo_c::storeSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDCreate(0, "tpgzcfg", SECTOR_SIZE, &file);
    if (ret == CARD_RESULT_READY || ret == CARD_RESULT_EXIST) {
        ret = CARDOpen(0, "tpgzcfg", &file);
        if (ret == CARD_RESULT_READY) {
            gzConfigHeader_s cfg;
            cfg.version = GZ_SAVE_VERSION;
            cfg.settingsOffset = sizeof(gzConfigHeader_s);

            memcpy(mDoMemCd_Ctrl_c::sTmpBuf, &cfg, sizeof(gzConfigHeader_s));
            memcpy(mDoMemCd_Ctrl_c::sTmpBuf + cfg.settingsOffset, &mSettings, sizeof(gzSettings_s));

            ret = CARDWrite(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
            if (ret == CARD_RESULT_READY) {
                OSReport("stored tpgz settings to memcard!\n");
                gzInfo_sendNotification("settings saved!");
            }

            CARDClose(&file);
        }
    }

    return ret;
}

int gzInfo_c::loadSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDOpen(0, "tpgzcfg", &file);
    if (ret == CARD_RESULT_READY) {
        ret = CARDRead(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
        if (ret == CARD_RESULT_READY) {
            OSReport("loaded tpgz settings from memcard!\n");
            gzInfo_sendNotification("settings loaded!");

            gzConfigHeader_s cfg;
            memcpy(&cfg, mDoMemCd_Ctrl_c::sTmpBuf, sizeof(gzConfigHeader_s));
            if (cfg.version != GZ_SAVE_VERSION) {
                OSReport("outdated tpgz save version!\n");
                return -1;
            }

            gzSettings_s settings;
            memcpy(&mSettings, mDoMemCd_Ctrl_c::sTmpBuf + cfg.settingsOffset, sizeof(gzSettings_s));
        }

        CARDClose(&file);
    } else {
        gzInfo_sendNotification("no stored settings found!");
    }

    return ret;
}

int gzInfo_c::deleteSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDDelete(0, "tpgzcfg");
    if (ret == CARD_RESULT_READY) {
        OSReport("deleted tpgz settings from memcard!\n");
        gzInfo_sendNotification("settings deleted!");
    } else {
        OSReport_Error("failed to delete tpgz settings from memcard!\n");
    }

    return ret;
}

void gzInfo_c::sendNotification(const char* msg) { 
    if (mpNotification != NULL) mpNotification->send(msg);
}

void gzInfo_c::sendNotification(const char* msg, int i_notificationType) { 
    if (mpNotification != NULL) mpNotification->send(msg, (gzNotification_c::NotificationType)i_notificationType);
}

void gzInfo_c::setButtonFlags() {
    if (mSettings.mMoveLink) {
        // TODO(Pheenoh): read this from combo button settings instead
        if (gzPad::getHoldL() && gzPad::getHoldR() && gzPad::getTrigY()) {
            mButtonFlags.mMoveLink = !mButtonFlags.mMoveLink;
        }
    }
}

void gzInfo_c::executeMoveLink() {
    // TODO(Pheenoh): finish this
    if (!mButtonFlags.mMoveLink) {
        if (g_drawHIO.mParentAlpha == 0.0f) g_drawHIO.mParentAlpha = 1.0f;
        if (dComIfGp_getEventManager().cameraPlay() == 1) dComIfGp_getEventManager().setCameraPlay(0);        
        if (dComIfGp_getEvent().mEventStatus == 1) dComIfGp_getEvent().mEventStatus = 0;
        if (daAlink_getAlinkActorClass() != NULL) {
            daAlink_getAlinkActorClass()->mLinkAcch.ClrGrndNone();
            daAlink_getAlinkActorClass()->mLinkAcch.ClrWallNone();
            daAlink_getAlinkActorClass()->mLinkAcch.ClrRoofNone();
            daAlink_getAlinkActorClass()->mLinkAcch.OffLineCheckNone();
        }
        return;
    }

    g_drawHIO.mParentAlpha = 0.0f;
    dComIfGp_getEventManager().setCameraPlay(0);

    daAlink_getAlinkActorClass()->mLinkAcch.SetGrndNone();
    daAlink_getAlinkActorClass()->mLinkAcch.SetWallNone();
    daAlink_getAlinkActorClass()->mLinkAcch.SetRoofNone();
    daAlink_getAlinkActorClass()->mLinkAcch.OnLineCheckNone();

    // halt all events
    dComIfGp_getEvent().mEventStatus = 1;

    bool lock_camera = gzPad::getHoldL();
    s16 angle;

    f32 vertical_displacement = gzPad::getSubStickY();
    f32 horizontal_displacement = -(gzPad::getSubStickX());
    f32 stick_y = gzPad::getStickY();
    f32 stick_x = gzPad::getStickX();
    f32 speed_predicate = gzPad::getHoldZ() != 0 ? 2.5f : 1.0f;
    f32 speed_predicateF = speed_predicate * (gzPad::getHoldR() != 0 ? 4.0f : 1.0f);

    // Fetch the camera position and target
    camera_class* camera_p = dComIfGp_getCamera(0);
    if (camera_p == NULL) return;

    fopAc_ac_c* link = dComIfGp_getPlayer(0);
    if (link == NULL) return;

    static const f32 DIST_FROM_LINK = 20.0f;

    cXyz& link_pos = link->current.pos;
    s16& link_horizontal_angle = link->shape_angle.y;
    s16& link_vertical_angle = link->shape_angle.x;
    cXyz& cam_target = camera_p->mCamera.mEye;
    cXyz& cam_pos = camera_p->mCamera.mCenter;

    link->speed = cXyz(0.0f,0.0f,0.0f);

    if (!lock_camera) {
        angle = (float)link_horizontal_angle / 65536.f * (2 * M_PI);
    }

    cam_target.x = link_pos.x;
    cam_target.y = link_pos.y + 200.0f;
    cam_target.z = link_pos.z;
    cam_pos.z = link_pos.z - DIST_FROM_LINK * cos(angle);
    cam_pos.x = link_pos.x - DIST_FROM_LINK * sin(angle);
    cam_pos.y = link_pos.y + 200.f;

    // Calculate the pitch and yaw
    s16 yaw = atan2(cam_target.z - cam_pos.z, cam_target.x - cam_pos.x);
    double horizontal = sqrt((cam_target.x - cam_pos.x) * (cam_target.x - cam_pos.x) +
                                (cam_target.z - cam_pos.z) * (cam_target.z - cam_pos.z));
    s16 pitch = atan2(cam_target.y - cam_pos.y, horizontal);

    // Calculate the translation
    double dy = lock_camera ? 0.0f : vertical_displacement;
    double dx = stick_y * cos(yaw) * cos(pitch) - stick_x * sin(yaw);
    double dz = stick_y * sin(yaw) * cos(pitch) + stick_x * cos(yaw);

    // auto move_speed = speed_predicateF;
    // auto cam_speed = speed_predicateF;

    // Apply the translation with a speed factor
    link_pos.x += speed_predicateF * dx;
    link_pos.y += speed_predicateF * dy;
    link_pos.z += speed_predicateF * dz;

    // Change facing angle with c stick
    if (lock_camera) { 
        link_vertical_angle -= -vertical_displacement * speed_predicateF;
        link_horizontal_angle -= -horizontal_displacement * speed_predicateF;
    } else {
        link_horizontal_angle -= horizontal_displacement * speed_predicateF;
    }
}

void gzInfo_c::executeTools() {
     if (mSettings.mMoveLink) executeMoveLink();
}
