const LevelScript level_sand_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07, _sand_segment_7SegmentRomStart, _sand_segment_7SegmentRomEnd),

	ALLOC_LEVEL_POOL(),
		MARIO(MODEL_MARIO, 0x00000001, bhvMario),

		AREA(1, RCP_Stage38Scene1),
			OBJECT(MODEL_YELLOW_COIN,	836, 0, 1306,   0,90,0,   0x0A0A0000, bhvFadingWarp	),
			OBJECT(MODEL_YELLOW_COIN,	854, 0,-1335,   0,90,0,   0x0A140000, bhvFadingWarp	),
			WARP_NODE(10, 38, 1, 20, 0),
			WARP_NODE(20, 38, 1, 10, 0),

			TERRAIN(sand_info),

			END_AREA(),

	FREE_LEVEL_POOL(),

	MARIO_POS(1, 0,  0,0,1000),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),

};
