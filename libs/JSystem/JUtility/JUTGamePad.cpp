//
// Generated By: dol2asm
// Translation Unit: JUTGamePad
//

#include "JSystem/JUtility/JUTGamePad.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct PADStatus {};

struct JUTGamePadLongPress {
    /* 802E1AFC */ void checkCallback(int, u32);
};

struct JUTGamePad {
    struct EPadPort {};

    struct CButton {
        /* 802E1050 */ void clear();
        /* 802E108C */ void update(PADStatus const*, u32);
        /* 802E1A7C */ void setRepeat(u32, u32, u32);
        /* 802E1CD8 */ CButton();
    };

    struct EStickMode {};

    struct EWhichStick {};

    struct CStick {
        /* 802E121C */ void clear();
        /* 802E1238 */ void update(s8, s8, JUTGamePad::EStickMode, JUTGamePad::EWhichStick, u32);
        /* 802E1500 */ void getButton(u32);
        /* 802E1CA8 */ CStick();
    };

    struct CRumble {
        struct ERumble {};

        /* 802E15B4 */ void clear();
        /* 802E15D8 */ void clear(JUTGamePad*);
        /* 802E1634 */ void startMotor(int);
        /* 802E168C */ void stopMotor(int, bool);
        /* 802E1720 */ void update(s16);
        /* 802E18A4 */ void triggerPatternedRumble(u32);
        /* 802E18CC */ void startPatternedRumble(void*, JUTGamePad::CRumble::ERumble, u32);
        /* 802E1948 */ void stopPatternedRumble(s16);
        /* 802E1978 */ void stopPatternedRumbleAtThePeriod();
        /* 802E19D8 */ void setEnabled(u32);
    };

    /* 802E06DC */ JUTGamePad(JUTGamePad::EPadPort);
    /* 802E07B0 */ ~JUTGamePad();
    /* 802E085C */ void initList();
    /* 802E0898 */ void init();
    /* 802E08D0 */ void clear();
    /* 802E08E4 */ void read();
    /* 802E0BBC */ void assign();
    /* 802E0C6C */ void checkResetCallback(s64);
    /* 802E0CD8 */ void update();
    /* 802E0FA4 */ void checkResetSwitch();
    /* 802E1024 */ void clearForReset();
    /* 802E199C */ void getGamePad(int);
    /* 802E1A98 */ void recalibrate(u32);
};

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
    /* 802DBE14 */ ~JSUPtrLink();
};

struct JSUPtrList {
    /* 802DBE74 */ JSUPtrList(bool);
    /* 802DBEAC */ ~JSUPtrList();
    /* 802DBF14 */ void initiate();
    /* 802DBF4C */ void append(JSUPtrLink*);
    /* 802DC15C */ void remove(JSUPtrLink*);
};

template <typename A0>
struct JSUList {};
/* JSUList<JUTGamePadLongPress> */
struct JSUList__template11 {
    /* 802E1C54 */ ~JSUList__template11();
};

/* JSUList<JUTGamePad> */
struct JSUList__template12 {
    /* 802E1D08 */ ~JSUList__template12();
};

struct JKRDisposer {
    /* 802D147C */ JKRDisposer();
    /* 802D14E4 */ ~JKRDisposer();
};

//
// Forward References:
//

static void getNumBit(u8*, int);

extern "C" void __ct__10JUTGamePadFQ210JUTGamePad8EPadPort();
extern "C" void __dt__10JUTGamePadFv();
extern "C" void initList__10JUTGamePadFv();
extern "C" void init__10JUTGamePadFv();
extern "C" void clear__10JUTGamePadFv();
extern "C" void read__10JUTGamePadFv();
extern "C" void assign__10JUTGamePadFv();
extern "C" void checkResetCallback__10JUTGamePadFx();
extern "C" void update__10JUTGamePadFv();
extern "C" void checkResetSwitch__10JUTGamePadFv();
extern "C" void clearForReset__10JUTGamePadFv();
extern "C" void clear__Q210JUTGamePad7CButtonFv();
extern "C" void update__Q210JUTGamePad7CButtonFPC9PADStatusUl();
extern "C" void clear__Q210JUTGamePad6CStickFv();
extern "C" void
update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl();
extern "C" void getButton__Q210JUTGamePad6CStickFUl();
extern "C" void clear__Q210JUTGamePad7CRumbleFv();
extern "C" void clear__Q210JUTGamePad7CRumbleFP10JUTGamePad();
extern "C" void startMotor__Q210JUTGamePad7CRumbleFi();
extern "C" void stopMotor__Q210JUTGamePad7CRumbleFib();
extern "C" static void getNumBit__FPUci();
extern "C" void update__Q210JUTGamePad7CRumbleFs();
extern "C" void triggerPatternedRumble__Q210JUTGamePad7CRumbleFUl();
extern "C" void startPatternedRumble__Q210JUTGamePad7CRumbleFPvQ310JUTGamePad7CRumble7ERumbleUl();
extern "C" void stopPatternedRumble__Q210JUTGamePad7CRumbleFs();
extern "C" void stopPatternedRumbleAtThePeriod__Q210JUTGamePad7CRumbleFv();
extern "C" void getGamePad__10JUTGamePadFi();
extern "C" void setEnabled__Q210JUTGamePad7CRumbleFUl();
extern "C" void setRepeat__Q210JUTGamePad7CButtonFUlUlUl();
extern "C" void recalibrate__10JUTGamePadFUl();
extern "C" void checkCallback__19JUTGamePadLongPressFiUl();
extern "C" void __sinit_JUTGamePad_cpp();
extern "C" void func_802E1C54();
extern "C" void __ct__Q210JUTGamePad6CStickFv();
extern "C" void __ct__Q210JUTGamePad7CButtonFv();
extern "C" void func_802E1D08();
extern "C" extern void* __vt__10JUTGamePad[3 + 1 /* padding */];
extern "C" extern u8 mPadStatus__10JUTGamePad[48];
extern "C" extern u8 mPadMStick__10JUTGamePad[64];
extern "C" extern u8 mPadSStick__10JUTGamePad[64];
extern "C" extern u8 lit_1373[12];
extern "C" extern u8 sAnalogMode__10JUTGamePad[4];
extern "C" extern u8 sRumbleSupported__10JUTGamePad[4];
extern "C" extern u8 sCallback__Q210JUTGamePad13C3ButtonReset[4];
extern "C" extern u8 sCallbackArg__Q210JUTGamePad13C3ButtonReset[4 + 4 /* padding */];
extern "C" extern u8 struct_80451500[4];

