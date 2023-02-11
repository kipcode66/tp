#ifndef M_DO_M_DO_LIB_H
#define M_DO_M_DO_LIB_H

#include "JSystem/J3DU/J3DUClipper.h"
#include "dolphin/types.h"
#include "JSystem/JUtility/JUTTexture.h"

struct mDoLib_clipper {
    /* 8001528C */ void setup(f32, f32, f32, f32);

    static void changeFar(f32 far) {
        mClipper.setFar(far);
        mClipper.calcViewFrustum();
    }

    static u32 clip(const Mtx m, const Vec* param_1, const Vec* param_2) {
        return mClipper.clip(m, (Vec*)param_1, (Vec*)param_2);
    }

    static J3DUClipper mClipper;
    static f32 mSystemFar;
    static f32 mFovyRate;
};

void mDoLib_project(Vec* src, Vec* dst);
u8 mDoLib_setResTimgObj(ResTIMG const* res, GXTexObj* o_texObj, u32 tlut_name,
                          GXTlutObj* o_tlutObj);
void mDoLib_pos2camera(Vec* src, Vec* dst);

#endif /* M_DO_M_DO_LIB_H */
