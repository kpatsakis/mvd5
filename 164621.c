static int gif_encode_frame(AVCodecContext *avctx, AVPacket const AVFrame *pict, int *got_packet) GIFContext * s = avctx -> priv_data ; int ret ; if ( ( ret = ff_alloc_packet2 ( avctx , pkt , avctx -> width * avctx -> height * 7 / 5 + AV_INPUT_BUFFER_MIN_SIZE , 0 ) ) < 0 )  if ( avctx -> pix_fmt == AV_PIX_FMT_PAL8 )  uint8_t * pal_exdata = av_packet_new_side_data ( pkt , AV_PKT_DATA_PALETTE , AVPALETTE_SIZE ) ; if ( ! pal_exdata )  memcpy ( pal_exdata , pict -> data [ 1 ] , AVPALETTE_SIZE ); palette = ( uint32_t * ) pict -> data [ 1 ]; s -> pal_exdata = pal_exdata; if ( ! s -> palette_loaded )  if ( ! memcmp ( s -> palette , palette , AVPALETTE_SIZE ) )  