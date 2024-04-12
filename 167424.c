static int encode_png(AVCodecContext *avctx, AVPacket const AVFrame *pict, int *got_packet) PNGEncContext * s = avctx -> priv_data ; int ret ; int enc_row_size ; size_t max_packet_size ; enc_row_size = deflateBound ( & s -> zstream , ( avctx -> width * s -> bits_per_pixel + 7 ) >> 3 ); max_packet_size = AV_INPUT_BUFFER_MIN_SIZE + avctx -> height * ( enc_row_size + 12 * ( ( ( int64_t ) enc_row_size + IOBUF_SIZE - 1 ) / IOBUF_SIZE ) ); if ( max_packet_size > INT_MAX )  ret = ff_alloc_packet2 ( avctx , pkt , max_packet_size , 0 ); if ( ret < 0 )  ret = encode_headers ( avctx , pict ); static int encode_headers(AVCodecContext *avctx, const AVFrame *pict) return 0 ; if ( ret < 0 )  ret = encode_frame ( avctx , pict ); static int encode_frame(AVCodecContext *avctx, const AVFrame *pict) PNGEncContext * s = avctx -> priv_data ; int y , len , ret ; int row_size , pass_row_size ; row_size = ( pict -> width * s -> bits_per_pixel + 7 ) >> 3; crow_base = av_malloc ( ( row_size + 32 ) << ( s -> filter_type == PNG_FILTER_VALUE_MIXED ) ); if ( ! crow_base )  if ( s -> is_progressive )  progressive_buf = av_malloc ( row_size + 1 ); top_buf = av_malloc ( row_size + 1 ); if ( ! progressive_buf || ! top_buf )  s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; ret = deflate ( & s -> zstream , Z_FINISH ); if ( ret == Z_OK || ret == Z_STREAM_END )  len = IOBUF_SIZE - s -> zstream . avail_out; if ( len > 0 && s -> bytestream_end - s -> bytestream > len + 100 )  png_write_image_data ( avctx , s -> buf , len ); s -> zstream . avail_out = IOBUF_SIZE; s -> zstream . next_out = s -> buf; if ( ret == Z_STREAM_END )  static void png_write_image_data(AVCodecContext const uint8_t *buf, int length) PNGEncContext * s = avctx -> priv_data ; if ( avctx -> codec_id == AV_CODEC_ID_PNG || avctx -> frame_number == 0 )  memcpy ( s -> bytestream , buf , length ); s -> bytestream += length; bytestream_put_be32 ( & s -> bytestream , ~crc ); ++ s -> sequence_number; 