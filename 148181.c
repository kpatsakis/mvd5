static int CVE_2014_5272_VULN_decode_frame(AVCodecContext void *data, int AVPacket *avpkt) IffContext * s = avctx -> priv_data ; int y , plane , res ; if ( ( res = extract_header ( avctx , avpkt ) ) < 0 )  if ( s -> init )  if ( ( res = avctx -> reget_buffer ( avctx , & s -> frame ) ) < 0 )  if ( ( res = ff_get_buffer ( avctx , & s -> frame ) ) < 0 )  if ( avctx -> bits_per_coded_sample <= 8 && avctx -> pix_fmt == AV_PIX_FMT_PAL8 )  if ( ( res = cmap_read_palette ( avctx , ( uint32_t * ) s -> frame . data [ 1 ] ) ) < 0 )  if ( avctx -> pix_fmt == AV_PIX_FMT_RGB32 && avctx -> bits_per_coded_sample <= 8 )  if ( ( res = cmap_read_palette ( avctx , s -> mask_palbuf ) ) < 0 )  s -> init = 1; switch ( s -> compression )  if ( avctx -> codec_tag == MKTAG ( 'I' , 'L' , 'B' , 'M' ) )  if ( avctx -> pix_fmt == AV_PIX_FMT_PAL8 || avctx -> pix_fmt == AV_PIX_FMT_GRAY8 )  if ( avctx -> bits_per_coded_sample <= 8 )  if ( s -> ham )  for (y = 0; y < avctx->height ; y++) memset ( s -> ham_buf , 0 , s -> planesize * 8 ); for (plane = 0; plane < s->bpp; plane++) buf += decode_byterun ( s -> planebuf , s -> planesize , buf , buf_end ); decodeplane8 ( s -> ham_buf , s -> planebuf , s -> planesize , plane ); decode_ham_plane32 ( ( uint32_t * ) row , s -> ham_buf , s -> ham_palbuf , s -> planesize ); decode_rgb8 ( & gb , s -> frame . data [ 0 ] , avctx -> width , avctx -> height , s -> frame . linesize [ 0 ] ); decode_rgbn ( & gb , s -> frame . data [ 0 ] , avctx -> width , avctx -> height , s -> frame . linesize [ 0 ] ); decode_deep_tvdc32 ( s -> frame . data [ 0 ] , buf , buf_size , avctx -> width , avctx -> height , s -> frame . linesize [ 0 ] , s -> tvdc ); * ( AVFrame * ) data = s -> frame; 