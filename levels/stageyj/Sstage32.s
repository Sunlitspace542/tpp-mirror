/*------- yajima special stage -------*/

const LevelScript level_stageyj_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07, _stageyj_segment_7SegmentRomStart, _stageyj_segment_7SegmentRomEnd),
	LOAD_MIO0(0x05, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
	LOAD_RAW( 0x0C, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW( 0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),

	ALLOC_LEVEL_POOL(),

		MARIO(MODEL_MARIO, 0x00000001, bhvMario),
		JUMP_LINK(script_func_global_1),
		JUMP_LINK(script_func_global_9),

		AREA(1, RCP_Stage32Scene1),

			OBJECT(MODEL_METAL_BOX,	1242, 200, 1959,   0,0,0,   0x00000000, bhvPushableMetalBox	),
			
			TERRAIN(testmap1_info),			

		END_AREA(),
	FREE_LEVEL_POOL(),

	MARIO_POS(1, 0,  0,0,0),

	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),

};

/*------------------------------------*/
