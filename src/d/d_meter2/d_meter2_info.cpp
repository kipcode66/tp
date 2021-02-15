/* d_meter2_info.cpp autogenerated by split.py v0.3 at 2021-01-02 00:19:27.098885 */

// #include "d/d_meter2/d_meter2_info/d_meter2_info.h"
#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "global.h"

extern "C" {
char* strcpy(char*, const char*);
int strcmp(const char*, const char*);
u8 dComIfGs_getMixItemIndex(int);
u8 getBombNum__24dSv_player_item_record_cCFUc(u8);
unsigned int getSelectItemIndex__21dSv_player_status_a_cCFi(int);
void __ct__5csXyzFsss(void);
void __dl__FPv(void);
void daNpcF_getPlayerInfoFromPlayerList(void);
void dComIfGp_setSelectItem(int);
void dComIfGs_setMixItemIndex(int, u8);
void dComIfGs_setSelectEquipClothes(u8);
void dComIfGs_setSelectEquipShield(u8);
void dComIfGs_setSelectEquipSword(u8);
void dComIfGs_setSelectItemIndex(int, u8);
void dComIfGs_setWarpItemData_X1_(void);
void dComIfGs_setWarpMarkFlag(void);
void DCStoreRangeNoSync(void);
void dMeter2Info_c_NS_changeWater(void);
void dMeter2Info_c_NS_get2ndTexture(void);
void dMeter2Info_c_NS_get3rdTexture(void);
void dMeter2Info_c_NS_get4thTexture(void);
void dMeter2Info_c_NS_init(void);
void dMeter2Info_c_NS_resetWarpStatus(void);
void dMeter2Info_c_NS_set1stColor(void);
void dMeter2Info_c_NS_set2ndColor(void);
void dMeter2Info_c_NS_set3rdColor(void);
void dMeter2Info_c_NS_set4thColor(void);
void dMeter2Info_c_NS_setSaveStageName(void);
void dMeter2Info_c_NS_setWarpInfo(void);
void dMeterMap_c_NS_isMapOpenCheck(void);
void dMsgFlow_c_NS_doFlow(void);
void dMsgFlow_c_NS_dtor(void);
void dMsgFlow_c_NS_getMsgNo(void);
void dMsgFlow_c_NS_init(void);
void dMsgFlow_c(void);
void dMsgObject_c_NS_setLetterNameID(void);
void func_80361C24(void);
void __cvt_fp2unsigned(void);
void getGlbResource__10JKRArchiveFUlPCcP10JKRArchive(void);
void getItem__17dSv_player_item_cCFib(void);
void isEventBit__11dSv_event_cCFUs(void);
void isLetterGetFlag__17dSv_letter_info_cCFi(void);
void isLightDropGetFlag__16dSv_light_drop_cCFUc(void);
void memcpy(void*, const void*, int);
void offFirstBit__21dSv_player_get_item_cFUc(void);
void onLetterGetFlag__17dSv_letter_info_cFi(void);
void readIdxResource__10JKRArchiveFPvUlUl(void);
void setBombNum__24dSv_player_item_record_cFUcUc(void);
void setItem__17dSv_player_item_cFiUc(void);
}

