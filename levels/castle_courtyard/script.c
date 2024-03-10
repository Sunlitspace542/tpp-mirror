#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/castle_courtyard/header.h"

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/     0, 200, -1652, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvAmbientSounds),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2700,   0, -1652, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBirdsSoundLoop),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2700,   0, -1652, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvBirdsSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_BOO,  /*pos*/ -3217, 100,  -101, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCourtyardBooTriplet),
    OBJECT(/*model*/ MODEL_BOO,  /*pos*/  3317, 100, -1701, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCourtyardBooTriplet),
    OBJECT(/*model*/ MODEL_BOO,  /*pos*/   -71,   1, -1387, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCourtyardBooTriplet),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/  2160, -194, -510, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMrI),
    OBJECT(/*model*/ MODEL_MR_I, /*pos*/ -2160, -194, -510, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMrI),
    RETURN(),
};

const LevelScript level_castle_courtyard_entry[] = {
    INIT_LEVEL(),
    LOAD_RAW(         /*seg*/ 0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group9_geoSegmentRomStart,  _group9_geoSegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart,  _group17_geoSegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    LUIGI(/*model*/ MODEL_LUIGI, /*behParam*/ 0x00000002, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_10),
    JUMP_LINK(script_func_global_18),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, RCP_HmsMainDoor),

    AREA(/*index*/ 1, courtyard_geo),
        OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR, /*pos*/ 0, 0, 461, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvDoorWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/     0,   51, -1000, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvWarps8C),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/     0,   51, -1000, /*angle*/ 0, 180, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvWarps90),
        WARP_NODE(/*id*/ 0x05, /*destLevel*/ LEVEL_BBH, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 0x01, /*destNode*/ 0x0B, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x02, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x03, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_1),
        JUMP_LINK(script_func_local_2),
        TERRAIN(/*terrainData*/ courtyard_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_SOUND_PLAYER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ -14, 0, -201),
    LUIGI_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ -14, 0, -201),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
