static int bayer_to_yv12_wrapper(SwsContext *c, const uint8_t* src[], int srcStride[], int int srcSliceH, uint8_t* dst[], int dstStride[]) const uint8_t * srcPtr = src [ 0 ] ; uint8_t * dstY = dst [ 0 ] ; uint8_t * dstU = dst [ 1 ] ; uint8_t * dstV = dst [ 2 ] ; int i ; switch ( c -> srcFormat )  srcPtr += 2 * srcStride [ 0 ]; dstY += 2 * dstStride [ 0 ]; dstU += dstStride [ 1 ]; dstV += dstStride [ 1 ]; for (i = 2; i < srcSliceH - 2; i += 2) srcPtr += 2 * srcStride [ 0 ]; dstY += 2 * dstStride [ 0 ]; dstU += dstStride [ 1 ]; dstV += dstStride [ 1 ]; copy ( srcPtr , srcStride [ 0 ] , dstY , dstU , dstV , dstStride [ 0 ] , c -> srcW , c -> input_rgb2yuv_table ); 