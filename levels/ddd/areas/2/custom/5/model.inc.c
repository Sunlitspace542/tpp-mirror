Vtx water_land_10_dl_mesh_vtx_0[8] = {
	{{{-2955, 213, 437},0, {-4, 990},{0xAA, 0xA3, 0x0, 0xFF}}},
	{{{-2955, 213, -433},0, {2023, 990},{0xAA, 0xA3, 0x0, 0xFF}}},
	{{{-2601, -113, -433},0, {2023, 3},{0xAA, 0xA3, 0x0, 0xFF}}},
	{{{-2601, -113, 437},0, {-4, 3},{0xAA, 0xA3, 0x0, 0xFF}}},
	{{{-1360, -2713, -462},0, {-61, 2},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1843, -2713, -462},0, {-61, 1006},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1843, -2713, 461},0, {2028, 1006},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1360, -2713, 461},0, {2028, 2},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx water_land_10_dl_mesh_tri_2[] = {
	gsSPVertex(water_land_10_dl_mesh_vtx_0 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx water_land_10_dl_mesh[] = {
	gsSPDisplayList(mat_water_land_ArrowMaterial),
	gsSPDisplayList(water_land_10_dl_mesh_tri_2),
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
