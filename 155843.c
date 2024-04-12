static void CVE_2012_3377_PATCHED_Ogg_DecodePacket( demux_t logical_stream_t ogg_packet *p_oggpacket ) block_t * p_block ; bool b_selected ; int i_header_len = 0 ; mtime_t i_pts = - 1 , i_interpolated_pts ; if ( ! p_oggpacket -> bytes )  if ( p_oggpacket -> bytes >= 7 && ! memcmp ( p_oggpacket -> packet , "Annodex" , 7 ) )  if ( p_oggpacket -> bytes >= 7 && ! memcmp ( p_oggpacket -> packet , "AnxData" , 7 ) )  if ( p_stream -> fmt . i_codec == VLC_CODEC_SUBT && p_oggpacket -> packet [ 0 ] & PACKET_TYPE_BITS )  if ( p_stream -> b_force_backup )  bool b_xiph ; p_stream -> i_packets_backup ++; switch ( p_stream -> fmt . i_codec )  if ( p_stream -> i_packets_backup == 3 )  p_stream -> b_force_backup = 0; b_xiph = true; if ( ! p_stream -> fmt . audio . i_rate && p_stream -> i_packets_backup == 2 )  p_stream -> b_force_backup = 0; if ( p_stream -> fmt . audio . i_rate )  p_stream -> b_force_backup = 0; if ( p_oggpacket -> bytes >= 9 )  p_oggpacket -> packet += 9; p_oggpacket -> bytes -= 9; b_xiph = false; if ( p_stream -> i_packets_backup == p_stream -> i_kate_num_headers )  p_stream -> b_force_backup = 0; b_xiph = true; p_stream -> b_force_backup = 0; b_xiph = false; if ( ! b_xiph )  p_stream -> i_headers += p_oggpacket -> bytes; p_stream -> p_headers = realloc ( p_stream -> p_headers , p_stream -> i_headers ); if ( p_stream -> p_headers )  p_stream -> i_headers = 0; p_stream -> p_headers = NULL; if ( xiph_AppendHeaders ( & p_stream -> i_headers , & p_stream -> p_headers , p_oggpacket -> bytes , p_oggpacket -> packet ) )  p_stream -> i_headers = 0; p_stream -> p_headers = NULL; if ( p_stream -> i_headers > 0 )  if ( ! p_stream -> b_force_backup )  p_stream -> fmt . i_extra = p_stream -> i_headers; p_stream -> fmt . p_extra = malloc ( p_stream -> i_headers ); if ( p_stream -> fmt . p_extra )  p_stream -> fmt . i_extra = 0; b_selected = false; if ( p_stream -> fmt . i_codec == VLC_CODEC_VORBIS || p_stream -> fmt . i_codec == VLC_CODEC_SPEEX || p_stream -> fmt . i_codec == VLC_CODEC_FLAC )  if ( p_stream -> i_pcr >= 0 )  p_stream -> i_previous_pcr = p_stream -> i_pcr; i_pts = p_stream -> i_pcr; i_interpolated_pts = p_stream -> i_interpolated_pcr; if ( p_stream -> fmt . i_codec != VLC_CODEC_VORBIS && p_stream -> fmt . i_codec != VLC_CODEC_SPEEX && p_stream -> fmt . i_codec != VLC_CODEC_FLAC && p_stream -> i_pcr >= 0 )  p_stream -> i_previous_pcr = p_stream -> i_pcr; i_pts = p_stream -> i_pcr; if ( ! b_selected )  if ( p_oggpacket -> bytes <= 0 )  if ( ! ( p_block = block_New ( p_demux , p_oggpacket -> bytes ) ) )  if ( p_stream -> i_skip_frames > 0 )  p_block -> i_flags |= BLOCK_FLAG_PREROLL; p_stream -> i_skip_frames --; if ( i_pts == 0 )  i_pts = VLC_TS_0; if ( i_pts == - 1 && i_interpolated_pts == 0 )  i_pts = VLC_TS_0; if ( i_pts == - 1 )  i_pts = VLC_TS_INVALID; if ( p_stream -> fmt . i_cat == AUDIO_ES )  p_block -> i_dts = p_block -> i_pts = i_pts; if ( p_stream -> fmt . i_cat == SPU_ES )  p_block -> i_dts = p_block -> i_pts = i_pts; p_block -> i_length = 0; if ( p_stream -> fmt . i_codec == VLC_CODEC_THEORA )  p_block -> i_dts = p_block -> i_pts = i_pts; if ( ( p_oggpacket -> granulepos & ( ( 1 << p_stream -> i_granule_shift ) - 1 ) ) == 0 )  p_block -> i_flags |= BLOCK_FLAG_TYPE_I; if ( p_stream -> fmt . i_codec == VLC_CODEC_DIRAC )  ogg_int64_t dts = p_oggpacket -> granulepos >> 31 ; ogg_int64_t delay = ( p_oggpacket -> granulepos >> 9 ) & 0x1fff ; uint64_t u_pnum = dts + delay ; p_block -> i_dts = p_stream -> i_pcr; p_block -> i_pts = VLC_TS_INVALID; if ( - 1 != p_oggpacket -> granulepos )  p_block -> i_pts = u_pnum * INT64_C ( 1000000 ) / p_stream -> f_rate / 2; p_block -> i_dts = i_pts; p_block -> i_pts = VLC_TS_INVALID; if ( p_stream -> fmt . i_codec != VLC_CODEC_VORBIS && p_stream -> fmt . i_codec != VLC_CODEC_SPEEX && p_stream -> fmt . i_codec != VLC_CODEC_FLAC && p_stream -> fmt . i_codec != VLC_CODEC_TARKIN && p_stream -> fmt . i_codec != VLC_CODEC_THEORA && p_stream -> fmt . i_codec != VLC_CODEC_CMML && p_stream -> fmt . i_codec != VLC_CODEC_DIRAC && p_stream -> fmt . i_codec != VLC_CODEC_KATE )  i_header_len = ( * p_oggpacket -> packet & PACKET_LEN_BITS01 ) >> 6; i_header_len |= ( * p_oggpacket -> packet & PACKET_LEN_BITS2 ) << 1; if ( p_stream -> fmt . i_codec == VLC_CODEC_SUBT )  int i , lenbytes = 0 ; if ( i_header_len > 0 && p_oggpacket -> bytes >= i_header_len + 1 )  for( i = 0, lenbytes = 0; i < i_header_len; i++ ) lenbytes = lenbytes << 8; lenbytes += * ( p_oggpacket -> packet + i_header_len - i ); if ( p_oggpacket -> bytes - 1 - i_header_len > 2 || ( p_oggpacket -> packet [ i_header_len + 1 ] != ' ' && p_oggpacket -> packet [ i_header_len + 1 ] != 0 && p_oggpacket -> packet [ i_header_len + 1 ] != '\n' && p_oggpacket -> packet [ i_header_len + 1 ] != '\r' ) )  p_block -> i_length = ( mtime_t ) lenbytes * 1000; i_header_len ++; if ( p_block -> i_buffer >= ( unsigned int ) i_header_len )  p_block -> i_buffer -= i_header_len; p_block -> i_buffer = 0; memcpy ( p_block -> p_buffer , p_oggpacket -> packet + i_header_len , p_oggpacket -> bytes - i_header_len ); es_out_Send ( p_demux -> out , p_stream -> p_es , p_block ); 