//
// External References:
//

void operator delete(void*);

extern "C" void __dl__FPv();
extern "C" void __ct__11JKRDisposerFv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void __ct__10JSUPtrListFb();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void OSGetResetSwitchState();
extern "C" void OSGetTime();
extern "C" void PADClamp();
extern "C" void PADClampCircle();
extern "C" void PADReset();
extern "C" void PADRecalibrate();
extern "C" void PADInit();
extern "C" void PADRead();
extern "C" void PADControlMotor();
extern "C" void PADSetSpec();
extern "C" void PADSetAnalogMode();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void atan2();
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC5F0-803CC600 0010+00 s=3 e=0 z=0  None .data      sChannelMask__Q210JUTGamePad7CRumble */
SECTION_DATA static u8 sChannelMask__Q210JUTGamePad7CRumble[16] = {
    0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
};

/* 803CC600-803CC610 0010+00 s=2 e=0 z=0  None .data      channel_mask */
SECTION_DATA static u8 channel_mask[16] = {
    0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
};

/* 803CC610-803CC620 000C+04 s=2 e=0 z=0  None .data      __vt__10JUTGamePad */
SECTION_DATA void* __vt__10JUTGamePad[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10JUTGamePadFv,
    /* padding */
    NULL,
};

/* 804343D8-804343E4 000C+00 s=3 e=0 z=0  None .bss       @525 */
static u8 lit_525[12];

/* 804343E4-804343F0 000C+00 s=4 e=0 z=0  None .bss       mPadList__10JUTGamePad */
static u8 mPadList__10JUTGamePad[12];

/* 804514D0-804514D4 0004+00 s=1 e=0 z=0  None .sbss      None */
static u8 data_804514D0[4];

/* 804514D4-804514D8 0004+00 s=3 e=0 z=0  None .sbss      mPadAssign__10JUTGamePad */
static u8 mPadAssign__10JUTGamePad[4];

/* 802E06DC-802E07B0 00D4+00 s=0 e=4 z=0  None .text      __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
 */
//	802E06F8: 802D147C (__ct__11JKRDisposerFv)
//	802E06FC: 803CC610 (__vt__10JUTGamePad)
//	802E0700: 803CC610 (__vt__10JUTGamePad)
//	802E070C: 802E1050 (clear__Q210JUTGamePad7CButtonFv)
//	802E0714: 802E121C (clear__Q210JUTGamePad6CStickFv)
//	802E071C: 802E121C (clear__Q210JUTGamePad6CStickFv)
//	802E0728: 802E15D8 (clear__Q210JUTGamePad7CRumbleFP10JUTGamePad)
//	802E0734: 802DBDFC (__ct__10JSUPtrLinkFPv)
//	802E0754: 804514D4 (mPadAssign__10JUTGamePad)
//	802E0764: 802E085C (initList__10JUTGamePadFv)
//	802E0768: 804343E4 (mPadList__10JUTGamePad)
//	802E076C: 804343E4 (mPadList__10JUTGamePad)
//	802E0774: 802DBF4C (append__10JSUPtrListFP10JSUPtrLink)
//	802E077C: 802E0CD8 (update__10JUTGamePadFv)
//	802E0790: 802E08D0 (clear__10JUTGamePadFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTGamePad::JUTGamePad(JUTGamePad::EPadPort param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/__ct__10JUTGamePadFQ210JUTGamePad8EPadPort.s"
}
#pragma pop

