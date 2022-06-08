/********************************************************************************/
/*	Luigi gfx list.																*/
/********************************************************************************/

#define	SCALE	4
#define ShapeColor_luigi(R,G,B) {{R/SCALE ,G/SCALE ,B/SCALE ,0 ,R/SCALE ,G/SCALE ,B/SCALE ,0 },{ R, G, B, 0, R, G, B, 0, 40, 40, 40, 0} }

#include "luigi_texture.h"
#include "../mario/mario_texture.h"
#include "luigi_near_poly.sou"
#include "luigi_near_body.sou"
#include "luigi_near_head.sou"
#include "luigi_mid_poly.sou"
#include "luigi_mid_body.sou"
#include "luigi_far_poly.sou"
#include "luigi_swim_hand.sou"
