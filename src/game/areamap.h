#ifndef _AREAMAP_H
#define _AREAMAP_H

#include "types.h"

extern Gfx *AreaMap(int code, struct GraphNode *node, UNUSED void *data);

struct AreaMapData {
    const u8 *const image_upper;
    const u8 *const image_lower;
    f32 xo_g;
    f32 zo_g;
    f32 side_g;
};

#endif
