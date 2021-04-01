//
// Generated By: dol2asm
// Translation Unit: JAUAudioArcInterpreter
//

#include "JSystem/JAudio2/JAUAudioArcInterpreter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JAUAudioArcInterpreter {
    /* 802A4244 */ JAUAudioArcInterpreter();
    /* 802A4260 */ ~JAUAudioArcInterpreter();
    /* 802A42A8 */ void parse(void const*);
    /* 802A4314 */ bool readCommandMore(u32);
    /* 802A431C */ void readCommand_();
};

//
// Forward References:
//

extern "C" void __ct__22JAUAudioArcInterpreterFv();
extern "C" void __dt__22JAUAudioArcInterpreterFv();
extern "C" void parse__22JAUAudioArcInterpreterFPCv();
extern "C" bool readCommandMore__22JAUAudioArcInterpreterFUl();
extern "C" void readCommand___22JAUAudioArcInterpreterFv();
extern "C" extern void* __vt__22JAUAudioArcInterpreter[17 + 1 /* padding */];

//
// External References:
//

void operator delete(void*);

extern "C" void __dl__FPv();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C9A30-803C9A78 0044+04 s=2 e=0 z=0  None .data      __vt__22JAUAudioArcInterpreter */
SECTION_DATA void* __vt__22JAUAudioArcInterpreter[17 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22JAUAudioArcInterpreterFv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)readCommandMore__22JAUAudioArcInterpreterFUl,
    /* padding */
    NULL,
};

/* 802A4244-802A4260 001C+00 s=0 e=1 z=0  None .text      __ct__22JAUAudioArcInterpreterFv */
//	802A4244: 803C9A30 (__vt__22JAUAudioArcInterpreter)
//	802A4248: 803C9A30 (__vt__22JAUAudioArcInterpreter)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUAudioArcInterpreter::JAUAudioArcInterpreter() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUAudioArcInterpreter/__ct__22JAUAudioArcInterpreterFv.s"
}
#pragma pop

/* 802A4260-802A42A8 0048+00 s=1 e=3 z=0  None .text      __dt__22JAUAudioArcInterpreterFv */
//	802A4278: 803C9A30 (__vt__22JAUAudioArcInterpreter)
//	802A427C: 803C9A30 (__vt__22JAUAudioArcInterpreter)
//	802A428C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUAudioArcInterpreter::~JAUAudioArcInterpreter() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUAudioArcInterpreter/__dt__22JAUAudioArcInterpreterFv.s"
}
#pragma pop

/* 802A42A8-802A4314 006C+00 s=0 e=1 z=0  None .text      parse__22JAUAudioArcInterpreterFPCv */
//	802A42F0: 802A431C (readCommand___22JAUAudioArcInterpreterFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUAudioArcInterpreter::parse(void const* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUAudioArcInterpreter/parse__22JAUAudioArcInterpreterFPCv.s"
}
#pragma pop

/* 802A4314-802A431C 0008+00 s=1 e=1 z=0  None .text readCommandMore__22JAUAudioArcInterpreterFUl
 */
bool JAUAudioArcInterpreter::readCommandMore(u32 param_0) {
    return false;
}

/* 802A431C-802A4740 0424+00 s=1 e=0 z=0  None .text      readCommand___22JAUAudioArcInterpreterFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUAudioArcInterpreter::readCommand_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUAudioArcInterpreter/readCommand___22JAUAudioArcInterpreterFv.s"
}
#pragma pop
