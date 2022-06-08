/********************************************************************************/
/*	Hierarchy data of star coin.												*/
/********************************************************************************/
GeoLayout RCP_HmsItemStar[] = {
	GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x9B, 100),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(16, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star1),
         	GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star1),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star2),
         	GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star2),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star3),
         	GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star3),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star4),
         	GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star4),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star5),
         	GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star6),
         	GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star6),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star7),
         	GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star7),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star8),
            GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star8),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

/********************************************************************************/
/*	Hierarchy data of star dust.												*/
/********************************************************************************/
GeoLayout RCP_HmsItemStarDust[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(16, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust1),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust1),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust2),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust2),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust3),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust3),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust4),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust4),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust6),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust6),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust7),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust7),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust8),
			GEO_DISPLAY_LIST(LAYER_ALPHA, RCP_star_dust8),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
