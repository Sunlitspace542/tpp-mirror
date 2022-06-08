const LevelScript level_donjon_entry[] = {

	INIT_LEVEL(),
	LOAD_MIO0(0x07,                  _donjon_segment_7SegmentRomStart, _donjon_segment_7SegmentRomEnd),
	LOAD_MIO0(0x05,                  _group1_mio0SegmentRomStart,      _group1_mio0SegmentRomEnd     ),
	LOAD_RAW( 0x0C,                  _group1_geoSegmentRomStart,       _group1_geoSegmentRomEnd      ),
	LOAD_MIO0(0x06,                  _group6_mio0SegmentRomStart,      _group6_mio0SegmentRomEnd     ),
	LOAD_RAW( 0x0D,                  _group6_geoSegmentRomStart,  	   _group6_geoSegmentRomEnd      ),
	LOAD_MIO0(0x08,                  _common0_mio0SegmentRomStart,     _common0_mio0SegmentRomEnd    ),
	LOAD_RAW( 0x0F,                  _common0_geoSegmentRomStart,      _common0_geoSegmentRomEnd     ),

	ALLOC_LEVEL_POOL(),

		MARIO(MODEL_MARIO, 0x00000001, bhvMario),
		JUMP_LINK(script_func_global_1),
		JUMP_LINK(script_func_global_2),
		//JUMP_LINK(script_func_global_7),

		AREA(1, RCP_Stage3Scene1),
			TERRAIN(donjon_info),
		END_AREA(),

	FREE_LEVEL_POOL(),

	MARIO_POS(1, 180,  500,2000,0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),

};
