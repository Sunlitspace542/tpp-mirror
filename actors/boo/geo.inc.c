/********************************************************************************
		RCP_HmsEnemyTeresa
														[ Sept 22, 1995 ]
*********************************************************************************/

/********************************************************************************/
/*	Hierarchy map data of teresa.												*/
/********************************************************************************/
Hierarchy RCP_HmsEnemyTeresa[] = {
 hmsShadow(70, 150, 1)
 hmsBegin()
 	hmsScale(0.4f)
		hmsBegin()
		hmsCProg(0, AlphaControl)
		hmsSelect(2, ControlShapeAnime)
			hmsBegin()
				hmsGfx(RM_SURF ,gfx_teresa)
				hmsGfx(RM_XSURF,gfx_teresa)
			hmsEnd()
		hmsEnd()
	hmsEnd()
 hmsEnd()
 hmsExit()

};
