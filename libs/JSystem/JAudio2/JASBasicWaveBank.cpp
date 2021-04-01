//
// Generated By: dol2asm
// Translation Unit: JASBasicWaveBank
//

#include "JSystem/JAudio2/JASBasicWaveBank.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRHeap {};

struct JASWaveInfo {};

struct JASWaveHandle {
    /* 80298BD0 */ ~JASWaveHandle();
};

struct JASWaveBank {
    /* 80298B88 */ ~JASWaveBank();
};

struct JASWaveArc {
    /* 8029A13C */ JASWaveArc();
    /* 8029A1B4 */ ~JASWaveArc();
    /* 8029A664 */ void onDispose();
};

struct JASBasicWaveBank {
    struct TWaveHandle {
        /* 802985E4 */ ~TWaveHandle();
        /* 80298B64 */ void getWavePtr() const;
        /* 80298C18 */ TWaveHandle();
        /* 80298C64 */ void getWaveInfo() const;
    };

    struct TWaveGroup {
        /* 802989C0 */ TWaveGroup();
        /* 80298A0C */ ~TWaveGroup();
        /* 80298A84 */ void setWaveCount(u32, JKRHeap*);
        /* 80298B04 */ void onLoadDone();
        /* 80298B2C */ void onEraseDone();
        /* 80298B54 */ void getWaveID(int) const;
    };

    struct TGroupWaveInfo {
        /* 80298C4C */ TGroupWaveInfo();
    };

    /* 802984F8 */ JASBasicWaveBank();
    /* 80298558 */ ~JASBasicWaveBank();
    /* 80298640 */ void getWaveGroup(u32);
    /* 80298664 */ void setGroupCount(u32, JKRHeap*);
    /* 80298710 */ void setWaveTableSize(u32, JKRHeap*);
    /* 80298790 */ void incWaveTable(JASBasicWaveBank::TWaveGroup const*);
    /* 8029883C */ void decWaveTable(JASBasicWaveBank::TWaveGroup const*);
    /* 802988DC */ void getWaveHandle(u32) const;
    /* 80298910 */ void setWaveInfo(JASBasicWaveBank::TWaveGroup*, int, u16, JASWaveInfo const&);
    /* 80298C6C */ void getWaveArc(u32);
    /* 80298C8C */ void getArcCount() const;
};

//
// Forward References:
//

extern "C" void __ct__16JASBasicWaveBankFv();
extern "C" void __dt__16JASBasicWaveBankFv();
extern "C" void __dt__Q216JASBasicWaveBank11TWaveHandleFv();
extern "C" void getWaveGroup__16JASBasicWaveBankFUl();
extern "C" void setGroupCount__16JASBasicWaveBankFUlP7JKRHeap();
extern "C" void setWaveTableSize__16JASBasicWaveBankFUlP7JKRHeap();
extern "C" void incWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup();
extern "C" void decWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup();
extern "C" void getWaveHandle__16JASBasicWaveBankCFUl();
extern "C" void
setWaveInfo__16JASBasicWaveBankFPQ216JASBasicWaveBank10TWaveGroupiUsRC11JASWaveInfo();
extern "C" void __ct__Q216JASBasicWaveBank10TWaveGroupFv();
extern "C" void __dt__Q216JASBasicWaveBank10TWaveGroupFv();
extern "C" void setWaveCount__Q216JASBasicWaveBank10TWaveGroupFUlP7JKRHeap();
extern "C" void onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv();
extern "C" void onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv();
extern "C" void getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi();
extern "C" void getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv();
extern "C" void __dt__11JASWaveBankFv();
extern "C" void __dt__13JASWaveHandleFv();
extern "C" void __ct__Q216JASBasicWaveBank11TWaveHandleFv();
extern "C" void __ct__Q216JASBasicWaveBank14TGroupWaveInfoFv();
extern "C" void getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv();
extern "C" void getWaveArc__16JASBasicWaveBankFUl();
extern "C" void getArcCount__16JASBasicWaveBankCFv();
extern "C" extern void* __vt__Q216JASBasicWaveBank11TWaveHandle[5];
extern "C" extern void* __vt__Q216JASBasicWaveBank10TWaveGroup[6];
extern "C" extern void* __vt__13JASWaveHandle[5];
extern "C" extern void* __vt__16JASBasicWaveBank[6];
extern "C" extern void* __vt__11JASWaveBank[6];

//
// External References:
//

void* operator new[](u32, JKRHeap*, int);
void operator delete(void*);
void operator delete[](void*);

