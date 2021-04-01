//
// Generated By: dol2asm
// Translation Unit: OSMutex
//

#include "dolphin/os/OSMutex.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void OSInitMutex();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void __OSUnlockAllMutex();
extern "C" void OSTryLockMutex();
extern "C" void OSInitCond();
extern "C" void OSWaitCond();
extern "C" void OSSignalCond();
extern "C" static void __OSCheckMutex();
extern "C" void __OSCheckDeadLock();
extern "C" void __OSCheckMutexes();

//
// External References:
//

extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSInitThreadQueue();
extern "C" void OSGetCurrentThread();
extern "C" void OSDisableScheduler();
extern "C" void OSEnableScheduler();
extern "C" void __OSGetEffectivePriority();
extern "C" void __OSPromoteThread();
extern "C" void OSSleepThread();
extern "C" void OSWakeupThread();

//
// Declarations:
//

/* 8033F008-8033F040 0038+00 s=0 e=12 z=0  None .text      OSInitMutex */
//	8033F01C: 80340C74 (OSInitThreadQueue)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSInitMutex() {
    nofralloc
#include "asm/dolphin/os/OSMutex/OSInitMutex.s"
}
#pragma pop

/* 8033F040-8033F11C 00DC+00 s=1 e=62 z=0  None .text      OSLockMutex */
//	8033F060: 8033D6F4 (OSDisableInterrupts)
//	8033F068: 80340C84 (OSGetCurrentThread)
//	8033F0E0: 80340FA8 (__OSPromoteThread)
//	8033F0E8: 80341BAC (OSSleepThread)
//	8033F0F8: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSLockMutex() {
    nofralloc
#include "asm/dolphin/os/OSMutex/OSLockMutex.s"
}
#pragma pop

/* 8033F11C-8033F1E4 00C8+00 s=0 e=71 z=0  None .text      OSUnlockMutex */
//	8033F138: 8033D6F4 (OSDisableInterrupts)
//	8033F140: 80340C84 (OSGetCurrentThread)
//	8033F1B0: 80340DAC (__OSGetEffectivePriority)
//	8033F1BC: 80341C98 (OSWakeupThread)
//	8033F1C4: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSUnlockMutex() {
    nofralloc
#include "asm/dolphin/os/OSMutex/OSUnlockMutex.s"
}
#pragma pop

/* 8033F1E4-8033F254 0070+00 s=0 e=2 z=0  None .text      __OSUnlockAllMutex */
//	8033F22C: 80341C98 (OSWakeupThread)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSUnlockAllMutex() {
    nofralloc
#include "asm/dolphin/os/OSMutex/__OSUnlockAllMutex.s"
}
#pragma pop

/* 8033F254-8033F310 00BC+00 s=0 e=9 z=0  None .text      OSTryLockMutex */
//	8033F270: 8033D6F4 (OSDisableInterrupts)
//	8033F278: 80340C84 (OSGetCurrentThread)
//	8033F2EC: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSTryLockMutex() {
    nofralloc
#include "asm/dolphin/os/OSMutex/OSTryLockMutex.s"
}
#pragma pop

/* 8033F310-8033F330 0020+00 s=0 e=1 z=0  None .text      OSInitCond */
//	8033F31C: 80340C74 (OSInitThreadQueue)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSInitCond() {
    nofralloc
#include "asm/dolphin/os/OSMutex/OSInitCond.s"
}
#pragma pop

/* 8033F330-8033F404 00D4+00 s=0 e=1 z=0  None .text      OSWaitCond */
//	8033F348: 8033D6F4 (OSDisableInterrupts)
//	8033F350: 80340C84 (OSGetCurrentThread)
//	8033F3BC: 80340DAC (__OSGetEffectivePriority)
//	8033F3C4: 80340CC4 (OSDisableScheduler)
//	8033F3CC: 80341C98 (OSWakeupThread)
//	8033F3D0: 80340D04 (OSEnableScheduler)
//	8033F3D8: 80341BAC (OSSleepThread)
//	8033F3E0: 8033F040 (OSLockMutex)
//	8033F3EC: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSWaitCond() {
    nofralloc
#include "asm/dolphin/os/OSMutex/OSWaitCond.s"
}
#pragma pop

/* 8033F404-8033F424 0020+00 s=0 e=5 z=0  None .text      OSSignalCond */
//	8033F410: 80341C98 (OSWakeupThread)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void OSSignalCond() {
    nofralloc
#include "asm/dolphin/os/OSMutex/OSSignalCond.s"
}
#pragma pop

/* 8033F424-8033F524 0100+00 s=1 e=0 z=0  None .text      __OSCheckMutex */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __OSCheckMutex() {
    nofralloc
#include "asm/dolphin/os/OSMutex/__OSCheckMutex.s"
}
#pragma pop

/* 8033F524-8033F55C 0038+00 s=0 e=1 z=0  None .text      __OSCheckDeadLock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSCheckDeadLock() {
    nofralloc
#include "asm/dolphin/os/OSMutex/__OSCheckDeadLock.s"
}
#pragma pop

/* 8033F55C-8033F5D0 0074+00 s=0 e=1 z=0  None .text      __OSCheckMutexes */
//	8033F594: 8033F424 (__OSCheckMutex)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __OSCheckMutexes() {
    nofralloc
#include "asm/dolphin/os/OSMutex/__OSCheckMutexes.s"
}
#pragma pop