/* 802E07B0-802E085C 00AC+00 s=1 e=2 z=0  None .text      __dt__10JUTGamePadFv */
//	802E07D0: 803CC610 (__vt__10JUTGamePad)
//	802E07D4: 803CC610 (__vt__10JUTGamePad)
//	802E07E8: 804514D4 (mPadAssign__10JUTGamePad)
//	802E0800: 804343E4 (mPadList__10JUTGamePad)
//	802E0804: 804343E4 (mPadList__10JUTGamePad)
//	802E080C: 802DC15C (remove__10JSUPtrListFP10JSUPtrLink)
//	802E0820: 802DBE14 (__dt__10JSUPtrLinkFv)
//	802E082C: 802D14E4 (__dt__11JKRDisposerFv)
//	802E083C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTGamePad::~JUTGamePad() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/__dt__10JUTGamePadFv.s"
}
#pragma pop

/* 802E085C-802E0898 003C+00 s=1 e=0 z=0  None .text      initList__10JUTGamePadFv */
//	802E0868: 804514D0 (data_804514D0)
//	802E0874: 804343E4 (mPadList__10JUTGamePad)
//	802E0878: 804343E4 (mPadList__10JUTGamePad)
//	802E087C: 802DBF14 (initiate__10JSUPtrListFv)
//	802E0884: 804514D0 (data_804514D0)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::initList() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/initList__10JUTGamePadFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804514D8-804514DC 0004+00 s=2 e=0 z=0  None .sbss      sSuppressPadReset__10JUTGamePad */
static u8 sSuppressPadReset__10JUTGamePad[4];

/* 804514DC-804514E0 0004+00 s=1 e=1 z=0  None .sbss      sAnalogMode__10JUTGamePad */
u8 sAnalogMode__10JUTGamePad[4];

/* 802E0898-802E08D0 0038+00 s=0 e=1 z=0  None .text      init__10JUTGamePadFv */
//	802E08A8: 8034F258 (PADSetSpec)
//	802E08B0: 804514DC (sAnalogMode__10JUTGamePad)
//	802E08B8: 8034FA10 (PADSetAnalogMode)
//	802E08BC: 8034ED50 (PADInit)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::init() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/init__10JUTGamePadFv.s"
}
#pragma pop

/* 802E08D0-802E08E4 0014+00 s=1 e=0 z=0  None .text      clear__10JUTGamePadFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::clear() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/clear__10JUTGamePadFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804508D8-804508DC 0004+00 s=1 e=0 z=0  None .sdata     sStickMode__10JUTGamePad */
SECTION_SDATA static u32 sStickMode__10JUTGamePad = 0x00000001;

/* 804508DC-804508E0 0004+00 s=2 e=0 z=0  None .sdata     sClampMode__10JUTGamePad */
SECTION_SDATA static u32 sClampMode__10JUTGamePad = 0x00000001;

/* 804514E0-804514E4 0004+00 s=1 e=2 z=0  None .sbss      sRumbleSupported__10JUTGamePad */
u8 sRumbleSupported__10JUTGamePad[4];

/* 802E08E4-802E0BBC 02D8+00 s=0 e=2 z=0  None .text      read__10JUTGamePadFv */
//	802E08F4: 803621C0 (_savegpr_22)
//	802E08F8: 804343D8 (lit_525)
//	802E08FC: 804343D8 (lit_525)
//	802E0904: 8034EEA0 (PADRead)
//	802E0908: 804514E0 (sRumbleSupported__10JUTGamePad)
//	802E090C: 804508DC (sClampMode__10JUTGamePad)
//	802E092C: 8034E094 (PADClamp)
//	802E0938: 8034E1A8 (PADClampCircle)
//	802E097C: 804508D8 (sStickMode__10JUTGamePad)
//	802E0990: 802E1238
//(update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl)
//	802E09A8: 804508D8 (sStickMode__10JUTGamePad)
//	802E09B4: 802E1238
//(update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl)
//	802E09CC: 802E108C (update__Q210JUTGamePad7CButtonFPC9PADStatusUl)
//	802E09F0: 804508D8 (sStickMode__10JUTGamePad)
//	802E09FC: 802E1238
//(update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl)
//	802E0A10: 804508D8 (sStickMode__10JUTGamePad)
//	802E0A1C: 802E1238
//(update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl)
//	802E0A30: 802E108C (update__Q210JUTGamePad7CButtonFPC9PADStatusUl)
//	802E0A34: 804514D8 (sSuppressPadReset__10JUTGamePad)
//	802E0AC0: 804508D8 (sStickMode__10JUTGamePad)
//	802E0ACC: 802E1238
//(update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl)
//	802E0AE4: 804508D8 (sStickMode__10JUTGamePad)
//	802E0AF0: 802E1238
//(update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl)
//	802E0B0C: 802E108C (update__Q210JUTGamePad7CButtonFPC9PADStatusUl)
//	802E0B24: 802E0BBC (assign__10JUTGamePadFv)
//	802E0B2C: 802E0CD8 (update__10JUTGamePadFv)
//	802E0B98: 8034EB2C (PADReset)
//	802E0B9C: 802E0FA4 (checkResetSwitch__10JUTGamePadFv)
//	802E0BA0: 804514E0 (sRumbleSupported__10JUTGamePad)
//	802E0BA8: 8036220C (_restgpr_22)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::read() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/read__10JUTGamePadFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804343F0-80434420 0030+00 s=1 e=1 z=0  None .bss       mPadStatus__10JUTGamePad */
u8 mPadStatus__10JUTGamePad[48];

