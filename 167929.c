qcms_bool compute_precache(struct curveType *trc, uint8_t *output) if ( trc -> type == PARAMETRIC_CURVE_TYPE )  float gamma_table [ 256 ] ; compute_curve_gamma_table_type_parametric ( gamma_table , trc -> parameter , trc -> count ); void compute_curve_gamma_table_type_parametric(float gamma_table[256], float parameter[7], int count) if ( count == 0 )  if ( count == 1 )  if ( count == 2 )  if ( count == 3 )  if ( count == 4 )  assert ( 0 && "invalid parametric function type." ); 