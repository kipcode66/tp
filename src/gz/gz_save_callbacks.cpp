#include "gz/gz_manager_practice.h"
#include "gz/gz_menu_practice.h"

#include "c/c_damagereaction.h"
#include "d/actor/d_a_alink.h"
#include "d/actor/d_a_obj_swspinner.h"
#include "d/actor/d_a_obj_lv4RailWall.h"
#include "d/actor/d_a_e_zs.h"
#include "d/actor/d_a_b_zant.h"

static void SaveCb_SetEarlyBossFlag() {
    cDmr_SkipInfo = 1;
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

static void SaveCb_ForestBiT() {
    daAlink_c* player = daAlink_getAlinkActorClass();
    if (player != NULL) {
        player->onNoResetFlg2(daPy_py_c::FLG2_UNK_1); // lantern out
        player->mEquipItem = 0x102;
    }
}

static void SaveCb_KargorokOoB() {
    dComIfGs_setRestartLastMode(10);
    dComIfGs_setTransformStatus(TF_STATUS_HUMAN);
}

static void SaveCb_WaterfallSidehop() {
    dComIfGs_getSaveInfo()->getRestart().mLastSpeedF = 10.0f;
}

static void SaveCb_PlummOoB() {
    dComIfGs_setRestartLastMode(10);
    g_dComIfG_gameInfo.play.mNextStage.setLayer(4);
    cDmr_SkipInfo = 1;
}

static void SaveCb_EmptyLakeHylia() {
    g_dComIfG_gameInfo.play.mNextStage.setLayer(4);
    cDmr_SkipInfo = 1;
}

static void SaveCb_Morpheel() {
    daAlink_c* player = daAlink_getAlinkActorClass();
    if (player != NULL) {
        player->mEquipItem = fpcNm_ITEM_HOOKSHOT;
        player->onNoResetFlg0(daPy_py_c::FLG0_EQUIP_HVY_BOOTS);
    }
}

static void SaveCb_StallordInit() {
    fopAc_ac_c* stallord = fopAcM_SearchByName(PROC_B_DS);
    if (stallord != NULL) {
        dComIfGs_onZoneSwitch(5, fopAcM_GetRoomNo(stallord)); // intro cs off
    }

    cDmr_SkipInfo = 1;
}

static void* sub_findJosephActor(void* i_actor, void*) {
    if (fopAcM_IsActor(i_actor) && fopAcM_GetName(i_actor) == PROC_E_ZS) {
        return i_actor;
    }

    return NULL;
}

static void SaveCb_StallordSkipCAD() {
    daE_ZS_c* joseph = (daE_ZS_c*)fopAcM_Search(sub_findJosephActor, NULL);
    if (joseph != NULL) {
        joseph->mAction = 1;
        joseph->mMode = 0;
        joseph->field_0x65c = 0;
        joseph->field_0x673 = 1;
        joseph->mCyl.OnTgSetBit();
        joseph->mCyl.OnCoSetBit();
        fopAcM_OnStatus(joseph, fopAcM_STATUS_UNK_0x200000);
    }
}

static void SaveCb_StallordSkipJoseph() {
    dComIfGs_setSelectItemIndex(SELECT_ITEM_X, SLOT_0); // rang on x

    daE_ZS_c* joseph = (daE_ZS_c*)fopAcM_Search(sub_findJosephActor, NULL);
    if (joseph != NULL) {
        joseph->mAction = 1;
        joseph->mMode = 0;
        joseph->field_0x65c = 0;
        joseph->field_0x673 = 1;
        joseph->mCyl.OnTgSetBit();
        joseph->mCyl.OnCoSetBit();
        fopAcM_OnStatus(joseph, fopAcM_STATUS_UNK_0x200000);

        joseph->current.pos.set(301.9f, 1800.0f, -4966.0f);
    }
}

static void SaveCb_StallordPhase2() {
    fopAc_ac_c* stallord = fopAcM_SearchByName(PROC_B_DS);
    if (stallord != NULL) {
        // create the phase 2 version of stallord
        fopAcM_create(PROC_B_DS, fopAcM_GetParam(stallord) | 2, &stallord->current.pos,
                      fopAcM_GetRoomNo(stallord), NULL, NULL, -1);
        fopAcM_delete(stallord);  // delete phase 1 stallord
    }
    
    daObjSwSpinner_c* spinnersw = (daObjSwSpinner_c*)fopAcM_SearchByName(PROC_Obj_SwSpinner);
    if (spinnersw != NULL) {
        spinnersw->mRotSpeedY = 3000;  // set arena spinner switch to max speed
    }

    daObjLv4Wall_c* rwall = (daObjLv4Wall_c*)fopAcM_SearchByName(PROC_Obj_Lv4RailWall);
    if (rwall != NULL) {
        rwall->mRotCounter = 101;  // set spinner switch speed counter to threshold
        rwall->mHeight = 3370.0f;  // set arena height to max
    }
}

static void SaveCb_CityFanTower() {
    dComIfGs_offSaveDunSwitch(18); // bottom sw
    dComIfGs_offSaveDunSwitch(19); // top sw
}

static void SaveCb_Argorok() {
    fopAc_ac_c* argorok = fopAcM_SearchByName(PROC_B_DR);
    if (argorok != NULL) {
        dComIfGs_onZoneSwitch(20, fopAcM_GetRoomNo(argorok));
    }

    cDmr_SkipInfo = 1;
}

static void SaveCb_Palace1() {
    dComIfGs_resetDan();
}

static void SaveCb_ZantFinal() {
    daB_ZANT_c* zant = (daB_ZANT_c*)fopAcM_SearchByName(PROC_B_ZANT);
    if (zant != NULL) {
        zant->mAction = daB_ZANT_c::ACT_ROOM_CHANGE;
        zant->mFightPhase = daB_ZANT_c::PHASE_YO;
        zant->mMode = 0;
    }
}

static void SaveCb_BeastGanon() {
    g_dComIfG_gameInfo.play.mNextStage.setLayer(1);
}

const gzSaveLoaderMng_c::saveCallbacks_s gzPracticeMenu_c::mAnypSaveCallbacks[] = {
    {0, NULL, SaveCb_OrdonGateClip},
    {4, NULL, SaveCb_SetupHugo},
    {7, NULL, SaveCb_ForestBiT},
    {8, SaveCb_SetEarlyBossFlag, NULL},
    {9, SaveCb_SetEarlyBossFlag, NULL},
    {10, SaveCb_SetEarlyBossFlag, NULL},
    {11, SaveCb_SetEarlyBossFlag, NULL},
    {13, SaveCb_KargorokOoB, NULL},
    {17, SaveCb_WaterfallSidehop, NULL},
    {19, SaveCb_SetEarlyBossFlag, NULL},
    {20, SaveCb_PlummOoB, NULL},
    {21, SaveCb_EmptyLakeHylia, NULL},
    {22, SaveCb_SetEarlyBossFlag, NULL},
    {23, SaveCb_SetEarlyBossFlag, NULL},
    {26, NULL, SaveCb_Morpheel},
    {33, SaveCb_SetEarlyBossFlag, NULL},
    {40, SaveCb_StallordInit, NULL},
    {41, SaveCb_StallordInit, SaveCb_StallordSkipCAD},
    {42, SaveCb_StallordInit, SaveCb_StallordSkipJoseph},
    {43, SaveCb_StallordInit, SaveCb_StallordSkipJoseph},
    {44, SaveCb_StallordInit, SaveCb_StallordPhase2},
    {50, SaveCb_CityFanTower, NULL},
    {51, SaveCb_Argorok, NULL},
    {52, SaveCb_Palace1, NULL},
    {60, NULL, SaveCb_ZantFinal},
    {64, SaveCb_BeastGanon, NULL},
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
