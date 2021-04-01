//
// Generated By: dol2asm
// Translation Unit: OSCache
//

#include "dolphin/os/OSCache.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void DCEnable();
extern "C" void DCInvalidateRange();
extern "C" void DCFlushRange();
extern "C" void DCStoreRange();
extern "C" void DCFlushRangeNoSync();
extern "C" void DCStoreRangeNoSync();
extern "C" void DCZeroRange();
extern "C" void ICInvalidateRange();
extern "C" void ICFlashInvalidate();
extern "C" static void ICEnable();
extern "C" static void __LCEnable();
extern "C" void LCEnable();
extern "C" void LCDisable();
extern "C" static void LCStoreBlocks();
extern "C" void LCStoreData();
extern "C" void LCQueueWait();
extern "C" static void L2GlobalInvalidate();
extern "C" static void DMAErrorHandler();
extern "C" void __OSCacheInit();
extern "C" extern u8 OSCache__lit_84[24];
extern "C" extern u8 OSCache__lit_85[27 + 1 /* padding */];
extern "C" extern u8 OSCache__lit_86[48];
extern "C" extern u8 lit_87[60];
extern "C" extern u8 lit_88[55 + 1 /* padding */];
extern "C" extern u8 lit_89[63 + 1 /* padding */];
extern "C" extern u8 lit_90[41 + 3 /* padding */];
extern "C" extern u8 lit_91[29 + 3 /* padding */];
extern "C" extern u8 lit_92[25 + 3 /* padding */];
extern "C" extern u8 lit_104[25 + 3 /* padding */];
extern "C" extern u8 OSCache__lit_105[25 + 3 /* padding */];
extern "C" extern u8 OSCache__lit_106[22 + 2 /* padding */];
extern "C" extern u8 OSCache__lit_107[46 + 6 /* padding */];

//
// External References:
//

extern "C" void OSReport();
extern "C" void PPCMfmsr();
extern "C" void PPCMtmsr();
extern "C" void PPCMfhid0();
extern "C" void PPCMfl2cr();
extern "C" void PPCMtl2cr();
extern "C" void PPCHalt();
extern "C" void PPCMfhid2();
extern "C" void PPCMthid2();
extern "C" void OSDumpContext();
extern "C" void OSSetErrorHandler();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void DBPrintf();

//
// Declarations:
//

/* 8033B56C-8033B580 0014+00 s=1 e=0 z=0  None .text      DCEnable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void DCEnable() {
    nofralloc
#include "asm/dolphin/os/OSCache/DCEnable.s"
}
#pragma pop

/* 8033B580-8033B5AC 002C+00 s=0 e=30 z=1  None .text      DCInvalidateRange */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DCInvalidateRange() {
    nofralloc
#include "asm/dolphin/os/OSCache/DCInvalidateRange.s"
}
#pragma pop

/* 8033B5AC-8033B5DC 0030+00 s=0 e=11 z=0  None .text      DCFlushRange */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DCFlushRange() {
    nofralloc
#include "asm/dolphin/os/OSCache/DCFlushRange.s"
}
#pragma pop

/* 8033B5DC-8033B60C 0030+00 s=0 e=54 z=1  None .text      DCStoreRange */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DCStoreRange() {
    nofralloc
#include "asm/dolphin/os/OSCache/DCStoreRange.s"
}
#pragma pop

/* 8033B60C-8033B638 002C+00 s=0 e=2 z=0  None .text      DCFlushRangeNoSync */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DCFlushRangeNoSync() {
    nofralloc
#include "asm/dolphin/os/OSCache/DCFlushRangeNoSync.s"
}
#pragma pop

/* 8033B638-8033B664 002C+00 s=0 e=13 z=3  None .text      DCStoreRangeNoSync */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DCStoreRangeNoSync() {
    nofralloc
#include "asm/dolphin/os/OSCache/DCStoreRangeNoSync.s"
}
#pragma pop