extern "C" {
// __ct__13dMeter2Info_cFv
// dMeter2Info_c::dMeter2Info_c(void)
asm void dMeter2Info_c(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021BDDC.s"
}

// __dt__13dMeter2Info_cFv
// dMeter2Info_c::~dMeter2Info_c(void)
asm void dMeter2Info_c_NS_dtor(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021BE20.s"
}

// init__13dMeter2Info_cFv
// dMeter2Info_c::init(void)
asm void dMeter2Info_c_NS_init(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021BE68.s"
}

// setFloatingMessage__13dMeter2Info_cFUssb
asm void dMeter2Info_c_NS_setFloatingMessage(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C0E0.s"
}

// setFloatingFlow__13dMeter2Info_cFUssb
asm void func_8021C11C(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C11C.s"
}

// isFloatingMessageVisible__13dMeter2Info_cFv
// dMeter2Info_c::isFloatingMessageVisible(void)
asm void dMeter2Info_c_NS_isFloatingMessageVisible(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C1DC.s"
}

// decFloatingMessageTimer__13dMeter2Info_cFv
// dMeter2Info_c::decFloatingMessageTimer(void)
asm void dMeter2Info_c_NS_decFloatingMessageTimer(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C1F0.s"
}

// resetFloatingMessage__13dMeter2Info_cFv
// dMeter2Info_c::resetFloatingMessage(void)
asm void dMeter2Info_c_NS_resetFloatingMessage(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C218.s"
}

// decMsgKeyWaitTimer__13dMeter2Info_cFv
// dMeter2Info_c::decMsgKeyWaitTimer(void)
asm void dMeter2Info_c_NS_decMsgKeyWaitTimer(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C238.s"
}

// getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c
// dMeter2Info_c::getString(unsigned long, char*, JMSMesgEntry_c*)
asm void dMeter2Info_c_NS_getString(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C250.s"
}

// getStringKana__13dMeter2Info_cFUlPcP14JMSMesgEntry_c
// dMeter2Info_c::getStringKana(unsigned long, char*, JMSMesgEntry_c*)
asm void dMeter2Info_c_NS_getStringKana(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C370.s"
}

// getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c
// dMeter2Info_c::getStringKanji(unsigned long, char*, JMSMesgEntry_c*)
asm void dMeter2Info_c_NS_getStringKanji(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C544.s"
}

// getStringLength__13dMeter2Info_cFP10J2DTextBoxPc
// dMeter2Info_c::getStringLength(J2DTextBox*, char*)
asm void dMeter2Info_c_NS_getStringLength(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C6A4.s"
}

// getFont__10J2DTextBoxCFv
// J2DTextBox::getFont(const void)
asm void func_8021C7F4(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C7F4.s"
}

// getStringLength__13dMeter2Info_cFP7JUTFontffPc
// dMeter2Info_c::getStringLength(JUTFont*, float, float, char*)
asm void dMeter2Info_c_NS_getStringLength_X1_(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C7FC.s"
}

// onDirectUseItem__13dMeter2Info_cFi
// dMeter2Info_c::onDirectUseItem(int)
asm void dMeter2Info_c_NS_onDirectUseItem(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C934.s"
}

// isDirectUseItem__13dMeter2Info_cFi
// dMeter2Info_c::isDirectUseItem(int)
asm void dMeter2Info_c_NS_isDirectUseItem(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C950.s"
}

// setMeterString__13dMeter2Info_cFl
// dMeter2Info_c::setMeterString(long)
asm void func_8021C970(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C970.s"
}

// resetWarpStatus__13dMeter2Info_cFv
// dMeter2Info_c::resetWarpStatus(void)
asm void dMeter2Info_c_NS_resetWarpStatus(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021C9DC.s"
}

// warpInProc__13dMeter2Info_cFv
// dMeter2Info_c::warpInProc(void)
asm void dMeter2Info_c_NS_warpInProc(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021CA04.s"
}

// warpOutProc__13dMeter2Info_cFv
// dMeter2Info_c::warpOutProc(void)
asm void dMeter2Info_c_NS_warpOutProc(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021CA70.s"
}

// resetMeterString__13dMeter2Info_cFv
// dMeter2Info_c::resetMeterString(void)
asm void dMeter2Info_c_NS_resetMeterString(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021CC00.s"
}

// setWarpInfo__13dMeter2Info_cFPCcRC4cXyzsUcUcUc
// dMeter2Info_c::setWarpInfo(const char*, const cXyz&, short, unsigned char, unsigned char,
// unsigned char)
asm void dMeter2Info_c_NS_setWarpInfo(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021CC0C.s"
}

// getItemType__13dMeter2Info_cFUc
// dMeter2Info_c::getItemType(unsigned char)
asm void dMeter2Info_c_NS_getItemType(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021CC80.s"
}

// readItemTexture__13dMeter2Info_cFUcPvP10J2DPicturePvP10J2DPicturePvP10J2DPicturePvP10J2DPicturei
// dMeter2Info_c::readItemTexture(unsigned char, void*, J2DPicture*, void*, J2DPicture*, void*,
// J2DPicture*, void*, J2DPicture*, int)
asm void dMeter2Info_c_NS_readItemTexture(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021CF08.s"
}

// setItemColor__13dMeter2Info_cFUcP10J2DPictureP10J2DPictureP10J2DPictureP10J2DPicture
// dMeter2Info_c::setItemColor(unsigned char, J2DPicture*, J2DPicture*, J2DPicture*, J2DPicture*)
asm void dMeter2Info_c_NS_setItemColor(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021D36C.s"
}

// get2ndTexture__13dMeter2Info_cFUc
// dMeter2Info_c::get2ndTexture(unsigned char)
asm void dMeter2Info_c_NS_get2ndTexture(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021D44C.s"
}

// get3rdTexture__13dMeter2Info_cFUc
// dMeter2Info_c::get3rdTexture(unsigned char)
asm void dMeter2Info_c_NS_get3rdTexture(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021D4B8.s"
}

// get4thTexture__13dMeter2Info_cFUc
// dMeter2Info_c::get4thTexture(unsigned char)
asm void dMeter2Info_c_NS_get4thTexture(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021D4FC.s"
}

// set1stColor__13dMeter2Info_cFUcP10J2DPicture
// dMeter2Info_c::set1stColor(unsigned char, J2DPicture*)
asm void dMeter2Info_c_NS_set1stColor(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021D524.s"
}

// set2ndColor__13dMeter2Info_cFUcP10J2DPicture
// dMeter2Info_c::set2ndColor(unsigned char, J2DPicture*)
asm void dMeter2Info_c_NS_set2ndColor(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021D644.s"
}

// set3rdColor__13dMeter2Info_cFUcP10J2DPicture
// dMeter2Info_c::set3rdColor(unsigned char, J2DPicture*)
asm void dMeter2Info_c_NS_set3rdColor(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021D764.s"
}

// set4thColor__13dMeter2Info_cFUcP10J2DPicture
// dMeter2Info_c::set4thColor(unsigned char, J2DPicture*)
asm void dMeter2Info_c_NS_set4thColor(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021DB64.s"
}

// setHotSpringTimer__13dMeter2Info_cFUc
// dMeter2Info_c::setHotSpringTimer(unsigned char)
asm void dMeter2Info_c_NS_setHotSpringTimer(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021DCC4.s"
}

// decHotSpringTimer__13dMeter2Info_cFv
// dMeter2Info_c::decHotSpringTimer(void)
asm void dMeter2Info_c_NS_decHotSpringTimer(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021DCE0.s"
}

// changeWater__13dMeter2Info_cFUc
// dMeter2Info_c::changeWater(unsigned char)
asm void dMeter2Info_c_NS_changeWater(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021DD5C.s"
}

// setMiniGameItem__13dMeter2Info_cFUc
// dMeter2Info_c::setMiniGameItem(unsigned char)
asm void dMeter2Info_c_NS_setMiniGameItem(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021DE18.s"
}

// resetMiniGameItem__13dMeter2Info_cFb
asm void dMeter2Info_c_NS_resetMiniGameItem(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E0C4.s"
}

// setMiniGameCount__13dMeter2Info_cFSc
// dMeter2Info_c::setMiniGameCount(char)
asm void func_8021E268(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E268.s"
}

// setSaveStageName__13dMeter2Info_cFPCc
// dMeter2Info_c::setSaveStageName(const char*)
asm void dMeter2Info_c_NS_setSaveStageName(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E290.s"
}

// dMeter2Info_getNowLifeGauge__Fv
// dMeter2Info_getNowLifeGauge(void)
asm void func_8021E2B4(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E2B4.s"
}

// dMeter2Info_getNumberTextureName__Fi
// dMeter2Info_getNumberTextureName(int)
asm void dMeter2Info_getNumberTextureName(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E2C8.s"
}

// dMeter2Info_getPlusTextureName__Fv
// dMeter2Info_getPlusTextureName(void)
asm void func_8021E2DC(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E2DC.s"
}

// dMeter2Info_getPixel__FffffffPC7ResTIMG
// dMeter2Info_getPixel(float, float, float, float, float, float, const ResTIMG*)
asm void dMeter2Info_getPixel(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E308.s"
}

// dMeter2Info_setCloth__FUcb
asm void dMeter2Info_setCloth(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E4B0.s"
}

// dMeter2Info_setSword__FUcb
asm void dMeter2Info_setSword(u8, bool) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E530.s"
}

