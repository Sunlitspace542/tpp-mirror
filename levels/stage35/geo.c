/********************************************************************************
						Ultra 64 MARIO Brothers

					  stage35 hierarchy data module

			Copyright 1995 Nintendo co., ltd.  All rights reserved

							December 8, 1995
 ********************************************************************************/

#include <ultra64.h>
#include "sm64.h"
#include "geo_commands.h"

#include "game/level_geo.h"
#include "game/geo_misc.h"
#include "game/camera.h"
#include "game/moving_texture.h"
#include "game/screen_transition.h"
#include "game/areamap.h"
#include "game/paintings.h"

#include "make_const_nonconst.h"

#include "levels/stage35/header.h"

/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/
Hierarchy RCP_Stage35Scene1[] = {
	hmsScene(160, 120, 160, 120, 10)
	hmsBegin()
		hmsLayer(0)
		hmsBegin()
			hmsOrtho(100)
			hmsBegin()
				hmsClear(RGBA16(0, 12, 31, 1), NULL)
			hmsEnd()
		hmsEnd()

		hmsLayer(1)
		hmsBegin()
			hmsPerspective(45, SCREEN_NEAR, SCREEN_FAR, ZoomControl)
			hmsBegin()
				hmsCamera(CAM_TWOPLAY,  0,2000,6000,  0,0,0, GameCamera)
				hmsBegin()
					hmsGfx(RM_SURF, gfx_dummy35)
					hmsObject()
					hmsCProg(0, WeatherProc)
				hmsEnd()
			hmsEnd()
		hmsEnd()

	hmsEnd()
	hmsExit()
};