/* 8033B664-8033B690 002C+00 s=0 e=1 z=1  None .text      DCZeroRange */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void DCZeroRange() {
    nofralloc
#include "asm/dolphin/os/OSCache/DCZeroRange.s"
}
#pragma pop

/* 8033B690-8033B6C4 0034+00 s=0 e=6 z=0  None .text      ICInvalidateRange */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void ICInvalidateRange() {
    nofralloc
#include "asm/dolphin/os/OSCache/ICInvalidateRange.s"
}
#pragma pop

/* 8033B6C4-8033B6D4 0010+00 s=0 e=5 z=0  None .text      ICFlashInvalidate */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void ICFlashInvalidate() {
    nofralloc
#include "asm/dolphin/os/OSCache/ICFlashInvalidate.s"
}
#pragma pop

/* 8033B6D4-8033B6E8 0014+00 s=1 e=0 z=0  None .text      ICEnable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void ICEnable() {
    nofralloc
#include "asm/dolphin/os/OSCache/ICEnable.s"
}
#pragma pop

/* 8033B6E8-8033B7B4 00CC+00 s=1 e=0 z=0  None .text      __LCEnable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __LCEnable() {
    nofralloc
#include "asm/dolphin/os/OSCache/__LCEnable.s"
}
#pragma pop

/* 8033B7B4-8033B7EC 0038+00 s=0 e=0 z=1  None .text      LCEnable */
//	8033B7C4: 8033D6F4 (OSDisableInterrupts)
//	8033B7CC: 8033B6E8 (__LCEnable)
//	8033B7D4: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void LCEnable() {
    nofralloc
#include "asm/dolphin/os/OSCache/LCEnable.s"
}
#pragma pop

/* 8033B7EC-8033B814 0028+00 s=0 e=2 z=1  None .text      LCDisable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void LCDisable() {
    nofralloc
#include "asm/dolphin/os/OSCache/LCDisable.s"
}
#pragma pop

/* 8033B814-8033B838 0024+00 s=1 e=0 z=0  None .text      LCStoreBlocks */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void LCStoreBlocks() {
    nofralloc
#include "asm/dolphin/os/OSCache/LCStoreBlocks.s"
}
#pragma pop

/* 8033B838-8033B8E4 00AC+00 s=0 e=0 z=3  None .text      LCStoreData */
//	8033B890: 8033B814 (LCStoreBlocks)
//	8033B8A8: 8033B814 (LCStoreBlocks)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void LCStoreData() {
    nofralloc
#include "asm/dolphin/os/OSCache/LCStoreData.s"
}
#pragma pop

