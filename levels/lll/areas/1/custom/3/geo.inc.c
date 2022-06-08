const GeoLayout fire_bubble_volcano_geo[] = {
   GEO_CULLING_RADIUS(1000),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, fire_bubble_3_dl_mesh),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
