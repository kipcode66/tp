/**
 * Z2Param.cpp
 * Z2AudioLib constants
 */

#include "Z2AudioLib/Z2Param.h"

/* ############################################################################################## */
/* 804507D8-804507DC 000258 0004+00 0/0 4/4 0/0 .sdata           DISTANCE_MAX__7Z2Param */
f32 Z2Param::DISTANCE_MAX = 2000.0f;

/* 804507DC-804507E0 00025C 0004+00 0/0 3/3 0/0 .sdata           MAX_VOLUME_DISTANCE__7Z2Param */
f32 Z2Param::MAX_VOLUME_DISTANCE = 300.0f;

/* 804507E0-804507E4 000260 0004+00 0/0 1/1 0/0 .sdata           DOLBY_CENTER_VALUE__7Z2Param */
f32 Z2Param::DOLBY_CENTER_VALUE = 0.3f;

/* 804507E4-804507E8 000264 0004+00 0/0 3/3 0/0 .sdata           DOLBY_FLONT_DISTANCE_MAX__7Z2Param
 */
f32 Z2Param::DOLBY_FLONT_DISTANCE_MAX = -300.0f;

/* 804507E8-804507EC 000268 0004+00 0/0 3/3 0/0 .sdata           DOLBY_BEHIND_DISTANCE_MAX__7Z2Param
 */
f32 Z2Param::DOLBY_BEHIND_DISTANCE_MAX = 600.0f;

/* 804507EC-804507F0 00026C 0004+00 0/0 1/1 0/0 .sdata           DISTANCE_FX_PARAM__7Z2Param */
f32 Z2Param::DISTANCE_FX_PARAM = 10.0f / 127.0f;

/* 804507F0-804507F4 000270 0004+00 0/0 1/1 0/0 .sdata           SONIC_SPEED__7Z2Param */
f32 Z2Param::SONIC_SPEED = 360.0f;

/* 804507F4-804507F8 000274 0004+00 0/0 3/3 0/0 .sdata           VOL_BGM_DEFAULT__7Z2Param */
f32 Z2Param::VOL_BGM_DEFAULT = 1.0f;

/* 804507F8-804507FC 000278 0004+00 0/0 2/2 0/0 .sdata           VOL_SE_SYSTEM_DEFAULT__7Z2Param */
f32 Z2Param::VOL_SE_SYSTEM_DEFAULT = 120.0f / 127.0f;

/* 804507FC-80450800 00027C 0004+00 0/0 3/3 0/0 .sdata           VOL_SE_LINK_VOICE_DEFAULT__7Z2Param
 */
f32 Z2Param::VOL_SE_LINK_VOICE_DEFAULT = 1.0f;

/* 80450800-80450804 000280 0004+00 0/0 3/3 0/0 .sdata VOL_SE_LINK_MOTION_DEFAULT__7Z2Param */
f32 Z2Param::VOL_SE_LINK_MOTION_DEFAULT = 120.0f / 127.0f;

/* 80450804-80450808 000284 0004+00 0/0 3/3 0/0 .sdata VOL_SE_LINK_FOOTNOTE_DEFAULT__7Z2Param */
f32 Z2Param::VOL_SE_LINK_FOOTNOTE_DEFAULT = 120.0f / 127.0f;

/* 80450808-8045080C 000288 0004+00 0/0 3/3 0/0 .sdata           VOL_SE_CHAR_VOICE_DEFAULT__7Z2Param
 */
f32 Z2Param::VOL_SE_CHAR_VOICE_DEFAULT = 120.0f / 127.0f;

/* 8045080C-80450810 00028C 0004+00 0/0 3/3 0/0 .sdata           VOL_SE_CHAR_MOVE_DEFAULT__7Z2Param
 */
f32 Z2Param::VOL_SE_CHAR_MOVE_DEFAULT = 120.0f / 127.0f;

/* 80450810-80450814 000290 0004+00 0/0 3/3 0/0 .sdata           VOL_SE_OBJECT_DEFAULT__7Z2Param */
f32 Z2Param::VOL_SE_OBJECT_DEFAULT = 120.0f / 127.0f;

/* 80450814-80450818 000294 0004+00 0/0 3/3 0/0 .sdata           VOL_SE_ATMOSPHERE_DEFAULT__7Z2Param
 */
f32 Z2Param::VOL_SE_ATMOSPHERE_DEFAULT = 120.0f / 127.0f;

/* 80450818-8045081C 000298 0004+00 0/0 1/1 0/0 .sdata           VOL_BGM_TALKING__7Z2Param */
f32 Z2Param::VOL_BGM_TALKING = 0.5f;

/* 8045081C-80450820 00029C 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_SYSTEM_TALKING__7Z2Param */
f32 Z2Param::VOL_SE_SYSTEM_TALKING = 112.0f / 127.0f;

/* 80450820-80450824 0002A0 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_LINK_VOICE_TALKING__7Z2Param
 */
f32 Z2Param::VOL_SE_LINK_VOICE_TALKING = 104.0f / 127.0f;

/* 80450824-80450828 0002A4 0004+00 0/0 1/1 0/0 .sdata VOL_SE_LINK_MOTION_TALKING__7Z2Param */
f32 Z2Param::VOL_SE_LINK_MOTION_TALKING = 96.0f / 127.0f;

/* 80450828-8045082C 0002A8 0004+00 0/0 1/1 0/0 .sdata VOL_SE_LINK_FOOTNOTE_TALKING__7Z2Param */
f32 Z2Param::VOL_SE_LINK_FOOTNOTE_TALKING = 96.0f / 127.0f;