/* 8033B8E4-8033B8F8 0014+00 s=0 e=0 z=3  None .text      LCQueueWait */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void LCQueueWait() {
    nofralloc
#include "asm/dolphin/os/OSCache/LCQueueWait.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CF510-803CF53C 0029+03 s=3 e=0 z=0  None .data      @63 */
SECTION_DATA static u8 lit_63[41 + 3 /* padding */] = {
    0x3E,
    0x3E,
    0x3E,
    0x20,
    0x4C,
    0x32,
    0x20,
    0x49,
    0x4E,
    0x56,
    0x41,
    0x4C,
    0x49,
    0x44,
    0x41,
    0x54,
    0x45,
    0x20,
    0x3A,
    0x20,
    0x53,
    0x48,
    0x4F,
    0x55,
    0x4C,
    0x44,
    0x20,
    0x4E,
    0x45,
    0x56,
    0x45,
    0x52,
    0x20,
    0x48,
    0x41,
    0x50,
    0x50,
    0x45,
    0x4E,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 8033B8F8-8033B990 0098+00 s=1 e=0 z=0  None .text      L2GlobalInvalidate */
//	8033B90C: 80339CE0 (PPCMfl2cr)
//	8033B914: 80339CE8 (PPCMtl2cr)
//	8033B91C: 80339CE0 (PPCMfl2cr)
//	8033B924: 80339CE8 (PPCMtl2cr)
//	8033B930: 80339CE0 (PPCMfl2cr)
//	8033B940: 80339CE0 (PPCMfl2cr)
//	8033B948: 80339CE8 (PPCMtl2cr)
//	8033B950: 803CF510 (lit_63)
//	8033B954: 803CF510 (lit_63)
//	8033B968: 80346434 (DBPrintf)
//	8033B96C: 80339CE0 (PPCMfl2cr)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void L2GlobalInvalidate() {
    nofralloc
#include "asm/dolphin/os/OSCache/L2GlobalInvalidate.s"
}
#pragma pop

/* 8033B990-8033BAF0 0160+00 s=1 e=0 z=0  None .text      DMAErrorHandler */
//	8033B9F0: 803CF510 (lit_63)
//	8033B9F4: 803CF510 (lit_63)
//	8033B9F8: 80339D8C (PPCMfhid2)
//	8033BA08: 80006ABC (OSReport)
//	8033BA1C: 80006ABC (OSReport)
//	8033BA44: 80006ABC (OSReport)
//	8033BA4C: 8033C0E0 (OSDumpContext)
//	8033BA50: 80339D00 (PPCHalt)
//	8033BA5C: 80006ABC (OSReport)
//	8033BA68: 80006ABC (OSReport)
//	8033BA80: 80006ABC (OSReport)
//	8033BA98: 80006ABC (OSReport)
//	8033BAB0: 80006ABC (OSReport)
//	8033BAC8: 80006ABC (OSReport)
//	8033BAD0: 80339D94 (PPCMthid2)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void DMAErrorHandler() {
    nofralloc
#include "asm/dolphin/os/OSCache/DMAErrorHandler.s"
}
#pragma pop

/* 8033BAF0-8033BBE4 00F4+00 s=0 e=2 z=0  None .text      __OSCacheInit */
//	8033BB04: 803CF510 (lit_63)
//	8033BB08: 803CF510 (lit_63)
//	8033BB0C: 80339CD0 (PPCMfhid0)
//	8033BB1C: 8033B6D4 (ICEnable)
//	8033BB28: 80346434 (DBPrintf)
//	8033BB2C: 80339CD0 (PPCMfhid0)
//	8033BB3C: 8033B56C (DCEnable)
//	8033BB48: 80346434 (DBPrintf)
//	8033BB4C: 80339CE0 (PPCMfl2cr)
//	8033BB5C: 80339CC0 (PPCMfmsr)
//	8033BB6C: 80339CC8 (PPCMtmsr)
//	8033BB78: 80339CE0 (PPCMfl2cr)
//	8033BB80: 80339CE8 (PPCMtl2cr)
//	8033BB88: 8033B8F8 (L2GlobalInvalidate)
//	8033BB90: 80339CC8 (PPCMtmsr)
//	8033BB94: 80339CE0 (PPCMfl2cr)
//	8033BBA0: 80339CE8 (PPCMtl2cr)
//	8033BBAC: 80346434 (DBPrintf)
//	8033BBB0: 8033B990 (DMAErrorHandler)
//	8033BBB4: 8033B990 (DMAErrorHandler)
//	8033BBBC: 8033C580 (OSSetErrorHandler)
//	8033BBC8: 80346434 (DBPrintf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSCacheInit() {
    nofralloc
#include "asm/dolphin/os/OSCache/__OSCacheInit.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CF53C-803CF554 0018+00 s=0 e=0 z=0  None .data      @84 */
SECTION_DATA u8 OSCache__lit_84[24] = {
    0x4D, 0x61, 0x63, 0x68, 0x69, 0x6E, 0x65, 0x20, 0x63, 0x68, 0x65, 0x63,
    0x6B, 0x20, 0x72, 0x65, 0x63, 0x65, 0x69, 0x76, 0x65, 0x64, 0x0A, 0x00,
};

