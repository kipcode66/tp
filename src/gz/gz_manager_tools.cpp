#include "d/actor/d_a_alink.h"
#include "d/d_meter_HIO.h"
#include "gz/gz.h"
#include <cmath>

void gzToolsMng_c::executeFastBonkRecovery() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link != NULL) {
        daAlinkHIO_frontRoll_c0::m.mCrashAnm.mStartFrame = 50.0f;
        daAlinkHIO_frontRoll_c0::m.mCrashAnm.mSpeed = 0.0f;
        mFastBonkRecovery = true;
    }
}

void gzToolsMng_c::executeFastMovement() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link != NULL) {
        daAlinkHIO_frontRoll_c0::m.mSpeedRate = 3.0f;
        daAlinkHIO_swim_c0::m.mUnderwaterMaxSpeed = 50;
        daAlinkHIO_swim_c0::m.mBackwardMaxSpeed = 50;
        daAlinkHIO_swim_c0::m.mStrafeMaxSpeed = 50;
        daAlinkHIO_swim_c0::m.mDashMaxSpeed = 50;
        daAlinkHIO_swim_c0::m.mForwardMaxSpeed = 50;
        daAlinkHIO_swim_c0::m.mUnderwaterFallMaxSpeed = 50;
        daAlinkHIO_swim_c0::m.mBootsMaxFallSpeed = -50;
        daAlinkHIO_swim_c0::m.mBootsGravity = -50;
        daAlinkHIO_wlMove_c0::m.mADashInitSpeed = 100;
        daAlinkHIO_wlMove_c0::m.mADashMaxSpeed = 100;
        daAlinkHIO_wlMove_c0::m.mADashInitSpeedSlow = 70;
        daAlinkHIO_wlMove_c0::m.mADashMaxSpeedSlow = 70;
        daAlinkHIO_wlMove_c0::m.mMaxSpeed = 50;
        // daAlinkHIO_wlMove_c0::m.mAMaxSpeedWeak = 50;
        mFastMovement = true;
    }
}

void gzToolsMng_c::executeMoveLink() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link == NULL) return;

    u32 combo = g_gzInfo.mSettings.mCommandCombos.mMoveLink;
    mPrevMoveLink = mMoveLink;
    bool comboPressed = combo && ((gzPad::getHold() & combo) == combo);

    if (comboPressed && !mMoveLinkComboHeld) {
        mMoveLink = !mMoveLink;
        if (mMoveLink) {
            link->checkWolf() ? link->procWolfWaitInit() : link->procWaitInit();
            mMoveLinkCamAngle = (f32)link->shape_angle.y / 65536.0f * (2.0f * M_PI);
        }
    }
    mMoveLinkComboHeld = comboPressed;

    if (mMoveLink) {
        g_drawHIO.mParentAlpha = 0.0f;
        dComIfGp_getEventManager().setCameraPlay(1);
        dComIfGp_getEvent()->mEventStatus = 1;
        link->speed = cXyz::Zero;

        f32 stickX = gzPad::getStickX();
        f32 stickY = gzPad::getStickY();
        f32 cstickX = gzPad::getSubStickX();
        f32 cstickY = gzPad::getSubStickY();

        f32 moveSpeed = 72.0f, rotSpeed = 30.0f;
        if (gzPad::getHoldZ() && gzPad::getHoldR()) {
            moveSpeed = 720.0f;
            rotSpeed = 800.0f;
        } else if (gzPad::getHoldZ()) {
            moveSpeed = 180.0f;
            rotSpeed = 80.0f;
        }

        if (!gzPad::getHoldL())
            mMoveLinkCamAngle = (f32)link->shape_angle.y / 65536.0f * (2.0f * M_PI);

        dCamera_c* camera = dCam_getBody();
        cXyz& actorPos = link->current.pos;
        cXyz camTarget(actorPos.x, actorPos.y + 200.0f, actorPos.z);
        cXyz camPos(actorPos.x - 600.0f * sinf(mMoveLinkCamAngle),
                    actorPos.y + 200.0f,
                    actorPos.z - 600.0f * cosf(mMoveLinkCamAngle));

        f64 yaw = atan2(camTarget.z - camPos.z, camTarget.x - camPos.x);
        f64 dy = gzPad::getHoldL() ? 0.0f : cstickY;
        f64 dx = stickY * cos(yaw) - stickX * sin(yaw);
        f64 dz = stickY * sin(yaw) + stickX * cos(yaw);

        actorPos.x += moveSpeed * dx;
        actorPos.y += moveSpeed * dy;
        actorPos.z += moveSpeed * dz;

        s32 rawCstickX = (s32)(-cstickX * 72.0f);
        s32 rawCstickY = (s32)(cstickY * 72.0f);
        s32 iRotSpeed = (s32)rotSpeed;
        s32 rotDeltaX = gzPad::getHoldL() ? -rawCstickX * iRotSpeed : rawCstickX * iRotSpeed;

        if (gzPad::getHoldL()) {
            s32 rotDeltaY = -rawCstickY * iRotSpeed;
            if (rotDeltaY > 32767) rotDeltaY = 32767;
            if (rotDeltaY < -32768) rotDeltaY = -32768;
            link->shape_angle.x -= (s16)rotDeltaY;
        }

        if (rotDeltaX > 32767) rotDeltaX = 32767;
        if (rotDeltaX < -32768) rotDeltaX = -32768;
        link->shape_angle.y -= (s16)rotDeltaX;
        link->current.angle.y = link->shape_angle.y;

        if (camera != NULL)
            camera->Reset(camTarget, camPos, camera->mFovy, camera->mBank.Val());

        gzClearControllerInput();
    } else if (mPrevMoveLink) {
        g_drawHIO.mParentAlpha = 1.0f;
        dComIfGp_getEventManager().setCameraPlay(0);
        dComIfGp_getEvent()->mEventStatus = 0;
        mPrevMoveLink = false;
        gzClearControllerInput();
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

        gzClearButtonInput();
    }

    if (loadCombo && ((gzPad::getHold() & loadCombo) == loadCombo)) {
        if (link != NULL && camera != NULL) {
            camera->Reset(mCamera.center, mCamera.eye, mCamera.fovy, mCamera.bank.Val());
            link->current.pos = mLinkPos;
            link->shape_angle = mLinkAngle;
        }

        gzClearButtonInput();
    }
}

