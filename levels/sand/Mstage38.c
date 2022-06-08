extern Gfx gfx_dummy38[];



#define	BGCHECKCODE_0	0
#define	BGCHECKCODE_3	5
#define	BGCHECKCODE_5	0
#define	BGCHECKCODE_6	0

#define	BGCHECKCODE_33	33
#define	BGCHECKCODE_34	34
#define	BGCHECKCODE_35	35
#define	BGCHECKCODE_38	38

#define	BGCHECKCODE_40	36
#define	BGCHECKCODE_41	36
#define	BGCHECKCODE_42	36
#define	BGCHECKCODE_43	36
#define	BGCHECKCODE_44	36
#define	BGCHECKCODE_45	36
#define	BGCHECKCODE_46	36
#define	BGCHECKCODE_47	36

#define	BGCHECKCODE_50	37
#define	BGCHECKCODE_51	37
#define	BGCHECKCODE_52	37
#define	BGCHECKCODE_53	37
#define	BGCHECKCODE_54	37
#define	BGCHECKCODE_55	37
#define	BGCHECKCODE_56	37
#define	BGCHECKCODE_57	37

#include "sand.sou"
#include "sand.flk"


/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/
Hierarchy RCP_Stage38Scene1[] = {
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
				hmsCamera(CAM_FIELD,  0,2000,6000,  0,0,0, GameCamera)
				hmsBegin()
					hmsGfx(RM_SURF, RCP_sand)
					hmsCProg(0, geo_render_mirror_mario)
					hmsObject()
					hmsCProg(0, WeatherProc)
				hmsEnd()
			hmsEnd()
		hmsEnd()

	hmsEnd()
	hmsExit()
};
