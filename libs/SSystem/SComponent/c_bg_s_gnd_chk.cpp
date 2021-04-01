//
// Generated By: dol2asm
// Translation Unit: c_bg_s_gnd_chk
//

#include "SSystem/SComponent/c_bg_s_gnd_chk.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct cXyz {};

struct cBgS_PolyInfo {
    /* 80268074 */ cBgS_PolyInfo();
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct Vec {};

struct cBgS_GndChk {
    /* 80267C1C */ cBgS_GndChk();
    /* 80267C94 */ ~cBgS_GndChk();
    /* 80267D28 */ void SetPos(cXyz const*);
    /* 80267D0C */ void SetPos(Vec const*);
    /* 80267D44 */ void PreCheck();
};

struct cBgS_Chk {
    /* 80267B4C */ cBgS_Chk();
    /* 80267B70 */ ~cBgS_Chk();
};

//
// Forward References:
//

extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void PreCheck__11cBgS_GndChkFv();
extern "C" static void func_80267D54();
extern "C" extern void* __vt__11cBgS_GndChk[6];

//
// External References:
//

void operator delete(void*);

extern "C" void __ct__8cBgS_ChkFv();
extern "C" void __dt__8cBgS_ChkFv();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dl__FPv();
extern "C" extern f32 Zero__4cXyz[3];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C3F90-803C3FA8 0018+00 s=2 e=0 z=0  None .data      __vt__11cBgS_GndChk */
SECTION_DATA void* __vt__11cBgS_GndChk[6] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)__dt__11cBgS_GndChkFv, (void*)NULL, (void*)NULL,
    (void*)func_80267D54,
};

/* 80267C1C-80267C94 0078+00 s=0 e=2 z=123  None .text      __ct__11cBgS_GndChkFv */
//	80267C30: 80267B4C (__ct__8cBgS_ChkFv)
//	80267C38: 80268074 (__ct__13cBgS_PolyInfoFv)
//	80267C3C: 803C3F90 (__vt__11cBgS_GndChk)
//	80267C40: 803C3F90 (__vt__11cBgS_GndChk)
//	80267C50: 80430CF4 (Zero__4cXyz)
//	80267C54: 80430CF4 (Zero__4cXyz)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cBgS_GndChk::cBgS_GndChk() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_gnd_chk/__ct__11cBgS_GndChkFv.s"
}
#pragma pop

/* 80267C94-80267D0C 0078+00 s=2 e=4 z=110  None .text      __dt__11cBgS_GndChkFv */
//	80267CB4: 803C3F90 (__vt__11cBgS_GndChk)
//	80267CB8: 803C3F90 (__vt__11cBgS_GndChk)
//	80267CD0: 802680B0 (__dt__13cBgS_PolyInfoFv)
//	80267CDC: 80267B70 (__dt__8cBgS_ChkFv)
//	80267CEC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cBgS_GndChk::~cBgS_GndChk() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_gnd_chk/__dt__11cBgS_GndChkFv.s"
}
#pragma pop

/* 80267D0C-80267D28 001C+00 s=0 e=0 z=62  None .text      SetPos__11cBgS_GndChkFPC3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_GndChk::SetPos(Vec const* param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_gnd_chk/SetPos__11cBgS_GndChkFPC3Vec.s"
}
#pragma pop

/* 80267D28-80267D44 001C+00 s=0 e=51 z=185  None .text      SetPos__11cBgS_GndChkFPC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_GndChk::SetPos(cXyz const* param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_gnd_chk/SetPos__11cBgS_GndChkFPC4cXyz.s"
}
#pragma pop

/* 80267D44-80267D54 0010+00 s=0 e=1 z=0  None .text      PreCheck__11cBgS_GndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_GndChk::PreCheck() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_gnd_chk/PreCheck__11cBgS_GndChkFv.s"
}
#pragma pop

/* 80267D54-80267D5C 0008+00 s=1 e=0 z=0  None .text      @20@__dt__11cBgS_GndChkFv */
//	80267D58: 80267C94 (__dt__11cBgS_GndChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80267D54() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_s_gnd_chk/func_80267D54.s"
}
#pragma pop
