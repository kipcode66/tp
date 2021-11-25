//
// Generated By: dol2asm
// Translation Unit: c_lib
//

#include "SSystem/SComponent/c_lib.h"
#include "JSystem/JMath/JMath.h"
#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/string.h"
#include "SSystem/SComponent/c_math.h"
#include "SSystem/SComponent/c_xyz.h"
#include "dol2asm.h"
#include "dolphin/mtx/mtxvec.h"
#include "dolphin/types.h"
#include "msl_c/math.h"

//
// Declarations:
//

/* 8026F93C-8026F95C 26A27C 0020+00 0/0 3/3 0/0 .text            cLib_memCpy__FPvPCvUl */
void cLib_memCpy(void* dst, const void* src, unsigned long size) {
    memcpy(dst, src, size);
}

/* 8026F95C-8026F97C 26A29C 0020+00 0/0 4/4 0/0 .text            cLib_memSet__FPviUl */
void cLib_memSet(void* ptr, int value, unsigned long size) {
    memset(ptr, value, size);
}

/* 8026F97C-8026FA3C 26A2BC 00C0+00 0/0 50/50 178/178 .text            cLib_addCalc__FPfffff */
f32 cLib_addCalc(f32* pValue, f32 target, f32 scale, f32 maxStep, f32 minStep) {
    if (*pValue != target) {
        f32 step = scale * (target - *pValue);
        if (step >= minStep || step <= -minStep) {
            if (step > maxStep) {
                step = maxStep;
            }
            if (step < -maxStep) {
                step = -maxStep;
            }
            *pValue += step;
        } else {
            if (step > 0) {
                if (step < minStep) {
                    *pValue += minStep;
                    if (*pValue > target) {
                        *pValue = target;
                    }
                }
            } else {
                minStep = -minStep;
                if (step > minStep) {
                    *pValue += minStep;
                    if (*pValue < target) {
                        *pValue = target;
                    }
                }
            }
        }
    }
    return fabsf(target - *pValue);
}

/* 8026FA3C-8026FA80 26A37C 0044+00 0/0 20/20 701/701 .text            cLib_addCalc2__FPffff */
void cLib_addCalc2(f32* pValue, f32 target, f32 scale, f32 maxStep) {
    if (*pValue != target) {
        f32 step = scale * (target - *pValue);
        if (step > maxStep) {
            step = maxStep;
        } else if (step < -maxStep) {
            step = -maxStep;
        }
        *pValue += step;
    }
}

/* 8026FA80-8026FAB8 26A3C0 0038+00 0/0 2/2 322/322 .text            cLib_addCalc0__FPfff */
void cLib_addCalc0(f32* pValue, f32 scale, f32 maxStep) {
    f32 step = *pValue * scale;
    if (step > maxStep) {
        step = maxStep;
    } else if (step < -maxStep) {
        step = -maxStep;
    }
    *pValue -= step;
}

/* 8026FAB8-8026FDF4 26A3F8 033C+00 0/0 3/3 78/78 .text cLib_addCalcPos__FP4cXyzRC4cXyzfff */
f32 cLib_addCalcPos(cXyz* pValue, cXyz const& target, f32 scale, f32 maxStep, f32 minStep) {
    if (*pValue != target) {
        cXyz diff = (*pValue - target);
        f32 step = diff.abs();
        if (step < minStep) {
            *pValue = target;
        } else {
            step *= scale;
            diff *= scale;
            if (!cLib_IsZero(step)) {
                if (step > maxStep) {
                    diff *= (maxStep / step);
                } else if (step < minStep) {
                    diff *= (minStep / step);
                }
                *pValue -= diff;
            } else {
                *pValue = target;
            }
        }
    }
    return pValue->abs(target);
}

/* 8026FDF4-80270178 26A734 0384+00 0/0 1/1 4/4 .text cLib_addCalcPosXZ__FP4cXyzRC4cXyzfff */
f32 cLib_addCalcPosXZ(cXyz* pValue, cXyz const& target, f32 scale, f32 maxStep, f32 minStep) {
    if (pValue->x != target.x || pValue->z != target.z) {
        cXyz diff = (*pValue - target);
        f32 step = diff.absXZ();
        if (step < minStep) {
            pValue->x = target.x;
            pValue->z = target.z;
        } else {
            step *= scale;
            diff *= scale;
            if (!cLib_IsZero(step)) {
                if (step > maxStep) {
                    diff *= (maxStep / step);
                } else if (step < minStep) {
                    diff *= (minStep / step);
                }
                pValue->x -= diff.x;
                pValue->z -= diff.z;
            } else {
                pValue->x = target.x;
                pValue->z = target.z;
            }
        }
    }
    return (*pValue - target).absXZ();
}

/* 80270178-80270350 26AAB8 01D8+00 0/0 2/2 33/33 .text cLib_addCalcPos2__FP4cXyzRC4cXyzff */
void cLib_addCalcPos2(cXyz* pValue, cXyz const& target, f32 scale, f32 maxStep) {
    if (*pValue != target) {
        cXyz diff = (*pValue - target) * scale;
        if (diff.abs() > maxStep) {
            diff = diff.normZP();
            diff *= maxStep;
        }
        *pValue -= diff;
    }
}

