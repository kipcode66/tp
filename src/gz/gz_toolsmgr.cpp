#include "gz/gz.h"
#include "d/actor/d_a_alink.h"

void gzToolsMng_c::executeFastBonkRecovery() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link != NULL) {
        // d_a_alink nonmatching still

        // daAlinkHIO_frontRoll_c0::m.mCrashAnm.mStartFrame = 50.0f;
        // daAlinkHIO_frontRoll_c0::m.mCrashAnm.mSpeed = 0.0f;
        mFastBonkRecovery = true;
    }
}

void gzToolsMng_c::executeFastMovement() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link != NULL) {
        // d_a_alink nonmatching still

        // daAlinkHIO_frontRoll_c0::m.mSpeedRate = 3.0f;
        // daAlinkHIO_swim_c0::m.mMaxUnderwaterSpeed = 50;
        // daAlinkHIO_swim_c0::m.mMaxBackwardSpeed = 50;
        // daAlinkHIO_swim_c0::m.mMaxStrafeSpeed = 50;
        // daAlinkHIO_swim_c0::m.mDMaxSpeed = 50;
        // daAlinkHIO_swim_c0::m.mMaxForwardSpeed = 50;
        // daAlinkHIO_swim_c0::m.mUnderwaterMaxSinkSpeed = 50;
        // daAlinkHIO_swim_c0::m.mBootsMaxSinkSpeed = -50;
        // daAlinkHIO_swim_c0::m.mBootsGravity = -50;
        // daAlinkHIO_wlMove_c0::m.mDashInitSpeed = 100;
        // daAlinkHIO_wlMove_c0::m.mDashMaxSpeed = 100;
        // daAlinkHIO_wlMove_c0::m.mDashInitSpeedSlow = 70;
        // daAlinkHIO_wlMove_c0::m.mDashMaxSpeedSlow = 70;
        // daAlinkHIO_wlMove_c0::m.mMaxSpeed = 50;
        // daAlinkHIO_wlMove_c0::m.mMaxSpeedWeak = 50;
        mFastMovement = true;
    }
}

void gzToolsMng_c::executeMoveLink() {
    u32 combo = g_gzInfo.mSettings.mCommandCombos.mMoveLink;
    if (combo && ((gzPad::getHold() & combo) == combo)) {
        mMoveLink = !mMoveLink;
    }
    
    if (mMoveLink) {
        // finish
    }
}

void gzToolsMng_c::executeNoSinkSand() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link != NULL) {
        link->mSinkShapeOffset = 0.0f;
    }
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
    if (gzInfo_isFastBonkRecovery()) {
        executeFastBonkRecovery();
    } else if (mFastBonkRecovery) {
        // d_a_alink nonmatching still

        // daAlinkHIO_frontRoll_c0::m.mCrashAnm.mStartFrame = 3.0f;
        // daAlinkHIO_frontRoll_c0::m.mCrashAnm.mSpeed = 0.8f;
        mFastBonkRecovery = false;
    }

    if (gzInfo_isFastMovement()) {
        executeFastMovement();
    } else if (mFastMovement) {
        // d_a_alink nonmatching still

        // daAlinkHIO_frontRoll_c0::m.mSpeedRate = 1.3;
        // daAlinkHIO_swim_c0::m.mMaxUnderwaterSpeed = 12;
        // daAlinkHIO_swim_c0::m.mMaxForwardSpeed = 8;
        // daAlinkHIO_swim_c0::m.mMaxBackwardSpeed = 6;
        // daAlinkHIO_swim_c0::m.mMaxStrafeSpeed = 8;
        // daAlinkHIO_swim_c0::m.mDMaxSpeed = 13;
        // daAlinkHIO_swim_c0::m.mUnderwaterMaxSinkSpeed = 8;
        // daAlinkHIO_swim_c0::m.mBootsMaxSinkSpeed = -20;
        // daAlinkHIO_swim_c0::m.mBootsGravity = -0.699999988;
        // daAlinkHIO_wlMove_c0::m.mDashInitSpeed = 65;
        // daAlinkHIO_wlMove_c0::m.mDashMaxSpeed = 45;
        // daAlinkHIO_wlMove_c0::m.mDashInitSpeedSlow = 35;
        // daAlinkHIO_wlMove_c0::m.mDashMaxSpeedSlow = 33;
        // daAlinkHIO_wlMove_c0::m.mMaxSpeed = 20;
        // daAlinkHIO_wlMove_c0::m.mMaxSpeedWeak = 9;
        mFastMovement = false;
    }

    if (gzInfo_isMoveLink()) {
        executeMoveLink();
    } else if (mMoveLink) {
        // finish
    }

    if (gzInfo_isNoSinkingInSand()) executeNoSinkSand();
    if (gzInfo_isTeleport()) executeTeleport();
}
