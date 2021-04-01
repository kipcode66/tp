//
// Generated By: dol2asm
// Translation Unit: ctb
//

#include "JSystem/JStudio/JStudio/ctb.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

namespace JStudio {
namespace ctb {
struct TObject {
    /* 80280F18 */ ~TObject();
};

struct data {
    struct TParse_TBlock {};
};

struct TObject_TxyzRy {
    /* 80280F60 */ TObject_TxyzRy(JStudio::ctb::data::TParse_TBlock const&);
    /* 80280FBC */ bool getScheme() const;
    /* 80281554 */ ~TObject_TxyzRy();
};

struct TControl {
    /* 80280FC4 */ TControl();
    /* 80280FF4 */ ~TControl();
    /* 80281060 */ void appendObject(JStudio::ctb::TObject*);
    /* 802810AC */ void removeObject(JStudio::ctb::TObject*);
    /* 802810DC */ void destroyObject(JStudio::ctb::TObject*);
    /* 8028112C */ void destroyObject_all();
    /* 80281190 */ void getObject(void const*, u32);
    /* 80281230 */ void getObject_index(u32);
};

struct TFactory {
    /* 80281274 */ ~TFactory();
    /* 802812BC */ void create(JStudio::ctb::data::TParse_TBlock const&);
    /* 80281320 */ void destroy(JStudio::ctb::TObject*);
};

struct TParse {
    /* 8028135C */ TParse(JStudio::ctb::TControl*);
    /* 8028137C */ ~TParse();
    /* 802813DC */ void parseHeader_next(void const**, u32*, u32);
    /* 80281470 */ void parseBlock_next(void const**, u32*, u32);
};

};  // namespace ctb

struct object {
    struct TPRObject_ID_equal {};

    struct TIDData {
        /* 80288988 */ void isEqual(JStudio::object::TIDData const&,
                                    JStudio::object::TIDData const&);
    };
};

};  // namespace JStudio

namespace JGadget {
template <typename A1, typename B1>
struct TLinkList {};
/* TLinkList<JStudio::ctb::TObject, 12> */
struct TLinkList__template0 {
    struct iterator {};
};

struct binary {
    struct TParse_header_block {
        /* 802DC8C8 */ ~TParse_header_block();
    };
};

struct TLinkListNode {};

struct TNodeLinkList {
    struct iterator {};

    /* 802DCA1C */ ~TNodeLinkList();
    /* 802DCBA8 */ void Insert(JGadget::TNodeLinkList::iterator, JGadget::TLinkListNode*);
    /* 802DCBD4 */ void Erase(JGadget::TLinkListNode*);
};

};  // namespace JGadget

namespace std {
/*          */ template <typename A1, typename B1>
	/*          */ void find_if(/* JGadget::TLinkList::iterator, JGadget::TLinkList::iterator, JStudio::object::TPRObject_ID_equal */);
/* 802815B4 */ /* find_if<JGadget::TLinkList<JStudio::ctb::TObject, 12>::iterator,
                  JStudio::object::TPRObject_ID_equal> */
void find_if__template0(JGadget::TLinkList__template0::iterator,
                        JGadget::TLinkList__template0::iterator,
                        JStudio::object::TPRObject_ID_equal);

};  // namespace std

//
// Forward References:
//

extern "C" void __dt__Q37JStudio3ctb7TObjectFv();
extern "C" void __ct__Q37JStudio3ctb14TObject_TxyzRyFRCQ47JStudio3ctb4data13TParse_TBlock();
extern "C" bool getScheme__Q37JStudio3ctb14TObject_TxyzRyCFv();
extern "C" void __ct__Q37JStudio3ctb8TControlFv();
extern "C" void __dt__Q37JStudio3ctb8TControlFv();
extern "C" void appendObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject();
extern "C" void removeObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject();
extern "C" void destroyObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject();
extern "C" void destroyObject_all__Q37JStudio3ctb8TControlFv();
extern "C" void getObject__Q37JStudio3ctb8TControlFPCvUl();
extern "C" void getObject_index__Q37JStudio3ctb8TControlFUl();
extern "C" void __dt__Q37JStudio3ctb8TFactoryFv();
extern "C" void create__Q37JStudio3ctb8TFactoryFRCQ47JStudio3ctb4data13TParse_TBlock();
extern "C" void destroy__Q37JStudio3ctb8TFactoryFPQ37JStudio3ctb7TObject();
extern "C" void __ct__Q37JStudio3ctb6TParseFPQ37JStudio3ctb8TControl();
extern "C" void __dt__Q37JStudio3ctb6TParseFv();
extern "C" void parseHeader_next__Q37JStudio3ctb6TParseFPPCvPUlUl();
extern "C" void parseBlock_next__Q37JStudio3ctb6TParseFPPCvPUlUl();
extern "C" void __dt__Q37JStudio3ctb14TObject_TxyzRyFv();
extern "C" void func_802815B4();
extern "C" extern void* __vt__Q37JStudio3ctb6TParse[5];
extern "C" extern void* __vt__Q37JGadget6binary19TParse_header_block[5];
extern "C" extern void* __vt__Q37JStudio3ctb8TFactory[5];
extern "C" extern void* __vt__Q37JStudio3ctb8TControl[3];
extern "C" extern void* __vt__Q37JStudio3ctb14TObject_TxyzRy[4];
extern "C" extern void* __vt__Q37JStudio3ctb7TObject[4];

