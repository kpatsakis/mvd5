int av_read_frame(AVFormatContext *s,AVPacket *pkt) const int genpts = s -> flags & 0x1 ; int ret ; if ( ! genpts )  ret = ( s -> packet_buffer ? read_from_packet_buffer ( & s -> packet_buffer , & s -> packet_buffer_end , pkt ) : read_frame_internal ( s , pkt ) ); static int read_frame_internal(AVFormatContext *s,AVPacket *pkt) int got_packet = 0 ; while ( ! got_packet && ! s -> parse_queue )  AVStream * st ; AVPacket cur_pkt ; ret = ff_read_packet ( s , & cur_pkt ); if ( ret < 0 )  st = s -> streams [ cur_pkt . stream_index ]; if ( st -> need_parsing && ! st -> parser && ! ( s -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( ! st -> parser )  st -> need_parsing = AVSTREAM_PARSE_NONE; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_ONCE )  st -> parser -> flags |= 0x0002; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; if ( ! st -> need_parsing || ! st -> parser )  * pkt = cur_pkt; got_packet = 1; if ( ( st -> discard ) < AVDISCARD_ALL )  if ( ( ret = parse_packet ( s , & cur_pkt , cur_pkt . stream_index ) ) < 0 )  if ( pkt -> flags & 0x1 )  st -> skip_to_keyframe = 0; if ( st -> skip_to_keyframe )  if ( got_packet )  * pkt = cur_pkt; got_packet = 0; int ff_read_packet(AVFormatContext *s,AVPacket *pkt) int ret ; int i ; AVStream * st ; AVPacketList * pktl = s -> raw_packet_buffer ; if ( pktl )  * pkt = pktl -> pkt; st = s -> streams [ pkt -> stream_index ]; if ( st -> request_probe <= 0 )  pkt -> data = ( ( void * ) 0 ); pkt -> size = 0; ret = ( ( s -> iformat -> read_packet ) ( s , pkt ) ); if ( ret < 0 )  if ( ! pktl || ret == - '\v' )  for (i = 0; i < s -> nb_streams; i++) st = s -> streams [ i ]; if ( st -> probe_packets )  probe_codec ( s , st , ( ( void * ) 0 ) ); if ( s -> flags & 0x0100 && pkt -> flags & 0x0002 )  if ( ( pkt -> stream_index ) >= ( ( unsigned int ) ( s -> nb_streams ) ) )  st = s -> streams [ pkt -> stream_index ]; pkt -> dts = wrap_timestamp ( st , pkt -> dts ); pkt -> pts = wrap_timestamp ( st , pkt -> pts ); if ( ! pktl && st -> request_probe <= 0 )  s -> raw_packet_buffer_remaining_size -= pkt -> size; static void probe_codec(AVFormatContext *s,AVStream *st,const AVPacket *pkt) if ( st -> request_probe > 0 )  AVProbeData * pd = & st -> probe_data ; if ( pkt )  uint8_t * new_buf = ( av_realloc ( ( pd -> buf ) , ( pd -> buf_size + pkt -> size + 32 ) ) ) ; if ( ! new_buf )  pd -> buf = new_buf; memcpy ( ( pd -> buf + pd -> buf_size ) , ( pkt -> data ) , ( pkt -> size ) ); pd -> buf_size += pkt -> size; memset ( ( pd -> buf + pd -> buf_size ) , 0 , 32 ); if ( end || ff_log2_c ( ( pd -> buf_size ) ) != ff_log2_c ( ( pd -> buf_size - pkt -> size ) ) )  int score = set_codec_from_probe_data ( s , st , pd ) ; if ( ( st -> codec -> codec_id ) != AV_CODEC_ID_NONE && score > 100 / 4 || end )  pd -> buf_size = 0; av_freep ( ( & pd -> buf ) ); 