const GeoLayout water_land_submarine_geo[] = {
   GEO_CULLING_RADIUS(10000),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, submarine_1_dl_mesh),
      GEO_DISPLAY_LIST(LAYER_TRANSPARENT, submarine_2_dl_mesh),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