extern "C" void __ct__10JASWaveArcFv();
extern "C" void __dt__10JASWaveArcFv();
extern "C" void onDispose__10JASWaveArcFv();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __dla__FPv();
extern "C" void OSInitMutex();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void __destroy_new_array();
extern "C" void __construct_new_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern u32 one__11JASWaveInfo[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C7728-803C773C 0014+00 s=2 e=0 z=0  None .data      __vt__Q216JASBasicWaveBank11TWaveHandle */
SECTION_DATA void* __vt__Q216JASBasicWaveBank11TWaveHandle[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q216JASBasicWaveBank11TWaveHandleFv,
    (void*)getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv,
    (void*)getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv,
};

/* 803C773C-803C7754 0018+00 s=2 e=0 z=0  None .data      __vt__Q216JASBasicWaveBank10TWaveGroup */
SECTION_DATA void* __vt__Q216JASBasicWaveBank10TWaveGroup[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q216JASBasicWaveBank10TWaveGroupFv,
    (void*)onDispose__10JASWaveArcFv,
    (void*)onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv,
    (void*)onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv,
};

/* 803C7754-803C7768 0014+00 s=3 e=2 z=0  None .data      __vt__13JASWaveHandle */
SECTION_DATA void* __vt__13JASWaveHandle[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)__dt__13JASWaveHandleFv, (void*)NULL, (void*)NULL,
};

/* 803C7768-803C7780 0018+00 s=2 e=0 z=0  None .data      __vt__16JASBasicWaveBank */
SECTION_DATA void* __vt__16JASBasicWaveBank[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16JASBasicWaveBankFv,
    (void*)getWaveHandle__16JASBasicWaveBankCFUl,
    (void*)getWaveArc__16JASBasicWaveBankFUl,
    (void*)getArcCount__16JASBasicWaveBankCFv,
};

/* 803C7780-803C7798 0018+00 s=3 e=2 z=0  None .data      __vt__11JASWaveBank */
SECTION_DATA void* __vt__11JASWaveBank[6] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11JASWaveBankFv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 802984F8-80298558 0060+00 s=0 e=1 z=0  None .text      __ct__16JASBasicWaveBankFv */
//	8029850C: 803C7780 (__vt__11JASWaveBank)
//	80298510: 803C7780 (__vt__11JASWaveBank)
//	80298518: 803C7768 (__vt__16JASBasicWaveBank)
//	8029851C: 803C7768 (__vt__16JASBasicWaveBank)
//	8029853C: 8033F008 (OSInitMutex)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::JASBasicWaveBank() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__ct__16JASBasicWaveBankFv.s"
}
#pragma pop

/* 80298558-802985E4 008C+00 s=1 e=0 z=0  None .text      __dt__16JASBasicWaveBankFv */
//	80298578: 803C7768 (__vt__16JASBasicWaveBank)
//	8029857C: 803C7768 (__vt__16JASBasicWaveBank)
//	80298588: 802985E4 (__dt__Q216JASBasicWaveBank11TWaveHandleFv)
//	8029858C: 802985E4 (__dt__Q216JASBasicWaveBank11TWaveHandleFv)
//	80298590: 80361C6C (__destroy_new_array)
//	80298598: 80298A0C (__dt__Q216JASBasicWaveBank10TWaveGroupFv)
//	8029859C: 80298A0C (__dt__Q216JASBasicWaveBank10TWaveGroupFv)
//	802985A0: 80361C6C (__destroy_new_array)
//	802985AC: 803C7780 (__vt__11JASWaveBank)
//	802985B0: 803C7780 (__vt__11JASWaveBank)
//	802985C4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::~JASBasicWaveBank() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__16JASBasicWaveBankFv.s"
}
#pragma pop

/* 802985E4-80298640 005C+00 s=3 e=0 z=0  None .text      __dt__Q216JASBasicWaveBank11TWaveHandleFv
 */
//	802985FC: 803C7728 (__vt__Q216JASBasicWaveBank11TWaveHandle)
//	80298600: 803C7728 (__vt__Q216JASBasicWaveBank11TWaveHandle)
//	8029860C: 803C7754 (__vt__13JASWaveHandle)
//	80298610: 803C7754 (__vt__13JASWaveHandle)
//	80298624: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TWaveHandle::~TWaveHandle() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__Q216JASBasicWaveBank11TWaveHandleFv.s"
}
#pragma pop

/* 80298640-80298664 0024+00 s=1 e=1 z=0  None .text      getWaveGroup__16JASBasicWaveBankFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::getWaveGroup(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveGroup__16JASBasicWaveBankFUl.s"
}
#pragma pop

/* 80298664-80298710 00AC+00 s=0 e=1 z=0  None .text setGroupCount__16JASBasicWaveBankFUlP7JKRHeap
 */