/* 8045082C-80450830 0002AC 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_CHAR_VOICE_TALKING__7Z2Param
 */
f32 Z2Param::VOL_SE_CHAR_VOICE_TALKING = 120.0f / 127.0f;

/* 80450830-80450834 0002B0 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_CHAR_MOVE_TALKING__7Z2Param
 */
f32 Z2Param::VOL_SE_CHAR_MOVE_TALKING = 119.0f / 127.0f;

/* 80450834-80450838 0002B4 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_OBJECT_TALKING__7Z2Param */
f32 Z2Param::VOL_SE_OBJECT_TALKING = 96.0f / 127.0f;

/* 80450838-8045083C 0002B8 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_ATMOSPHERE_TALKING__7Z2Param
 */
f32 Z2Param::VOL_SE_ATMOSPHERE_TALKING = 96.0f / 127.0f;

/* 8045083C-80450840 0002BC 0004+00 0/0 1/1 0/0 .sdata           VOL_BGM_PAUSING__7Z2Param */
f32 Z2Param::VOL_BGM_PAUSING = 0.3f;

/* 80450840-80450844 0002C0 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_SYSTEM_PAUSING__7Z2Param */
f32 Z2Param::VOL_SE_SYSTEM_PAUSING = 112.0f / 127.0f;

/* 80450844-80450848 0002C4 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_LINK_VOICE_PAUSING__7Z2Param
 */
f32 Z2Param::VOL_SE_LINK_VOICE_PAUSING = 80.0f / 127.0f;

/* 80450848-8045084C 0002C8 0004+00 0/0 1/1 0/0 .sdata VOL_SE_LINK_MOTION_PAUSING__7Z2Param */
f32 Z2Param::VOL_SE_LINK_MOTION_PAUSING = 72.0f / 127.0f;

/* 8045084C-80450850 0002CC 0004+00 0/0 1/1 0/0 .sdata VOL_SE_LINK_FOOTNOTE_PAUSING__7Z2Param */
f32 Z2Param::VOL_SE_LINK_FOOTNOTE_PAUSING = 72.0f / 127.0f;

/* 80450850-80450854 0002D0 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_CHAR_VOICE_PAUSING__7Z2Param
 */
f32 Z2Param::VOL_SE_CHAR_VOICE_PAUSING = 72.0f / 127.0f;

/* 80450854-80450858 0002D4 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_CHAR_MOVE_PAUSING__7Z2Param
 */
f32 Z2Param::VOL_SE_CHAR_MOVE_PAUSING = 72.0f / 127.0f;

/* 80450858-8045085C 0002D8 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_OBJECT_PAUSING__7Z2Param */
f32 Z2Param::VOL_SE_OBJECT_PAUSING = 72.0f / 127.0f;

/* 8045085C-80450860 0002DC 0004+00 0/0 1/1 0/0 .sdata           VOL_SE_ATMOSPHERE_PAUSING__7Z2Param
 */
f32 Z2Param::VOL_SE_ATMOSPHERE_PAUSING = 72.0f / 127.0f;

/* 80450860-80450864 -00001 0004+00 0/0 15/15 0/0 .sdata           None */
u8 struct_80450860 = 0x21;
u8 struct_80450861 = 0x3C;
u8 struct_80450862 = 0x3C;
u8 struct_80450863 = 0x1E;

/* 80450864-80450868 -00001 0004+00 0/0 2/2 0/0 .sdata           None */
extern u8 struct_80450864[4];
u8 struct_80450864[4] = {
    /* 80450864 0001+00 data_80450864 None */
    0x14,
    /* 80450865 0001+00 data_80450865 None */
    0x1E,
    /* 80450866 0001+00 data_80450866 None */
    0x0A,
    /* 80450867 0001+00 data_80450867 None */
    0x1E,
};

/* 80450868-8045086C -00001 0004+00 0/0 5/5 0/0 .sdata           None */
extern u8 struct_80450868[4];
u8 struct_80450868[4] = {
    /* 80450868 0001+00 data_80450868 None */
    0x01,
    /* 80450869 0001+00 data_80450869 None */
    0x0A,
    /* 8045086A 0001+00 data_8045086A None */
    0x1E,
    /* 8045086B 0001+00 data_8045086B None */
    0x14,
};

/* 8045086C-80450870 0002EC 0004+00 0/0 3/3 0/0 .sdata           None */
extern u32 data_8045086C = 0x01000000;

/* 80451338-8045133C 000838 0004+00 0/0 1/1 0/0 .sbss            MIN_DISTANCE_VOLUME__7Z2Param */
f32 Z2Param::MIN_DISTANCE_VOLUME;

/* 8045133C-80451340 00083C 0004+00 0/0 1/1 0/0 .sbss            ENEMY_LASTHIT_MUTE_VOLUME__7Z2Param
 */
f32 Z2Param::ENEMY_LASTHIT_MUTE_VOLUME;

/* 80451340-80451348 -00001 0008+00 0/0 2/2 0/0 .sbss            None */
/* 80451340 0001+00 data_80451340 None */
/* 80451341 0001+00 data_80451341 None */
/* 80451342 0006+00 data_80451342 None */
extern u8 struct_80451340[8];
u8 struct_80451340[8];

/* 80451348-80451350 000848 0008+00 0/0 4/4 0/0 .sbss            None */
extern u8 data_80451348[8];
u8 data_80451348[8];
