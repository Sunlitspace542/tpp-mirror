#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "make_const_nonconst.h"
#include "levels/stage35/header.h"

const LevelScript level_stage35_entry[] = {
    INIT_LEVEL(),
    LOAD_RAW(/*seg*/ 0x07, _stage35_segment_7SegmentRomStart, _stage35_segment_7SegmentRomEnd),

    ALLOC_LEVEL_POOL(),
        MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
        LUIGI(/*model*/ MODEL_LUIGI, /*behParam*/ 0x00000002, /*beh*/ bhvMario),

        AREA(/*index*/ 1, RCP_Stage35Scene1),

            TERRAIN(/*terrainData*/ dummy35_info),

        END_AREA(),
    FREE_LEVEL_POOL(),

    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ -250, 0, 0),
    LUIGI_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ 250, 0, 0),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
