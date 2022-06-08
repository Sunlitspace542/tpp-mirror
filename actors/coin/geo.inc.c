/********************************************************************************
	RCP_HmsItemCoin
														[ June 16, 1995 ]
 ********************************************************************************/

/********************************************************************************/
/*	Hierarchy map data.															*/
/********************************************************************************/
Hierarchy RCP_HmsItemCoin[] = { 
	hmsShadow(80, 200, 1)
	hmsBegin()
		hmsSelect(8, ControlShapeAnime)
		hmsBegin()
			hmsGfx(RM_SPRITE, RCP_coin1)
			hmsGfx(RM_SPRITE, RCP_coin1)
			hmsGfx(RM_SPRITE, RCP_coin2)
			hmsGfx(RM_SPRITE, RCP_coin2)
			hmsGfx(RM_SPRITE, RCP_coin3)
			hmsGfx(RM_SPRITE, RCP_coin3)
			hmsGfx(RM_SPRITE, RCP_coin4)
			hmsGfx(RM_SPRITE, RCP_coin4)
		hmsEnd()
	hmsEnd()
  	hmsExit()
};
