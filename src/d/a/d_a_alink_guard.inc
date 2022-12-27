/* 800DC548-800DC5A4 0D6E88 005C+00 13/13 0/0 0/0 .text checkEnemyGroup__9daAlink_cFP10fopAc_ac_c
 */
BOOL daAlink_c::checkEnemyGroup(fopAc_ac_c* i_actor) {
    return i_actor != NULL && (fopAcM_GetGroup(i_actor) == 2 || fopAcM_GetName(i_actor) == PROC_E_ZH || checkSpecialNpc(i_actor));
}

/* 800DC5A4-800DC5DC 0D6EE4 0038+00 4/4 0/0 0/0 .text checkSpecialNpc__9daAlink_cFP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL daAlink_c::checkSpecialNpc(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/checkSpecialNpc__9daAlink_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 800DC5DC-800DC678 0D6F1C 009C+00 1/1 0/0 0/0 .text checkShieldAttackEmphasys__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool daAlink_c::checkShieldAttackEmphasys() {
    nofralloc
#include "asm/d/a/d_a_alink/checkShieldAttackEmphasys__9daAlink_cFv.s"
}
#pragma pop

/* 800DC678-800DC79C 0D6FB8 0124+00 5/5 0/0 0/0 .text checkGuardActionChange__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL daAlink_c::checkGuardActionChange() {
    nofralloc
#include "asm/d/a/d_a_alink/checkGuardActionChange__9daAlink_cFv.s"
}
#pragma pop

/* 800DC79C-800DC8C4 0D70DC 0128+00 3/3 0/0 0/0 .text            stickArrowIncrement__9daAlink_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::stickArrowIncrement(int param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/stickArrowIncrement__9daAlink_cFi.s"
}
#pragma pop

/* 800DC8C4-800DCA2C 0D7204 0168+00 0/0 0/0 1/1 .text
 * setArrowShieldActor__9daAlink_cFP10fopAc_ac_ci               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::setArrowShieldActor(fopAc_ac_c* param_0, int param_1) {
    nofralloc
#include "asm/d/a/d_a_alink/setArrowShieldActor__9daAlink_cFP10fopAc_ac_ci.s"
}
#pragma pop

/* 800DCA2C-800DCA80 0D736C 0054+00 1/1 0/0 2/2 .text
 * checkWoodShieldEquipNotIronBall__9daAlink_cCFv               */
BOOL daAlink_c::checkWoodShieldEquipNotIronBall() const {
    return checkWoodShieldEquip() && !checkIronBallEquip();
}

/* 800DCA80-800DCD74 0D73C0 02F4+00 0/0 0/0 1/1 .text
 * getArrowShieldOffset__9daAlink_cCFPC4cXyzPC5csXyzP4cXyzP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::getArrowShieldOffset(cXyz const* param_0, csXyz const* param_1, cXyz* param_2,
                                         cXyz* param_3) const {
    nofralloc
#include "asm/d/a/d_a_alink/getArrowShieldOffset__9daAlink_cCFPC4cXyzPC5csXyzP4cXyzP4cXyz.s"
}
#pragma pop

/* 800DCD74-800DCDF0 0D76B4 007C+00 0/0 0/0 2/2 .text
 * setArrowShieldPos__9daAlink_cCFP4cXyzP5csXyzPC4cXyzPC4cXyz   */
void daAlink_c::setArrowShieldPos(cXyz* param_0, csXyz* param_1, cXyz const* param_2,
                                  cXyz const* param_3) const {
    cXyz sp1C;

    mDoMtx_multVecSR(getShieldMtx(), param_3, &sp1C);
    param_1->x = sp1C.atan2sY_XZ();
    param_1->y = sp1C.atan2sX_Z();

    mDoMtx_multVec(getShieldMtx(), param_2, param_0);
}

/* 800DCDF0-800DCE6C 0D7730 007C+00 17/17 0/0 0/0 .text checkUpperGuardAnime__9daAlink_cCFv */
BOOL daAlink_c::checkUpperGuardAnime() const {
    return i_checkNoResetFlg2(FLG2_UNK_8000000) && !checkEventRun() && !i_checkNoResetFlg0(FLG0_UNK_2) &&
           mProcID != PROC_GUARD_BREAK && mProcID != PROC_CUT_REVERSE && mProcID != PROC_GUARD_ATTACK;
}

/* 800DCE6C-800DCF04 0D77AC 0098+00 1/0 0/0 0/0 .text            checkPlayerGuard__9daAlink_cCFv */
BOOL daAlink_c::checkPlayerGuard() const {
    return (i_checkSmallUpperGuardAnime() || (i_checkShieldGet() && checkHorseLieAnime())) ||
            checkUpperGuardAnime();
}

/* 800DCF04-800DCF64 0D7844 0060+00 5/5 0/0 0/0 .text checkPlayerGuardAndAttack__9daAlink_cCFv */
BOOL daAlink_c::checkPlayerGuardAndAttack() const {
    return checkPlayerGuard() || mProcID == PROC_GUARD_ATTACK;
}