/* 80270350-80270540 26AC90 01F0+00 0/0 0/0 4/4 .text cLib_addCalcPosXZ2__FP4cXyzRC4cXyzff */
void cLib_addCalcPosXZ2(cXyz* pValue, cXyz const& target, f32 scale, f32 maxStep) {
    if (pValue->x != target.x || pValue->z != target.z) {
        cXyz diff = (*pValue - target) * scale;
        f32 step = diff.absXZ();
        if (!cLib_IsZero(step)) {
            if (step > maxStep) {
                diff *= (maxStep / step);
            }
            pValue->x -= diff.x;
            pValue->z -= diff.z;
        }
    }
}

/* 80270540-80270608 26AE80 00C8+00 0/0 81/81 244/244 .text            cLib_addCalcAngleS__FPsssss
 */
s16 cLib_addCalcAngleS(s16* pValue, s16 target, s16 scale, s16 maxStep, s16 minStep) {
    s16 diff = target - *pValue;
    if (*pValue != target) {
        s16 step = (diff) / scale;
        if (step > minStep || step < -minStep) {
            if (step > maxStep) {
                step = maxStep;
            }
            if (step < -maxStep) {
                step = -maxStep;
            }
            *pValue += step;
        } else {
            if (0 <= diff) {
                *pValue += minStep;
                diff = target - *pValue;
                if (0 >= diff) {
                    *pValue = target;
                }
            } else {
                *pValue -= minStep;
                diff = target - *pValue;
                if (0 <= diff) {
                    *pValue = target;
                }
            }
        }
    }
    return target - *pValue;
}

/* 80270608-8027065C 26AF48 0054+00 0/0 2/2 849/849 .text            cLib_addCalcAngleS2__FPssss */
void cLib_addCalcAngleS2(s16* pValue, s16 target, s16 scale, s16 maxStep) {
    s16 diff = target - *pValue;
    s16 step = diff / scale;
    if (step > maxStep) {
        *pValue += maxStep;
    } else if (step < -maxStep) {
        *pValue -= maxStep;
    } else {
        *pValue += step;
    }
}

/* 8027065C-802706D0 26AF9C 0074+00 0/0 3/3 14/14 .text            cLib_chaseUC__FPUcUcUc */
int cLib_chaseUC(u8* pValue, u8 target, u8 step) {
    if (step) {
        s16 wideValue = *pValue;
        s16 wideTarget = target;
        s16 wideStep;
        if (wideValue > wideTarget) {
            wideStep = -step;
        } else {
            wideStep = step;
        }
        wideValue += wideStep;
        if (wideStep * (wideValue - wideTarget) >= 0) {
            *pValue = target;
            return 1;
        } else {
            *pValue = wideValue;
        }
    } else if (*pValue == target) {
        return 1;
    }
    return 0;
}

/* 802706D0-80270740 26B010 0070+00 0/0 4/4 49/49 .text            cLib_chaseS__FPsss */
int cLib_chaseS(s16* pValue, s16 target, s16 step) {
    if (step) {
        if (*pValue > target) {
            step = -step;
        }
        *pValue += step;
        if (step * (*pValue - target) >= 0) {
            *pValue = target;
            return 1;
        }
    } else if (*pValue == target) {
        return 1;
    }
    return 0;
}

/* 80270740-802707AC 26B080 006C+00 0/0 70/70 448/448 .text            cLib_chaseF__FPfff */
int cLib_chaseF(f32* pValue, f32 target, f32 step) {
    if (step) {
        if (*pValue > target) {
            step = -step;
        }
        *pValue += step;
        if (step * (*pValue - target) >= 0) {
            *pValue = target;
            return 1;
        }
    } else if (*pValue == target) {
        return 1;
    }
    return 0;
}

/* 802707AC-80270990 26B0EC 01E4+00 0/0 3/3 60/60 .text            cLib_chasePos__FP4cXyzRC4cXyzf */
int cLib_chasePos(cXyz* pValue, cXyz const& target, f32 step) {
    if (step) {
        cXyz diff = *pValue - target;
        f32 diffF = diff.abs();
        if (cLib_IsZero(diffF) || diffF <= step) {
            *pValue = target;
            return 1;
        }
        *pValue -= diff * (step / diffF);
    } else if (*pValue == target) {
        return 1;
    }
    return 0;
}

/* 80270990-80270B90 26B2D0 0200+00 0/0 1/0 19/19 .text            cLib_chasePosXZ__FP4cXyzRC4cXyzf
 */
int cLib_chasePosXZ(cXyz* pValue, cXyz const& target, f32 step) {
    cXyz diff = *pValue - target;
    diff.y = 0;
    f32 diffF = diff.absXZ();
    if (step) {
        if (cLib_IsZero(diffF) || diffF <= step) {
            *pValue = target;
            return 1;
        }
        *pValue -= diff * (step / diffF);
    } else if (cLib_IsZero(diffF)) {
        return 1;
    }
    return 0;
}

