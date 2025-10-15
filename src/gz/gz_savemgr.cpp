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

void gzSaveLoaderMng_c::getSaveMetadata(int i_category, int i_entryNo, saveMetadata_s* o_data) {
    const int METADATA_SIZE = 0xA8;
    const int METADATA_OFFSET = 32;

    char* category_str = NULL;
    switch (i_category) {
    case CATEGORY_ANYP_e:
    default:
        category_str = "any_saves/any";
        break;
    case CATEGORY_ANYP_BITE_e:
        category_str = "bite_saves/bite";
        break;
    case CATEGORY_HUNDO_e:
        category_str = "hundo_saves/hundo";
        break;
    case CATEGORY_ALLDUNGEONS_e:
        category_str = "ad_saves/ad";
        break;
    case CATEGORY_GLITCHLESS_e:
        category_str = "glitchless_saves/glitchless";
        break;
    }

    char pathbuf[32];
    sprintf(pathbuf, "/gz/%s.bin", category_str);
    gzDVDLoadFile(pathbuf, o_data, sizeof(saveMetadata_s), METADATA_OFFSET + (i_entryNo * METADATA_SIZE));
}

int gzSaveLoaderMng_c::getSaveEntryNum(int i_category) {
    const int MIN_READ_SIZE = 32;

    char* category_str = NULL;
    switch (i_category) {
    case CATEGORY_ANYP_e:
    default:
        category_str = "any_saves/any";
        break;
    case CATEGORY_ANYP_BITE_e:
        category_str = "bite_saves/bite";
        break;
    case CATEGORY_HUNDO_e:
        category_str = "hundo_saves/hundo";
        break;
    case CATEGORY_ALLDUNGEONS_e:
        category_str = "ad_saves/ad";
        break;
    case CATEGORY_GLITCHLESS_e:
        category_str = "glitchless_saves/glitchless";
        break;
    }

    u8 ALIGN_DECL(32) read_buffer[MIN_READ_SIZE];

    char pathbuf[32];
    sprintf(pathbuf, "/gz/%s.bin", category_str);
    gzDVDLoadFile(pathbuf, read_buffer, MIN_READ_SIZE, 0);

    int entry_num = *(int*)read_buffer;
    return entry_num;
}
