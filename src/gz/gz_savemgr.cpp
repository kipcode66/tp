#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "m_Do/m_Do_MemCard.h"
#include "SSystem/SComponent/c_lib.h"

void gzSaveLoaderMng_c::execute() {
    switch (mLoadPhase) {
    case PHASE_WAIT_e:
        return;
    case PHASE_INIT_e:
        mTimer = 10;
        mSaveInjectReady = true;
        wait();
        break;
    case PHASE_STAGE_INIT_e:
        memcpy(&g_dComIfG_gameInfo.info.mSavedata, mDoMemCd_Ctrl_c::sTmpBuf, sizeof(dSv_save_c));
        dComIfGs_getSave(dComIfGs_getSaveInfo()->getDan().mStageNo);
        mLoadPhase = PHASE_PLAYER_INIT_e;
        break;
    case PHASE_PLAYER_INIT_e:
        // waits for player to not be null before running any processes here
        fopAc_ac_c* player = dComIfGp_getPlayer(0);
        if (player != NULL) {
            dComIfGp_getPlayer(0)->current.pos = mMemfileExData.player_pos;

            // TODO: would prefer not to do this, but until we can safely modify d_a_alink processes this is the simplest solution
            if (cLib_calcTimer(&mTimer) == 0) {
                end();
            }
        }
        break;
    }
}
