// Power Meter HUD

ALIGNED8 static const u8 texture_power_meter_eight_left[] = {
#include "actors/power_meter/hud_power_meter_8_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_eight_right[] = {
#include "actors/power_meter/hud_power_meter_8_right_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_seven_left[] = {
#include "actors/power_meter/hud_power_meter_7_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_seven_right[] = {
#include "actors/power_meter/hud_power_meter_7_right_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_six_left[] = {
#include "actors/power_meter/hud_power_meter_6_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_six_right[] = {
#include "actors/power_meter/hud_power_meter_6_right_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_five_left[] = {
#include "actors/power_meter/hud_power_meter_5_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_five_right[] = {
#include "actors/power_meter/hud_power_meter_5_right_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_four_left[] = {
#include "actors/power_meter/hud_power_meter_4_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_four_right[] = {
#include "actors/power_meter/hud_power_meter_4_right_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_three_left[] = {
#include "actors/power_meter/hud_power_meter_3_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_three_right[] = {
#include "actors/power_meter/hud_power_meter_3_right_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_two_left[] = {
#include "actors/power_meter/hud_power_meter_2_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_two_right[] = {
#include "actors/power_meter/hud_power_meter_2_right_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_one_left[] = {
#include "actors/power_meter/hud_power_meter_1_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_one_right[] = {
#include "actors/power_meter/hud_power_meter_1_right_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_zero_left[] = {
#include "actors/power_meter/hud_power_meter_0_left_custom.rgba16.inc.c"
};

ALIGNED8 static const u8 texture_power_meter_zero_right[] = {
#include "actors/power_meter/hud_power_meter_0_right_custom.rgba16.inc.c"
};

const u8 *const power_meter_health_segments_lut[] = {
    texture_power_meter_zero_left,
    texture_power_meter_zero_right,
    texture_power_meter_one_left,
    texture_power_meter_one_right,
    texture_power_meter_two_left,
    texture_power_meter_two_right,
    texture_power_meter_three_left,
    texture_power_meter_three_right,
    texture_power_meter_four_left,
    texture_power_meter_four_right,
    texture_power_meter_five_left,
    texture_power_meter_five_right,
    texture_power_meter_six_left,
    texture_power_meter_six_right,
    texture_power_meter_seven_left,
    texture_power_meter_seven_right,
    texture_power_meter_eight_left,
    texture_power_meter_eight_right,
};

static const Vtx vertex_power_meter_base[] = {
    {{{   -32,    -32,      0}, 0, {     0,    2032}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{     0,    -32,      0}, 0, { 1028,     2032}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{     0,     32,      0}, 0, { 1028,        0}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{   -32,     32,      0}, 0, {     0,       0}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{     0,    -32,      0}, 0, {     0,    2032}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{    32,    -32,      0}, 0, { 1028,     2032}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{    32,     32,      0}, 0, { 1028,        0}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{     0,     32,      0}, 0, {     0,       0}, {0xff, 0xff, 0xff, 0xdc}}},
};

const Gfx dl_power_meter_base[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(vertex_power_meter_base, 8, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};