//
// External References:
//

void* operator new(u32);
void operator delete(void*);

extern "C" void
isEqual__Q37JStudio6object7TIDDataFRCQ37JStudio6object7TIDDataRCQ37JStudio6object7TIDData();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __dt__Q37JGadget6binary19TParse_header_blockFv();
extern "C" void __dt__Q27JGadget13TNodeLinkListFv();
extern "C" void
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode();
extern "C" void Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" void memcmp();
extern "C" extern u32 ga4cSignature__Q37JStudio3ctb4data[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C4878-803C488C 0014+00 s=2 e=0 z=0  None .data      __vt__Q37JStudio3ctb6TParse */
SECTION_DATA void* __vt__Q37JStudio3ctb6TParse[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q37JStudio3ctb6TParseFv,
    (void*)parseHeader_next__Q37JStudio3ctb6TParseFPPCvPUlUl,
    (void*)parseBlock_next__Q37JStudio3ctb6TParseFPPCvPUlUl,
};

/* 803C488C-803C48A0 0014+00 s=1 e=4 z=0  None .data __vt__Q37JGadget6binary19TParse_header_block
 */
SECTION_DATA void* __vt__Q37JGadget6binary19TParse_header_block[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 803C48A0-803C48B4 0014+00 s=1 e=1 z=0  None .data      __vt__Q37JStudio3ctb8TFactory */
SECTION_DATA void* __vt__Q37JStudio3ctb8TFactory[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q37JStudio3ctb8TFactoryFv,
    (void*)create__Q37JStudio3ctb8TFactoryFRCQ47JStudio3ctb4data13TParse_TBlock,
    (void*)destroy__Q37JStudio3ctb8TFactoryFPQ37JStudio3ctb7TObject,
};

/* 803C48B4-803C48C0 000C+00 s=2 e=0 z=0  None .data      __vt__Q37JStudio3ctb8TControl */
SECTION_DATA void* __vt__Q37JStudio3ctb8TControl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q37JStudio3ctb8TControlFv,
};

/* 803C48C0-803C48D0 0010+00 s=2 e=0 z=0  None .data      __vt__Q37JStudio3ctb14TObject_TxyzRy */
SECTION_DATA void* __vt__Q37JStudio3ctb14TObject_TxyzRy[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q37JStudio3ctb14TObject_TxyzRyFv,
    (void*)getScheme__Q37JStudio3ctb14TObject_TxyzRyCFv,
};

/* 803C48D0-803C48E0 0010+00 s=2 e=0 z=0  None .data      __vt__Q37JStudio3ctb7TObject */
SECTION_DATA void* __vt__Q37JStudio3ctb7TObject[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80280F18-80280F60 0048+00 s=1 e=0 z=0  None .text      __dt__Q37JStudio3ctb7TObjectFv */
//	80280F30: 803C48D0 (__vt__Q37JStudio3ctb7TObject)
//	80280F34: 803C48D0 (__vt__Q37JStudio3ctb7TObject)
//	80280F44: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TObject::~TObject() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb7TObjectFv.s"
}
#pragma pop

/* 80280F60-80280FBC 005C+00 s=1 e=0 z=0  None .text
 * __ct__Q37JStudio3ctb14TObject_TxyzRyFRCQ47JStudio3ctb4data13TParse_TBlock */
//	80280F90: 803C48D0 (__vt__Q37JStudio3ctb7TObject)
//	80280F94: 803C48D0 (__vt__Q37JStudio3ctb7TObject)
//	80280FAC: 803C48C0 (__vt__Q37JStudio3ctb14TObject_TxyzRy)
//	80280FB0: 803C48C0 (__vt__Q37JStudio3ctb14TObject_TxyzRy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TObject_TxyzRy::TObject_TxyzRy(JStudio::ctb::data::TParse_TBlock const& param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__ct__Q37JStudio3ctb14TObject_TxyzRyFRCQ47JStudio3ctb4data13TParse_TBlock.s"
}
#pragma pop

