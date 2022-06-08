/********************************************************************************/
/*	Stage 2 construction sequence.												*/
/********************************************************************************/

const LevelScript level_test_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07, _test_segment_7SegmentRomStart, _test_segment_7SegmentRomEnd),

	ALLOC_LEVEL_POOL(),

		MARIO(MODEL_MARIO, 0x00000001, bhvMario),

		AREA(1, RCP_Stage2Scene1),

			TERRAIN(test_info),

		END_AREA(),

	FREE_LEVEL_POOL(),

	MARIO_POS(1, 0, 1000,5000,1000),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
	
};
