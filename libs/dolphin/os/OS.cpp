//
// Generated By: dol2asm
// Translation Unit: OS
//

#include "dolphin/os/OS.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dBgW {};

struct daBgObj_c {
    /* 80459BB4 */ void regist(dBgW*);
};

//
// Forward References:
//

extern "C" void __OSFPRInit();
extern "C" static void InquiryCallback();
extern "C" void OSInit();
extern "C" static void OSExceptionInit();
extern "C" void __OSDBIntegrator();
extern "C" void __OSDBJump();
extern "C" void __OSSetExceptionHandler();
extern "C" void __OSGetExceptionHandler();
extern "C" static void OSExceptionVector();
extern "C" void __DBVECTOR();
extern "C" void __OSEVSetNumber();
extern "C" void __OSEVEnd();
extern "C" static void OSDefaultExceptionHandler();
extern "C" void __OSPSInit();
extern "C" void __OSGetDIConfig();
extern "C" void OSRegisterVersion();

//
// External References:
//

SECTION_INIT void memset();
SECTION_INIT void memcpy();
extern "C" void PPCMtmmcr0();
extern "C" void PPCMtmmcr1();
extern "C" void PPCMtpmc1();
extern "C" void PPCMtpmc2();
extern "C" void PPCMtpmc3();
extern "C" void PPCMtpmc4();
extern "C" void PPCMfhid2();
extern "C" void PPCMthid2();
extern "C" void PPCDisableSpeculation();
extern "C" void PPCSetFpNonIEEEMode();
extern "C" void OSInitAlarm();
extern "C" void __OSInitAudioSystem();
extern "C" void DCInvalidateRange();
extern "C" void DCFlushRangeNoSync();
extern "C" void ICInvalidateRange();
extern "C" void ICFlashInvalidate();
extern "C" void __OSCacheInit();
extern "C" void __OSContextInit();
extern "C" void __OSUnhandledException();
extern "C" void __OSGetExecParams();
extern "C" void __OSSetInterruptHandler();
extern "C" void __OSInterruptInit();
extern "C" void __OSModuleInit();
extern "C" void __OSInitMemoryProtection();
extern "C" void __OSResetSWInterruptHandler();
extern "C" void __OSInitSram();
extern "C" void __OSInitSystemCall();
extern "C" void __OSThreadInit();
extern "C" void __OSGetSystemTime();
extern "C" void EXIInit();
extern "C" void SIInit();
extern "C" void __DBIsExceptionMarked();
extern "C" void DBPrintf();
extern "C" void DVDInit();
extern "C" void DVDInquiryAsync();
extern "C" void EnableMetroTRKInterrupts();
extern "C" extern u8 __DVDLongFileNameFlag[4];
extern "C" extern u8 __PADSpec[4 + 4 /* padding */];
extern "C" void _epilog();
extern "C" void regist__9daBgObj_cFP4dBgW();

//
// Declarations:
//

/* ############################################################################################## */
/* 80451600-80451604 000B00 0004+00 2/2 0/0 0/0 .sbss            BootInfo */
static u8 BootInfo[4];

/* 80451604-80451608 000B04 0004+00 2/2 0/0 0/0 .sbss            BI2DebugFlag */
static u8 BI2DebugFlag[4];

/* 80451608-8045160C 000B08 0004+00 1/1 0/0 0/0 .sbss            BI2DebugFlagHolder */
static u8 BI2DebugFlagHolder[4];

/* 8045160C-80451610 000B0C 0004+00 1/1 1/1 0/0 .sbss            __OSIsGcam */
extern u8 __OSIsGcam[4];
u8 __OSIsGcam[4];

/* 80451610-80451618 000B10 0008+00 1/1 0/0 0/0 .sbss            ZeroF */
static f64 ZeroF;

/* 80451618-80451620 000B18 0008+00 1/1 0/0 0/0 .sbss            ZeroPS */
static u8 ZeroPS[8];

