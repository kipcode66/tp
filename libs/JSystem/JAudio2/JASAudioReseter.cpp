//
// Generated By: dol2asm
// Translation Unit: JASAudioReseter
//

#include "JSystem/JAudio2/JASAudioReseter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASDriver {
    /* 8029E130 */ void setDSPLevel(f32);
    /* 8029E158 */ void getDSPLevel();
    /* 8029E240 */ void registerDspSyncCallback(s32 (*)(void*), void*);
};

struct JASDSPChannel {
    /* 8029D340 */ void drop();
    /* 8029D948 */ void getHandle(u32);
};

struct JASAudioThread {
    /* 8029CDC0 */ void stop();
};

struct JASAudioReseter {
    /* 8029D0B4 */ JASAudioReseter();
    /* 8029D0FC */ ~JASAudioReseter();
    /* 8029D138 */ void start(u32, bool);
    /* 8029D1D4 */ void resume();
    /* 8029D1F8 */ void checkDone() const;
    /* 8029D200 */ void calc();
    /* 8029D2D4 */ void callback(void*);
};

//
// Forward References:
//

extern "C" void __ct__15JASAudioReseterFv();
extern "C" void __dt__15JASAudioReseterFv();
extern "C" void start__15JASAudioReseterFUlb();
extern "C" void resume__15JASAudioReseterFv();
extern "C" void checkDone__15JASAudioReseterCFv();
extern "C" void calc__15JASAudioReseterFv();
extern "C" void callback__15JASAudioReseterFPv();

//
// External References:
//

void operator delete(void*);

extern "C" void stop__14JASAudioThreadFv();
extern "C" void drop__13JASDSPChannelFv();
extern "C" void getHandle__13JASDSPChannelFUl();
extern "C" void setDSPLevel__9JASDriverFf();
extern "C" void getDSPLevel__9JASDriverFv();
extern "C" void registerDspSyncCallback__9JASDriverFPFPv_lPv();
extern "C" void __dl__FPv();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" extern u8 data_80450B8C[4];

//
// Declarations:
//

/* 8029D0B4-8029D0FC 0048+00 s=0 e=1 z=0  None .text      __ct__15JASAudioReseterFv */
//	8029D0DC: 8029E158 (getDSPLevel__9JASDriverFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASAudioReseter::JASAudioReseter() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/__ct__15JASAudioReseterFv.s"
}
#pragma pop

/* 8029D0FC-8029D138 003C+00 s=0 e=1 z=0  None .text      __dt__15JASAudioReseterFv */
//	8029D11C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASAudioReseter::~JASAudioReseter() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/__dt__15JASAudioReseterFv.s"
}
#pragma pop

/* 8029D138-8029D1D4 009C+00 s=0 e=1 z=0  None .text      start__15JASAudioReseterFUlb */
//	8029D16C: 8033D6F4 (OSDisableInterrupts)
//	8029D174: 8029D2D4 (callback__15JASAudioReseterFPv)
//	8029D178: 8029D2D4 (callback__15JASAudioReseterFPv)
//	8029D180: 8029E240 (registerDspSyncCallback__9JASDriverFPFPv_lPv)
//	8029D190: 8033D71C (OSRestoreInterrupts)
//	8029D19C: 8029E158 (getDSPLevel__9JASDriverFv)
//	8029D1B4: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioReseter::start(u32 param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/start__15JASAudioReseterFUlb.s"
}
#pragma pop

/* 8029D1D4-8029D1F8 0024+00 s=0 e=1 z=0  None .text      resume__15JASAudioReseterFv */
//	8029D1E4: 8029E130 (setDSPLevel__9JASDriverFf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioReseter::resume() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/resume__15JASAudioReseterFv.s"
}
#pragma pop

/* 8029D1F8-8029D200 0008+00 s=0 e=2 z=0  None .text      checkDone__15JASAudioReseterCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioReseter::checkDone() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/checkDone__15JASAudioReseterCFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455740-80455748 0008+00 s=1 e=0 z=0  None .sdata2    @156 */
SECTION_SDATA2 static f64 lit_156 = 4503599627370496.0 /* cast u32 to float */;

/* 8029D200-8029D2D4 00D4+00 s=1 e=0 z=0  None .text      calc__15JASAudioReseterFv */
//	8029D22C: 8029D948 (getHandle__13JASDSPChannelFUl)
//	8029D23C: 8029D340 (drop__13JASDSPChannelFv)
//	8029D258: 80450B8C (data_80450B8C)
//	8029D25C: 8029CDC0 (stop__14JASAudioThreadFv)
//	8029D27C: 8029E158 (getDSPLevel__9JASDriverFv)
//	8029D280: 80455740 (lit_156)
//	8029D2B4: 8029E130 (setDSPLevel__9JASDriverFf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioReseter::calc() {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/calc__15JASAudioReseterFv.s"
}
#pragma pop

/* 8029D2D4-8029D2F4 0020+00 s=1 e=0 z=0  None .text      callback__15JASAudioReseterFPv */
//	8029D2E0: 8029D200 (calc__15JASAudioReseterFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASAudioReseter::callback(void* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASAudioReseter/callback__15JASAudioReseterFPv.s"
}
#pragma pop
