/**********************************************************
		Bird Hierarchy!!
***********************************************************/

Hierarchy RCP_birdHierarchy[] = { 

	hmsShadow(100, 255, 1)
	hmsBegin()
		hmsScale(0.25f)
		hmsBegin()
		    hmsJoint(RM_SURF,NULL, 0, 147, -5)										/* chn4		*/
			hmsBegin()
			    hmsJoint(RM_SURF,RCP_bird_base21, 0, 0, 0)							/* b_body1	*/
				hmsBegin()
				    hmsJoint(RM_SURF,gfx_b_head, 96, 0, 0)							/* b_head1	*/
				    hmsJoint(RM_SURF,NULL, 34, -35, 31)								/* chn11		*/
					hmsBegin()
					    hmsJoint(RM_SPRITE,gfx_rwing4, 0, 0, 0)						/* face11		*/
						hmsBegin()
						    hmsJoint(RM_SPRITE,gfx_rwing2, 91, 0, 0)				/* face10		*/
							hmsBegin()
							    hmsJoint(RM_SPRITE,gfx_rwing1, 121, 0, 0)			/* face9		*/
							    hmsJoint(RM_SURF, NULL, 121, 0, 0)					/* face13		*/
							hmsEnd()
						    hmsJoint(RM_SURF,NULL,  91, 0, 0)						/* face14		*/
						hmsEnd()
					    hmsJoint(RM_SPRITE,gfx_rwing3, 0, 0, 0)						/* face12	<wing>	*/ 
					    hmsJoint(RM_SURF,NULL, 0, 0, 0)								/* face15	<wing>	*/
					    hmsJoint(RM_SURF,NULL,  0, 0, 0)							/* face16	<wing>	*/
					hmsEnd()
				    hmsJoint(RM_SURF,NULL, -31, 5, 37)								/* chn1		*/
					hmsBegin()
					    hmsJoint(RM_SURF,RCP_bird_base4 , 0, 0, 0)					/* b_lleg1		*/
						hmsBegin()
						    hmsJoint(RM_SURF,RCP_bird_base3 , 42, 0, 0)				/* b_lfoot1		*/
						hmsEnd()
					hmsEnd()
				    hmsJoint(RM_SURF,NULL, -31, 5, -37)								/* chn3		*/
					hmsBegin()
					    hmsJoint(RM_SURF,RCP_bird_base6 , 0, 0, 0)					/* b_rleg1		*/
						hmsBegin()
						    hmsJoint(RM_SURF,RCP_bird_base5 , 42, 0, 0)				/* b_rfoot1		*/
						hmsEnd()
					hmsEnd()
				    hmsJoint(RM_SURF,NULL, 34,-35, -31)								/* chn16		*/
						hmsBegin()
						    hmsJoint(RM_SPRITE,gfx_lwing4 , 0, 0, 0)				/* face43		*/
							hmsBegin()
							    hmsJoint(RM_SPRITE,gfx_lwing2 , 91, 0, 0)			/* face41		*/
								hmsBegin()
								    hmsJoint(RM_SPRITE,gfx_lwing1 , 121, 0, 0)		/* face39	wing1	*/
								    hmsJoint(RM_SURF,NULL  , 121, 0, 0)				/* face40	wing1r	*/
								hmsEnd()
							    hmsJoint(RM_SURF,NULL  , 91, 0, 0)					/* face42		*/
							hmsEnd()
						    hmsJoint(RM_SPRITE,gfx_lwing3 , 0, 0, 0)				/* face44	<wing>	*/
						    hmsJoint(RM_SURF,NULL , 0, 0, 0)						/* face45	<wing>	*/
						    hmsJoint(RM_SURF,NULL  , 0, 0, 0)						/* face46	<wing>	*/
						hmsEnd()
					hmsEnd()
				hmsEnd()
			hmsEnd()
		hmsEnd()
	hmsEnd()
	hmsExit()				
};
