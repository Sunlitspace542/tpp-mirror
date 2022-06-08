/*-------------------------------------------------------------*/
/*	Hms data 			                                       */
/*-------------------------------------------------------------*/

#define  softspriteON   1

Hierarchy RCP_HmsEnemyotos_basedata[] = {
 hmsShadow(70, 200, 1)
 hmsBegin()

 hmsScale(0.375f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,0,0)  /* chn1(12) */
      hmsBegin()
         hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt1_1(11) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,0,0,75)  /* chn2(10) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt2_1(6) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,146,0,0)  /* jnt2_2(3) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_otos_basedata0,0,0,0)  /* sphere4(0) */
                  hmsEnd()
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,-75)  /* chn4(9) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt4_1(7) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,146,0,0)  /* jnt4_2(4) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_otos_basedata1,0,0,0)  /* sphere3(1) */
                  hmsEnd()
               hmsEnd()
            hmsEnd()

#if softspriteON
	      hmsJoint(RM_SURF,NULL,0,0,0)  /* body_sprite(35) */
		  hmsBegin()
			hmsBboard(0,0,0)
	   		hmsBegin()
			  	hmsGfx(RM_SPRITE,gfx_otosu_body)
	  		hmsEnd()
	  	  hmsEnd()
#else
            hmsJoint(RM_SURF,RCP_otos_basedata4,0,0,0)  /* sphere1(8) */
#endif
            hmsJoint(RM_SURF,RCP_otos_basedata3,0,0,0)  /* cone1(5) */
            hmsJoint(RM_SPRITE,gfx_otosu_eye,0,0,0)  /* grid1(2) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};

/*-------------------------------------------------------------*/
/*	Big Otos Hms data 			                                       */
/*-------------------------------------------------------------*/

Hierarchy RCP_HmsEnemyBigotos_basedata[] = {
 hmsShadow(210, 200, 1)
 hmsBegin()

 hmsScale(0.75f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,0,0)  /* chn1(12) */
      hmsBegin()
         hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt1_1(11) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,0,0,75)  /* chn2(10) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt2_1(6) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,146,0,0)  /* jnt2_2(3) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_otos_basedata0,0,0,0)  /* sphere4(0) */
                  hmsEnd()
               hmsEnd()
            hmsEnd()
            hmsJoint(RM_SURF,NULL,0,0,-75)  /* chn4(9) */
            hmsBegin()
               hmsJoint(RM_SURF,NULL,0,0,0)  /* jnt4_1(7) */
               hmsBegin()
                  hmsJoint(RM_SURF,NULL,146,0,0)  /* jnt4_2(4) */
                  hmsBegin()
                     hmsJoint(RM_SURF,RCP_otos_basedata1,0,0,0)  /* sphere3(1) */
                  hmsEnd()
               hmsEnd()
            hmsEnd()

#if softspriteON
	      hmsJoint(RM_SURF,NULL,0,0,0)  /* body_sprite(35) */
		  hmsBegin()
			hmsBboard(0,0,0)
	   		hmsBegin()
			  	hmsGfx(RM_SPRITE,gfx_big_otosu_body)
	  		hmsEnd()
	  	  hmsEnd()
#else
            hmsJoint(RM_SURF,RCP_otos_basedata4,0,0,0)  /* sphere1(8) */
#endif
            hmsJoint(RM_SURF,RCP_otos_basedata3,0,0,0)  /* cone1(5) */
            hmsJoint(RM_SPRITE,gfx_otosu_eye,0,0,0)  /* grid1(2) */
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};
