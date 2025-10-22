#include "gz/gz.h"
#include "d/actor/d_a_alink.h"

void gzToolsMng_c::executeMoveLink() {
    u32 combo = g_gzInfo.mSettings.mCommandCombos.mMoveLink;
    if (combo && ((gzPad::getHold() & combo) == combo)) {
        mMoveLink = !mMoveLink;
    }
    
    if (mMoveLink) {}
}

void gzToolsMng_c::executeTeleport() {
    u32 saveCombo = g_gzInfo.mSettings.mCommandCombos.mTeleportSave;
    u32 loadCombo = g_gzInfo.mSettings.mCommandCombos.mTeleportLoad;
    daAlink_c* link = daAlink_getAlinkActorClass();
    dCamera_c* camera = dCam_getBody();
    
    if (saveCombo && ((gzPad::getHold() & saveCombo) == saveCombo)) {
        if (link != NULL && camera != NULL) {
            mCamera.center = camera->mCenter;
            mCamera.eye = camera->mEye;
            mCamera.fovy = camera->mFovy;
            mCamera.bank = camera->mBank;
            mLinkPos = link->current.pos;
            mLinkAngle = link->shape_angle;
        }
    }

    if (loadCombo && ((gzPad::getHold() & loadCombo) == loadCombo)) {
        if (link != NULL && camera != NULL) {
            camera->Reset(mCamera.center, mCamera.eye, mCamera.fovy, mCamera.bank.Val());
            link->current.pos = mLinkPos;
            link->shape_angle = mLinkAngle;
        }
    }
}

void gzToolsMng_c::execute() {
    if (gzInfo_isMoveLink()) {
        executeMoveLink();
    } else if (mMoveLink) {
        // finish
    }

    if (gzInfo_isTeleport()) executeTeleport();
}