/* 80434420-804344E0 00C0+00 s=1 e=0 z=0  None .bss       mPadButton__10JUTGamePad */
static u8 mPadButton__10JUTGamePad[192];

/* 802E0BBC-802E0C6C 00B0+00 s=1 e=0 z=0  None .text      assign__10JUTGamePadFv */
//	802E0BD8: 804343F0 (mPadStatus__10JUTGamePad)
//	802E0BDC: 804343F0 (mPadStatus__10JUTGamePad)
//	802E0BE0: 804514D4 (mPadAssign__10JUTGamePad)
//	802E0C1C: 80434420 (mPadButton__10JUTGamePad)
//	802E0C20: 80434420 (mPadButton__10JUTGamePad)
//	802E0C34: 802E1A7C (setRepeat__Q210JUTGamePad7CButtonFUlUlUl)
//	802E0C40: 802E15D8 (clear__Q210JUTGamePad7CRumbleFP10JUTGamePad)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::assign() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/assign__10JUTGamePadFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804514E4-804514E8 0004+00 s=5 e=0 z=0  None .sbss      mStatus__Q210JUTGamePad7CRumble */
static u8 mStatus__Q210JUTGamePad7CRumble[4];

/* 804514E8-804514EC 0004+00 s=5 e=0 z=0  None .sbss      mEnabled__Q210JUTGamePad7CRumble */
static u8 mEnabled__Q210JUTGamePad7CRumble[4];

/* 804514EC-804514F0 0004+00 s=2 e=4 z=0  None .sbss      sCallback__Q210JUTGamePad13C3ButtonReset
 */
u8 sCallback__Q210JUTGamePad13C3ButtonReset[4];

/* 804514F0-804514F8 0004+04 s=2 e=4 z=0  None .sbss sCallbackArg__Q210JUTGamePad13C3ButtonReset
 */
u8 sCallbackArg__Q210JUTGamePad13C3ButtonReset[4 + 4 /* padding */];

/* 804514F8-804514FC 0004+00 s=2 e=0 z=0  None .sbss      sThreshold__Q210JUTGamePad13C3ButtonReset
 */
static u8 sThreshold__Q210JUTGamePad13C3ButtonReset[4];

/* 804514FC-80451500 0004+00 s=2 e=0 z=0  None .sbss      None */
static u8 data_804514FC[4];

/* 80451500-80451504 0004+00 s=3 e=6 z=0  None .sbss      None */
u8 struct_80451500[4];

/* 80451504-80451508 0004+00 s=2 e=0 z=0  None .sbss
 * sResetOccurredPort__Q210JUTGamePad13C3ButtonReset            */
static u8 sResetOccurredPort__Q210JUTGamePad13C3ButtonReset[4];

/* 802E0C6C-802E0CD8 006C+00 s=1 e=1 z=0  None .text      checkResetCallback__10JUTGamePadFx */
//	802E0C78: 804514F8 (sThreshold__Q210JUTGamePad13C3ButtonReset)
//	802E0C7C: 804514FC (data_804514FC)
//	802E0CA0: 80451501 (struct_80451500)
//	802E0CA8: 80451504 (sResetOccurredPort__Q210JUTGamePad13C3ButtonReset)
//	802E0CAC: 804514EC (sCallback__Q210JUTGamePad13C3ButtonReset)
//	802E0CBC: 804514F0 (sCallbackArg__Q210JUTGamePad13C3ButtonReset)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::checkResetCallback(s64 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/checkResetCallback__10JUTGamePadFx.s"
}
#pragma pop

/* ############################################################################################## */
/* 804344E0-80434520 0040+00 s=0 e=0 z=0  None .bss       mPadMStick__10JUTGamePad */
u8 mPadMStick__10JUTGamePad[64];

/* 80434520-80434560 0040+00 s=0 e=0 z=0  None .bss       mPadSStick__10JUTGamePad */
u8 mPadSStick__10JUTGamePad[64];

/* 80434560-8043456C 000C+00 s=0 e=0 z=0  None .bss       @1373 */
u8 lit_1373[12];

/* 8043456C-80434578 000C+00 s=1 e=0 z=0  None .bss       sPatternList__19JUTGamePadLongPress */
static u8 sPatternList__19JUTGamePadLongPress[12];

