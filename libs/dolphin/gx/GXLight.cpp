//
// Generated By: dol2asm
// Translation Unit: GXLight
//

#include "dolphin/gx/GXLight.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void GXInitLightAttn();
extern "C" void GXInitLightSpot();
extern "C" void GXInitLightDistAttn();
extern "C" void GXInitLightPos();
extern "C" void GXInitLightDir();
extern "C" void GXInitLightColor();
extern "C" void GXLoadLightObjImm();
extern "C" void GXSetChanAmbColor();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetNumChans();
extern "C" void GXSetChanCtrl();

//
// External References:
//

extern "C" void cosf();
extern "C" extern void* __GXData;

//
// Declarations:
//

/* 8035D630-8035D64C 001C+00 s=0 e=1 z=0  None .text      GXInitLightAttn */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXInitLightAttn() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXInitLightAttn.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D2578-803D2598 001C+04 s=1 e=0 z=0  None .data      @145 */
SECTION_DATA static void* lit_145[7 + 1 /* padding */] = {
    (void*)(((char*)GXInitLightSpot) + 0x160),
    (void*)(((char*)GXInitLightSpot) + 0x70),
    (void*)(((char*)GXInitLightSpot) + 0x84),
    (void*)(((char*)GXInitLightSpot) + 0xA4),
    (void*)(((char*)GXInitLightSpot) + 0xC4),
    (void*)(((char*)GXInitLightSpot) + 0xF0),
    (void*)(((char*)GXInitLightSpot) + 0x124),
    /* padding */
    NULL,
};

/* 804565B8-804565BC 0004+00 s=2 e=0 z=0  None .sdata2    @134 */
SECTION_SDATA2 static u8 lit_134[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804565BC-804565C0 0004+00 s=1 e=0 z=0  None .sdata2    @135 */
SECTION_SDATA2 static f32 lit_135 = 90.0f;

/* 804565C0-804565C4 0004+00 s=1 e=0 z=0  None .sdata2    @136 */
SECTION_SDATA2 static f32 lit_136 = 3.1415927410125732f;

/* 804565C4-804565C8 0004+00 s=1 e=0 z=0  None .sdata2    @137 */
SECTION_SDATA2 static f32 lit_137 = 180.0f;

/* 804565C8-804565CC 0004+00 s=1 e=0 z=0  None .sdata2    @138 */
SECTION_SDATA2 static f32 lit_138 = -1000.0f;

/* 804565CC-804565D0 0004+00 s=1 e=0 z=0  None .sdata2    @139 */
SECTION_SDATA2 static f32 lit_139 = 1000.0f;

/* 804565D0-804565D4 0004+00 s=2 e=0 z=0  None .sdata2    @140 */
SECTION_SDATA2 static f32 lit_140 = 1.0f;

/* 804565D4-804565D8 0004+00 s=1 e=0 z=0  None .sdata2    @141 */
SECTION_SDATA2 static f32 lit_141 = 2.0f;

/* 804565D8-804565DC 0004+00 s=1 e=0 z=0  None .sdata2    @142 */
SECTION_SDATA2 static f32 lit_142 = -4.0f;

/* 804565DC-804565E0 0004+00 s=1 e=0 z=0  None .sdata2    @143 */
SECTION_SDATA2 static f32 lit_143 = 4.0f;

/* 804565E0-804565E4 0004+00 s=1 e=0 z=0  None .sdata2    @144 */
SECTION_SDATA2 static f32 lit_144 = -2.0f;

/* 8035D64C-8035D7DC 0190+00 s=1 e=2 z=0  None .text      GXInitLightSpot */
//	8035D668: 804565B8 (lit_134)
//	8035D678: 804565BC (lit_135)
//	8035D688: 804565C0 (lit_136)
//	8035D68C: 804565C4 (lit_137)
//	8035D698: 8036CA0C (cosf)
//	8035D6A4: 803D2578 (lit_145)
//	8035D6A8: 803D2578 (lit_145)
//	8035D6BC: 804565C8 (lit_138)
//	8035D6C0: 804565CC (lit_139)
//	8035D6C8: 804565B8 (lit_134)
//	8035D6D0: 804565D0 (lit_140)
//	8035D6D8: 804565B8 (lit_134)
//	8035D6F0: 804565D0 (lit_140)
//	8035D6F8: 804565B8 (lit_134)
//	8035D710: 804565D0 (lit_140)
//	8035D714: 804565D4 (lit_141)
//	8035D73C: 804565D0 (lit_140)
//	8035D740: 804565D8 (lit_142)
//	8035D748: 804565DC (lit_143)
//	8035D770: 804565D0 (lit_140)
//	8035D774: 804565D4 (lit_141)
//	8035D77C: 804565DC (lit_143)
//	8035D784: 804565E0 (lit_144)
//	8035D7AC: 804565B8 (lit_134)
//	8035D7B0: 804565D0 (lit_140)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXInitLightSpot() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXInitLightSpot.s"
}
#pragma pop

