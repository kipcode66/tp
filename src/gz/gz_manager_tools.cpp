#include "d/actor/d_a_alink.h"
#include "d/d_camera.h"
#include "d/d_com_inf_game.h"
#include "d/d_event.h"
#include "d/d_event_manager.h"
#include "d/d_meter_HIO.h"
#include "f_op/f_op_camera_mng.h"
#include "gz/gz.h"
#include "m_Do/m_Do_controller_pad.h"
#include <cmath>

#define FREECAM_ROTATION_SPEED 0.002
#define FREECAM_FAST_SPEED 4.0
#define FREECAM_SPEED 0.5
#define FREECAM_TRIGGER_DEADZONE 20

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

void gzToolsMng_c::executeFreeCam() {
    dCamera_c* camera = dCam_getBody();
    dEvt_control_c* event = dComIfGp_getEvent();

    if (camera == NULL || event == NULL) {
        return;
    }

    cXyz* cam_pos = &camera->mEye;
    cXyz* cam_target = &camera->mCenter;

    // Freeze the game to prevent control stick inputs from moving Link
    event->mEventStatus = 1;

    // Lock the camera to allow for its movement
    dComIfGp_getEventManager().setCameraPlay(1);

    if (!mFreeCamInitialized) {
        mFreeCamSavedState.center = *cam_target;
        mFreeCamSavedState.eye = *cam_pos;
        mFreeCamSavedState.fovy = camera->mFovy;
        mFreeCamSavedState.bank = camera->mBank;

        f32 dx = cam_target->x - cam_pos->x;
        f32 dy = cam_target->y - cam_pos->y;
        f32 dz = cam_target->z - cam_pos->z;

        mFreeCamYaw = atan2f(dz, dx);
        f32 horizontal = sqrtf(dx * dx + dz * dz);
        mFreeCamPitch = atan2f(dy, horizontal);

        mFreeCamInitialized = true;
    }

    interface_of_controller_pad& pad = mDoCPd_c::getCpadInfo(0);
    f32 stickY = pad.mMainStickPosY * 72.0f;
    f32 stickX = pad.mMainStickPosX * 72.0f;
    f32 cStickY = pad.mCStickPosY * 59.0f;
    f32 cStickX = pad.mCStickPosX * 59.0f;

    f32 trigL = pad.mTriggerLeft * 150.0f;
    f32 trigR = pad.mTriggerRight * 150.0f;

    f32 verticalDisp = 0.0f;
    if (trigL >= FREECAM_TRIGGER_DEADZONE) {
        verticalDisp += trigL;
    }

    if (trigR >= FREECAM_TRIGGER_DEADZONE) {
        verticalDisp -= trigR;
    }

    f32 moveDy = stickY * sinf(mFreeCamPitch) + verticalDisp;
    f32 moveDx = stickY * cosf(mFreeCamYaw) * cosf(mFreeCamPitch) - stickX * sinf(mFreeCamYaw);
    f32 moveDz = stickY * sinf(mFreeCamYaw) * cosf(mFreeCamPitch) + stickX * cosf(mFreeCamYaw);

    f32 speed = gzPad::getHoldZ() ? FREECAM_FAST_SPEED : FREECAM_SPEED;

    cam_pos->x += speed * moveDx;
    cam_pos->y += speed * moveDy;
    cam_pos->z += speed * moveDz;

    cam_target->x = cam_pos->x + cosf(mFreeCamYaw) * cosf(mFreeCamPitch);
    cam_target->z = cam_pos->z + sinf(mFreeCamYaw) * cosf(mFreeCamPitch);
    cam_target->y = cam_pos->y + sinf(mFreeCamPitch);

    // Call Reset to update viewCache and internal camera state
    camera->Reset(*cam_target, *cam_pos);

    mFreeCamYaw -= cStickX * FREECAM_ROTATION_SPEED;
    mFreeCamYaw = fmodf(mFreeCamYaw + 2.0f * M_PI, 2.0f * M_PI);

    f32 newPitch = mFreeCamPitch + cStickY * FREECAM_ROTATION_SPEED;
    f32 maxPitch = M_PI / 2.0f - 0.1f;
    f32 minPitch = -M_PI / 2.0f + 0.1f;

    if (newPitch > maxPitch) {
        mFreeCamPitch = maxPitch;
    } else if (newPitch < minPitch) {
        mFreeCamPitch = minPitch;
    } else {
        mFreeCamPitch = newPitch;
    }
}

void gzToolsMng_c::executeMoveLink() {
    if (gzCheckComboToggle(g_gzInfo.mSettings.mCommandCombos.mMoveLink, mMoveLinkComboHeld)) {
        mMoveLink = !mMoveLink;
    }
}

void gzToolsMng_c::executeNoSinkSand() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link != NULL) {
        link->mSinkShapeOffset = 0.0f;
    }
}

void gzToolsMng_c::executeTeleport() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    dCamera_c* camera = dCam_getBody();

    if (gzCheckComboToggle(g_gzInfo.mSettings.mCommandCombos.mTeleportSave, mTeleportSaveComboHeld)) {
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

    if (gzCheckComboToggle(g_gzInfo.mSettings.mCommandCombos.mTeleportLoad, mTeleportLoadComboHeld)) {
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
        daAlinkHIO_swim_c0::m.mBootsGravity = -0.699999988f;
        daAlinkHIO_wlMove_c0::m.mADashInitSpeed = 65;
        daAlinkHIO_wlMove_c0::m.mADashMaxSpeed = 45;
        daAlinkHIO_wlMove_c0::m.mADashInitSpeedSlow = 35;
        daAlinkHIO_wlMove_c0::m.mADashMaxSpeedSlow = 33;
        daAlinkHIO_wlMove_c0::m.mMaxSpeed = 20;
        mFastMovement = false;
    }

    if (gzInfo_isFreeCam()) {
        if (gzCheckComboToggle(g_gzInfo.mSettings.mCommandCombos.mFreeCamToggle, mFreeCamComboHeld)) {
            mFreeCamActive = !mFreeCamActive;
            if (!mFreeCamActive) {
                dCamera_c* camera = dCam_getBody();

                if (camera != NULL) {
                    camera->Reset(mFreeCamSavedState.center, mFreeCamSavedState.eye,
                                  mFreeCamSavedState.fovy, mFreeCamSavedState.bank.Val());
                }

                dEvt_control_c* event = dComIfGp_getEvent();

                if (event != NULL) {
                    event->mEventStatus = 0;
                }

                dComIfGp_getEventManager().setCameraPlay(0);
                mFreeCamInitialized = false;
            }
        }

        if (mFreeCamActive) {
            executeFreeCam();
        }
    } else if (mFreeCamActive) {
        dCamera_c* camera = dCam_getBody();

        if (camera != NULL) {
            camera->Reset(mFreeCamSavedState.center, mFreeCamSavedState.eye,
                          mFreeCamSavedState.fovy, mFreeCamSavedState.bank.Val());
        }

        dEvt_control_c* event = dComIfGp_getEvent();

        if (event != NULL) {
            event->mEventStatus = 0;
        }

        dComIfGp_getEventManager().setCameraPlay(0);
        mFreeCamActive = false;
        mFreeCamInitialized = false;
    }

    if (gzInfo_isMoveLink()) {
        executeMoveLink();
    } else if (mMoveLink) {
        mMoveLink = false;
    }

    if (gzInfo_isNoSinkingInSand()) executeNoSinkSand();
    if (gzInfo_isTeleport()) executeTeleport();
}
