static int CVE_2014_5272_VULN_decode_frame(AVCodecContext void *data, int AVPacket *avpkt) IffContext * s = avctx -> priv_data ; const uint8_t * buf = avpkt -> size >= 2 ? avpkt -> data + AV_RB16 ( avpkt -> data ) : NULL ; const int buf_size = avpkt -> size >= 2 ? avpkt -> size - AV_RB16 ( avpkt -> data ) : 0 ; const uint8_t * buf_end = buf + buf_size ; int y , plane , res ; if ( ( res = extract_header ( avctx , avpkt ) ) < 0 )  if ( s -> init )  if ( ( res = avctx -> reget_buffer ( avctx , & s -> frame ) ) < 0 )  if ( ( res = ff_get_buffer ( avctx , & s -> frame ) ) < 0 )  if ( avctx -> bits_per_coded_sample <= 8 && avctx -> pix_fmt == AV_PIX_FMT_PAL8 )  if ( ( res = cmap_read_palette ( avctx , ( uint32_t * ) s -> frame . data [ 1 ] ) ) < 0 )  if ( avctx -> pix_fmt == AV_PIX_FMT_RGB32 && avctx -> bits_per_coded_sample <= 8 )  if ( ( res = cmap_read_palette ( avctx , s -> mask_palbuf ) ) < 0 )  s -> init = 1; switch ( s -> compression )  if ( avctx -> codec_tag == MKTAG ( 'A' , 'C' , 'B' , 'M' ) )  if ( avctx -> codec_tag == MKTAG ( 'D' , 'E' , 'E' , 'P' ) )  const AVPixFmtDescriptor * desc = av_pix_fmt_desc_get ( avctx -> pix_fmt ) ; int raw_width = avctx -> width * ( av_get_bits_per_pixel ( desc ) >> 3 ) ; for(y = 0; y < avctx->height && buf < buf_end; y++ ) uint8_t * row = & s -> frame . data [ 0 ] [ y * s -> frame . linesize [ 0 ] ] ; memcpy ( row , buf , FFMIN ( raw_width , buf_end - buf ) ); buf += raw_width; row [ 4 * x + 3 ] = row [ 4 * x + 3 ] & 0xF0 | ( row [ 4 * x + 3 ] >> 4 ); 