/* ############################################################################################## */
/* 804565E4-804565E8 0004+00 s=1 e=0 z=0  None .sdata2    @160 */
SECTION_SDATA2 static f32 lit_160 = 0.5f;

/* 8035D7DC-8035D8AC 00D0+00 s=0 e=2 z=0  None .text      GXInitLightDistAttn */
//	8035D7DC: 804565B8 (lit_134)
//	8035D7EC: 804565B8 (lit_134)
//	8035D7FC: 804565D0 (lit_140)
//	8035D838: 804565D0 (lit_140)
//	8035D840: 804565B8 (lit_134)
//	8035D850: 804565D0 (lit_140)
//	8035D858: 804565E4 (lit_160)
//	8035D878: 804565D0 (lit_140)
//	8035D87C: 804565B8 (lit_134)
//	8035D890: 804565B8 (lit_134)
//	8035D894: 804565D0 (lit_140)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXInitLightDistAttn() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXInitLightDistAttn.s"
}
#pragma pop

/* 8035D8AC-8035D8BC 0010+00 s=0 e=3 z=0  None .text      GXInitLightPos */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXInitLightPos() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXInitLightPos.s"
}
#pragma pop

/* 8035D8BC-8035D8D8 001C+00 s=0 e=3 z=0  None .text      GXInitLightDir */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXInitLightDir() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXInitLightDir.s"
}
#pragma pop

/* 8035D8D8-8035D8E4 000C+00 s=0 e=3 z=0  None .text      GXInitLightColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXInitLightColor() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXInitLightColor.s"
}
#pragma pop

/* 8035D8E4-8035D960 007C+00 s=0 e=4 z=2  None .text      GXLoadLightObjImm */
//	8035D950: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXLoadLightObjImm() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXLoadLightObjImm.s"
}
#pragma pop

/* 8035D960-8035DA48 00E8+00 s=0 e=7 z=4  None .text      GXSetChanAmbColor */
//	8035D994: 80456580 (__GXData)
//	8035D9B0: 80456580 (__GXData)
//	8035D9C8: 80456580 (__GXData)
//	8035D9E0: 80456580 (__GXData)
//	8035DA18: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetChanAmbColor() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXSetChanAmbColor.s"
}
#pragma pop

/* 8035DA48-8035DB30 00E8+00 s=0 e=20 z=2  None .text      GXSetChanMatColor */
//	8035DA7C: 80456580 (__GXData)
//	8035DA98: 80456580 (__GXData)
//	8035DAB0: 80456580 (__GXData)
//	8035DAC8: 80456580 (__GXData)
//	8035DB00: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetChanMatColor() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXSetChanMatColor.s"
}
#pragma pop

/* 8035DB30-8035DB6C 003C+00 s=0 e=51 z=6  None .text      GXSetNumChans */
//	8035DB30: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetNumChans() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXSetNumChans.s"
}
#pragma pop

/* 8035DB6C-8035DC1C 00B0+00 s=0 e=34 z=4  None .text      GXSetChanCtrl */
//	8035DC0C: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetChanCtrl() {
    nofralloc
#include "asm/dolphin/gx/GXLight/GXSetChanCtrl.s"
}
#pragma pop
