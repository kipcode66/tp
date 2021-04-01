//
// Generated By: dol2asm
// Translation Unit: c_bg_w
//

#include "SSystem/SComponent/c_bg_w.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct cBgW_BgId {
    /* 802681C0 */ void Regist(int);
    /* 802681C8 */ void Release();
    /* 802681D4 */ void ChkUsed() const;
};

//
// Forward References:
//

void cBgW_CheckBGround(f32);
void cBgW_CheckBRoof(f32);
void cBgW_CheckBWall(f32);

extern "C" void Regist__9cBgW_BgIdFi();
extern "C" void Release__9cBgW_BgIdFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cBgW_CheckBGround__Ff();
extern "C" void cBgW_CheckBRoof__Ff();
extern "C" void cBgW_CheckBWall__Ff();

//
// External References:
//

//
// Declarations:
//

/* 802681C0-802681C8 0008+00 s=0 e=1 z=0  None .text      Regist__9cBgW_BgIdFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgW_BgId::Regist(int param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_w/Regist__9cBgW_BgIdFi.s"
}
#pragma pop

/* 802681C8-802681D4 000C+00 s=0 e=2 z=0  None .text      Release__9cBgW_BgIdFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgW_BgId::Release() {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_w/Release__9cBgW_BgIdFv.s"
}
#pragma pop

/* 802681D4-802681E4 0010+00 s=0 e=7 z=121  None .text      ChkUsed__9cBgW_BgIdCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgW_BgId::ChkUsed() const {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_w/ChkUsed__9cBgW_BgIdCFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804550E8-804550EC 0004+00 s=1 e=0 z=0  None .sdata2    @2242 */
SECTION_SDATA2 static f32 lit_2242 = 0.5f;

/* 802681E4-802681FC 0018+00 s=1 e=22 z=8  None .text      cBgW_CheckBGround__Ff */
//	802681E4: 804550E8 (lit_2242)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgW_CheckBGround(f32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_w/cBgW_CheckBGround__Ff.s"
}
#pragma pop

/* ############################################################################################## */
/* 804550EC-804550F0 0004+00 s=1 e=0 z=0  None .sdata2    @2249 */
SECTION_SDATA2 static f32 lit_2249 = -4.0f / 5.0f;

/* 802681FC-80268210 0014+00 s=1 e=6 z=0  None .text      cBgW_CheckBRoof__Ff */
//	802681FC: 804550EC (lit_2249)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgW_CheckBRoof(f32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_w/cBgW_CheckBRoof__Ff.s"
}
#pragma pop

/* 80268210-80268260 0050+00 s=0 e=16 z=4  None .text      cBgW_CheckBWall__Ff */
//	80268224: 802681E4 (cBgW_CheckBGround__Ff)
//	80268234: 802681FC (cBgW_CheckBRoof__Ff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgW_CheckBWall(f32 param_0) {
    nofralloc
#include "asm/SSystem/SComponent/c_bg_w/cBgW_CheckBWall__Ff.s"
}
#pragma pop
