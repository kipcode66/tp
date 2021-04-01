//
// Generated By: dol2asm
// Translation Unit: JPAParticle
//

#include "JSystem/JParticle/JPAParticle.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

struct JPAEmitterWorkData {};

struct JPABaseParticle;
struct JPABaseEmitter {
    /* 8027EB60 */ void createChild(JPABaseParticle*);
};

struct JPABaseParticle {
    /* 8027EFEC */ void init_p(JPAEmitterWorkData*);
    /* 8027F8C8 */ void init_c(JPAEmitterWorkData*, JPABaseParticle*);
    /* 8027FFD0 */ void calc_p(JPAEmitterWorkData*);
    /* 80280260 */ void calc_c(JPAEmitterWorkData*);
    /* 802804C8 */ void canCreateChild(JPAEmitterWorkData*);
    /* 80280548 */ void getWidth(JPABaseEmitter const*) const;
    /* 80280568 */ void getHeight(JPABaseEmitter const*) const;
};

struct JPAResource {
    /* 8027658C */ void calc_p(JPAEmitterWorkData*, JPABaseParticle*);
    /* 80276608 */ void calc_c(JPAEmitterWorkData*, JPABaseParticle*);
    /* 80276684 */ void calcField(JPAEmitterWorkData*, JPABaseParticle*);
};

struct JPAParticleCallBack {
    /* 8027EFA4 */ ~JPAParticleCallBack();
};

//
// Forward References:
//

extern "C" void __dt__19JPAParticleCallBackFv();
extern "C" void init_p__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void init_c__15JPABaseParticleFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calc_p__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void calc_c__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void getWidth__15JPABaseParticleCFPC14JPABaseEmitter();
extern "C" void getHeight__15JPABaseParticleCFPC14JPABaseEmitter();

//
// External References:
//

void JPAGetYZRotateMtx(s16, s16, f32 (*)[4]);
void operator delete(void*);
void JMAVECScaleAdd(Vec const*, Vec const*, Vec*, f32);

extern "C" void calc_p__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calc_c__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void createChild__14JPABaseEmitterFP15JPABaseParticle();
extern "C" void JPAGetYZRotateMtx__FssPA4_f();
extern "C" void __dl__FPv();
extern "C" void JMAVECScaleAdd__FPC3VecPC3VecP3Vecf();
extern "C" void PSMTXConcat();
extern "C" void PSMTXMultVecSR();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19JPAParticleCallBack[5];
extern "C" extern u32 __float_epsilon;

//
// Declarations:
//

/* 8027EFA4-8027EFEC 0048+00 s=0 e=11 z=1  None .text      __dt__19JPAParticleCallBackFv */
//	8027EFBC: 803A357C (__vt__19JPAParticleCallBack)
//	8027EFC0: 803A357C (__vt__19JPAParticleCallBack)
//	8027EFD0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAParticleCallBack::~JPAParticleCallBack() {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/__dt__19JPAParticleCallBackFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455388-8045538C 0004+00 s=2 e=0 z=0  None .sdata2    @2565 */
SECTION_SDATA2 static f32 lit_2565 = 1.0f;

