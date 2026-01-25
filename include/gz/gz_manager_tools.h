#ifndef GZ_MANAGER_TOOLS_H
#define GZ_MANAGER_TOOLS_H

#include "SSystem/SComponent/c_angle.h"
#include "SSystem/Scomponent/c_sxyz.h"

struct SavedCameraState {
    cXyz center;
    cXyz eye;
    f32 fovy;
    cSAngle bank;
};

class gzToolsMng_c {
public:
    void execute();
    void executeFastBonkRecovery();
    void executeFastMovement();
    void executeFreeCam();
    void executeMoveLink();
    void executeNoSinkSand();
    void executeTeleport();

    bool isMoveLinkActive() const { return mMoveLink; }

private:
    SavedCameraState mCamera;
    bool mFastBonkRecovery;
    bool mFastMovement;
    cXyz mLinkPos;
    csXyz mLinkAngle;
    bool mMoveLink;
    bool mPrevMoveLink;
    bool mMoveLinkComboHeld;
    f32 mMoveLinkCamAngle;
    bool mTeleportSaveComboHeld;
    bool mTeleportLoadComboHeld;
    bool mFreeCamActive;
    bool mFreeCamInitialized;
    bool mFreeCamComboHeld;
    f32 mFreeCamPitch;
    f32 mFreeCamYaw;
    SavedCameraState mFreeCamSavedState;
};

#endif // GZ_MANAGER_TOOLS_H