/* 800DCF64-800DD008 0D78A4 00A4+00 2/2 0/0 0/0 .text            checkGuardAccept__9daAlink_cFv */
BOOL daAlink_c::checkGuardAccept() {
    return i_checkModeFlg(0x80) && i_checkShieldGet() && !i_checkFmChainGrabAnime() && !checkNotBattleStage();
}

/* 800DD008-800DD018 0D7948 0010+00 11/11 0/0 0/0 .text            setUpperGuardAnime__9daAlink_cFf
 */
void daAlink_c::setUpperGuardAnime(f32) {
    i_onNoResetFlg2(FLG2_UNK_8000000);
}

/* 800DD018-800DD114 0D7958 00FC+00 1/1 0/0 0/0 .text            setShieldGuard__9daAlink_cFv */
void daAlink_c::setShieldGuard() {
    if ((mProcID == PROC_GUARD_SLIP && mEquipItem != IRONBALL) || i_checkSmallUpperGuardAnime() ||
        (checkGuardAccept() && !checkGrabAnime() && !checkUpperReadyThrowAnime() &&
        !checkDkCaught2Anime() && !checkKandelaarSwingAnime() && !checkCutDashAnime() &&
        !checkCutDashChargeAnime() && (!checkEquipAnime() || checkUpperGuardAnime()) &&
        !i_checkRideOn() && checkGuardActionChange())) {
        i_onNoResetFlg2(FLG2_UNK_8000000);
    } else {
        i_offNoResetFlg2(FLG2_UNK_8000000);
    }
}

/* 800DD114-800DD1D4 0D7A54 00C0+00 1/1 0/0 0/0 .text setGuardSe__9daAlink_cFP12dCcD_GObjInf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::setGuardSe(dCcD_GObjInf* param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/setGuardSe__9daAlink_cFP12dCcD_GObjInf.s"
}
#pragma pop

/* 800DD1D4-800DD3E4 0D7B14 0210+00 1/1 0/0 0/0 .text setSmallGuard__9daAlink_cFP12dCcD_GObjInf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daAlink_c::setSmallGuard(dCcD_GObjInf* param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/setSmallGuard__9daAlink_cFP12dCcD_GObjInf.s"
}
#pragma pop

/* 800DD3E4-800DD894 0D7D24 04B0+00 1/1 0/0 0/0 .text
 * procGuardSlipInit__9daAlink_cFiP12dCcD_GObjInf               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procGuardSlipInit(int param_0, dCcD_GObjInf* param_1) {
    nofralloc
#include "asm/d/a/d_a_alink/procGuardSlipInit__9daAlink_cFiP12dCcD_GObjInf.s"
}
#pragma pop

/* 800DD894-800DDA10 0D81D4 017C+00 1/0 0/0 0/0 .text            procGuardSlip__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procGuardSlip() {
    nofralloc
#include "asm/d/a/d_a_alink/procGuardSlip__9daAlink_cFv.s"
}
#pragma pop

/* 800DDA10-800DDBA8 0D8350 0198+00 2/1 0/0 0/0 .text            procGuardAttackInit__9daAlink_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procGuardAttackInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procGuardAttackInit__9daAlink_cFv.s"
}
#pragma pop

/* 800DDBA8-800DDE58 0D84E8 02B0+00 1/0 0/0 0/0 .text            procGuardAttack__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procGuardAttack() {
    nofralloc
#include "asm/d/a/d_a_alink/procGuardAttack__9daAlink_cFv.s"
}
#pragma pop

/* 800DDE58-800DDF2C 0D8798 00D4+00 2/2 0/0 0/0 .text            procGuardBreakInit__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procGuardBreakInit() {
    nofralloc
#include "asm/d/a/d_a_alink/procGuardBreakInit__9daAlink_cFv.s"
}
#pragma pop

/* 800DDF2C-800DE008 0D886C 00DC+00 1/0 0/0 0/0 .text            procGuardBreak__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procGuardBreak() {
    nofralloc
#include "asm/d/a/d_a_alink/procGuardBreak__9daAlink_cFv.s"
}
#pragma pop

/* 800DE008-800DE380 0D8948 0378+00 2/2 0/0 0/0 .text            procTurnMoveInit__9daAlink_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool daAlink_c::procTurnMoveInit(int param_0) {
    nofralloc
#include "asm/d/a/d_a_alink/procTurnMoveInit__9daAlink_cFi.s"
}
#pragma pop

/* 800DE380-800DE64C 0D8CC0 02CC+00 1/0 0/0 0/0 .text            procTurnMove__9daAlink_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daAlink_c::procTurnMove() {
    nofralloc
#include "asm/d/a/d_a_alink/procTurnMove__9daAlink_cFv.s"
}
#pragma pop