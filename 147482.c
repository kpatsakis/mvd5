qcms_profile* qcms_CIE_xyY qcms_CIE_xyYTRIPLE float gamma) qcms_profile * profile = qcms_profile_create ( ) ; if ( ! profile )  if ( ! set_rgb_colorants ( profile , white_point , primaries ) )  qcms_profile_release ( profile ); void qcms_profile_release(qcms_profile *profile) if ( profile -> mBA )  mAB_release ( profile -> mBA ); static void mAB_release(struct lutmABType *lut) free ( lut ); 