static int apng_encode_frame(AVCodecContext *avctx, const AVFrame APNGFctlChunk *best_fctl_chunk, APNGFctlChunk *best_last_fctl_chunk) PNGEncContext * s = avctx -> priv_data ; int ret ; AVFrame * diffFrame ; uint8_t bpp = ( s -> bits_per_pixel + 7 ) >> 3 ; uint8_t * original_bytestream , * original_bytestream_end ; uint8_t * best_bytestream ; size_t best_bytestream_size = SIZE_MAX ; APNGFctlChunk last_fctl_chunk = * best_last_fctl_chunk ; APNGFctlChunk fctl_chunk = * best_fctl_chunk ; if ( avctx -> frame_number == 0 )  diffFrame = av_frame_alloc ( ); if ( ! diffFrame )  diffFrame -> format = pict -> format; diffFrame -> width = pict -> width; diffFrame -> height = pict -> height; if ( ( ret = av_frame_get_buffer ( diffFrame , 32 ) ) < 0 )  original_bytestream = s -> bytestream; original_bytestream_end = s -> bytestream_end; temp_bytestream = av_malloc ( original_bytestream_end - original_bytestream ); temp_bytestream_end = temp_bytestream + ( original_bytestream_end - original_bytestream ); if ( ! temp_bytestream )  for (last_fctl_chunk.dispose_op = 0; last_fctl_chunk.dispose_op < 3; ++last_fctl_chunk.dispose_op) for (fctl_chunk.blend_op = 0; fctl_chunk.blend_op < 2; ++fctl_chunk.blend_op) uint32_t original_sequence_number = s -> sequence_number , sequence_number ; uint8_t * bytestream_start = s -> bytestream ; size_t bytestream_size ; if ( last_fctl_chunk . dispose_op != APNG_DISPOSE_OP_PREVIOUS )  if ( ! s -> prev_frame )  memcpy ( diffFrame -> data [ 0 ] , s -> prev_frame -> data [ 0 ] , s -> prev_frame -> linesize [ 0 ] * s -> prev_frame -> height ); if ( apng_do_inverse_blend ( diffFrame , pict , & fctl_chunk , bpp ) < 0 )  ret = encode_frame ( avctx , diffFrame ); s -> sequence_number = original_sequence_number; bytestream_size = s -> bytestream - bytestream_start; s -> bytestream = bytestream_start; if ( ret < 0 )  if ( bytestream_size < best_bytestream_size )  best_bytestream = s -> bytestream; best_bytestream_size = bytestream_size; if ( best_bytestream == original_bytestream )  s -> bytestream = temp_bytestream; s -> bytestream_end = temp_bytestream_end; s -> bytestream = original_bytestream; s -> bytestream_end = original_bytestream_end; static int encode_frame(AVCodecContext *avctx, const AVFrame *pict) PNGEncContext * s = avctx -> priv_data ; int y , len , ret ; int row_size , pass_row_size ; uint8_t * ptr , * top , * crow_buf , * crow ; uint8_t * progressive_buf = NULL ; row_size = ( pict -> width * s -> bits_per_pixel + 7 ) >> 3; crow_base = av_malloc ( ( row_size + 32 ) << ( s -> filter_type == PNG_FILTER_VALUE_MIXED ) ); if ( ! crow_base )  crow_buf = crow_base + 15; if ( s -> is_progressive )  progressive_buf = av_malloc ( row_size + 1 ); top_buf = av_malloc ( row_size + 1 ); if ( ! progressive_buf || ! top_buf )  s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; if ( s -> is_progressive )  int pass ; for (pass = 0; pass < NB_PASSES; pass++) pass_row_size = ff_png_pass_row_size ( pass , s -> bits_per_pixel , pict -> width ); if ( pass_row_size > 0 )  top = NULL; for (y = 0; y < pict->height; y++) if ( ( ff_png_pass_ymask [ pass ] << ( y & 7 ) ) & 0x80 )  crow = png_choose_filter ( s , crow_buf , progressive_buf , top , pass_row_size , s -> bits_per_pixel >> 3 ); top = progressive_buf; static uint8_t *png_choose_filter(PNGEncContext *s, uint8_t uint8_t *src, uint8_t *top, int size, int bpp) int pred = s -> filter_type ; if ( ! top && pred )  pred = PNG_FILTER_VALUE_SUB; if ( pred == PNG_FILTER_VALUE_MIXED )  png_filter_row ( s , dst + 1 , pred , src , top , size , bpp ); static void png_filter_row(PNGEncContext *c, uint8_t *dst, int uint8_t *src, uint8_t *top, int size, int bpp) switch ( filter_type )  memcpy ( dst , src , size ); sub_left_prediction ( c , dst , src , bpp , size ); c -> hdsp . diff_bytes ( dst , src , top , size ); dst [ i ] = src [ i ] - ( top [ i ] >> 1 ); for (; i < size; i++) dst [ i ] = src [ i ] - ( ( src [ i - bpp ] + top [ i ] ) >> 1 ); for (i = 0; i < bpp; i++) dst [ i ] = src [ i ] - top [ i ]; sub_png_paeth_prediction ( dst + i , src + i , top + i , size - i , bpp ); 