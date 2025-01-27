//
// Generated By: dol2asm
// Translation Unit: c_m3d_g_cps
//

#include "SSystem/SComponent/c_m3d_g_cps.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Declarations:
//

/* 8026EF88-8026EFA4 2698C8 001C+00 0/0 5/5 20/20 .text            __ct__8cM3dGCpsFv */
cM3dGCps::cM3dGCps(void) {}

/* 8026EFA4-8026F000 2698E4 005C+00 1/0 7/7 6/6 .text            __dt__8cM3dGCpsFv */
cM3dGCps::~cM3dGCps(void) {}

/* 8026F000-8026F03C 269940 003C+00 1/1 2/2 10/10 .text            Set__8cM3dGCpsFRC4cXyzRC4cXyzf */
void cM3dGCps::Set(const cXyz& pStart, const cXyz& pEnd, f32 pUnkF) {
    this->SetStartEnd(pStart, pEnd);
    mRadius = pUnkF;
}

/* 8026F03C-8026F080 26997C 0044+00 0/0 1/1 10/10 .text            Set__8cM3dGCpsFRC9cM3dGCpsS */
void cM3dGCps::Set(const cM3dGCpsS& other) {
    this->SetStartEnd(other.mStart, other.mEnd);
    mRadius = other.mRadius;
}

/* 8026F080-8026F0A8 2699C0 0028+00 0/0 1/1 0/0 .text            SetCps__8cM3dGCpsFRC8cM3dGCps */
void cM3dGCps::SetCps(const cM3dGCps& other) {
    this->Set(other.GetStartP(), other.GetEndP(), other.mRadius);
}
