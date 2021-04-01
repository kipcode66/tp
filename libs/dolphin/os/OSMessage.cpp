//
// Generated By: dol2asm
// Translation Unit: OSMessage
//

#include "dolphin/os/OSMessage.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void OSInitMessageQueue();
extern "C" void OSSendMessage();
extern "C" void OSReceiveMessage();
extern "C" void OSJamMessage();

//
// External References:
//

extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSInitThreadQueue();
extern "C" void OSSleepThread();
extern "C" void OSWakeupThread();

//
// Declarations:
//

/* 8033E994-8033E9F4 0060+00 s=0 e=13 z=5  None .text      OSInitMessageQueue */
//	8033E9B8: 80340C74 (OSInitThreadQueue)
//	8033E9C0: 80340C74 (OSInitThreadQueue)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSInitMessageQueue() {
    nofralloc
#include "asm/dolphin/os/OSMessage/OSInitMessageQueue.s"
}
#pragma pop

/* 8033E9F4-8033EABC 00C8+00 s=0 e=21 z=9  None .text      OSSendMessage */
//	8033EA1C: 8033D6F4 (OSDisableInterrupts)
//	8033EA38: 8033D71C (OSRestoreInterrupts)
//	8033EA48: 80341BAC (OSSleepThread)
//	8033EA8C: 80341C98 (OSWakeupThread)
//	8033EA94: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSSendMessage() {
    nofralloc
#include "asm/dolphin/os/OSMessage/OSSendMessage.s"
}
#pragma pop

/* 8033EABC-8033EB98 00DC+00 s=0 e=15 z=9  None .text      OSReceiveMessage */
//	8033EAE4: 8033D6F4 (OSDisableInterrupts)
//	8033EB00: 8033D71C (OSRestoreInterrupts)
//	8033EB10: 80341BAC (OSSleepThread)
//	8033EB68: 80341C98 (OSWakeupThread)
//	8033EB70: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSReceiveMessage() {
    nofralloc
#include "asm/dolphin/os/OSMessage/OSReceiveMessage.s"
}
#pragma pop

/* 8033EB98-8033EC6C 00D4+00 s=0 e=1 z=0  None .text      OSJamMessage */
//	8033EBC0: 8033D6F4 (OSDisableInterrupts)
//	8033EBDC: 8033D71C (OSRestoreInterrupts)
//	8033EBEC: 80341BAC (OSSleepThread)
//	8033EC3C: 80341C98 (OSWakeupThread)
//	8033EC44: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSJamMessage() {
    nofralloc
#include "asm/dolphin/os/OSMessage/OSJamMessage.s"
}
#pragma pop