/* 80339DD4-80339EFC 334714 0128+00 0/0 1/1 0/0 .text            __OSFPRInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSFPRInit() {
    nofralloc
#include "asm/dolphin/os/OS/__OSFPRInit.s"
}
#pragma pop

/* 80339EFC-80339F24 33483C 0028+00 0/0 5/5 0/0 .text            OSGetConsoleType */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 OSGetConsoleType() {
    nofralloc
#include "asm/dolphin/os/OS/OSGetConsoleType.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044BA60-8044BA80 078780 0020+00 2/2 0/0 0/0 .bss             DriveInfo */
static u8 DriveInfo[32];

/* 80339F24-80339F60 334864 003C+00 1/1 0/0 0/0 .text            InquiryCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void InquiryCallback() {
    nofralloc
#include "asm/dolphin/os/OS/InquiryCallback.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CF288-803CF2CC 02C3A8 0044+00 3/2 0/0 0/0 .data            @1 */
SECTION_DATA static u8 lit_1[68] = {
    0x3C, 0x3C, 0x20, 0x44, 0x6F, 0x6C, 0x70, 0x68, 0x69, 0x6E, 0x20, 0x53, 0x44, 0x4B,
    0x20, 0x2D, 0x20, 0x4F, 0x53, 0x09, 0x72, 0x65, 0x6C, 0x65, 0x61, 0x73, 0x65, 0x20,
    0x62, 0x75, 0x69, 0x6C, 0x64, 0x3A, 0x20, 0x4E, 0x6F, 0x76, 0x20, 0x31, 0x30, 0x20,
    0x32, 0x30, 0x30, 0x34, 0x20, 0x30, 0x36, 0x3A, 0x32, 0x36, 0x3A, 0x34, 0x31, 0x20,
    0x28, 0x30, 0x78, 0x32, 0x33, 0x30, 0x31, 0x29, 0x20, 0x3E, 0x3E, 0x00,
};

/* 803CF2CC-803CF2DC 02C3EC 000D+03 0/1 0/0 0/0 .data            @105 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_105[13 + 3 /* padding */] = {
    0x0A,
    0x44,
    0x6F,
    0x6C,
    0x70,
    0x68,
    0x69,
    0x6E,
    0x20,
    0x4F,
    0x53,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803CF2DC-803CF2F4 02C3FC 0016+02 0/1 0/0 0/0 .data            @106 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_106[22 + 2 /* padding */] = {
    0x4B,
    0x65,
    0x72,
    0x6E,
    0x65,
    0x6C,
    0x20,
    0x62,
    0x75,
    0x69,
    0x6C,
    0x74,
    0x20,
    0x3A,
    0x20,
    0x25,
    0x73,
    0x20,
    0x25,
    0x73,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803CF2F4-803CF300 02C414 000C+00 0/1 0/0 0/0 .data            @107 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_107[12] = {
    0x4E, 0x6F, 0x76, 0x20, 0x31, 0x30, 0x20, 0x32, 0x30, 0x30, 0x34, 0x00,
};
#pragma pop

/* 803CF300-803CF30C 02C420 0009+03 0/1 0/0 0/0 .data            @108 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_108[9 + 3 /* padding */] = {
    0x30,
    0x36,
    0x3A,
    0x32,
    0x36,
    0x3A,
    0x34,
    0x31,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803CF30C-803CF31C 02C42C 0010+00 0/1 0/0 0/0 .data            @109 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_109[16] = {
    0x43, 0x6F, 0x6E, 0x73, 0x6F, 0x6C, 0x65, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x3A, 0x20, 0x00,
};
#pragma pop

/* 803CF31C-803CF328 02C43C 000B+01 0/1 0/0 0/0 .data            @110 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_110[11 + 1 /* padding */] = {
    0x52,
    0x65,
    0x74,
    0x61,
    0x69,
    0x6C,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 803CF328-803CF338 02C448 000E+02 0/1 0/0 0/0 .data            @111 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_111[14 + 2 /* padding */] = {
    0x4D,
    0x61,
    0x63,
    0x20,
    0x45,
    0x6D,
    0x75,
    0x6C,
    0x61,
    0x74,
    0x6F,
    0x72,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803CF338-803CF348 02C458 000D+03 0/1 0/0 0/0 .data            @112 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_112[13 + 3 /* padding */] = {
    0x50,
    0x43,
    0x20,
    0x45,
    0x6D,
    0x75,
    0x6C,
    0x61,
    0x74,
    0x6F,
    0x72,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803CF348-803CF358 02C468 000D+03 0/1 0/0 0/0 .data            @113 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_113[13 + 3 /* padding */] = {
    0x45,
    0x50,
    0x50,
    0x43,
    0x20,
    0x41,
    0x72,
    0x74,
    0x68,
    0x75,
    0x72,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803CF358-803CF368 02C478 000D+03 0/1 0/0 0/0 .data            @114 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_114[13 + 3 /* padding */] = {
    0x45,
    0x50,
    0x50,
    0x43,
    0x20,
    0x4D,
    0x69,
    0x6E,
    0x6E,
    0x6F,
    0x77,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803CF368-803CF384 02C488 0019+03 0/1 0/0 0/0 .data            @115 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_115[25 + 3 /* padding */] = {
    0x44,
    0x65,
    0x76,
    0x65,
    0x6C,
    0x6F,
    0x70,
    0x6D,
    0x65,
    0x6E,
    0x74,
    0x20,
    0x48,
    0x57,
    0x25,
    0x64,
    0x20,
    0x28,
    0x25,
    0x30,
    0x38,
    0x78,
    0x29,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803CF384-803CF394 02C4A4 000E+02 0/1 0/0 0/0 .data            @117 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_117[14 + 2 /* padding */] = {
    0x4D,
    0x65,
    0x6D,
    0x6F,
    0x72,
    0x79,
    0x20,
    0x25,
    0x64,
    0x20,
    0x4D,
    0x42,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803CF394-803CF3AC 02C4B4 0015+03 0/1 0/0 0/0 .data            @118 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_118[21 + 3 /* padding */] = {
    0x41,
    0x72,
    0x65,
    0x6E,
    0x61,
    0x20,
    0x3A,
    0x20,
    0x30,
    0x78,
    0x25,
    0x78,
    0x20,
    0x2D,
    0x20,
    0x30,
    0x78,
    0x25,
    0x78,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 8044BA80-8044BAB0 0787A0 0030+00 0/1 0/0 0/0 .bss             DriveBlock */
#pragma push
#pragma force_active on
static u8 DriveBlock[48];
#pragma pop

/* 8044BAB0-8044BAD0 0787D0 001C+04 0/1 1/1 0/0 .bss             __OSRebootParams */
extern u8 __OSRebootParams[28 + 4 /* padding */];
u8 __OSRebootParams[28 + 4 /* padding */];

/* 80450980-80450984 -00001 0004+00 1/1 0/0 0/0 .sdata           __OSVersion */
SECTION_SDATA static void* __OSVersion = (void*)&lit_1;

/* 80450984-8045098C 000404 0006+02 1/1 0/0 0/0 .sdata           @116 */
SECTION_SDATA static u8 lit_116[6 + 2 /* padding */] = {
    0x25,
    0x30,
    0x38,
    0x78,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 80451620-80451624 000B20 0004+00 1/1 0/0 0/0 .sbss            AreWeInitialized */
static u8 AreWeInitialized[4];

/* 80451624-80451628 000B24 0004+00 3/3 0/0 0/0 .sbss            OSExceptionTable */
static u8 OSExceptionTable[4];

/* 80451628-80451630 000B28 0004+04 1/1 1/1 0/0 .sbss            __OSInIPL */
extern u8 __OSInIPL[4 + 4 /* padding */];
u8 __OSInIPL[4 + 4 /* padding */];

/* 80451630-80451634 000B30 0004+00 1/1 1/1 0/0 .sbss            __OSStartTime */
extern u8 __OSStartTime[4];
u8 __OSStartTime[4];

/* 80451634-80451638 000B34 0004+00 1/1 1/1 0/0 .sbss            None */
extern u8 data_80451634[4];
u8 data_80451634[4];

extern void* __ArenaHi;
extern void* _stack_end;

/* 80339F60-8033A440 3348A0 04E0+00 0/0 2/2 0/0 .text            OSInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSInit() {
    nofralloc
#include "asm/dolphin/os/OS/OSInit.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CF3AC-803CF3E8 02C4CC 003C+00 0/1 0/0 0/0 .data            __OSExceptionLocations */
#pragma push
#pragma force_active on
SECTION_DATA static u8 __OSExceptionLocations[60] = {
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00,
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x17, 0x00,
};
#pragma pop

/* 803CF3E8-803CF404 02C508 001B+01 0/1 0/0 0/0 .data            @152 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_152[27 + 1 /* padding */] = {
    0x49,
    0x6E,
    0x73,
    0x74,
    0x61,
    0x6C,
    0x6C,
    0x69,
    0x6E,
    0x67,
    0x20,
    0x4F,
    0x53,
    0x44,
    0x42,
    0x49,
    0x6E,
    0x74,
    0x65,
    0x67,
    0x72,
    0x61,
    0x74,
    0x6F,
    0x72,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 803CF404-803CF434 02C524 002E+02 0/1 0/0 0/0 .data            @153 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_153[46 + 2 /* padding */] = {
    0x3E,
    0x3E,
    0x3E,
    0x20,
    0x4F,
    0x53,
    0x49,
    0x4E,
    0x49,
    0x54,
    0x3A,
    0x20,
    0x65,
    0x78,
    0x63,
    0x65,
    0x70,
    0x74,
    0x69,
    0x6F,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x20,
    0x63,
    0x6F,
    0x6D,
    0x6D,
    0x61,
    0x6E,
    0x64,
    0x65,
    0x65,
    0x72,
    0x65,
    0x64,
    0x20,
    0x62,
    0x79,
    0x20,
    0x54,
    0x52,
    0x4B,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803CF434-803CF464 02C554 002F+01 0/1 0/0 0/0 .data            @154 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_154[47 + 1 /* padding */] = {
    0x3E,
    0x3E,
    0x3E,
    0x20,
    0x4F,
    0x53,
    0x49,
    0x4E,
    0x49,
    0x54,
    0x3A,
    0x20,
    0x65,
    0x78,
    0x63,
    0x65,
    0x70,
    0x74,
    0x69,
    0x6F,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x20,
    0x76,
    0x65,
    0x63,
    0x74,
    0x6F,
    0x72,
    0x65,
    0x64,
    0x20,
    0x74,
    0x6F,
    0x20,
    0x64,
    0x65,
    0x62,
    0x75,
    0x67,
    0x67,
    0x65,
    0x72,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 803CF464-803CF480 02C584 001B+01 0/1 0/0 0/0 .data            @155 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_155[27 + 1 /* padding */] = {
    0x45,
    0x78,
    0x63,
    0x65,
    0x70,
    0x74,
    0x69,
    0x6F,
    0x6E,
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
    0x2E,
    0x2E,
    0x2E,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 8033A440-8033A6C0 334D80 0280+00 1/1 0/0 0/0 .text            OSExceptionInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void OSExceptionInit() {
    nofralloc
#include "asm/dolphin/os/OS/OSExceptionInit.s"
}
#pragma pop

/* 8033A6C0-8033A6E4 335000 0024+00 1/1 0/0 0/0 .text            __OSDBIntegrator */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSDBIntegrator() {
    nofralloc
#include "asm/dolphin/os/OS/__OSDBIntegrator.s"
}
#pragma pop

/* 8033A6E4-8033A6E8 335024 0004+00 1/1 0/0 0/0 .text            __OSDBJump */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSDBJump() {
    nofralloc
#include "asm/dolphin/os/OS/__OSDBJump.s"
}
#pragma pop

/* 8033A6E8-8033A704 335028 001C+00 1/1 3/3 0/0 .text            __OSSetExceptionHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSSetExceptionHandler() {
    nofralloc
#include "asm/dolphin/os/OS/__OSSetExceptionHandler.s"
}
#pragma pop

/* 8033A704-8033A718 335044 0014+00 0/0 1/1 0/0 .text            __OSGetExceptionHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSGetExceptionHandler() {
    nofralloc
#include "asm/dolphin/os/OS/__OSGetExceptionHandler.s"
}
#pragma pop

/* 8033A718-8033A770 335058 0058+00 1/1 0/0 0/0 .text            OSExceptionVector */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void OSExceptionVector() {
    nofralloc
#include "asm/dolphin/os/OS/OSExceptionVector.s"
}
#pragma pop

/* 8033A770-8033A780 3350B0 0010+00 1/1 0/0 0/0 .text            __DBVECTOR */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DBVECTOR() {
    nofralloc
#include "asm/dolphin/os/OS/__DBVECTOR.s"
}
#pragma pop

/* 8033A780-8033A7B0 3350C0 0030+00 1/1 0/0 0/0 .text            __OSEVSetNumber */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSEVSetNumber() {
    nofralloc
#include "asm/dolphin/os/OS/__OSEVSetNumber.s"
}
#pragma pop

/* 8033A7B0-8033A7B4 3350F0 0004+00 1/1 0/0 0/0 .text            __OSEVEnd */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSEVEnd() {
    nofralloc
#include "asm/dolphin/os/OS/__OSEVEnd.s"
}
#pragma pop

/* 8033A7B4-8033A80C 3350F4 0058+00 2/2 0/0 0/0 .text            OSDefaultExceptionHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void OSDefaultExceptionHandler() {
    nofralloc
#include "asm/dolphin/os/OS/OSDefaultExceptionHandler.s"
}
#pragma pop

/* 8033A80C-8033A860 33514C 0054+00 0/0 1/1 0/0 .text            __OSPSInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSPSInit() {
    nofralloc
#include "asm/dolphin/os/OS/__OSPSInit.s"
}
#pragma pop

/* 8033A860-8033A874 3351A0 0014+00 0/0 1/1 0/0 .text            __OSGetDIConfig */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSGetDIConfig() {
    nofralloc
#include "asm/dolphin/os/OS/__OSGetDIConfig.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045098C-80450990 00040C 0004+00 1/1 0/0 0/0 .sdata           @163 */
SECTION_SDATA static u32 lit_163 = 0x25730A00;

/* 8033A874-8033A8A0 3351B4 002C+00 1/1 11/11 0/0 .text            OSRegisterVersion */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSRegisterVersion() {
    nofralloc
#include "asm/dolphin/os/OS/OSRegisterVersion.s"
}
#pragma pop
