//
// Generated By: dol2asm
// Translation Unit: JASBasicInst
//

#include "JSystem/JAudio2/JASBasicInst.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRHeap {};

struct JASOscillator {
    struct Data {};
};

struct JASInstParam {};

struct JASInst {
    /* 8029828C */ ~JASInst();
};

struct JASCalc {
    /* 8028F480 */ void bzero(void*, u32);
};

struct JASBasicInst {
    struct TKeymap {
        /* 80298250 */ ~TKeymap();
        /* 802982D4 */ TKeymap();
    };

    /* 80298014 */ JASBasicInst();
    /* 8029807C */ ~JASBasicInst();
    /* 802980F8 */ void getParam(int, int, JASInstParam*) const;
    /* 8029819C */ void setKeyRegionCount(u32, JKRHeap*);
    /* 8029821C */ void setOsc(int, JASOscillator::Data const*);
    /* 8029822C */ void getKeyRegion(int);
    /* 802982E0 */ void getType() const;
};

//
// Forward References:
//

extern "C" void __ct__12JASBasicInstFv();
extern "C" void __dt__12JASBasicInstFv();
extern "C" void getParam__12JASBasicInstCFiiP12JASInstParam();
extern "C" void setKeyRegionCount__12JASBasicInstFUlP7JKRHeap();
extern "C" void setOsc__12JASBasicInstFiPCQ213JASOscillator4Data();
extern "C" void getKeyRegion__12JASBasicInstFi();
extern "C" void __dt__Q212JASBasicInst7TKeymapFv();
extern "C" void __dt__7JASInstFv();
extern "C" void __ct__Q212JASBasicInst7TKeymapFv();
extern "C" void getType__12JASBasicInstCFv();
extern "C" extern void* __vt__12JASBasicInst[5];
extern "C" extern void* __vt__7JASInst[5];

//
// External References:
//

void* operator new[](u32, JKRHeap*, int);
void operator delete(void*);

extern "C" void bzero__7JASCalcFPvUl();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __destroy_new_array();
extern "C" void __construct_new_array();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C76E8-803C76FC 0014+00 s=2 e=0 z=0  None .data      __vt__12JASBasicInst */
SECTION_DATA void* __vt__12JASBasicInst[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JASBasicInstFv,
    (void*)getParam__12JASBasicInstCFiiP12JASInstParam,
    (void*)getType__12JASBasicInstCFv,
};

/* 803C76FC-803C7710 0014+00 s=3 e=2 z=0  None .data      __vt__7JASInst */
SECTION_DATA void* __vt__7JASInst[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)__dt__7JASInstFv, (void*)NULL, (void*)NULL,
};

/* 80455640-80455648 0004+04 s=1 e=0 z=0  None .sdata2    @187 */
SECTION_SDATA2 static f32 lit_187[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 80298014-8029807C 0068+00 s=0 e=2 z=0  None .text      __ct__12JASBasicInstFv */
//	80298028: 803C76FC (__vt__7JASInst)
//	8029802C: 803C76FC (__vt__7JASInst)
//	80298034: 803C76E8 (__vt__12JASBasicInst)
//	80298038: 803C76E8 (__vt__12JASBasicInst)
//	80298040: 80455640 (lit_187)
//	80298060: 8028F480 (bzero__7JASCalcFPvUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicInst::JASBasicInst() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/__ct__12JASBasicInstFv.s"
}
#pragma pop

/* 8029807C-802980F8 007C+00 s=1 e=0 z=0  None .text      __dt__12JASBasicInstFv */
//	8029809C: 803C76E8 (__vt__12JASBasicInst)
//	802980A0: 803C76E8 (__vt__12JASBasicInst)
//	802980AC: 80298250 (__dt__Q212JASBasicInst7TKeymapFv)
//	802980B0: 80298250 (__dt__Q212JASBasicInst7TKeymapFv)
//	802980B4: 80361C6C (__destroy_new_array)
//	802980C0: 803C76FC (__vt__7JASInst)
//	802980C4: 803C76FC (__vt__7JASInst)
//	802980D8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicInst::~JASBasicInst() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/__dt__12JASBasicInstFv.s"
}
#pragma pop

/* 802980F8-8029819C 00A4+00 s=1 e=0 z=0  None .text getParam__12JASBasicInstCFiiP12JASInstParam
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicInst::getParam(int param_0, int param_1, JASInstParam* param_2) const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/getParam__12JASBasicInstCFiiP12JASInstParam.s"
}
#pragma pop

/* 8029819C-8029821C 0080+00 s=0 e=2 z=0  None .text setKeyRegionCount__12JASBasicInstFUlP7JKRHeap
 */
//	802981AC: 803621DC (_savegpr_29)
//	802981C0: 80298250 (__dt__Q212JASBasicInst7TKeymapFv)
//	802981C4: 80298250 (__dt__Q212JASBasicInst7TKeymapFv)
//	802981C8: 80361C6C (__destroy_new_array)
//	802981DC: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802981E0: 802982D4 (__ct__Q212JASBasicInst7TKeymapFv)
//	802981E4: 802982D4 (__ct__Q212JASBasicInst7TKeymapFv)
//	802981E8: 80298250 (__dt__Q212JASBasicInst7TKeymapFv)
//	802981EC: 80298250 (__dt__Q212JASBasicInst7TKeymapFv)
//	802981F8: 80361F14 (__construct_new_array)
//	80298208: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicInst::setKeyRegionCount(u32 param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/setKeyRegionCount__12JASBasicInstFUlP7JKRHeap.s"
}
#pragma pop

/* 8029821C-8029822C 0010+00 s=0 e=2 z=0  None .text
 * setOsc__12JASBasicInstFiPCQ213JASOscillator4Data             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicInst::setOsc(int param_0, JASOscillator::Data const* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/setOsc__12JASBasicInstFiPCQ213JASOscillator4Data.s"
}
#pragma pop

/* 8029822C-80298250 0024+00 s=0 e=2 z=0  None .text      getKeyRegion__12JASBasicInstFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicInst::getKeyRegion(int param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/getKeyRegion__12JASBasicInstFi.s"
}
#pragma pop

/* 80298250-8029828C 003C+00 s=2 e=0 z=0  None .text      __dt__Q212JASBasicInst7TKeymapFv */
//	80298270: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicInst::TKeymap::~TKeymap() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/__dt__Q212JASBasicInst7TKeymapFv.s"
}
#pragma pop

/* 8029828C-802982D4 0048+00 s=1 e=0 z=0  None .text      __dt__7JASInstFv */
//	802982A4: 803C76FC (__vt__7JASInst)
//	802982A8: 803C76FC (__vt__7JASInst)
//	802982B8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASInst::~JASInst() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/__dt__7JASInstFv.s"
}
#pragma pop

/* 802982D4-802982E0 000C+00 s=1 e=0 z=0  None .text      __ct__Q212JASBasicInst7TKeymapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicInst::TKeymap::TKeymap() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/__ct__Q212JASBasicInst7TKeymapFv.s"
}
#pragma pop

/* 802982E0-802982EC 000C+00 s=1 e=0 z=0  None .text      getType__12JASBasicInstCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicInst::getType() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicInst/getType__12JASBasicInstCFv.s"
}
#pragma pop
