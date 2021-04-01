//
// Generated By: dol2asm
// Translation Unit: GXGeometry
//

#include "dolphin/gx/GXGeometry.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __GXSetDirtyState();
extern "C" void GXBegin();
extern "C" void __GXSendFlushPrim();
extern "C" void GXSetLineWidth();
extern "C" void GXSetPointSize();
extern "C" void GXEnableTexOffsets();
extern "C" void GXSetCullMode();
extern "C" void GXSetCoPlanar();
extern "C" static void __GXSetGenMode();

//
// External References:
//

extern "C" void __GXSetVCD();
extern "C" void __GXCalculateVLim();
extern "C" void __GXSetVAT();
extern "C" void __GXSetSUTexRegs();
extern "C" void __GXUpdateBPMask();
extern "C" extern void* __GXData;

//
// Declarations:
//

/* 8035C6E4-8035C764 0080+00 s=0 e=4 z=0  None .text      __GXSetDirtyState */
//	8035C6F4: 80456580 (__GXData)
//	8035C704: 8035E7F0 (__GXSetSUTexRegs)
//	8035C710: 8035F140 (__GXUpdateBPMask)
//	8035C71C: 8035C9E0 (__GXSetGenMode)
//	8035C728: 8035B3AC (__GXSetVCD)
//	8035C734: 8035BAA0 (__GXSetVAT)
//	8035C740: 8035B468 (__GXCalculateVLim)
//	8035C744: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __GXSetDirtyState() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/__GXSetDirtyState.s"
}
#pragma pop

/* 8035C764-8035C834 00D0+00 s=0 e=66 z=3  None .text      GXBegin */
//	8035C78C: 80456580 (__GXData)
//	8035C7A4: 8035E7F0 (__GXSetSUTexRegs)
//	8035C7B0: 8035F140 (__GXUpdateBPMask)
//	8035C7BC: 8035C9E0 (__GXSetGenMode)
//	8035C7C8: 8035B3AC (__GXSetVCD)
//	8035C7D4: 8035BAA0 (__GXSetVAT)
//	8035C7E0: 8035B468 (__GXCalculateVLim)
//	8035C7E4: 80456580 (__GXData)
//	8035C7F0: 80456580 (__GXData)
//	8035C800: 8035C834 (__GXSendFlushPrim)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXBegin() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/GXBegin.s"
}
#pragma pop

/* 8035C834-8035C8BC 0088+00 s=1 e=1 z=0  None .text      __GXSendFlushPrim */
//	8035C834: 80456580 (__GXData)
//	8035C8AC: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __GXSendFlushPrim() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/__GXSendFlushPrim.s"
}
#pragma pop

/* 8035C8BC-8035C8FC 0040+00 s=0 e=8 z=0  None .text      GXSetLineWidth */
//	8035C8BC: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetLineWidth() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/GXSetLineWidth.s"
}
#pragma pop

/* 8035C8FC-8035C93C 0040+00 s=0 e=5 z=0  None .text      GXSetPointSize */
//	8035C8FC: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetPointSize() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/GXSetPointSize.s"
}
#pragma pop

/* 8035C93C-8035C984 0048+00 s=0 e=3 z=0  None .text      GXEnableTexOffsets */
//	8035C93C: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXEnableTexOffsets() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/GXEnableTexOffsets.s"
}
#pragma pop

/* 8035C984-8035C9AC 0028+00 s=0 e=33 z=5  None .text      GXSetCullMode */
//	8035C984: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetCullMode() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/GXSetCullMode.s"
}
#pragma pop

/* 8035C9AC-8035C9E0 0034+00 s=0 e=6 z=0  None .text      GXSetCoPlanar */
//	8035C9AC: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void GXSetCoPlanar() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/GXSetCoPlanar.s"
}
#pragma pop

/* 8035C9E0-8035CA04 0024+00 s=2 e=0 z=0  None .text      __GXSetGenMode */
//	8035C9E4: 80456580 (__GXData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __GXSetGenMode() {
    nofralloc
#include "asm/dolphin/gx/GXGeometry/__GXSetGenMode.s"
}
#pragma pop
