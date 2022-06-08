/*-------------------------------------------------------------*/
/*	Hms data 			                                       */
/*-------------------------------------------------------------*/

Hierarchy RCP_HmsEnemypakun_angry[] = {
 hmsShadow(200, 155, 1)
 hmsBegin()
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,0,14,3)  /* chn23(12) */
      hmsBegin()
         hmsJoint(RM_SURF,RCP_pak_body,0,0,0)  /* pak_body(11) */
         hmsBegin()
            hmsJoint(RM_SURF,RCP_pak_neckC,46,0,0)  /* pak_neckC(10) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_pak_neckB,154,0,0)  /* pak_neckB(9) */
               hmsBegin()
                  hmsJoint(RM_SURF,RCP_pak_neckA,153,0,0)  /* pak_neckA(7) */
                  hmsBegin()
                     hmsJoint(RM_SURF,NULL,236,42,0)  /* chn20(6) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_pak_mouthA_surf,0,0,0)  /* pak_mouthA(0) */
						hmsBegin()
							hmsGfx(RM_SPRITE,RCP_pak_mouthA_sprite)
						hmsEnd()
                     hmsEnd()
                     hmsJoint(RM_SURF,NULL,217,-2,0)  /* chn19(4) */
                     hmsBegin()
                        hmsJoint(RM_SURF,RCP_pak_mouthB_surf,0,0,0)  /* pak_mouthB(1) */
						hmsBegin()
							hmsGfx(RM_SPRITE,RCP_pak_mouthB_sprite)
						hmsEnd()
                     hmsEnd()
                  hmsEnd()
               hmsEnd()
               hmsJoint(RM_SURF,NULL,49,0,-34)  /* chn22(8) */
               hmsBegin()
                  hmsJoint(RM_SPRITE,RCP_pak_Lleaf,0,0,0)  /* pak_Lleaf(2) */
               hmsEnd()
               hmsJoint(RM_SURF,NULL,49,0,37)  /* chn21(5) */
               hmsBegin()
                  hmsJoint(RM_SPRITE,RCP_pak_Rleaf,0,0,0)  /* pak_Rleaf(3) */
               hmsEnd()
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsEnd()
 hmsExit()
};


/*=============================================================*/
/*  END END */
/*=============================================================*/
