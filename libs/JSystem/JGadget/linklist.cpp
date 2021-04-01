//
// Generated By: dol2asm
// Translation Unit: linklist
//

#include "JSystem/JGadget/linklist.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

namespace JGadget {
struct TLinkListNode {};

struct TNodeLinkList {
    struct iterator {};

    /* 802DCA1C */ ~TNodeLinkList();
    /* 802DCAA0 */ void erase(JGadget::TNodeLinkList::iterator, JGadget::TNodeLinkList::iterator);
    /* 802DCA58 */ void erase(JGadget::TNodeLinkList::iterator);
    /* 802DCB08 */ void splice(JGadget::TNodeLinkList::iterator, JGadget::TNodeLinkList&,
                               JGadget::TNodeLinkList::iterator);
    /* 802DCBA8 */ void Insert(JGadget::TNodeLinkList::iterator, JGadget::TLinkListNode*);
    /* 802DCBD4 */ void Erase(JGadget::TLinkListNode*);
    /* 802DCBF8 */ void Remove(JGadget::TLinkListNode*);
};

};  // namespace JGadget

//
// Forward References:
//

extern "C" void __dt__Q27JGadget13TNodeLinkListFv();
extern "C" void erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iterator();
extern "C" void
erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorQ37JGadget13TNodeLinkList8iterator();
extern "C" void
splice__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorRQ27JGadget13TNodeLinkListQ37JGadget13TNodeLinkList8iterator();
extern "C" void
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode();
extern "C" void Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode();
extern "C" void Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode();

//
// External References:
//

void operator delete(void*);

extern "C" void __dl__FPv();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* 802DCA1C-802DCA58 003C+00 s=1 e=6 z=0  None .text      __dt__Q27JGadget13TNodeLinkListFv */
//	802DCA3C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JGadget::TNodeLinkList::~TNodeLinkList() {
    nofralloc
#include "asm/JSystem/JGadget/linklist/__dt__Q27JGadget13TNodeLinkListFv.s"
}
#pragma pop

/* 802DCA58-802DCAA0 0048+00 s=0 e=2 z=0  None .text
 * erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iterator */
//	802DCA88: 802DCAA0
//(erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorQ37JGadget13TNodeLinkList8iterator)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JGadget::TNodeLinkList::erase(JGadget::TNodeLinkList::iterator param_0) {
    nofralloc
#include "asm/JSystem/JGadget/linklist/erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iterator.s"
}
#pragma pop

/* 802DCAA0-802DCB08 0068+00 s=1 e=0 z=0  None .text
 * erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorQ37JGadget13TNodeLinkList8iterator
 */
//	802DCAB0: 803621D4 (_savegpr_27)
//	802DCAD8: 802DCBD4 (Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode)
//	802DCAF4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JGadget::TNodeLinkList::erase(JGadget::TNodeLinkList::iterator param_0,
                                       JGadget::TNodeLinkList::iterator param_1) {
    nofralloc
#include "asm/JSystem/JGadget/linklist/func_802DCAA0.s"
}
#pragma pop

/* 802DCB08-802DCBA8 00A0+00 s=1 e=0 z=0  None .text
 * splice__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorRQ27JGadget13TNodeLinkListQ37JGadget13TNodeLinkList8iterator
 */
//	802DCB18: 803621DC (_savegpr_29)
//	802DCB70: 802DCBD4 (Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode)
//	802DCB8C: 802DCBA8
//(Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode)
//	802DCB94: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JGadget::TNodeLinkList::splice(JGadget::TNodeLinkList::iterator param_0,
                                        JGadget::TNodeLinkList& param_1,
                                        JGadget::TNodeLinkList::iterator param_2) {
    nofralloc
#include "asm/JSystem/JGadget/linklist/func_802DCB08.s"
}
#pragma pop

/* 802DCBA8-802DCBD4 002C+00 s=1 e=7 z=0  None .text
 * Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JGadget::TNodeLinkList::Insert(JGadget::TNodeLinkList::iterator param_0,
                                        JGadget::TLinkListNode* param_1) {
    nofralloc
#include "asm/JSystem/JGadget/linklist/func_802DCBA8.s"
}
#pragma pop

/* 802DCBD4-802DCBF8 0024+00 s=2 e=4 z=0  None .text
 * Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JGadget::TNodeLinkList::Erase(JGadget::TLinkListNode* param_0) {
    nofralloc
#include "asm/JSystem/JGadget/linklist/Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode.s"
}
#pragma pop

/* 802DCBF8-802DCCC8 00D0+00 s=0 e=2 z=0  None .text
 * Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode */
//	802DCC08: 803621D8 (_savegpr_28)
//	802DCC7C: 802DCB08
//(splice__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorRQ27JGadget13TNodeLinkListQ37JGadget13TNodeLinkList8iterator)
//	802DCCAC: 802DCA1C (__dt__Q27JGadget13TNodeLinkListFv)
//	802DCCB4: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JGadget::TNodeLinkList::Remove(JGadget::TLinkListNode* param_0) {
    nofralloc
#include "asm/JSystem/JGadget/linklist/Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode.s"
}
#pragma pop
