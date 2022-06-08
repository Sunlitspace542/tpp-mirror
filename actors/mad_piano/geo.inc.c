Hierarchy RCP_HmsEnemypiano_base_data[] = {
 hmsScale(0.25f)
    hmsBegin()
      hmsJoint(RM_SURF,NULL,-17,301,196)  /* ,chn21,(5) */
      hmsBegin()
         hmsJoint(RM_SURF,RCP_piano_base_data2,0,0,0)  /* ,piano_body,(4) */
         hmsBegin()
            hmsJoint(RM_SURF,NULL,-114,-444,177)  /* ,chn19,(3) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_piano_base_data0,0,0,0)  /* ,piano_futa,(0) */
            hmsEnd()
            hmsJoint(RM_SURF,NULL,0,429,93)  /* ,chn22,(2) */
            hmsBegin()
               hmsJoint(RM_SURF,RCP_piano_base_data1,0,0,0)  /* ,piano_bar,(1) */
            hmsEnd()
         hmsEnd()
      hmsEnd()
   hmsEnd()
 hmsExit()
};
