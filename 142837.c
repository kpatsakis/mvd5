qcms_profile* qcms_profile_sRGB(void) qcms_profile * profile ; uint16_t * table ; qcms_CIE_xyYTRIPLE Rec709Primaries = { { 0.6400 , 0.3300 , 1.0 } , { 0.3000 , 0.6000 , 1.0 } , { 0.1500 , 0.0600 , 1.0 } } ; qcms_CIE_xyY D65 ; D65 = white_point_from_temp ( 6504 ); table = build_sRGB_gamma_table ( 1024 ); if ( ! table )  profile = qcms_profile_create_rgb_with_table ( D65 , Rec709Primaries , table , 1024 ); qcms_profile* qcms_CIE_xyY qcms_CIE_xyYTRIPLE uint16_t *table, int num_entries) qcms_profile * profile = qcms_profile_create ( ) ; if ( ! profile )  if ( ! set_rgb_colorants ( profile , white_point , primaries ) )  profile -> redTRC = curve_from_table ( table , num_entries ); static struct curveType *curve_from_table(uint16_t *table, int num_entries) struct curveType * curve ; int i ; curve = malloc ( sizeof ( struct curveType ) + sizeof ( uInt16Number ) * num_entries ); if ( ! curve )  return NULL ; curve -> type = CURVE_TYPE; curve -> count = num_entries; for (i = 0; i < num_entries; i++) curve -> data [ i ] = table [ i ]; return curve ; profile -> blueTRC = curve_from_table ( table , num_entries ); static struct curveType *curve_from_table(uint16_t *table, int num_entries) struct curveType * curve ; int i ; curve = malloc ( sizeof ( struct curveType ) + sizeof ( uInt16Number ) * num_entries ); if ( ! curve )  return NULL ; curve -> type = CURVE_TYPE; curve -> count = num_entries; curve -> data [ i ] = table [ i ]; return curve ; profile -> greenTRC = curve_from_table ( table , num_entries ); static struct curveType *curve_from_table(uint16_t *table, int num_entries) struct curveType * curve ; int i ; curve = malloc ( sizeof ( struct curveType ) + sizeof ( uInt16Number ) * num_entries ); if ( ! curve )  return NULL ; curve -> type = CURVE_TYPE; curve -> count = num_entries; curve -> data [ i ] = table [ i ]; return curve ; if ( ! profile -> redTRC || ! profile -> blueTRC || ! profile -> greenTRC )  qcms_profile_release ( profile ); void qcms_profile_release(qcms_profile *profile) free ( profile ); 