// dMeter2Info_setShield__FUcb
asm void dMeter2Info_setShield(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E5D4.s"
}

// dMeter2Info_is2DActiveTouchArea__Fv
// dMeter2Info_is2DActiveTouchArea(void)
asm void dMeter2Info_is2DActiveTouchArea(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E660.s"
}

// dMeter2Info_isMapOpenCheck__Fv
// dMeter2Info_isMapOpenCheck(void)
asm void dMeter2Info_isMapOpenCheck(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E668.s"
}

// dMeter2Info_isItemOpenCheck__Fv
// dMeter2Info_isItemOpenCheck(void)
asm void dMeter2Info_isItemOpenCheck(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E688.s"
}

// dMeter2Info_getRecieveLetterNum__Fv
// dMeter2Info_getRecieveLetterNum(void)
asm void dMeter2Info_getRecieveLetterNum(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E6E4.s"
}

// dMeter2Info_getNewLetterNum__Fv
// dMeter2Info_getNewLetterNum(void)
asm void dMeter2Info_getNewLetterNum(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E754.s"
}

// dMeter2Info_setNewLetterSender__Fv
// dMeter2Info_setNewLetterSender(void)
asm void dMeter2Info_setNewLetterSender(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E804.s"
}

// dMeter2Info_recieveLetter__Fv
// dMeter2Info_recieveLetter(void)
asm void dMeter2Info_recieveLetter(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E8DC.s"
}

// dMeter2Info_set2DVibration__Fv
// dMeter2Info_set2DVibration(void)
asm void dMeter2Info_set2DVibration(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E9D0.s"
}

// dMeter2Info_set2DVibrationM__Fv
// dMeter2Info_set2DVibrationM(void)
asm void dMeter2Info_set2DVibrationM(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E9D4.s"
}

// __sinit_d_meter2_info_cpp
asm void func_8021E9D8(void) {
    nofralloc
#include "d/d_meter2/d_meter2_info/asm/func_8021E9D8.s"
}
};