/* 804508E0-804508E4 0004+00 s=1 e=0 z=0  None .sdata     sPressPoint__Q210JUTGamePad6CStick */
SECTION_SDATA static f32 sPressPoint__Q210JUTGamePad6CStick = 0.5f;

/* 804508E4-804508E8 0004+00 s=1 e=0 z=0  None .sdata     sReleasePoint__Q210JUTGamePad6CStick */
SECTION_SDATA static f32 sReleasePoint__Q210JUTGamePad6CStick = 0.25f;

/* 804508E8-804508EC 0004+00 s=1 e=0 z=0  None .sdata sResetPattern__Q210JUTGamePad13C3ButtonReset
 */
SECTION_SDATA static u32 sResetPattern__Q210JUTGamePad13C3ButtonReset = 0x00001600;

/* 804508EC-804508F0 0004+00 s=1 e=0 z=0  None .sdata
 * sResetMaskPattern__Q210JUTGamePad13C3ButtonReset             */
SECTION_SDATA static u32 sResetMaskPattern__Q210JUTGamePad13C3ButtonReset = 0x0000FFFF;

/* 802E0CD8-802E0FA4 02CC+00 s=2 e=0 z=0  None .text      update__10JUTGamePadFv */
//	802E0CE8: 803621D8 (_savegpr_28)
//	802E0CF0: 804343D8 (lit_525)
//	802E0CF4: 804343D8 (lit_525)
//	802E0E3C: 804508E8 (sResetPattern__Q210JUTGamePad13C3ButtonReset)
//	802E0E44: 804508EC (sResetMaskPattern__Q210JUTGamePad13C3ButtonReset)
//	802E0E60: 80451501 (struct_80451500)
//	802E0E78: 803426FC (OSGetTime)
//	802E0E90: 802E0C6C (checkResetCallback__10JUTGamePadFx)
//	802E0EA0: 803426FC (OSGetTime)
//	802E0EAC: 8043456C (sPatternList__19JUTGamePadLongPress)
//	802E0EB0: 8043456C (sPatternList__19JUTGamePadLongPress)
//	802E0F04: 803426FC (OSGetTime)
//	802E0F24: 802E1AFC (checkCallback__19JUTGamePadLongPressFiUl)
//	802E0F38: 803426FC (OSGetTime)
//	802E0F88: 802E1720 (update__Q210JUTGamePad7CRumbleFs)
//	802E0F90: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::update() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/update__10JUTGamePadFv.s"
}
#pragma pop

/* 802E0FA4-802E1024 0080+00 s=1 e=0 z=0  None .text      checkResetSwitch__10JUTGamePadFv */
//	802E0FB0: 80451501 (struct_80451500)
//	802E0FBC: 8033FE70 (OSGetResetSwitchState)
//	802E0FCC: 80451500 (struct_80451500)
//	802E0FD4: 80451500 (struct_80451500)
//	802E0FE4: 80451501 (struct_80451500)
//	802E0FEC: 80451504 (sResetOccurredPort__Q210JUTGamePad13C3ButtonReset)
//	802E0FF0: 804514EC (sCallback__Q210JUTGamePad13C3ButtonReset)
//	802E1000: 804514F0 (sCallbackArg__Q210JUTGamePad13C3ButtonReset)
//	802E1010: 80451500 (struct_80451500)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::checkResetSwitch() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/checkResetSwitch__10JUTGamePadFv.s"
}
#pragma pop

/* 802E1024-802E1050 002C+00 s=0 e=1 z=0  None .text      clearForReset__10JUTGamePadFv */
//	802E1034: 802E19D8 (setEnabled__Q210JUTGamePad7CRumbleFUl)
//	802E103C: 802E1A98 (recalibrate__10JUTGamePadFUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::clearForReset() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/clearForReset__10JUTGamePadFv.s"
}
#pragma pop

/* 802E1050-802E108C 003C+00 s=2 e=0 z=0  None .text      clear__Q210JUTGamePad7CButtonFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CButton::clear() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/clear__Q210JUTGamePad7CButtonFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456018-80456020 0004+04 s=1 e=0 z=0  None .sdata2    @1047 */
SECTION_SDATA2 static f32 lit_1047[1 + 1 /* padding */] = {
    150.0f,
    /* padding */
    0.0f,
};

/* 80456020-80456028 0008+00 s=2 e=0 z=0  None .sdata2    @1050 */
SECTION_SDATA2 static f64 lit_1050 = 4503601774854144.0 /* cast s32 to float */;

/* 802E108C-802E121C 0190+00 s=1 e=0 z=0  None .text update__Q210JUTGamePad7CButtonFPC9PADStatusUl
 */
