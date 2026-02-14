#ifndef GZ_MANAGER_TOOLS_H
#define GZ_MANAGER_TOOLS_H

#include "SSystem/SComponent/c_angle.h"
#include "SSystem/SComponent/c_xyz.h"
#include "SSystem/Scomponent/c_sxyz.h"

class gzTextBox;

struct SavedCameraState {
    cXyz center;
    cXyz eye;
    f32 fovy;
    cSAngle bank;
};

struct TeleportState {
    SavedCameraState camera;
    cXyz linkPos;
    csXyz linkAngle;
    bool saveComboHeld;
    bool loadComboHeld;
};

struct MoveLinkState {
    bool active;
    bool prevActive;
    bool comboHeld;
    f32 camAngle;
};

struct FreeCamState {
    bool active;
    bool initialized;
    bool comboHeld;
    f32 pitch;
    f32 yaw;
    SavedCameraState savedState;
};

struct CoroTDState {
    bool timerStarted;
    bool goalHit;
    u8 frameCount;
};

struct EBMBState {
    u16 prevAction;
    s32 frameDelta;
    bool ibOnLastFrame;
};

struct RollCheckerState {
    u16 prevAction;
    u8 frameDelta;
    u8 endFrame;
    u8 earlyFrame;
    u8 lateFrame;
    u8 resultTimer;
    u32 resultColor;
    char resultText[20];
    cXyz worldPos;
    gzTextBox* pText;
};

class gzToolsMng_c {
public:
    void execute();
    void draw();
    void executeFastBonkRecovery();
    void executeFastMovement();
    void executeFreeCam();
    void executeMoveLink();
    void executeNoSinkSand();
    void executeCoroTD();
    void executeEBMB();
    void executeRollChecker();
    void executeTeleport();

    void drawRollChecker();
    void drawLinkInfo();

    bool isMoveLinkActive() const { return mMoveLink.active; }

private:
    bool mFastBonkRecovery;
    bool mFastMovement;
    TeleportState mTeleport;
    MoveLinkState mMoveLink;
    FreeCamState mFreeCam;
    CoroTDState mCoroTD;
    EBMBState mEBMB;
    RollCheckerState mRollChecker;
};

#endif // GZ_MANAGER_TOOLS_H
