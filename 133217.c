static int jpeg2000_decode_frame(AVCodecContext *avctx, void int *got_frame, AVPacket *avpkt) Jpeg2000DecoderContext * s = avctx -> priv_data ; ThreadFrame frame = . f = data AVFrame * picture = data ; int tileno , ret ; s -> avctx = avctx; s -> curtileno = - 1; memset ( s -> cdef , - 1 , sizeof ( s -> cdef ) ); if ( bytestream2_get_bytes_left ( & s -> g ) < 2 )  if ( bytestream2_get_bytes_left ( & s -> g ) >= 12 && ( bytestream2_get_be32u ( & s -> g ) == 12 ) && ( bytestream2_get_be32u ( & s -> g ) == JP2_SIG_TYPE ) && ( bytestream2_get_be32u ( & s -> g ) == JP2_SIG_VALUE ) )  if ( ! jp2_find_codestream ( s ) )  if ( bytestream2_get_be16u ( & s -> g ) != JPEG2000_SOC )  if ( ret = jpeg2000_read_main_headers ( s ) )  if ( ( ret = ff_thread_get_buffer ( avctx , & frame , 0 ) ) < 0 )  if ( ret = jpeg2000_read_bitstream_packets ( s ) )  for (tileno = 0; tileno < s->numXtiles * s->numYtiles; tileno++) if ( ret = jpeg2000_decode_tile ( s , s -> tile + tileno , picture ) )  jpeg2000_dec_cleanup ( s ); static void jpeg2000_dec_cleanup(Jpeg2000DecoderContext *s) memset ( s -> codsty , 0 , sizeof ( s -> codsty ) ); memset ( s -> qntsty , 0 , sizeof ( s -> qntsty ) ); memset ( s -> properties , 0 , sizeof ( s -> properties ) ); memset ( & s -> poc , 0 , sizeof ( s -> poc ) ); s -> numXtiles = s -> numYtiles = 0; 