//	802E11CC: 80456020 (lit_1050)
//	802E11E8: 80456018 (lit_1047)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CButton::update(PADStatus const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/update__Q210JUTGamePad7CButtonFPC9PADStatusUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456028-80456030 0004+04 s=2 e=0 z=0  None .sdata2    @1056 */
SECTION_SDATA2 static f32 lit_1056[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 802E121C-802E1238 001C+00 s=2 e=0 z=0  None .text      clear__Q210JUTGamePad6CStickFv */
//	802E121C: 80456028 (lit_1056)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CStick::clear() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/clear__Q210JUTGamePad6CStickFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456030-80456038 0008+00 s=1 e=0 z=0  None .sdata2    @1117 */
SECTION_SDATA2 static f64 lit_1117 = 0.5;

/* 80456038-80456040 0008+00 s=1 e=0 z=0  None .sdata2    @1118 */
SECTION_SDATA2 static f64 lit_1118 = 3.0;

/* 80456040-80456048 0008+00 s=1 e=0 z=0  None .sdata2    @1119 */
SECTION_SDATA2 static u8 lit_1119[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80456048-8045604C 0004+00 s=1 e=0 z=0  None .sdata2    @1120 */
SECTION_SDATA2 static f32 lit_1120 = 1.0f;

/* 8045604C-80456050 0004+00 s=1 e=0 z=0  None .sdata2    @1121 */
SECTION_SDATA2 static f32 lit_1121 = 10430.37890625f;

/* 802E1238-802E1500 02C8+00 s=1 e=0 z=0  None .text
 * update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl */
//	802E1248: 803621DC (_savegpr_29)
//	802E1258: 804508DC (sClampMode__10JUTGamePad)
//	802E12C4: 80456020 (lit_1050)
//	802E1340: 80456028 (lit_1056)
//	802E1350: 80456030 (lit_1117)
//	802E1358: 80456038 (lit_1118)
//	802E13A0: 80456040 (lit_1119)
//	802E13AC: 80450AE0 (__float_nan)
//	802E13B0: 80450AE0 (__float_nan)
//	802E141C: 80450AE0 (__float_nan)
//	802E1420: 80450AE0 (__float_nan)
//	802E142C: 80456048 (lit_1120)
//	802E145C: 80456048 (lit_1120)
//	802E1468: 80456028 (lit_1056)
//	802E14AC: 8036C720 (atan2)
//	802E14B4: 8045604C (lit_1121)
//	802E14E4: 802E1500 (getButton__Q210JUTGamePad6CStickFUl)
//	802E14EC: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CStick::update(s8 param_0, s8 param_1, JUTGamePad::EStickMode param_2,
                                    JUTGamePad::EWhichStick param_3, u32 param_4) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/func_802E1238.s"
}
#pragma pop

/* 802E1500-802E15B4 00B4+00 s=1 e=0 z=0  None .text      getButton__Q210JUTGamePad6CStickFUl */
//	802E1504: 804508E4 (sReleasePoint__Q210JUTGamePad6CStick)
//	802E1528: 804508E0 (sPressPoint__Q210JUTGamePad6CStick)
//	802E1578: 804508E0 (sPressPoint__Q210JUTGamePad6CStick)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CStick::getButton(u32 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/getButton__Q210JUTGamePad6CStickFUl.s"
}
#pragma pop

/* 802E15B4-802E15D8 0024+00 s=1 e=0 z=0  None .text      clear__Q210JUTGamePad7CRumbleFv */
//	802E15D0: 804514E8 (mEnabled__Q210JUTGamePad7CRumble)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::clear() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/clear__Q210JUTGamePad7CRumbleFv.s"
}
#pragma pop

/* 802E15D8-802E1634 005C+00 s=2 e=0 z=0  None .text clear__Q210JUTGamePad7CRumbleFP10JUTGamePad
 */
//	802E1604: 804514E4 (mStatus__Q210JUTGamePad7CRumble)
//	802E1614: 802E168C (stopMotor__Q210JUTGamePad7CRumbleFib)
//	802E161C: 802E15B4 (clear__Q210JUTGamePad7CRumbleFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::clear(JUTGamePad* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/clear__Q210JUTGamePad7CRumbleFP10JUTGamePad.s"
}
#pragma pop

/* 802E1634-802E168C 0058+00 s=1 e=0 z=0  None .text      startMotor__Q210JUTGamePad7CRumbleFi */
//	802E1648: 804514E8 (mEnabled__Q210JUTGamePad7CRumble)
//	802E1650: 803CC5F0 (sChannelMask__Q210JUTGamePad7CRumble)
//	802E1654: 803CC5F0 (sChannelMask__Q210JUTGamePad7CRumble)
//	802E1668: 8034F1A0 (PADControlMotor)
//	802E1670: 804514E4 (mStatus__Q210JUTGamePad7CRumble)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::startMotor(int param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/startMotor__Q210JUTGamePad7CRumbleFi.s"
}
#pragma pop

