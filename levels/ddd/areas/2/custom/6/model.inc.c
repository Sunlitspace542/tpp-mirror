Vtx water_land_10_dl_mesh_vtx_0[8] = {
	{{{3610, -3268, -921},0, {-768, -2023},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3200, -3268, -921},0, {1751, -2023},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2995, -3268, -716},0, {3011, -764},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3200, -3268, -101},0, {1751, 3015},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2995, -3268, -306},0, {3011, 1756},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3814, -3268, -306},0, {-2021, 1756},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3610, -3268, -101},0, {-768, 3015},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3814, -3268, -716},0, {-2021, -764},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx water_land_10_dl_mesh_tri_0[] = {
	gsSPVertex(water_land_10_dl_mesh_vtx_0 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 7, 0, 0),
	gsSPEndDisplayList(),
};

Gfx water_land_10_dl_mesh[] = {
	gsSPDisplayList(mat_water_land_GridMaterial),
	gsSPDisplayList(water_land_10_dl_mesh_tri_0),
	gsSPDisplayList(mat_revert_water_land_GridMaterial),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};
