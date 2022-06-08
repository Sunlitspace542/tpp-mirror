/********************************************************************************
						Ultra 64 MARIO Brothers
						 --------------------
						 yajima special stage
						 --------------------
 ********************************************************************************/

#ifdef	ASSEMBLER

SEQ_DoStage32:

	seqInitStage()
	seqLoadPres(SEGMENT_STAGE1, _GfxStage32SegmentRomStart, _GfxStage32SegmentRomEnd)

	seqBeginConstruction()

		seqHmsMario(S_Mario, 		ShapePlayer1, e_mario					 )

		seqHmsShape(S_bane_ue	 , RCP_HmsBaneUe	)
		seqHmsShape(S_bane_naka	 , RCP_HmsBaneNaka	)
		seqHmsShape(S_bane_sita	 , RCP_HmsBaneSita	)

		seqBeginScene(1, RCP_Stage32Scene1)
		
/*--------------------------------------------------------------------------------------*/

			seqActor( S_NULL	,  0, 300,0	, 0,0,0, 0,0,0, e_jumpbg	)

/*--------------------------------------------------------------------------------------*/

			seqMapInfo(testmap1_info)

		seqEndScene()
	seqEndConstruction()

	seqEnterMario(1, 0,  0,1500,0)

	seqCProgram(GameProcess, 0)
	seqRunning(GameProcess, 1)
	seqDestroyStage()
	seqFreeze(1)
	seqExit

#else

/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/

extern ulong DrawBackGround(int code, MapNode *node, void *data);
extern ulong WeatherProc(int code, MapNode *node, void *data);
extern ulong GameCamera(int code, MapNode *node, void *data);

Hierarchy RCP_Stage32Scene1[] = {
	hmsScene(160, 120, 160, 120, 10)
	hmsBegin()
		hmsLayer(0)
		hmsBegin()
			hmsOrtho(100)
			hmsBegin()
				hmsClear(RGBA16(0,0,0,1), NULL)
			hmsEnd()
		hmsEnd()

		hmsLayer(1)			/* Zbuffer ON	 */
		hmsBegin()
			hmsPersp(45, SCREEN_NEAR, SCREEN_FAR)
			hmsBegin()
				hmsCamera(CAM_FIELD,  0,2000,6000,  0,0,-4000, GameCamera)
				hmsBegin()
					hmsGfx(RM_SURF,  RCP_testmap1)
					hmsObject()
					hmsCProg(0, WeatherProc)
				hmsEnd()
			hmsEnd()
		hmsEnd()

	hmsEnd()
	hmsExit()
};

#endif

/*==============================================================================
  		END END END
===============================================================================*/