/* 802E168C-802E16F8 006C+00 s=4 e=3 z=0  None .text      stopMotor__Q210JUTGamePad7CRumbleFib */
//	802E16A0: 804514E8 (mEnabled__Q210JUTGamePad7CRumble)
//	802E16A8: 803CC5F0 (sChannelMask__Q210JUTGamePad7CRumble)
//	802E16AC: 803CC5F0 (sChannelMask__Q210JUTGamePad7CRumble)
//	802E16D4: 8034F1A0 (PADControlMotor)
//	802E16DC: 804514E4 (mStatus__Q210JUTGamePad7CRumble)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::stopMotor(int param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/stopMotor__Q210JUTGamePad7CRumbleFib.s"
}
#pragma pop

/* 802E16F8-802E1720 0028+00 s=1 e=0 z=0  None .text      getNumBit__FPUci */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void getNumBit(u8* param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/getNumBit__FPUci.s"
}
#pragma pop

/* 802E1720-802E18A4 0184+00 s=1 e=0 z=0  None .text      update__Q210JUTGamePad7CRumbleFs */
//	802E1730: 803621DC (_savegpr_29)
//	802E173C: 804514E8 (mEnabled__Q210JUTGamePad7CRumble)
//	802E1748: 803CC5F0 (sChannelMask__Q210JUTGamePad7CRumble)
//	802E174C: 803CC5F0 (sChannelMask__Q210JUTGamePad7CRumble)
//	802E17A0: 802E168C (stopMotor__Q210JUTGamePad7CRumbleFib)
//	802E17C0: 804514E4 (mStatus__Q210JUTGamePad7CRumble)
//	802E17D4: 802E1634 (startMotor__Q210JUTGamePad7CRumbleFi)
//	802E17EC: 802E16F8 (getNumBit__FPUci)
//	802E17F4: 804514E4 (mStatus__Q210JUTGamePad7CRumble)
//	802E181C: 802E1634 (startMotor__Q210JUTGamePad7CRumbleFi)
//	802E1850: 802E16F8 (getNumBit__FPUci)
//	802E1864: 802E168C (stopMotor__Q210JUTGamePad7CRumbleFib)
//	802E187C: 802E168C (stopMotor__Q210JUTGamePad7CRumbleFib)
//	802E1890: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::update(s16 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/update__Q210JUTGamePad7CRumbleFs.s"
}
#pragma pop

/* 802E18A4-802E18CC 0028+00 s=1 e=0 z=0  None .text
 * triggerPatternedRumble__Q210JUTGamePad7CRumbleFUl            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::triggerPatternedRumble(u32 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/triggerPatternedRumble__Q210JUTGamePad7CRumbleFUl.s"
}
#pragma pop

/* 802E18CC-802E1948 007C+00 s=0 e=2 z=0  None .text
 * startPatternedRumble__Q210JUTGamePad7CRumbleFPvQ310JUTGamePad7CRumble7ERumbleUl */
//	802E191C: 802E18A4 (triggerPatternedRumble__Q210JUTGamePad7CRumbleFUl)
//	802E1928: 802E18A4 (triggerPatternedRumble__Q210JUTGamePad7CRumbleFUl)
//	802E1934: 802E18A4 (triggerPatternedRumble__Q210JUTGamePad7CRumbleFUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::startPatternedRumble(void* param_0,
                                                   JUTGamePad::CRumble::ERumble param_1,
                                                   u32 param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/startPatternedRumble__Q210JUTGamePad7CRumbleFPvQ310JUTGamePad7CRumble7ERumbleUl.s"
}
#pragma pop

/* 802E1948-802E1978 0030+00 s=1 e=3 z=0  None .text stopPatternedRumble__Q210JUTGamePad7CRumbleFs
 */
//	802E1964: 802E168C (stopMotor__Q210JUTGamePad7CRumbleFib)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::stopPatternedRumble(s16 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/stopPatternedRumble__Q210JUTGamePad7CRumbleFs.s"
}
#pragma pop

/* 802E1978-802E199C 0024+00 s=0 e=1 z=0  None .text
 * stopPatternedRumbleAtThePeriod__Q210JUTGamePad7CRumbleFv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::stopPatternedRumbleAtThePeriod() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/stopPatternedRumbleAtThePeriod__Q210JUTGamePad7CRumbleFv.s"
}
#pragma pop

/* 802E199C-802E19D8 003C+00 s=1 e=1 z=0  None .text      getGamePad__10JUTGamePadFi */
//	802E199C: 804343E4 (mPadList__10JUTGamePad)
//	802E19A0: 804343E4 (mPadList__10JUTGamePad)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::getGamePad(int param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/getGamePad__10JUTGamePadFi.s"
}
#pragma pop

/* 802E19D8-802E1A7C 00A4+00 s=1 e=1 z=0  None .text      setEnabled__Q210JUTGamePad7CRumbleFUl */
//	802E19E8: 803621D4 (_savegpr_27)
//	802E19F8: 803CC600 (channel_mask)
//	802E19FC: 803CC600 (channel_mask)
//	802E1A00: 804514E4 (mStatus__Q210JUTGamePad7CRumble)
//	802E1A04: 804514E8 (mEnabled__Q210JUTGamePad7CRumble)
//	802E1A28: 802E168C (stopMotor__Q210JUTGamePad7CRumbleFib)
//	802E1A30: 802E199C (getGamePad__10JUTGamePadFi)
//	802E1A44: 802E1948 (stopPatternedRumble__Q210JUTGamePad7CRumbleFs)
//	802E1A60: 804514E8 (mEnabled__Q210JUTGamePad7CRumble)
//	802E1A68: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::setEnabled(u32 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/setEnabled__Q210JUTGamePad7CRumbleFUl.s"
}
#pragma pop

