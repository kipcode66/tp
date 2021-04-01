//
// Generated By: dol2asm
// Translation Unit: control
//

#include "JSystem/JStudio/JStudio_JAudio2/control.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

namespace JStudio {
struct TObject {};

namespace stb {
struct data {
    struct TParse_TBlock_object {};
};

};  // namespace stb

struct TCreateObject {
    /* 80285488 */ ~TCreateObject();
};

struct TAdaptor_sound {};

struct TObject_sound {
    /* 80287B9C */ TObject_sound(JStudio::stb::data::TParse_TBlock_object const&,
                                 JStudio::TAdaptor_sound*);
};

};  // namespace JStudio

struct JStudio_JAudio2 {
    struct TCreateObject {
        /* 8028D550 */ ~TCreateObject();
        /* 8028D5B0 */ void create(JStudio::TObject**,
                                   JStudio::stb::data::TParse_TBlock_object const&);
        /* 8028D624 */ void createObject_JAI_SOUND_(JStudio::stb::data::TParse_TBlock_object const&,
                                                    JStudio_JAudio2::TCreateObject*);
    };

    struct TAdaptor_sound {
        /* 8028D828 */ TAdaptor_sound(JStudio_JAudio2::TCreateObject*);
    };
};

//
// Forward References:
//

extern "C" void __dt__Q215JStudio_JAudio213TCreateObjectFv();
extern "C" void
create__Q215JStudio_JAudio213TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object();
extern "C" void
createObject_JAI_SOUND___Q215JStudio_JAudio213TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ215JStudio_JAudio213TCreateObject();
extern "C" extern void* __vt__Q215JStudio_JAudio213TCreateObject[4];

//
// External References:
//

void* operator new(u32);
void operator delete(void*);

extern "C" void __dt__Q27JStudio13TCreateObjectFv();
extern "C" void
__ct__Q27JStudio13TObject_soundFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_sound();
extern "C" void __ct__Q215JStudio_JAudio214TAdaptor_soundFPQ215JStudio_JAudio213TCreateObject();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803C5A68-803C5A78 0010+00 s=1 e=1 z=0  None .data      __vt__Q215JStudio_JAudio213TCreateObject
 */
SECTION_DATA void* __vt__Q215JStudio_JAudio213TCreateObject[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q215JStudio_JAudio213TCreateObjectFv,
    (void*)
        create__Q215JStudio_JAudio213TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object,
};

/* 8028D550-8028D5B0 0060+00 s=1 e=0 z=0  None .text      __dt__Q215JStudio_JAudio213TCreateObjectFv
 */
//	8028D570: 803C5A68 (__vt__Q215JStudio_JAudio213TCreateObject)
//	8028D574: 803C5A68 (__vt__Q215JStudio_JAudio213TCreateObject)
//	8028D580: 80285488 (__dt__Q27JStudio13TCreateObjectFv)
//	8028D590: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JAudio2::TCreateObject::~TCreateObject() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/control/__dt__Q215JStudio_JAudio213TCreateObjectFv.s"
}
#pragma pop

/* 8028D5B0-8028D624 0074+00 s=1 e=0 z=0  None .text
 * create__Q215JStudio_JAudio213TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
 */
//	8028D5E4: 8028D624
//(createObject_JAI_SOUND___Q215JStudio_JAudio213TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ215JStudio_JAudio213TCreateObject)
//	8028D5E8: 8028D624
//(createObject_JAI_SOUND___Q215JStudio_JAudio213TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ215JStudio_JAudio213TCreateObject)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JAudio2::TCreateObject::create(JStudio::TObject** param_0,
                                       JStudio::stb::data::TParse_TBlock_object const& param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/control/func_8028D5B0.s"
}
#pragma pop

/* 8028D624-8028D728 0104+00 s=1 e=0 z=0  None .text
 * createObject_JAI_SOUND___Q215JStudio_JAudio213TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ215JStudio_JAudio213TCreateObject
 */
//	8028D634: 803621DC (_savegpr_29)
//	8028D644: 802CEC4C (__nw__FUl)
//	8028D654: 8028D828
//(__ct__Q215JStudio_JAudio214TAdaptor_soundFPQ215JStudio_JAudio213TCreateObject) 	8028D67C:
//802CEC4C
//(__nw__FUl) 	8028D690: 80287B9C
//(__ct__Q27JStudio13TObject_soundFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_sound)
//	8028D714: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JAudio2::TCreateObject::createObject_JAI_SOUND_(
    JStudio::stb::data::TParse_TBlock_object const& param_0,
    JStudio_JAudio2::TCreateObject* param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JAudio2/control/func_8028D624.s"
}
#pragma pop
