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

namespace std {
template <typename A1, typename B1>
void find_if(/* ... */);
/* 802815B4 */ /* std::find_if<JGadget::TLinkList<JStudio::ctb::TObject, 12>::iterator,
                  JStudio::object::TPRObject_ID_equal> */
void func_802815B4(void* _this, JGadget::TLinkList<JStudio::ctb::TObject, 12>::iterator,
                   JGadget::TLinkList<JStudio::ctb::TObject, 12>::iterator, JStudio::object::TPRObject_ID_equal);
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
extern "C" void func_802815B4(void* _this, JGadget::TLinkList<JStudio::ctb::TObject, 12>::iterator,
                              JGadget::TLinkList<JStudio::ctb::TObject, 12>::iterator,
                              JStudio::object::TPRObject_ID_equal);

//
// External References:
//

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
extern "C" u32 ga4cSignature__Q37JStudio3ctb4data[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C4878-803C488C 021998 0014+00 2/2 0/0 0/0 .data            __vt__Q37JStudio3ctb6TParse */
SECTION_DATA extern void* __vt__Q37JStudio3ctb6TParse[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q37JStudio3ctb6TParseFv,
    (void*)parseHeader_next__Q37JStudio3ctb6TParseFPPCvPUlUl,
    (void*)parseBlock_next__Q37JStudio3ctb6TParseFPPCvPUlUl,
};

/* 803C488C-803C48A0 0219AC 0014+00 1/1 4/4 0/0 .data __vt__Q37JGadget6binary19TParse_header_block
 */
SECTION_DATA extern void* __vt__Q37JGadget6binary19TParse_header_block[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 803C48A0-803C48B4 0219C0 0014+00 1/1 1/1 0/0 .data            __vt__Q37JStudio3ctb8TFactory */
SECTION_DATA extern void* __vt__Q37JStudio3ctb8TFactory[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q37JStudio3ctb8TFactoryFv,
    (void*)create__Q37JStudio3ctb8TFactoryFRCQ47JStudio3ctb4data13TParse_TBlock,
    (void*)destroy__Q37JStudio3ctb8TFactoryFPQ37JStudio3ctb7TObject,
};

/* 803C48B4-803C48C0 0219D4 000C+00 2/2 0/0 0/0 .data            __vt__Q37JStudio3ctb8TControl */
SECTION_DATA extern void* __vt__Q37JStudio3ctb8TControl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q37JStudio3ctb8TControlFv,
};

/* 803C48C0-803C48D0 0219E0 0010+00 2/2 0/0 0/0 .data __vt__Q37JStudio3ctb14TObject_TxyzRy */
SECTION_DATA extern void* __vt__Q37JStudio3ctb14TObject_TxyzRy[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q37JStudio3ctb14TObject_TxyzRyFv,
    (void*)getScheme__Q37JStudio3ctb14TObject_TxyzRyCFv,
};

/* 803C48D0-803C48E0 0219F0 0010+00 2/2 0/0 0/0 .data            __vt__Q37JStudio3ctb7TObject */
SECTION_DATA extern void* __vt__Q37JStudio3ctb7TObject[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80280F18-80280F60 27B858 0048+00 1/1 0/0 0/0 .text            __dt__Q37JStudio3ctb7TObjectFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TObject::~TObject() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb7TObjectFv.s"
}
#pragma pop

/* 80280F60-80280FBC 27B8A0 005C+00 1/1 0/0 0/0 .text
 * __ct__Q37JStudio3ctb14TObject_TxyzRyFRCQ47JStudio3ctb4data13TParse_TBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TObject_TxyzRy::TObject_TxyzRy(JStudio::ctb::data::TParse_TBlock const& param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__ct__Q37JStudio3ctb14TObject_TxyzRyFRCQ47JStudio3ctb4data13TParse_TBlock.s"
}
#pragma pop

/* 80280FBC-80280FC4 27B8FC 0008+00 1/0 0/0 0/0 .text getScheme__Q37JStudio3ctb14TObject_TxyzRyCFv
 */
bool JStudio::ctb::TObject_TxyzRy::getScheme() const {
    return true;
}

/* 80280FC4-80280FF4 27B904 0030+00 0/0 1/1 0/0 .text            __ct__Q37JStudio3ctb8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TControl::TControl() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__ct__Q37JStudio3ctb8TControlFv.s"
}
#pragma pop

/* 80280FF4-80281060 27B934 006C+00 1/0 1/1 0/0 .text            __dt__Q37JStudio3ctb8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JStudio::ctb::TControl::~TControl() {
extern "C" asm void __dt__Q37JStudio3ctb8TControlFv() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb8TControlFv.s"
}
#pragma pop

/* 80281060-802810AC 27B9A0 004C+00 1/1 0/0 0/0 .text
 * appendObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::appendObject(JStudio::ctb::TObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/appendObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 802810AC-802810DC 27B9EC 0030+00 1/1 0/0 0/0 .text
 * removeObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::removeObject(JStudio::ctb::TObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/removeObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 802810DC-8028112C 27BA1C 0050+00 1/1 0/0 0/0 .text
 * destroyObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::destroyObject(JStudio::ctb::TObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/destroyObject__Q37JStudio3ctb8TControlFPQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 8028112C-80281190 27BA6C 0064+00 0/0 2/2 0/0 .text destroyObject_all__Q37JStudio3ctb8TControlFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::destroyObject_all() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/destroyObject_all__Q37JStudio3ctb8TControlFv.s"
}
#pragma pop

/* 80281190-80281230 27BAD0 00A0+00 1/1 0/0 0/0 .text getObject__Q37JStudio3ctb8TControlFPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::getObject(void const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/getObject__Q37JStudio3ctb8TControlFPCvUl.s"
}
#pragma pop

/* 80281230-80281274 27BB70 0044+00 0/0 1/1 0/0 .text getObject_index__Q37JStudio3ctb8TControlFUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TControl::getObject_index(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/getObject_index__Q37JStudio3ctb8TControlFUl.s"
}
#pragma pop

/* 80281274-802812BC 27BBB4 0048+00 1/0 1/1 0/0 .text            __dt__Q37JStudio3ctb8TFactoryFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JStudio::ctb::TFactory::~TFactory() {
extern "C" asm void __dt__Q37JStudio3ctb8TFactoryFv() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb8TFactoryFv.s"
}
#pragma pop

/* 802812BC-80281320 27BBFC 0064+00 1/0 0/0 0/0 .text
 * create__Q37JStudio3ctb8TFactoryFRCQ47JStudio3ctb4data13TParse_TBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TFactory::create(JStudio::ctb::data::TParse_TBlock const& param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/create__Q37JStudio3ctb8TFactoryFRCQ47JStudio3ctb4data13TParse_TBlock.s"
}
#pragma pop

/* 80281320-8028135C 27BC60 003C+00 1/0 0/0 0/0 .text
 * destroy__Q37JStudio3ctb8TFactoryFPQ37JStudio3ctb7TObject     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TFactory::destroy(JStudio::ctb::TObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/destroy__Q37JStudio3ctb8TFactoryFPQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 8028135C-8028137C 27BC9C 0020+00 0/0 1/1 0/0 .text
 * __ct__Q37JStudio3ctb6TParseFPQ37JStudio3ctb8TControl         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::ctb::TParse::TParse(JStudio::ctb::TControl* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__ct__Q37JStudio3ctb6TParseFPQ37JStudio3ctb8TControl.s"
}
#pragma pop

/* 8028137C-802813DC 27BCBC 0060+00 1/0 1/1 0/0 .text            __dt__Q37JStudio3ctb6TParseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JStudio::ctb::TParse::~TParse() {
extern "C" asm void __dt__Q37JStudio3ctb6TParseFv() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb6TParseFv.s"
}
#pragma pop

/* 802813DC-80281470 27BD1C 0094+00 1/0 0/0 0/0 .text
 * parseHeader_next__Q37JStudio3ctb6TParseFPPCvPUlUl            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TParse::parseHeader_next(void const** param_0, u32* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/parseHeader_next__Q37JStudio3ctb6TParseFPPCvPUlUl.s"
}
#pragma pop

/* 80281470-80281554 27BDB0 00E4+00 1/0 0/0 0/0 .text
 * parseBlock_next__Q37JStudio3ctb6TParseFPPCvPUlUl             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::ctb::TParse::parseBlock_next(void const** param_0, u32* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/parseBlock_next__Q37JStudio3ctb6TParseFPPCvPUlUl.s"
}
#pragma pop

/* 80281554-802815B4 27BE94 0060+00 1/0 0/0 0/0 .text __dt__Q37JStudio3ctb14TObject_TxyzRyFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JStudio::ctb::TObject_TxyzRy::~TObject_TxyzRy() {
extern "C" asm void __dt__Q37JStudio3ctb14TObject_TxyzRyFv() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/__dt__Q37JStudio3ctb14TObject_TxyzRyFv.s"
}
#pragma pop

/* 802815B4-80281648 27BEF4 0094+00 1/1 0/0 0/0 .text
 * find_if<Q37JGadget37TLinkList<Q37JStudio3ctb7TObject,-12>8iterator,Q37JStudio6object18TPRObject_ID_equal>__3stdFQ37JGadget37TLinkList<Q37JStudio3ctb7TObject,-12>8iteratorQ37JGadget37TLinkList<Q37JStudio3ctb7TObject,-12>8iteratorQ37JStudio6object18TPRObject_ID_equal
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802815B4(void* _this, JGadget::TLinkList<JStudio::ctb::TObject, 12>::iterator param_0,
                                  JGadget::TLinkList<JStudio::ctb::TObject, 12>::iterator param_1,
                                  JStudio::object::TPRObject_ID_equal param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/ctb/func_802815B4.s"
}
#pragma pop
