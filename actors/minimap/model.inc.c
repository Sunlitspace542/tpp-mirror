// Minimap HUD

ALIGNED8 static const u8 texture_minimap_arrow[] = {
#include "actors/minimap/hud_minimap_arrow_custom.rgba16.inc.c"
};

static const Vtx vertex_minimap_base[] = {
    {{{   -32,    -32,      0}, 0, {     0,   2048}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{     0,    -32,      0}, 0, {  1024,   2048}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{     0,     32,      0}, 0, {  1024,      0}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{   -32,     32,      0}, 0, {     0,      1}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{     0,    -32,      0}, 0, {     1,   2048}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{    32,    -32,      0}, 0, {  1024,   2048}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{    32,     32,      0}, 0, {  1024,      1}, {0xff, 0xff, 0xff, 0xdc}}},
    {{{     0,     32,      0}, 0, {     1,      0}, {0xff, 0xff, 0xff, 0xdc}}},
};

static const Vtx vertex_minimap_arrow[] = {
    {{{   -4,    -4,      0}, 0, {   0,   256}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    4,    -4,      0}, 0, {  256,  256}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    4,     4,      0}, 0, {  256,    0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -4,     4,      0}, 0, {   0,     0}, {0xff, 0xff, 0xff, 0xff}}},
};

const Gfx dl_minimap_base[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_MODULATERGBA, G_CC_MODULATERGBA),
    gsDPSetRenderMode(G_RM_XLU_SURF, G_RM_XLU_SURF2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(vertex_minimap_base, 8, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_CLAMP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

const Gfx dl_minimap_arrow[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsDPSetRenderMode(G_RM_TEX_EDGE, G_RM_TEX_EDGE2),
    gsDPSetTextureFilter(G_TF_POINT),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(vertex_minimap_arrow, 4, 0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_CLAMP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 3, G_TX_NOLOD, G_TX_CLAMP, 3, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, (8 - 1) << G_TEXTURE_IMAGE_FRAC, (8 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_BYTES, 1, texture_minimap_arrow),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_16b_BYTES)),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};