/* 80280FBC-80280FC4 0008+00 s=1 e=0 z=0  None .text getScheme__Q37JStudio3ctb14TObject_TxyzRyCFv
 */
bool JStudio::ctb::TObject_TxyzRy::getScheme() const {
    return true;
}

/* 80280FC4-80280FF4 0030+00 s=0 e=1 z=0  None .text      __ct__Q37JStudio3ctb8TControlFv */
//	80280FC4: 803C48B4 (__vt__Q37JStudio3ctb8TControl)
//	80280FC8: 803C48B4 (__vt__Q37JStudio3ctb8TControl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TControl::TControl() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__ct__Q37JStudio3ctb8TControlFv.s"
}
#pragma pop

/* 80280FF4-80281060 006C+00 s=1 e=1 z=0  None .text      __dt__Q37JStudio3ctb8TControlFv */
//	80281014: 803C48B4 (__vt__Q37JStudio3ctb8TControl)
//	80281018: 803C48B4 (__vt__Q37JStudio3ctb8TControl)
//	80281030: 802DCA1C (__dt__Q27JGadget13TNodeLinkListFv)
//	80281040: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TControl::~TControl() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb8TControlFv.s"
}
#pragma pop

/* 80281060-802810AC 004C+00 s=1 e=0 z=0  None .text
 * appendObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject */
//	80281098: 802DCBA8
//(Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::appendObject(JStudio::ctb::TObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/appendObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 802810AC-802810DC 0030+00 s=1 e=0 z=0  None .text
 * removeObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject */
//	802810C8: 802DCBD4 (Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::removeObject(JStudio::ctb::TObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/removeObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 802810DC-8028112C 0050+00 s=1 e=0 z=0  None .text
 * destroyObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject */
//	802810F8: 802810AC (removeObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::destroyObject(JStudio::ctb::TObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/destroyObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 8028112C-80281190 0064+00 s=0 e=2 z=0  None .text destroyObject_all__Q37JStudio3ctb8TControlFv
 */
//	80281168: 802810DC (destroyObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::destroyObject_all() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/destroyObject_all__Q37JStudio3ctb8TControlFv.s"
}
#pragma pop

/* 80281190-80281230 00A0+00 s=1 e=0 z=0  None .text      getObject__Q37JStudio3ctb8TControlFPCvUl
 */
//	802811DC: 802815B4 (func_802815B4)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::getObject(void const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/getObject__Q37JStudio3ctb8TControlFPCvUl.s"
}
#pragma pop

/* 80281230-80281274 0044+00 s=0 e=1 z=0  None .text getObject_index__Q37JStudio3ctb8TControlFUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::getObject_index(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/getObject_index__Q37JStudio3ctb8TControlFUl.s"
}
#pragma pop

/* 80281274-802812BC 0048+00 s=1 e=1 z=0  None .text      __dt__Q37JStudio3ctb8TFactoryFv */
//	8028128C: 803C48A0 (__vt__Q37JStudio3ctb8TFactory)
//	80281290: 803C48A0 (__vt__Q37JStudio3ctb8TFactory)
//	802812A0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TFactory::~TFactory() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb8TFactoryFv.s"
}
#pragma pop

/* 802812BC-80281320 0064+00 s=1 e=0 z=0  None .text
 * create__Q37JStudio3ctb8TFactoryFRCQ47JStudio3ctb4data13TParse_TBlock */
//	802812E8: 802CEC4C (__nw__FUl)
//	802812F8: 80280F60 (__ct__Q37JStudio3ctb14TObject_TxyzRyFRCQ47JStudio3ctb4data13TParse_TBlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TFactory::create(JStudio::ctb::data::TParse_TBlock const& param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/create__Q37JStudio3ctb8TFactoryFRCQ47JStudio3ctb4data13TParse_TBlock.s"
}
#pragma pop

