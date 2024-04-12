int av_read_frame(AVFormatContext *s,AVPacket *pkt) const int genpts = s -> flags & 0x1 ; int ret ; if ( ! genpts )  ret = ( s -> packet_buffer ? read_from_packet_buffer ( & s -> packet_buffer , & s -> packet_buffer_end , pkt ) : read_frame_internal ( s , pkt ) ); static int read_frame_internal(AVFormatContext *s,AVPacket *pkt) int got_packet = 0 ; while ( ! got_packet && ! s -> parse_queue )  AVStream * st ; AVPacket cur_pkt ; ret = ff_read_packet ( s , & cur_pkt ); if ( ret < 0 )  st = s -> streams [ cur_pkt . stream_index ]; if ( st -> need_parsing && ! st -> parser && ! ( s -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( ! st -> parser )  st -> need_parsing = AVSTREAM_PARSE_NONE; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_ONCE )  st -> parser -> flags |= 0x0002; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; if ( ! st -> need_parsing || ! st -> parser )  * pkt = cur_pkt; if ( s -> iformat -> flags & 0x0100 && pkt -> flags & 0x1 && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  av_add_index_entry ( st , pkt -> pos , pkt -> dts , 0 , 0 , 0x1 ); got_packet = 1; if ( ( st -> discard ) < AVDISCARD_ALL )  if ( ( ret = parse_packet ( s , & cur_pkt , cur_pkt . stream_index ) ) < 0 )  if ( pkt -> flags & 0x1 )  st -> skip_to_keyframe = 0; if ( st -> skip_to_keyframe )  if ( got_packet )  * pkt = cur_pkt; got_packet = 0; int av_add_index_entry(AVStream *st,int64_t pos,int64_t timestamp,int size,int distance,int flags) timestamp = wrap_timestamp ( st , timestamp ); return ff_add_index_entry ( & st -> index_entries , & st -> nb_index_entries , & st -> index_entries_allocated_size , pos , timestamp , size , distance , flags ) ; int ff_add_index_entry(AVIndexEntry **index_entries,int *nb_index_entries,unsigned int *index_entries_allocated_size,int64_t pos,int64_t timestamp,int size,int distance,int flags) AVIndexEntry * entries ; AVIndexEntry * ie ; int index ; if ( ( ( ( unsigned int ) ( * nb_index_entries ) ) + 1 ) >= ( 2147483647 * 2U + 1U ) / sizeof ( AVIndexEntry ) )  if ( timestamp == ( ( int64_t ) 0x8000000000000000UL ) )  entries = ( av_fast_realloc ( ( * index_entries ) , index_entries_allocated_size , ( * nb_index_entries + 1 ) * sizeof ( AVIndexEntry ) ) ); if ( ! entries )  * index_entries = entries; index = ff_index_search_timestamp ( ( * index_entries ) , * nb_index_entries , timestamp , 4 ); if ( index < 0 )  ie = & entries [ index ]; if ( ie -> timestamp != timestamp )  if ( ie -> timestamp <= timestamp )  memmove ( ( entries + index + 1 ) , ( entries + index ) , sizeof ( AVIndexEntry ) * ( * nb_index_entries - index ) ); 