//
// Generated By: dol2asm
// Translation Unit: JAUSoundAnimator
//

#include "JSystem/JAudio2/JAUSoundAnimator.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JAUSoundAnimation {
    /* 802A6F70 */ void getStartSoundIndex(f32) const;
    /* 802A7044 */ void getEndSoundIndex(f32) const;
};

//
// Forward References:
//

extern "C" void getStartSoundIndex__17JAUSoundAnimationCFf();
extern "C" void getEndSoundIndex__17JAUSoundAnimationCFf();

//
// External References:
//

extern "C" void _savegpr_28();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* 802A6F70-802A7044 00D4+00 s=0 e=1 z=0  None .text      getStartSoundIndex__17JAUSoundAnimationCFf
 */
//	802A6F88: 803621D8 (_savegpr_28)
//	802A7030: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSoundAnimation::getStartSoundIndex(f32 param_0) const {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSoundAnimator/getStartSoundIndex__17JAUSoundAnimationCFf.s"
}
#pragma pop

/* 802A7044-802A7114 00D0+00 s=0 e=1 z=0  None .text      getEndSoundIndex__17JAUSoundAnimationCFf
 */
//	802A705C: 803621D8 (_savegpr_28)
//	802A7100: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSoundAnimation::getEndSoundIndex(f32 param_0) const {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSoundAnimator/getEndSoundIndex__17JAUSoundAnimationCFf.s"
}
#pragma pop