void gzToolsMng_c::execute() {
    if (gzInfo_isFastBonkRecovery()) {
        executeFastBonkRecovery();
    } else if (mFastBonkRecovery) {
        daAlinkHIO_frontRoll_c0::m.mCrashAnm.mStartFrame = 3.0f;
        daAlinkHIO_frontRoll_c0::m.mCrashAnm.mSpeed = 0.8f;
        mFastBonkRecovery = false;
    }

    if (gzInfo_isFastMovement()) {
        executeFastMovement();
    } else if (mFastMovement) {
        daAlinkHIO_frontRoll_c0::m.mSpeedRate = 1.3f;
        daAlinkHIO_swim_c0::m.mUnderwaterMaxSpeed = 12;
        daAlinkHIO_swim_c0::m.mForwardMaxSpeed = 8;
        daAlinkHIO_swim_c0::m.mBackwardMaxSpeed = 6;
        daAlinkHIO_swim_c0::m.mStrafeMaxSpeed = 8;
        daAlinkHIO_swim_c0::m.mDashMaxSpeed = 13;
        daAlinkHIO_swim_c0::m.mUnderwaterFallMaxSpeed = 8;
        daAlinkHIO_swim_c0::m.mBootsMaxFallSpeed = -20;
        daAlinkHIO_swim_c0::m.mBootsGravity = -0.699999988;
        daAlinkHIO_wlMove_c0::m.mADashInitSpeed = 65;
        daAlinkHIO_wlMove_c0::m.mADashMaxSpeed = 45;
        daAlinkHIO_wlMove_c0::m.mADashInitSpeedSlow = 35;
        daAlinkHIO_wlMove_c0::m.mADashMaxSpeedSlow = 33;
        daAlinkHIO_wlMove_c0::m.mMaxSpeed = 20;
        mFastMovement = false;
    }

    if (gzInfo_isMoveLink()) executeMoveLink();
    if (gzInfo_isNoSinkingInSand()) executeNoSinkSand();
    if (gzInfo_isTeleport()) executeTeleport();
}
