#include "gz/gz_manager_practice.h"
#include "gz/gz_menu_practice.h"

#include "c/c_damagereaction.h"

static void SaveCb_SetEarlyBossFlag() {
    cDmr_SkipInfo = 255;
}

static void SaveCb_OrdonGateClip() {
    fopAc_ac_c* rock = fopAcM_searchFromName("stoneB", 0xFFFFFFFF, 0x00FF6511);
    if (rock != NULL) {
        rock->current.pos = cXyz(400.0f, 307.8f, -11365.f);
        rock->shape_angle.y = 0x16F8;
    }
}

static void SaveCb_SetupHugo() {
    fopAc_ac_c* hugo = fopAcM_SearchByName(PROC_E_RD);
    if (hugo != NULL) {
        hugo->current.pos = cXyz(-289.9785, 401.5400, -18533.078);
        hugo->shape_angle.y = 0x16F8;
    }
}

static void SaveCb_KargorokOoB() {
    dComIfGs_setRestartLastMode(10);
    dComIfGs_setTransformStatus(TF_STATUS_HUMAN);
}

static void SaveCb_PlummOoB() {
    dComIfGs_setRestartLastMode(10);
    g_dComIfG_gameInfo.play.mNextStage.dStage_startStage_c::set("F_SP112", 1, 0, 4);
    cDmr_SkipInfo = 255;
}

static void SaveCb_Morpheel() {
    // TODO
}

static void SaveCb_Stallord() {
    // TODO
}

static void SaveCb_StallordPhase2() {
    // TODO
}

static void SaveCb_EmptyLakeHylia() {
    // TODO
}

const gzSaveLoaderMng_c::saveCallbacks_s gzPracticeMenu_c::mAnypSaveCallbacks[] = {
    {0, NULL, SaveCb_OrdonGateClip},
    {3, NULL, SaveCb_SetupHugo},
    {11, SaveCb_KargorokOoB, NULL},
    {18, SaveCb_PlummOoB, NULL},

};

const gzSaveLoaderMng_c::saveCallbacks_s* gzGetSaveCallbackList(int i_category) {
    switch (i_category) {
    case gzSaveLoaderMng_c::CATEGORY_ANYP_e:
        return gzPracticeMenu_c::mAnypSaveCallbacks;
        break;
    }

    return NULL;
}

const int gzGetSaveCallbackListSize(int i_category) {
    switch (i_category) {
    case gzSaveLoaderMng_c::CATEGORY_ANYP_e:
        return ARRAY_SIZE(gzPracticeMenu_c::mAnypSaveCallbacks);
        break;
    }

    return 0;
}