/* 80270B90-80270C04 26B4D0 0074+00 0/0 4/4 213/213 .text            cLib_chaseAngleS__FPsss */
int cLib_chaseAngleS(s16* pValue, s16 target, s16 step) {
    if (step) {
        if ((s16)(*pValue - target) > 0) {
            step = -step;
        }
        *pValue += step;
        if (step * (s16)(*pValue - target) >= 0) {
            *pValue = target;
            return 1;
        }
    } else if (*pValue == target) {
        return 1;
    }
    return 0;
}

/* 80270C04-80270C3C 26B544 0038+00 0/0 39/39 454/454 .text cLib_targetAngleY__FPC3VecPC3Vec */
s16 cLib_targetAngleY(const Vec* lhs, const Vec* rhs) {
    return cM_atan2s(rhs->x - lhs->x, rhs->z - lhs->z);
}

/* 80270C3C-80270C74 26B57C 0038+00 0/0 0/0 7/7 .text            cLib_targetAngleY__FRC3VecRC3Vec */
s16 cLib_targetAngleY(const Vec& lhs, const Vec& rhs) {
    return cM_atan2s(rhs.x - lhs.x, rhs.z - lhs.z);
}

/* 80270C74-80270DC0 26B5B4 014C+00 0/0 2/2 109/109 .text cLib_targetAngleX__FPC4cXyzPC4cXyz */
s16 cLib_targetAngleX(cXyz const* param_0, cXyz const* param_1) {
    // would match with all float literals
    cXyz diff = *param_1 - *param_0;
    f32 f1 = sqrtf(diff.getMagXZ());
    return cM_atan2s(diff.GetY(), f1);
}

/* 80270DC0-80270E24 26B700 0064+00 0/0 2/2 118/118 .text cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz
 */
void cLib_offsetPos(cXyz* pDest, cXyz const* pSrc, s16 angle, cXyz const* vec) {
    f32 cos = cM_scos(angle);
    f32 sin = cM_ssin(angle);
    pDest->x = pSrc->x + (vec->x * cos + vec->z * sin);
    pDest->y = pSrc->y + vec->y;
    pDest->z = pSrc->z + (vec->z * cos - vec->x * sin);
}

/* 80270E24-80270E4C 26B764 0028+00 0/0 48/48 71/71 .text            cLib_distanceAngleS__Fss */
s32 cLib_distanceAngleS(s16 x, s16 y) {
    return abs(static_cast<s16>(x - y));
}

/* ############################################################################################## */
/* 80430DB8-80430F98 05DAD8 01E0+00 2/1 0/0 0/0 .bss             mtx */
static Mtx mtx[10];

/* 80450768-80450770 -00001 0004+04 6/6 2/2 695/695 .sdata           calc_mtx */
Mtx* calc_mtx = mtx;

/* 80270E4C-80270E5C 26B78C 0010+00 0/0 1/1 0/0 .text            MtxInit__Fv */
void MtxInit() {
    calc_mtx = mtx;
}

/* 80270E5C-80270EA4 26B79C 0048+00 0/0 0/0 43/43 .text            MtxTrans__FfffUc */
void MtxTrans(f32 x_trans, f32 y_trans, f32 z_trans, u8 param_3) {
    if (param_3 == 0) {
        PSMTXTrans(*calc_mtx, x_trans, y_trans, z_trans);
    } else {
        Mtx mtx;
        PSMTXTrans(mtx, x_trans, y_trans, z_trans);
        PSMTXConcat(*calc_mtx, mtx, *calc_mtx);
    }
}

/* 80270EA4-80270EEC 26B7E4 0048+00 0/0 0/0 46/46 .text            MtxScale__FfffUc */
void MtxScale(f32 x_trans, f32 y_trans, f32 z_trans, u8 param_3) {
    if (param_3 == 0) {
        PSMTXScale(*calc_mtx, x_trans, y_trans, z_trans);
    } else {
        Mtx mtx;
        PSMTXScale(mtx, x_trans, y_trans, z_trans);
        PSMTXConcat(*calc_mtx, mtx, *calc_mtx);
    }
}

/* 80270EEC-80270F1C 26B82C 0030+00 0/0 2/2 615/615 .text            MtxPosition__FP4cXyzP4cXyz */
void MtxPosition(cXyz* src, cXyz* dest) {
    PSMTXMultVec(*calc_mtx, src, dest);
}

/* 80270F1C-80270F58 26B85C 003C+00 0/0 0/0 20/20 .text            MtxPush__Fv */
void MtxPush() {
    Mtx mtx;
    PSMTXCopy(*calc_mtx, mtx);
    calc_mtx++;
    PSMTXCopy(mtx, *calc_mtx);
}

/* 80270F58-80270F68 26B898 0010+00 0/0 0/0 20/20 .text            MtxPull__Fv */
Mtx* MtxPull() {
    return calc_mtx--;
}
