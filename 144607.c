qcms_bool compute_precache(struct curveType *trc, uint8_t *output) if ( trc -> type == PARAMETRIC_CURVE_TYPE )  if ( trc -> count == 0 )  if ( trc -> count == 1 )  uint16_t * inverted ; int inverted_size = trc -> count ; if ( inverted_size < 256 )  inverted_size = 256; inverted = invert_lut ( trc -> data , trc -> count , inverted_size ); static uint16_t *invert_lut(uint16_t *table, int length, int out_length) uint16_t * output = malloc ( sizeof ( uint16_t ) * out_length ) ; if ( ! output )  output [ i ] = lut_inverse_interp16 ( input , table , length ); return output ; 