//	80298674: 803621DC (_savegpr_29)
//	80298688: 80298A0C (__dt__Q216JASBasicWaveBank10TWaveGroupFv)
//	8029868C: 80298A0C (__dt__Q216JASBasicWaveBank10TWaveGroupFv)
//	80298690: 80361C6C (__destroy_new_array)
//	802986A8: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802986AC: 802989C0 (__ct__Q216JASBasicWaveBank10TWaveGroupFv)
//	802986B0: 802989C0 (__ct__Q216JASBasicWaveBank10TWaveGroupFv)
//	802986B4: 80298A0C (__dt__Q216JASBasicWaveBank10TWaveGroupFv)
//	802986B8: 80298A0C (__dt__Q216JASBasicWaveBank10TWaveGroupFv)
//	802986C4: 80361F14 (__construct_new_array)
//	802986FC: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::setGroupCount(u32 param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/setGroupCount__16JASBasicWaveBankFUlP7JKRHeap.s"
}
#pragma pop

/* 80298710-80298790 0080+00 s=0 e=1 z=0  None .text
 * setWaveTableSize__16JASBasicWaveBankFUlP7JKRHeap             */
//	80298720: 803621DC (_savegpr_29)
//	80298734: 802985E4 (__dt__Q216JASBasicWaveBank11TWaveHandleFv)
//	80298738: 802985E4 (__dt__Q216JASBasicWaveBank11TWaveHandleFv)
//	8029873C: 80361C6C (__destroy_new_array)
//	80298750: 802CED10 (__nwa__FUlP7JKRHeapi)
//	80298754: 80298C18 (__ct__Q216JASBasicWaveBank11TWaveHandleFv)
//	80298758: 80298C18 (__ct__Q216JASBasicWaveBank11TWaveHandleFv)
//	8029875C: 802985E4 (__dt__Q216JASBasicWaveBank11TWaveHandleFv)
//	80298760: 802985E4 (__dt__Q216JASBasicWaveBank11TWaveHandleFv)
//	8029876C: 80361F14 (__construct_new_array)
//	8029877C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::setWaveTableSize(u32 param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/setWaveTableSize__16JASBasicWaveBankFUlP7JKRHeap.s"
}
#pragma pop

/* 80298790-8029883C 00AC+00 s=1 e=0 z=0  None .text
 * incWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup */
//	802987A0: 803621D0 (_savegpr_26)
//	802987B4: 8033F040 (OSLockMutex)
//	802987D4: 80298B54 (getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi)
//	80298820: 8033F11C (OSUnlockMutex)
//	80298828: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::incWaveTable(JASBasicWaveBank::TWaveGroup const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/incWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451278-80451280 0004+04 s=2 e=0 z=0  None .sbss      mNoLoad__16JASBasicWaveBank */
static u8 mNoLoad__16JASBasicWaveBank[4 + 4 /* padding */];

/* 8029883C-802988DC 00A0+00 s=1 e=0 z=0  None .text
 * decWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup */
//	8029884C: 803621CC (_savegpr_25)
//	80298860: 8033F040 (OSLockMutex)
//	80298870: 80451278 (mNoLoad__16JASBasicWaveBank)
//	80298884: 80298B54 (getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi)
//	802988C0: 8033F11C (OSUnlockMutex)
//	802988C8: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::decWaveTable(JASBasicWaveBank::TWaveGroup const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/decWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup.s"
}
#pragma pop

/* 802988DC-80298910 0034+00 s=1 e=0 z=0  None .text      getWaveHandle__16JASBasicWaveBankCFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::getWaveHandle(u32 param_0) const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveHandle__16JASBasicWaveBankCFUl.s"
}
#pragma pop

/* 80298910-802989C0 00B0+00 s=0 e=1 z=0  None .text
 * setWaveInfo__16JASBasicWaveBankFPQ216JASBasicWaveBank10TWaveGroupiUsRC11JASWaveInfo */
//	80298984: 80451278 (mNoLoad__16JASBasicWaveBank)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::setWaveInfo(JASBasicWaveBank::TWaveGroup* param_0, int param_1,
                                       u16 param_2, JASWaveInfo const& param_3) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/func_80298910.s"
}
#pragma pop

/* 802989C0-80298A0C 004C+00 s=1 e=0 z=0  None .text      __ct__Q216JASBasicWaveBank10TWaveGroupFv
 */
//	802989D4: 8029A13C (__ct__10JASWaveArcFv)
//	802989D8: 803C773C (__vt__Q216JASBasicWaveBank10TWaveGroup)
//	802989DC: 803C773C (__vt__Q216JASBasicWaveBank10TWaveGroup)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TWaveGroup::TWaveGroup() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__ct__Q216JASBasicWaveBank10TWaveGroupFv.s"
}
#pragma pop

/* 80298A0C-80298A84 0078+00 s=3 e=0 z=0  None .text      __dt__Q216JASBasicWaveBank10TWaveGroupFv
 */