/* 80281320-8028135C 003C+00 s=1 e=0 z=0  None .text
 * destroy__Q37JStudio3ctb8TFactoryFPQ37JStudio3ctb7TObject     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TFactory::destroy(JStudio::ctb::TObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/destroy__Q37JStudio3ctb8TFactoryFPQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 8028135C-8028137C 0020+00 s=0 e=1 z=0  None .text
 * __ct__Q37JStudio3ctb6TParseFPQ37JStudio3ctb8TControl         */
//	8028135C: 803C488C (__vt__Q37JGadget6binary19TParse_header_block)
//	80281360: 803C488C (__vt__Q37JGadget6binary19TParse_header_block)
//	80281368: 803C4878 (__vt__Q37JStudio3ctb6TParse)
//	8028136C: 803C4878 (__vt__Q37JStudio3ctb6TParse)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TParse::TParse(JStudio::ctb::TControl* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__ct__Q37JStudio3ctb6TParseFPQ37JStudio3ctb8TControl.s"
}
#pragma pop

/* 8028137C-802813DC 0060+00 s=1 e=1 z=0  None .text      __dt__Q37JStudio3ctb6TParseFv */
//	8028139C: 803C4878 (__vt__Q37JStudio3ctb6TParse)
//	802813A0: 803C4878 (__vt__Q37JStudio3ctb6TParse)
//	802813AC: 802DC8C8 (__dt__Q37JGadget6binary19TParse_header_blockFv)
//	802813BC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TParse::~TParse() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb6TParseFv.s"
}
#pragma pop

/* 802813DC-80281470 0094+00 s=1 e=0 z=0  None .text
 * parseHeader_next__Q37JStudio3ctb6TParseFPPCvPUlUl            */
//	80281404: 804553F8 (ga4cSignature__Q37JStudio3ctb4data)
//	8028140C: 8036608C (memcmp)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TParse::parseHeader_next(void const** param_0, u32* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/parseHeader_next__Q37JStudio3ctb6TParseFPPCvPUlUl.s"
}
#pragma pop

/* 80281470-80281554 00E4+00 s=1 e=0 z=0  None .text
 * parseBlock_next__Q37JStudio3ctb6TParseFPPCvPUlUl             */
//	802814D4: 80281190 (getObject__Q37JStudio3ctb8TControlFPCvUl)
//	80281534: 80281060 (appendObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TParse::parseBlock_next(void const** param_0, u32* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/parseBlock_next__Q37JStudio3ctb6TParseFPPCvPUlUl.s"
}
#pragma pop

/* 80281554-802815B4 0060+00 s=1 e=0 z=0  None .text      __dt__Q37JStudio3ctb14TObject_TxyzRyFv */
//	80281574: 803C48C0 (__vt__Q37JStudio3ctb14TObject_TxyzRy)
//	80281578: 803C48C0 (__vt__Q37JStudio3ctb14TObject_TxyzRy)
//	80281584: 80280F18 (__dt__Q37JStudio3ctb7TObjectFv)
//	80281594: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TObject_TxyzRy::~TObject_TxyzRy() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb14TObject_TxyzRyFv.s"
}
#pragma pop

/* 802815B4-80281648 0094+00 s=1 e=0 z=0  None .text
 * find_if<Q37JGadget37TLinkList<Q37JStudio3ctb7TObject,-12>8iterator,Q37JStudio6object18TPRObject_ID_equal>__3stdFQ37JGadget37TLinkList<Q37JStudio3ctb7TObject,-12>8iteratorQ37JGadget37TLinkList<Q37JStudio3ctb7TObject,-12>8iteratorQ37JStudio6object18TPRObject_ID_equal
 */
//	802815C4: 803621D8 (_savegpr_28)
//	8028161C: 80288988
//(isEqual__Q37JStudio6object7TIDDataFRCQ37JStudio6object7TIDDataRCQ37JStudio6object7TIDData)
//	80281634: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void std::find_if__template0(JGadget::TLinkList__template0::iterator param_0,
                                 JGadget::TLinkList__template0::iterator param_1,
                                 JStudio::object::TPRObject_ID_equal param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/func_802815B4.s"
}
#pragma pop
