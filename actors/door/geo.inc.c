/********************************************************************************
		RCP_FarMainDoor and RCP_NearMainDoor
														[ Jun 16, 1996 ]
*********************************************************************************/

/* ====================================================================================	
		: RCP_HmsMainDoor
======================================================================================= */
Hierarchy RCP_HmsMainDoor[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF, RCP_NearMainDoor, 0,0,0)
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF, RCP_FarMainDoor, 0,0,0)
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/* ====================================================================================	
		: RCP_HmsMainroomDoorA
======================================================================================= */
Hierarchy RCP_HmsMainroomDoorA[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF  , RCP_NearMainDoor  , 0,0,0)
					hmsBegin()
						hmsGfx(RM_XDECAL, RCP_mainroom_doorA)
					hmsEnd()
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF  , RCP_FarMainDoor   , 0,0,0)
					hmsBegin()
						hmsGfx(RM_XDECAL, RCP_mainroom_doorA)
					hmsEnd()
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/* ====================================================================================	
		: RCP_HmsMainroomDoorB
======================================================================================= */
Hierarchy RCP_HmsMainroomDoorB[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF  , RCP_NearMainDoor  , 0,0,0)
					hmsBegin()
						hmsGfx(RM_XDECAL, RCP_mainroom_doorB)
					hmsEnd()
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF  , RCP_FarMainDoor   , 0,0,0)
					hmsBegin()
						hmsGfx(RM_XDECAL, RCP_mainroom_doorB)
					hmsEnd()
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/* ====================================================================================	
		: RCP_HmsMainroomDoorC
======================================================================================= */
Hierarchy RCP_HmsMainroomDoorC[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF  , RCP_NearMainDoor  , 0,0,0)
					hmsBegin()
						hmsGfx(RM_XDECAL, RCP_mainroom_doorC)
					hmsEnd()
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF  , RCP_FarMainDoor   , 0,0,0)
					hmsBegin()
						hmsGfx(RM_XDECAL, RCP_mainroom_doorC)
					hmsEnd()
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/* ====================================================================================	
		: RCP_HmsMainroomDoorD
======================================================================================= */
Hierarchy RCP_HmsMainroomDoorD[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF  , RCP_NearMainDoor  , 0,0,0)
					hmsBegin()
						hmsGfx(RM_XDECAL, RCP_mainroom_doorD)
					hmsEnd()
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF  , RCP_FarMainDoor   , 0,0,0)
					hmsBegin()
						hmsGfx(RM_XDECAL, RCP_mainroom_doorD)
					hmsEnd()
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};


/* --------------------------------------------------------------------------------------------	*/
/* --------------------------------------------------------------------------------------------	*/


/* ====================================================================================	
		: RCP_HmsDoor1
======================================================================================= */
Hierarchy RCP_HmsDoor1[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door1, 0,0,0)
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door1_far, 0,0,0)
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/* ====================================================================================	
		: RCP_HmsDoor2
======================================================================================= */
Hierarchy RCP_HmsDoor2[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door2, 0,0,0)
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door2_far, 0,0,0)
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/* ====================================================================================	
		: RCP_HmsDoor3
======================================================================================= */
Hierarchy RCP_HmsDoor3[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door3, 0,0,0)
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door3_far, 0,0,0)
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/* ====================================================================================	
		: RCP_HmsDoor4
======================================================================================= */
Hierarchy RCP_HmsDoor4[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door4, 0,0,0)
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door4_far, 0,0,0)
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/* ====================================================================================	
		: RCP_HmsDoor5
======================================================================================= */
Hierarchy RCP_HmsDoor5[] = {
 hmsTrans(78,0,0)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-300,0,0)  /* chn19(3) */
      hmsBegin()
			hmsBegin()
				hmsLOD(-2048,2000)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door5, 0,0,0)
				hmsEnd()
				hmsLOD(2000,32767)
				hmsBegin()
					hmsJoint(RM_SURF, gfx_door5_far, 0,0,0)
				hmsEnd()
			hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,0)	  	/* sphere2(1) */
            hmsJoint(RM_SURF,NULL,0,0,0)  		/* sphere1(0) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