//	80298A2C: 803C773C (__vt__Q216JASBasicWaveBank10TWaveGroup)
//	80298A30: 803C773C (__vt__Q216JASBasicWaveBank10TWaveGroup)
//	80298A48: 802CED60 (__dla__FPv)
//	80298A54: 8029A1B4 (__dt__10JASWaveArcFv)
//	80298A64: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TWaveGroup::~TWaveGroup() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__Q216JASBasicWaveBank10TWaveGroupFv.s"
}
#pragma pop

/* 80298A84-80298B04 0080+00 s=0 e=1 z=0  None .text
 * setWaveCount__Q216JASBasicWaveBank10TWaveGroupFUlP7JKRHeap   */
//	80298A94: 803621DC (_savegpr_29)
//	80298AB4: 802CED60 (__dla__FPv)
//	80298ACC: 802CED10 (__nwa__FUlP7JKRHeapi)
//	80298AD0: 80298C4C (__ct__Q216JASBasicWaveBank14TGroupWaveInfoFv)
//	80298AD4: 80298C4C (__ct__Q216JASBasicWaveBank14TGroupWaveInfoFv)
//	80298AE4: 80361F14 (__construct_new_array)
//	80298AF0: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveGroup::setWaveCount(u32 param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/setWaveCount__Q216JASBasicWaveBank10TWaveGroupFUlP7JKRHeap.s"
}
#pragma pop

/* 80298B04-80298B2C 0028+00 s=1 e=0 z=0  None .text
 * onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv               */
//	80298B18: 80298790 (incWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveGroup::onLoadDone() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv.s"
}
#pragma pop

/* 80298B2C-80298B54 0028+00 s=1 e=0 z=0  None .text
 * onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv              */
//	80298B40: 8029883C (decWaveTable__16JASBasicWaveBankFPCQ216JASBasicWaveBank10TWaveGroup)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveGroup::onEraseDone() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv.s"
}
#pragma pop

/* 80298B54-80298B64 0010+00 s=2 e=0 z=0  None .text
 * getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveGroup::getWaveID(int param_0) const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi.s"
}
#pragma pop

/* 80298B64-80298B88 0024+00 s=1 e=0 z=0  None .text
 * getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveHandle::getWavePtr() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv.s"
}
#pragma pop

/* 80298B88-80298BD0 0048+00 s=1 e=0 z=0  None .text      __dt__11JASWaveBankFv */
//	80298BA0: 803C7780 (__vt__11JASWaveBank)
//	80298BA4: 803C7780 (__vt__11JASWaveBank)
//	80298BB4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASWaveBank::~JASWaveBank() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__11JASWaveBankFv.s"
}
#pragma pop

/* 80298BD0-80298C18 0048+00 s=1 e=0 z=0  None .text      __dt__13JASWaveHandleFv */
//	80298BE8: 803C7754 (__vt__13JASWaveHandle)
//	80298BEC: 803C7754 (__vt__13JASWaveHandle)
//	80298BFC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASWaveHandle::~JASWaveHandle() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__dt__13JASWaveHandleFv.s"
}
#pragma pop

/* 80298C18-80298C4C 0034+00 s=1 e=0 z=0  None .text      __ct__Q216JASBasicWaveBank11TWaveHandleFv
 */
//	80298C18: 803C7754 (__vt__13JASWaveHandle)
//	80298C1C: 803C7754 (__vt__13JASWaveHandle)
//	80298C24: 803C7728 (__vt__Q216JASBasicWaveBank11TWaveHandle)
//	80298C28: 803C7728 (__vt__Q216JASBasicWaveBank11TWaveHandle)
//	80298C38: 804507B8 (one__11JASWaveInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TWaveHandle::TWaveHandle() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__ct__Q216JASBasicWaveBank11TWaveHandleFv.s"
}
#pragma pop

/* 80298C4C-80298C64 0018+00 s=1 e=0 z=0  None .text __ct__Q216JASBasicWaveBank14TGroupWaveInfoFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBasicWaveBank::TGroupWaveInfo::TGroupWaveInfo() {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/__ct__Q216JASBasicWaveBank14TGroupWaveInfoFv.s"
}
#pragma pop

/* 80298C64-80298C6C 0008+00 s=1 e=0 z=0  None .text
 * getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::TWaveHandle::getWaveInfo() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv.s"
}
#pragma pop

/* 80298C6C-80298C8C 0020+00 s=1 e=0 z=0  None .text      getWaveArc__16JASBasicWaveBankFUl */
//	80298C78: 80298640 (getWaveGroup__16JASBasicWaveBankFUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::getWaveArc(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getWaveArc__16JASBasicWaveBankFUl.s"
}
#pragma pop

/* 80298C8C-80298C94 0008+00 s=1 e=0 z=0  None .text      getArcCount__16JASBasicWaveBankCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASBasicWaveBank::getArcCount() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASBasicWaveBank/getArcCount__16JASBasicWaveBankCFv.s"
}
#pragma pop