/* 8045538C-80455390 0004+00 s=4 e=0 z=0  None .sdata2    @2566 */
SECTION_SDATA2 static u8 lit_2566[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80455390-80455394 0004+00 s=2 e=0 z=0  None .sdata2    @2567 */
SECTION_SDATA2 static f32 lit_2567 = 32.0f;

/* 80455394-80455398 0004+00 s=2 e=0 z=0  None .sdata2    @2568 */
SECTION_SDATA2 static f32 lit_2568 = 0.5f;

/* 80455398-8045539C 0004+00 s=2 e=0 z=0  None .sdata2    @2569 */
SECTION_SDATA2 static f32 lit_2569 = 3.0f;

/* 8045539C-804553A0 0004+00 s=1 e=0 z=0  None .sdata2    @2570 */
SECTION_SDATA2 static f32 lit_2570 = 32768.0f;

/* 804553A0-804553A8 0008+00 s=4 e=0 z=0  None .sdata2    @2572 */
SECTION_SDATA2 static f64 lit_2572 = 4503601774854144.0 /* cast s32 to float */;

/* 804553A8-804553B0 0008+00 s=2 e=0 z=0  None .sdata2    @2574 */
SECTION_SDATA2 static f64 lit_2574 = 4503599627370496.0 /* cast u32 to float */;

/* 8027EFEC-8027F8C8 08DC+00 s=0 e=1 z=0  None .text
 * init_p__15JPABaseParticleFP18JPAEmitterWorkData              */
//	8027F01C: 803621D0 (_savegpr_26)
//	8027F070: 80455388 (lit_2565)
//	8027F07C: 804553A0 (lit_2572)
//	8027F0BC: 8045538C (lit_2566)
//	8027F0D8: 80346E4C (PSMTXMultVecSR)
//	8027F164: 8045538C (lit_2566)
//	8027F184: 80455390 (lit_2567)
//	8027F188: 80450AEC (__float_epsilon)
//	8027F18C: 80450AEC (__float_epsilon)
//	8027F1C8: 80455394 (lit_2568)
//	8027F1D0: 80455398 (lit_2569)
//	8027F214: 8045538C (lit_2566)
//	8027F234: 80455390 (lit_2567)
//	8027F238: 80450AEC (__float_epsilon)
//	8027F23C: 80450AEC (__float_epsilon)
//	8027F278: 80455394 (lit_2568)
//	8027F280: 80455398 (lit_2569)
//	8027F2C4: 8045538C (lit_2566)
//	8027F310: 80455388 (lit_2565)
//	8027F324: 8045539C (lit_2570)
//	8027F348: 802806C0 (JPAGetYZRotateMtx__FssPA4_f)
//	8027F358: 803464E4 (PSMTXConcat)
//	8027F388: 8045538C (lit_2566)
//	8027F3C0: 80455388 (lit_2565)
//	8027F3CC: 80455394 (lit_2568)
//	8027F478: 80455388 (lit_2565)
//	8027F530: 80346E4C (PSMTXMultVecSR)
//	8027F534: 8045538C (lit_2566)
//	8027F570: 80455388 (lit_2565)
//	8027F620: 804553A8 (lit_2574)
//	8027F718: 80455388 (lit_2565)
//	8027F740: 80455388 (lit_2565)
//	8027F78C: 80455388 (lit_2565)
//	8027F7A0: 80455394 (lit_2568)
//	8027F8B4: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::init_p(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/init_p__15JPABaseParticleFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 8027F8C8-8027FFD0 0708+00 s=0 e=1 z=0  None .text
 * init_c__15JPABaseParticleFP18JPAEmitterWorkDataP15JPABaseParticle */
//	8027F8E0: 803621DC (_savegpr_29)
//	8027F90C: 8045538C (lit_2566)
//	8027F970: 80455388 (lit_2565)
//	8027F978: 80455394 (lit_2568)
//	8027FA20: 80455390 (lit_2567)
//	8027FA24: 80450AEC (__float_epsilon)
//	8027FA28: 80450AEC (__float_epsilon)
//	8027FA58: 80455398 (lit_2569)
//	8027FB10: 80455388 (lit_2565)
//	8027FBE4: 80455390 (lit_2567)
//	8027FBE8: 80450AEC (__float_epsilon)
//	8027FBEC: 80450AEC (__float_epsilon)
//	8027FC00: 8045538C (lit_2566)
//	8027FC1C: 80455394 (lit_2568)
//	8027FC24: 80455398 (lit_2569)
//	8027FC68: 80339A5C (JMAVECScaleAdd__FPC3VecPC3VecP3Vecf)
//	8027FCBC: 80455388 (lit_2565)
//	8027FD84: 80455388 (lit_2565)
//	8027FDAC: 804553A8 (lit_2574)
//	8027FF40: 804553A8 (lit_2574)
//	8027FFBC: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::init_c(JPAEmitterWorkData* param_0, JPABaseParticle* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/init_c__15JPABaseParticleFP18JPAEmitterWorkDataP15JPABaseParticle.s"
}
#pragma pop

/* 8027FFD0-80280260 0290+00 s=0 e=1 z=0  None .text
 * calc_p__15JPABaseParticleFP18JPAEmitterWorkData              */
//	8027FFE8: 803621DC (_savegpr_29)
//	8028001C: 804553A0 (lit_2572)
//	80280078: 8045538C (lit_2566)
//	802800A0: 80276684 (calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle)
//	80280170: 8027658C (calc_p__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle)
//	8028019C: 802804C8 (canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData)
//	802801C4: 8027EB60 (createChild__14JPABaseEmitterFP15JPABaseParticle)
//	8028024C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::calc_p(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/calc_p__15JPABaseParticleFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 80280260-802804C8 0268+00 s=0 e=1 z=0  None .text
 * calc_c__15JPABaseParticleFP18JPAEmitterWorkData              */
//	802802AC: 804553A0 (lit_2572)
//	80280330: 8045538C (lit_2566)
//	80280358: 80276684 (calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle)
//	80280428: 80276608 (calc_c__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::calc_c(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/calc_c__15JPABaseParticleFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 802804C8-80280548 0080+00 s=1 e=0 z=0  None .text
 * canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData      */
//	802804E0: 804553A0 (lit_2572)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::canCreateChild(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData.s"
}
#pragma pop

/* ############################################################################################## */
/* 804553B0-804553B8 0004+04 s=2 e=0 z=0  None .sdata2    @3010 */
SECTION_SDATA2 static f32 lit_3010[1 + 1 /* padding */] = {
    2.0f,
    /* padding */
    0.0f,
};

/* 80280548-80280568 0020+00 s=0 e=3 z=0  None .text
 * getWidth__15JPABaseParticleCFPC14JPABaseEmitter              */
//	80280548: 804553B0 (lit_3010)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::getWidth(JPABaseEmitter const* param_0) const {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/getWidth__15JPABaseParticleCFPC14JPABaseEmitter.s"
}
#pragma pop

/* 80280568-80280588 0020+00 s=0 e=3 z=0  None .text
 * getHeight__15JPABaseParticleCFPC14JPABaseEmitter             */
//	80280568: 804553B0 (lit_3010)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::getHeight(JPABaseEmitter const* param_0) const {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/getHeight__15JPABaseParticleCFPC14JPABaseEmitter.s"
}
#pragma pop