/* 803CF554-803CF570 001B+01 s=0 e=0 z=0  None .data      @85 */
SECTION_DATA u8 OSCache__lit_85[27 + 1 /* padding */] = {
    0x48,
    0x49,
    0x44,
    0x32,
    0x20,
    0x3D,
    0x20,
    0x30,
    0x78,
    0x25,
    0x78,
    0x20,
    0x20,
    0x20,
    0x53,
    0x52,
    0x52,
    0x31,
    0x20,
    0x3D,
    0x20,
    0x30,
    0x78,
    0x25,
    0x78,
    0x0A,
    0x00,
    /* padding */
    0x00,
};

/* 803CF570-803CF5A0 0030+00 s=0 e=0 z=0  None .data      @86 */
SECTION_DATA u8 OSCache__lit_86[48] = {
    0x4D, 0x61, 0x63, 0x68, 0x69, 0x6E, 0x65, 0x20, 0x63, 0x68, 0x65, 0x63, 0x6B, 0x20, 0x77, 0x61,
    0x73, 0x20, 0x6E, 0x6F, 0x74, 0x20, 0x44, 0x4D, 0x41, 0x2F, 0x6C, 0x6F, 0x63, 0x6B, 0x65, 0x64,
    0x20, 0x63, 0x61, 0x63, 0x68, 0x65, 0x20, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x0A, 0x00,
};

/* 803CF5A0-803CF5DC 003C+00 s=0 e=0 z=0  None .data      @87 */
SECTION_DATA u8 lit_87[60] = {
    0x44, 0x4D, 0x41, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x48, 0x61, 0x6E, 0x64, 0x6C, 0x65, 0x72,
    0x28, 0x29, 0x3A, 0x20, 0x41, 0x6E, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x6F, 0x63,
    0x63, 0x75, 0x72, 0x72, 0x65, 0x64, 0x20, 0x77, 0x68, 0x69, 0x6C, 0x65, 0x20, 0x70, 0x72,
    0x6F, 0x63, 0x65, 0x73, 0x73, 0x69, 0x6E, 0x67, 0x20, 0x44, 0x4D, 0x41, 0x2E, 0x0A, 0x00,
};

/* 803CF5DC-803CF614 0037+01 s=0 e=0 z=0  None .data      @88 */
SECTION_DATA u8 lit_88[55 + 1 /* padding */] = {
    0x54,
    0x68,
    0x65,
    0x20,
    0x66,
    0x6F,
    0x6C,
    0x6C,
    0x6F,
    0x77,
    0x69,
    0x6E,
    0x67,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0x73,
    0x20,
    0x68,
    0x61,
    0x76,
    0x65,
    0x20,
    0x62,
    0x65,
    0x65,
    0x6E,
    0x20,
    0x64,
    0x65,
    0x74,
    0x65,
    0x63,
    0x74,
    0x65,
    0x64,
    0x20,
    0x61,
    0x6E,
    0x64,
    0x20,
    0x63,
    0x6C,
    0x65,
    0x61,
    0x72,
    0x65,
    0x64,
    0x20,
    0x3A,
    0x0A,
    0x00,
    /* padding */
    0x00,
};

/* 803CF614-803CF654 003F+01 s=0 e=0 z=0  None .data      @89 */
SECTION_DATA u8 lit_89[63 + 1 /* padding */] = {
    0x09,
    0x2D,
    0x20,
    0x52,
    0x65,
    0x71,
    0x75,
    0x65,
    0x73,
    0x74,
    0x65,
    0x64,
    0x20,
    0x61,
    0x20,
    0x6C,
    0x6F,
    0x63,
    0x6B,
    0x65,
    0x64,
    0x20,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x20,
    0x74,
    0x61,
    0x67,
    0x20,
    0x74,
    0x68,
    0x61,
    0x74,
    0x20,
    0x77,
    0x61,
    0x73,
    0x20,
    0x61,
    0x6C,
    0x72,
    0x65,
    0x61,
    0x64,
    0x79,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x74,
    0x68,
    0x65,
    0x20,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x0A,
    0x00,
    /* padding */
    0x00,
};