/* 802E1A7C-802E1A98 001C+00 s=1 e=0 z=0  None .text      setRepeat__Q210JUTGamePad7CButtonFUlUlUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CButton::setRepeat(u32 param_0, u32 param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/setRepeat__Q210JUTGamePad7CButtonFUlUlUl.s"
}
#pragma pop

/* 802E1A98-802E1AFC 0064+00 s=1 e=0 z=0  None .text      recalibrate__10JUTGamePadFUl */
//	802E1AA8: 804514D8 (sSuppressPadReset__10JUTGamePad)
//	802E1AAC: 803CC600 (channel_mask)
//	802E1AB0: 803CC600 (channel_mask)
//	802E1ADC: 8034EC3C (PADRecalibrate)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::recalibrate(u32 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/recalibrate__10JUTGamePadFUl.s"
}
#pragma pop

/* 802E1AFC-802E1B60 0064+00 s=1 e=0 z=0  None .text      checkCallback__19JUTGamePadLongPressFiUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePadLongPress::checkCallback(int param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/checkCallback__19JUTGamePadLongPressFiUl.s"
}
#pragma pop

/* 802E1B60-802E1C54 00F4+00 s=0 e=0 z=0  None .text      __sinit_JUTGamePad_cpp */
//	802E1B70: 804343D8 (lit_525)
//	802E1B74: 804343D8 (lit_525)
//	802E1B80: 802DBE74 (__ct__10JSUPtrListFb)
//	802E1B88: 802E1D08 (func_802E1D08)
//	802E1B8C: 802E1D08 (func_802E1D08)
//	802E1B94: 80361C24 (__register_global_object)
//	802E1B9C: 802E1CD8 (__ct__Q210JUTGamePad7CButtonFv)
//	802E1BA0: 802E1CD8 (__ct__Q210JUTGamePad7CButtonFv)
//	802E1BB0: 80361D60 (__construct_array)
//	802E1BB8: 802E1CA8 (__ct__Q210JUTGamePad6CStickFv)
//	802E1BBC: 802E1CA8 (__ct__Q210JUTGamePad6CStickFv)
//	802E1BCC: 80361D60 (__construct_array)
//	802E1BD4: 802E1CA8 (__ct__Q210JUTGamePad6CStickFv)
//	802E1BD8: 802E1CA8 (__ct__Q210JUTGamePad6CStickFv)
//	802E1BE8: 80361D60 (__construct_array)
//	802E1C18: 804514FC (data_804514FC)
//	802E1C1C: 804514F8 (sThreshold__Q210JUTGamePad13C3ButtonReset)
//	802E1C28: 802DBE74 (__ct__10JSUPtrListFb)
//	802E1C30: 802E1C54 (func_802E1C54)
//	802E1C34: 802E1C54 (func_802E1C54)
//	802E1C3C: 80361C24 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_JUTGamePad_cpp() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/__sinit_JUTGamePad_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_802E1B60 = (void*)__sinit_JUTGamePad_cpp;
#pragma pop

/* 802E1C54-802E1CA8 0054+00 s=1 e=0 z=0  None .text      __dt__30JSUList<19JUTGamePadLongPress>Fv
 */
//	802E1C78: 802DBEAC (__dt__10JSUPtrListFv)
//	802E1C88: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUList__template11::~JSUList__template11() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/func_802E1C54.s"
}
#pragma pop

/* 802E1CA8-802E1CD8 0030+00 s=1 e=0 z=0  None .text      __ct__Q210JUTGamePad6CStickFv */
//	802E1CBC: 802E121C (clear__Q210JUTGamePad6CStickFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTGamePad::CStick::CStick() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/__ct__Q210JUTGamePad6CStickFv.s"
}
#pragma pop

/* 802E1CD8-802E1D08 0030+00 s=1 e=0 z=0  None .text      __ct__Q210JUTGamePad7CButtonFv */
//	802E1CEC: 802E1050 (clear__Q210JUTGamePad7CButtonFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTGamePad::CButton::CButton() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/__ct__Q210JUTGamePad7CButtonFv.s"
}
#pragma pop

/* 802E1D08-802E1D5C 0054+00 s=1 e=0 z=0  None .text      __dt__21JSUList<10JUTGamePad>Fv */
//	802E1D2C: 802DBEAC (__dt__10JSUPtrListFv)
//	802E1D3C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUList__template12::~JSUList__template12() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/func_802E1D08.s"
}
#pragma pop
