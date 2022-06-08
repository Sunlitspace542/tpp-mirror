const LevelScript level_dummy_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07, _dummy_segment_7SegmentRomStart, _dummy_segment_7SegmentRomEnd),

	ALLOC_LEVEL_POOL(),
		MARIO(MODEL_MARIO, 0x00000001, bhvMario),

		AREA(1, RCP_Stage35Scene1),

			TERRAIN(dummy35_info),	

		END_AREA(),

	FREE_LEVEL_POOL(),

	MARIO_POS(1, 0,  0,0,0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),

};
