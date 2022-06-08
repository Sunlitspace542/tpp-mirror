// Whomp

// 0x06020A0C - 0x06020A90
const s16 whomp_seg6_collision_06020A0C[] = {
    COL_INIT(),
    COL_VERTEX_INIT(0x8),
   -200,    50,   -50,
	150,    50,   -50,
	150,   500,   -50,
   -200,   500,   -50,
   -200,    50,    50,
	150,   500,    50,
	150,    50,    50,
   -200,   500,    50,
    COL_TRI_INIT(SURFACE_DEFAULT, 12),
    2,  1,  0,
	3,  2,  0,
	6,  5,  4,
	5,  7,  4,
	7,  5,  3,
	5,  2,  3,
	6,  4,  0,
	1,  6,  0,
	5,  1,  2,
	6,  1,  5,
	0,  7,  3,
	0,  4,  7,
    COL_TRI_STOP(),
    COL_END(),
};

UNUSED static const u32 whomp_unused_2 = 0;
