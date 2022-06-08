// Lights
Lights1 submarine_SubmarineDecalMaterial_lights = gdSPDefLights1(
	0x3F, 0x3F, 0x3F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

// Materials
Gfx mat_submarine_SubmarineBowserDecalMaterial[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, ddd_seg7_texture_07000000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(submarine_SubmarineDecalMaterial_lights),
	gsSPEndDisplayList(),
};

Gfx mat_submarine_SubmarineTextDecalMaterial[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, ddd_seg7_texture_07006800),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(submarine_SubmarineDecalMaterial_lights),
	gsSPEndDisplayList(),
};

// Data
Vtx submarine_2_dl_mesh_vtx_0[8] = {
	{{{3816, 759, 1952},0, {995, 999},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3816, 1117, 1595},0, {1, -12},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3816, 759, 1595},0, {1, 999},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3816, 1117, 1952},0, {995, -12},{0x81, 0x0, 0x0, 0xFF}}},
	{{{4025, 759, 1595},0, {1, 999},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{4025, 1117, 1952},0, {995, -12},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{4025, 759, 1952},0, {995, 999},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{4025, 1117, 1595},0, {1, -12},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx submarine_2_dl_mesh_tri_0[] = {
	gsSPVertex(submarine_2_dl_mesh_vtx_0 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx submarine_2_dl_mesh_vtx_1[4] = {
	{{{4440, 196, -1092},0, {2072, -8},{0x7D, 0x0, 0xE7, 0xFF}}},
	{{{4645, 196, -68},0, {8, -8},{0x7D, 0x0, 0xE7, 0xFF}}},
	{{{4440, -101, -1092},0, {2072, 1011},{0x7D, 0x0, 0xE7, 0xFF}}},
	{{{4645, -101, -68},0, {8, 1011},{0x7D, 0x0, 0xE7, 0xFF}}},
};

Gfx submarine_2_dl_mesh_tri_1[] = {
	gsSPVertex(submarine_2_dl_mesh_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSPEndDisplayList(),
};

Gfx submarine_2_dl_mesh[] = {
	gsSPDisplayList(mat_submarine_SubmarineBowserDecalMaterial),
	gsSPDisplayList(submarine_2_dl_mesh_tri_0),
	gsSPDisplayList(mat_submarine_SubmarineTextDecalMaterial),
	gsSPDisplayList(submarine_2_dl_mesh_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