/* 803CF654-803CF680 0029+03 s=0 e=0 z=0  None .data      @90 */
SECTION_DATA u8 lit_90[41 + 3 /* padding */] = {
    0x09,
    0x2D,
    0x20,
    0x44,
    0x4D,
    0x41,
    0x20,
    0x61,
    0x74,
    0x74,
    0x65,
    0x6D,
    0x70,
    0x74,
    0x65,
    0x64,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x61,
    0x63,
    0x63,
    0x65,
    0x73,
    0x73,
    0x20,
    0x6E,
    0x6F,
    0x72,
    0x6D,
    0x61,
    0x6C,
    0x20,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 803CF680-803CF6A0 001D+03 s=0 e=0 z=0  None .data      @91 */
SECTION_DATA u8 lit_91[29 + 3 /* padding */] = {
    0x09,
    0x2D,
    0x20,
    0x44,
    0x4D,
    0x41,
    0x20,
    0x6D,
    0x69,
    0x73,
    0x73,
    0x65,
    0x64,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x64,
    0x61,
    0x74,
    0x61,
    0x20,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 803CF6A0-803CF6BC 0019+03 s=0 e=0 z=0  None .data      @92 */
SECTION_DATA u8 lit_92[25 + 3 /* padding */] = {
    0x09,
    0x2D,
    0x20,
    0x44,
    0x4D,
    0x41,
    0x20,
    0x71,
    0x75,
    0x65,
    0x75,
    0x65,
    0x20,
    0x6F,
    0x76,
    0x65,
    0x72,
    0x66,
    0x6C,
    0x6F,
    0x77,
    0x65,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 803CF6BC-803CF6D8 0019+03 s=0 e=0 z=0  None .data      @104 */
SECTION_DATA u8 lit_104[25 + 3 /* padding */] = {
    0x4C,
    0x31,
    0x20,
    0x69,
    0x2D,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x73,
    0x20,
    0x69,
    0x6E,
    0x69,
    0x74,
    0x69,
    0x61,
    0x6C,
    0x69,
    0x7A,
    0x65,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 803CF6D8-803CF6F4 0019+03 s=0 e=0 z=0  None .data      @105 */
SECTION_DATA u8 OSCache__lit_105[25 + 3 /* padding */] = {
    0x4C,
    0x31,
    0x20,
    0x64,
    0x2D,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x73,
    0x20,
    0x69,
    0x6E,
    0x69,
    0x74,
    0x69,
    0x61,
    0x6C,
    0x69,
    0x7A,
    0x65,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 803CF6F4-803CF70C 0016+02 s=0 e=0 z=0  None .data      @106 */
SECTION_DATA u8 OSCache__lit_106[22 + 2 /* padding */] = {
    0x4C,
    0x32,
    0x20,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x20,
    0x69,
    0x6E,
    0x69,
    0x74,
    0x69,
    0x61,
    0x6C,
    0x69,
    0x7A,
    0x65,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 803CF70C-803CF740 002E+06 s=0 e=0 z=0  None .data      @107 */
SECTION_DATA u8 OSCache__lit_107[46 + 6 /* padding */] = {
    0x4C,
    0x6F,
    0x63,
    0x6B,
    0x65,
    0x64,
    0x20,
    0x63,
    0x61,
    0x63,
    0x68,
    0x65,
    0x20,
    0x6D,
    0x61,
    0x63,
    0x68,
    0x69,
    0x6E,
    0x65,
    0x20,
    0x63,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x20,
    0x68,
    0x61,
    0x6E,
    0x64,
    0x6C,
    0x65,
    0x72,
    0x20,
    0x69,
    0x6E,
    0x73,
    0x74,
    0x61,
    0x6C,
    0x6C,
    0x65,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};
