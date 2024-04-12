static int encode_apng(AVCodecContext *avctx, AVPacket const AVFrame *pict, int *got_packet) PNGEncContext * s = avctx -> priv_data ; int ret ; int enc_row_size ; size_t max_packet_size ; APNGFctlChunk fctl_chunk ; if ( pict && avctx -> codec_id == AV_CODEC_ID_APNG && s -> color_type == PNG_COLOR_TYPE_PALETTE )  uint32_t checksum = ~av_crc ( av_crc_get_table ( AV_CRC_32_IEEE_LE ) , ~0U , pict -> data [ 1 ] , 256 * sizeof ( uint32_t ) ) ; if ( avctx -> frame_number == 0 )  s -> palette_checksum = checksum; if ( checksum != s -> palette_checksum )  enc_row_size = deflateBound ( & s -> zstream , ( avctx -> width * s -> bits_per_pixel + 7 ) >> 3 ); max_packet_size = AV_INPUT_BUFFER_MIN_SIZE + avctx -> height * ( enc_row_size + ( 4 + 12 ) * ( ( ( int64_t ) enc_row_size + IOBUF_SIZE - 1 ) / IOBUF_SIZE ) ); if ( max_packet_size > INT_MAX )  if ( avctx -> frame_number == 0 )  s -> bytestream = avctx -> extradata = av_malloc ( FF_MIN_BUFFER_SIZE ); if ( ! avctx -> extradata )  ret = encode_headers ( avctx , pict ); static int encode_headers(AVCodecContext *avctx, const AVFrame *pict) return 0 ; if ( ret < 0 )  avctx -> extradata_size = s -> bytestream - avctx -> extradata; s -> last_frame_packet = av_malloc ( max_packet_size ); if ( ! s -> last_frame_packet )  if ( s -> last_frame )  ret = ff_alloc_packet2 ( avctx , pkt , max_packet_size , 0 ); if ( ret < 0 )  if ( pict )  s -> bytestream_start = s -> bytestream = s -> last_frame_packet; s -> bytestream_end = s -> bytestream + max_packet_size; fctl_chunk . sequence_number = s -> sequence_number; s -> bytestream += 26 + 12; ret = apng_encode_frame ( avctx , pict , & fctl_chunk , & s -> last_frame_fctl ); static int apng_encode_frame(AVCodecContext *avctx, const AVFrame APNGFctlChunk *best_fctl_chunk, APNGFctlChunk *best_last_fctl_chunk) PNGEncContext * s = avctx -> priv_data ; int ret ; AVFrame * diffFrame ; uint8_t bpp = ( s -> bits_per_pixel + 7 ) >> 3 ; uint8_t * original_bytestream , * original_bytestream_end ; uint8_t * best_bytestream ; size_t best_bytestream_size = SIZE_MAX ; APNGFctlChunk last_fctl_chunk = * best_last_fctl_chunk ; APNGFctlChunk fctl_chunk = * best_fctl_chunk ; if ( avctx -> frame_number == 0 )  diffFrame = av_frame_alloc ( ); if ( ! diffFrame )  diffFrame -> format = pict -> format; diffFrame -> width = pict -> width; diffFrame -> height = pict -> height; if ( ( ret = av_frame_get_buffer ( diffFrame , 32 ) ) < 0 )  original_bytestream = s -> bytestream; original_bytestream_end = s -> bytestream_end; temp_bytestream = av_malloc ( original_bytestream_end - original_bytestream ); temp_bytestream_end = temp_bytestream + ( original_bytestream_end - original_bytestream ); if ( ! temp_bytestream )  for (last_fctl_chunk.dispose_op = 0; last_fctl_chunk.dispose_op < 3; ++last_fctl_chunk.dispose_op) for (fctl_chunk.blend_op = 0; fctl_chunk.blend_op < 2; ++fctl_chunk.blend_op) uint32_t original_sequence_number = s -> sequence_number , sequence_number ; uint8_t * bytestream_start = s -> bytestream ; size_t bytestream_size ; if ( last_fctl_chunk . dispose_op != APNG_DISPOSE_OP_PREVIOUS )  memcpy ( diffFrame -> data [ 0 ] , s -> last_frame -> data [ 0 ] , s -> last_frame -> linesize [ 0 ] * s -> last_frame -> height ); memset ( diffFrame -> data [ 0 ] + row_start , 0 , bpp * last_fctl_chunk . width ); if ( ! s -> prev_frame )  memcpy ( diffFrame -> data [ 0 ] , s -> prev_frame -> data [ 0 ] , s -> prev_frame -> linesize [ 0 ] * s -> prev_frame -> height ); if ( apng_do_inverse_blend ( diffFrame , pict , & fctl_chunk , bpp ) < 0 )  static int apng_do_inverse_blend(AVFrame *output, const AVFrame APNGFctlChunk *fctl_chunk, uint8_t bpp) unsigned int leftmost_x = input -> width ; unsigned int topmost_y = input -> height ; const uint8_t * input_data = input -> data [ 0 ] ; uint8_t * output_data = output -> data [ 0 ] ; ptrdiff_t input_linesize = input -> linesize [ 0 ] ; ptrdiff_t output_linesize = output -> linesize [ 0 ] ; for (y = 0; y < input->height; ++y) for (x = 0; x < input->width; ++x) if ( ! memcmp ( input_data + bpp * x , output_data + bpp * x , bpp ) )  if ( x < leftmost_x )  if ( y < topmost_y )  input_data += input_linesize; output_data += output_linesize; if ( leftmost_x == input -> width && rightmost_x == 0 )  if ( fctl_chunk -> blend_op == APNG_BLEND_OP_SOURCE )  output_data = output -> data [ 0 ]; for (y = topmost_y; y < bottommost_y; ++y) memcpy ( output_data , input -> data [ 0 ] + input_linesize * y + bpp * leftmost_x , bpp * ( rightmost_x - leftmost_x ) ); output_data += output_linesize; switch ( input -> format )  palette = ( uint32_t * ) input -> data [ 1 ]; if ( palette [ transparent_palette_index ] >> 24 == 0 )  for (y = topmost_y; y < bottommost_y; ++y) uint8_t * foreground = input -> data [ 0 ] + input_linesize * y + bpp * leftmost_x ; uint8_t * background = output -> data [ 0 ] + output_linesize * y + bpp * leftmost_x ; output_data = output -> data [ 0 ] + output_linesize * ( y - topmost_y ); for (x = leftmost_x; x < rightmost_x; ++x, foreground += bpp, background += bpp, output_data += bpp) if ( ! memcmp ( foreground , background , bpp ) )  if ( input -> format == AV_PIX_FMT_PAL8 )  * output_data = transparent_palette_index; memset ( output_data , 0 , bpp ); switch ( input -> format )  if ( ( ( uint16_t * ) foreground ) [ 3 ] == 0xffff || ( ( uint16_t * ) background ) [ 3 ] == 0 )  if ( ( ( uint16_t * ) foreground ) [ 1 ] == 0xffff || ( ( uint16_t * ) background ) [ 1 ] == 0 )  if ( foreground [ 3 ] == 0xff || background [ 3 ] == 0 )  if ( foreground [ 1 ] == 0xff || background [ 1 ] == 0 )  if ( palette [ * foreground ] >> 24 == 0xff || palette [ * background ] >> 24 == 0 )  memmove ( output_data , foreground , bpp ); output -> width = rightmost_x - leftmost_x; output -> height = bottommost_y - topmost_y; fctl_chunk -> width = output -> width; fctl_chunk -> height = output -> height; fctl_chunk -> x_offset = leftmost_x; fctl_chunk -> y_offset = topmost_y; ret = encode_frame ( avctx , diffFrame ); static int encode_frame(AVCodecContext *avctx, const AVFrame *pict) PNGEncContext * s = avctx -> priv_data ; const AVFrame * const p = pict row_size = ( pict -> width * s -> bits_per_pixel + 7 ) >> 3; crow_base = av_malloc ( ( row_size + 32 ) << ( s -> filter_type == PNG_FILTER_VALUE_MIXED ) ); if ( ! crow_base )  crow_buf = crow_base + 15; if ( s -> is_progressive )  progressive_buf = av_malloc ( row_size + 1 ); top_buf = av_malloc ( row_size + 1 ); if ( ! progressive_buf || ! top_buf )  s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; if ( s -> is_progressive )  pass_row_size = ff_png_pass_row_size ( pass , s -> bits_per_pixel , pict -> width ); if ( pass_row_size > 0 )  for (y = 0; y < pict->height; y++) ptr = p -> data [ 0 ] + y * p -> linesize [ 0 ]; png_get_interlaced_row ( progressive_buf , pass_row_size , s -> bits_per_pixel , pass , ptr , pict -> width ); static void png_get_interlaced_row(uint8_t *dst, int int bits_per_pixel, int const uint8_t *src, int width) mask = masks [ pass ]; switch ( bits_per_pixel )  memset ( dst , 0 , row_size ); for (x = 0; x < width; x++) if ( ( mask << j ) & 0x80 )  b = ( src [ x >> 3 ] >> ( 7 - j ) ) & 1; dst [ dst_x >> 3 ] |= b << ( 7 - ( dst_x & 7 ) ); dst_x ++; bpp = bits_per_pixel >> 3; d = dst; s = src; for (x = 0; x < width; x++) if ( ( mask << j ) & 0x80 )  memcpy ( d , s , bpp ); d += bpp; s += bpp; crow = png_choose_filter ( s , crow_buf , progressive_buf , top , pass_row_size , s -> bits_per_pixel >> 3 ); static uint8_t *png_choose_filter(PNGEncContext *s, uint8_t uint8_t *src, uint8_t *top, int size, int bpp) int pred = s -> filter_type ; av_assert0 ( bpp || ! pred ); if ( ! top && pred )  if ( pred == PNG_FILTER_VALUE_MIXED )  uint8_t * buf1 = dst , * buf2 = dst + size + 16 ; png_filter_row ( s , buf1 + 1 , pred , src , top , size , bpp ); static void png_filter_row(PNGEncContext *c, uint8_t *dst, int uint8_t *src, uint8_t *top, int size, int bpp) switch ( filter_type )  memcpy ( dst , src , size ); sub_left_prediction ( c , dst , src , bpp , size ); static void sub_left_prediction(PNGEncContext *c, uint8_t *dst, const uint8_t *src, int bpp, int size) const uint8_t * src1 = src + bpp ; const uint8_t * src2 = src ; memcpy ( dst , src , bpp ); dst += bpp; size -= bpp; unaligned_w = FFMIN ( 32 - bpp , size ); for (x = 0; x < unaligned_w; x++) * dst ++ = * src1 ++ - * src2 ++; size -= unaligned_w; c -> hdsp . diff_bytes ( dst , src1 , src2 , size ); c -> hdsp . diff_bytes ( dst , src , top , size ); for (i = 0; i < bpp; i++) dst [ i ] = src [ i ] - ( top [ i ] >> 1 ); for (; i < size; i++) dst [ i ] = src [ i ] - ( ( src [ i - bpp ] + top [ i ] ) >> 1 ); for (i = 0; i < bpp; i++) dst [ i ] = src [ i ] - top [ i ]; sub_png_paeth_prediction ( dst + i , src + i , top + i , size - i , bpp ); static void sub_png_paeth_prediction(uint8_t *dst, uint8_t *src, uint8_t int w, int bpp) for (i = 0; i < w; i++) a = src [ i - bpp ]; b = top [ i ]; c = top [ i - bpp ]; p = b - c; pc = a - c; pa = abs ( p ); pb = abs ( pc ); pc = abs ( p + pc ); if ( pa <= pb && pa <= pc )  p = a; if ( pb <= pc )  p = b; p = c; dst [ i ] = src [ i ] - p; buf1 [ 0 ] = pred; for (i = 0; i <= size; i++) cost += abs ( ( int8_t ) buf1 [ i ] ); if ( cost < bcost )  bcost = cost; return buf2 ; png_filter_row ( s , dst + 1 , pred , src , top , size , bpp ); static void png_filter_row(PNGEncContext *c, uint8_t *dst, int uint8_t *src, uint8_t *top, int size, int bpp) switch ( filter_type )  memcpy ( dst , src , size ); sub_left_prediction ( c , dst , src , bpp , size ); c -> hdsp . diff_bytes ( dst , src , top , size ); dst [ i ] = src [ i ] - ( top [ i ] >> 1 ); dst [ i ] = src [ i ] - ( ( src [ i - bpp ] + top [ i ] ) >> 1 ); dst [ i ] = src [ i ] - top [ i ]; sub_png_paeth_prediction ( dst + i , src + i , top + i , size - i , bpp ); dst [ 0 ] = pred; return dst ; png_write_row ( avctx , crow , pass_row_size + 1 ); static int png_write_row(AVCodecContext *avctx, const uint8_t *data, int size) PNGEncContext * s = avctx -> priv_data ; s -> zstream . avail_in = size; s -> zstream . next_in = data; while ( s -> zstream . avail_in > 0 )  ret = deflate ( & s -> zstream , Z_NO_FLUSH ); if ( ret != Z_OK )  if ( s -> zstream . avail_out == 0 )  if ( s -> bytestream_end - s -> bytestream > IOBUF_SIZE + 100 )  png_write_image_data ( avctx , s -> buf , IOBUF_SIZE ); static void png_write_image_data(AVCodecContext const uint8_t *buf, int length) PNGEncContext * s = avctx -> priv_data ; if ( avctx -> codec_id == AV_CODEC_ID_PNG || avctx -> frame_number == 0 )  png_write_chunk ( & s -> bytestream , MKTAG ( 'I' , 'D' , 'A' , 'T' ) , buf , length ); static void png_write_chunk(uint8_t **f, uint32_t const uint8_t *buf, int length) bytestream_put_be32 ( f , length ); AV_WL32 ( tagbuf , tag ); bytestream_put_be32 ( f , av_bswap32 ( tag ) ); if ( length > 0 )  crc = av_crc ( crc_table , crc , buf , length ); memcpy ( * f , buf , length ); * f += length; bytestream_put_be32 ( f , ~crc ); bytestream_put_be32 ( & s -> bytestream , length + 4 ); bytestream_put_be32 ( & s -> bytestream , MKBETAG ( 'f' , 'd' , 'A' , 'T' ) ); bytestream_put_be32 ( & s -> bytestream , s -> sequence_number ); crc = av_crc ( crc_table , crc , s -> bytestream - 8 , 8 ); crc = av_crc ( crc_table , crc , buf , length ); memcpy ( s -> bytestream , buf , length ); s -> bytestream += length; bytestream_put_be32 ( & s -> bytestream , ~crc ); ++ s -> sequence_number; s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; top = progressive_buf; for (y = 0; y < pict->height; y++) ptr = p -> data [ 0 ] + y * p -> linesize [ 0 ]; crow = png_choose_filter ( s , crow_buf , ptr , top , row_size , s -> bits_per_pixel >> 3 ); static uint8_t *png_choose_filter(PNGEncContext *s, uint8_t uint8_t *src, uint8_t *top, int size, int bpp) int pred = s -> filter_type ; av_assert0 ( bpp || ! pred ); if ( ! top && pred )  if ( pred == PNG_FILTER_VALUE_MIXED )  uint8_t * buf1 = dst , * buf2 = dst + size + 16 ; png_filter_row ( s , buf1 + 1 , pred , src , top , size , bpp ); buf1 [ 0 ] = pred; cost += abs ( ( int8_t ) buf1 [ i ] ); if ( cost < bcost )  bcost = cost; return buf2 ; png_filter_row ( s , dst + 1 , pred , src , top , size , bpp ); dst [ 0 ] = pred; return dst ; png_write_row ( avctx , crow , row_size + 1 ); static int png_write_row(AVCodecContext *avctx, const uint8_t *data, int size) PNGEncContext * s = avctx -> priv_data ; s -> zstream . avail_in = size; s -> zstream . next_in = data; while ( s -> zstream . avail_in > 0 )  ret = deflate ( & s -> zstream , Z_NO_FLUSH ); if ( ret != Z_OK )  if ( s -> zstream . avail_out == 0 )  if ( s -> bytestream_end - s -> bytestream > IOBUF_SIZE + 100 )  png_write_image_data ( avctx , s -> buf , IOBUF_SIZE ); s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; top = ptr; ret = deflate ( & s -> zstream , Z_FINISH ); if ( ret == Z_OK || ret == Z_STREAM_END )  len = IOBUF_SIZE - s -> zstream . avail_out; if ( len > 0 && s -> bytestream_end - s -> bytestream > len + 100 )  png_write_image_data ( avctx , s -> buf , len ); static void png_write_image_data(AVCodecContext const uint8_t *buf, int length) PNGEncContext * s = avctx -> priv_data ; if ( avctx -> codec_id == AV_CODEC_ID_PNG || avctx -> frame_number == 0 )  png_write_chunk ( & s -> bytestream , MKTAG ( 'I' , 'D' , 'A' , 'T' ) , buf , length ); bytestream_put_be32 ( & s -> bytestream , length + 4 ); bytestream_put_be32 ( & s -> bytestream , MKBETAG ( 'f' , 'd' , 'A' , 'T' ) ); bytestream_put_be32 ( & s -> bytestream , s -> sequence_number ); crc = av_crc ( crc_table , crc , s -> bytestream - 8 , 8 ); crc = av_crc ( crc_table , crc , buf , length ); memcpy ( s -> bytestream , buf , length ); s -> bytestream += length; bytestream_put_be32 ( & s -> bytestream , ~crc ); ++ s -> sequence_number; s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; if ( ret == Z_STREAM_END )  av_freep ( & crow_base ); deflateReset ( & s -> zstream ); return ret ; s -> sequence_number = original_sequence_number; bytestream_size = s -> bytestream - bytestream_start; s -> bytestream = bytestream_start; if ( ret < 0 )  if ( bytestream_size < best_bytestream_size )  best_bytestream = s -> bytestream; best_bytestream_size = bytestream_size; if ( best_bytestream == original_bytestream )  s -> bytestream = temp_bytestream; s -> bytestream_end = temp_bytestream_end; s -> bytestream = original_bytestream; s -> bytestream_end = original_bytestream_end; 