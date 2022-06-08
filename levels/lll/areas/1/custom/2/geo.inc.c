const GeoLayout fire_bubble_platform_geo[] = {
   GEO_CULLING_RADIUS(900),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, fire_bubble_2_dl_mesh),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
