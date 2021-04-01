//
// Generated By: dol2asm
// Translation Unit: JASVoiceBank
//

#include "JSystem/JAudio2/JASVoiceBank.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASInstParam {};

struct JASVoiceBank {
    /* 80297F74 */ void getInstParam(int, int, int, JASInstParam*) const;
    /* 80297FAC */ ~JASVoiceBank();
    /* 80298008 */ void getType() const;
};

//
// Forward References:
//

extern "C" void getInstParam__12JASVoiceBankCFiiiP12JASInstParam();
extern "C" void __dt__12JASVoiceBankFv();
extern "C" void getType__12JASVoiceBankCFv();
extern "C" extern void* __vt__12JASVoiceBank[5 + 1 /* padding */];

//
// External References:
//

void operator delete(void*);

extern "C" void __dl__FPv();
extern "C" extern void* __vt__7JASBank[5];

//
// Declarations:
//

/* ############################################################################################## */
/* 8039B1B8-8039B1D0 0018+00 s=1 e=0 z=0  None .rodata    sOscData__12JASVoiceBank */
SECTION_RODATA static u8 const sOscData__12JASVoiceBank[24] = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80451268-80451270 0004+04 s=1 e=0 z=0  None .sbss      sOscTable__12JASVoiceBank */
static u8 sOscTable__12JASVoiceBank[4 + 4 /* padding */];

/* 80297F74-80297FAC 0038+00 s=1 e=0 z=0  None .text
 * getInstParam__12JASVoiceBankCFiiiP12JASInstParam             */
//	80297F84: 8039B1B8 (sOscData__12JASVoiceBank)
//	80297F88: 8039B1B8 (sOscData__12JASVoiceBank)
//	80297F8C: 80451268 (sOscTable__12JASVoiceBank)
//	80297F9C: 80451268 (sOscTable__12JASVoiceBank)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASVoiceBank::getInstParam(int param_0, int param_1, int param_2,
                                    JASInstParam* param_3) const {
    nofralloc
#include "asm/JSystem/JAudio2/JASVoiceBank/getInstParam__12JASVoiceBankCFiiiP12JASInstParam.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C76D0-803C76E8 0014+04 s=1 e=1 z=0  None .data      __vt__12JASVoiceBank */
SECTION_DATA void* __vt__12JASVoiceBank[5 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JASVoiceBankFv,
    (void*)getInstParam__12JASVoiceBankCFiiiP12JASInstParam,
    (void*)getType__12JASVoiceBankCFv,
    /* padding */
    NULL,
};

/* 80297FAC-80298008 005C+00 s=1 e=0 z=0  None .text      __dt__12JASVoiceBankFv */
//	80297FC4: 803C76D0 (__vt__12JASVoiceBank)
//	80297FC8: 803C76D0 (__vt__12JASVoiceBank)
//	80297FD4: 803C76BC (__vt__7JASBank)
//	80297FD8: 803C76BC (__vt__7JASBank)
//	80297FEC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASVoiceBank::~JASVoiceBank() {
    nofralloc
#include "asm/JSystem/JAudio2/JASVoiceBank/__dt__12JASVoiceBankFv.s"
}
#pragma pop

/* 80298008-80298014 000C+00 s=1 e=0 z=0  None .text      getType__12JASVoiceBankCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASVoiceBank::getType() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASVoiceBank/getType__12JASVoiceBankCFv.s"
}
#pragma pop
