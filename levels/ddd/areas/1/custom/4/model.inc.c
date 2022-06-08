Vtx water_land_4_dl_mesh_vtx_0[8] = {
	{{{5237, 213, 437},0, {-4, 990},{0xAA, 0xA3, 0x0, 0xFF}}},
	{{{5237, 213, -433},0, {2023, 990},{0xAA, 0xA3, 0x0, 0xFF}}},
	{{{5591, -113, -433},0, {2023, 3},{0xAA, 0xA3, 0x0, 0xFF}}},
	{{{5591, -113, 437},0, {-4, 3},{0xAA, 0xA3, 0x0, 0xFF}}},
	{{{6832, -2223, -462},0, {-61, 2},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{6349, -2223, -462},0, {-61, 1006},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{6349, -2223, 461},0, {2028, 1006},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{6832, -2223, 461},0, {2028, 2},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx water_land_4_dl_mesh_tri_0[] = {
	gsSPVertex(water_land_4_dl_mesh_vtx_0 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx water_land_4_dl_mesh[] = {
	gsSPDisplayList(mat_water_land_ArrowMaterial),
	gsSPDisplayList(water_land_4_dl_mesh_tri_0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
