int av_read_frame(AVFormatContext *s,AVPacket *pkt) const int genpts = s -> flags & 0x1 ; int eof = 0 ; int ret ; if ( ! genpts )  AVPacketList * pktl = s -> packet_buffer ; if ( pktl )  AVPacket * next_pkt = & pktl -> pkt ; if ( next_pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  int wrap_bits = s -> streams [ next_pkt -> stream_index ] -> pts_wrap_bits ; int64_t last_dts = next_pkt -> dts ; while ( pktl && next_pkt -> pts == ( ( int64_t ) 0x8000000000000000UL ) )  if ( pktl -> pkt . stream_index == next_pkt -> stream_index && av_compare_mod ( ( next_pkt -> dts ) , pktl -> pkt . dts , ( 2 << wrap_bits - 1 ) ) < 0 )  if ( av_compare_mod ( pktl -> pkt . pts , pktl -> pkt . dts , ( 2 << wrap_bits - 1 ) ) )  next_pkt -> pts = pktl -> pkt . dts; if ( last_dts != ( ( int64_t ) 0x8000000000000000UL ) )  last_dts = pktl -> pkt . dts; pktl = pktl -> next; if ( eof && next_pkt -> pts == ( ( int64_t ) 0x8000000000000000UL ) && last_dts != ( ( int64_t ) 0x8000000000000000UL ) )  next_pkt -> pts = last_dts + ( next_pkt -> duration ); pktl = s -> packet_buffer; if ( ! ( next_pkt -> pts == ( ( int64_t ) 0x8000000000000000UL ) && next_pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) && ! eof ) )  ret = read_frame_internal ( s , pkt ); if ( ret < 0 )  if ( pktl && ret != - '\v' )  eof = 1; if ( av_dup_packet ( add_to_pktbuf ( & s -> packet_buffer , pkt , & s -> packet_buffer_end ) ) < 0 )  static AVPacket *add_to_pktbuf(AVPacketList **packet_buffer,AVPacket *pkt,AVPacketList **plast_pktl) AVPacketList * pktl = ( av_mallocz ( sizeof ( AVPacketList ) ) ) ; if ( ! pktl )  return ( ( void * ) 0 ) ; pktl -> pkt = * pkt; return & pktl -> pkt ; static int read_frame_internal(AVFormatContext *s,AVPacket *pkt) int got_packet = 0 ; while ( ! got_packet && ! s -> parse_queue )  AVStream * st ; AVPacket cur_pkt ; ret = ff_read_packet ( s , & cur_pkt ); int ff_read_packet(AVFormatContext *s,AVPacket *pkt) int ret ; AVStream * st ; AVPacketList * pktl = s -> raw_packet_buffer ; if ( pktl )  * pkt = pktl -> pkt; st = s -> streams [ pkt -> stream_index ]; if ( st -> request_probe <= 0 )  return 0 ; pkt -> data = ( ( void * ) 0 ); pkt -> size = 0; ret = ( ( s -> iformat -> read_packet ) ( s , pkt ) ); if ( ret < 0 )  if ( ! pktl || ret == - '\v' )  return ret ; if ( s -> flags & 0x0100 && pkt -> flags & 0x0002 )  if ( ( pkt -> stream_index ) >= ( ( unsigned int ) ( s -> nb_streams ) ) )  st = s -> streams [ pkt -> stream_index ]; pkt -> dts = wrap_timestamp ( st , pkt -> dts ); static int64_t wrap_timestamp(AVStream *st,int64_t timestamp) return timestamp ; pkt -> pts = wrap_timestamp ( st , pkt -> pts ); static int64_t wrap_timestamp(AVStream *st,int64_t timestamp) return timestamp ; if ( ! pktl && st -> request_probe <= 0 )  return ret ; s -> raw_packet_buffer_remaining_size -= pkt -> size; if ( ret < 0 )  st = s -> streams [ cur_pkt . stream_index ]; if ( st -> need_parsing && ! st -> parser && ! ( s -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( ! st -> parser )  st -> need_parsing = AVSTREAM_PARSE_NONE; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_ONCE )  st -> parser -> flags |= 0x0002; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; if ( ! st -> need_parsing || ! st -> parser )  * pkt = cur_pkt; if ( s -> iformat -> flags & 0x0100 && pkt -> flags & 0x1 && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  av_add_index_entry ( st , pkt -> pos , pkt -> dts , 0 , 0 , 0x1 ); got_packet = 1; if ( ( st -> discard ) < AVDISCARD_ALL )  if ( ( ret = parse_packet ( s , & cur_pkt , cur_pkt . stream_index ) ) < 0 )  static int parse_packet(AVFormatContext *s,AVPacket *pkt,int stream_index) AVPacket out_pkt = { ( 0 ) } ; AVStream * st = s -> streams [ stream_index ] ; uint8_t * data = pkt ? pkt -> data : ( ( void * ) 0 ) ; int size = pkt ? pkt -> size : 0 ; int ret = 0 ; int got_output = 0 ; if ( ! pkt )  pkt = & flush_pkt; got_output = 1; while ( size > 0 || pkt == & flush_pkt && got_output )  int len ; len = av_parser_parse2 ( st -> parser , st -> codec , & out_pkt . data , & out_pkt . size , data , size , pkt -> pts , pkt -> dts , pkt -> pos ); pkt -> pts = pkt -> dts = ( ( int64_t ) 0x8000000000000000UL ); pkt -> pos = ( - 1 ); data += len; size -= len; got_output = ! ( ! out_pkt . size ); if ( ! out_pkt . size )  out_pkt . duration = 0; if ( ( st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO )  if ( st -> codec -> sample_rate > 0 )  out_pkt . duration = ( av_rescale_q_rnd ( ( st -> parser -> duration ) , ( ( AVRational ) ( 1 ) , st -> codec -> sample_rate ) , st -> time_base , AV_ROUND_DOWN ) ) if ( st -> codec -> time_base . num != 0 && st -> codec -> time_base . den != 0 )  out_pkt . duration = ( av_rescale_q_rnd ( ( st -> parser -> duration ) , st -> codec -> time_base , st -> time_base , AV_ROUND_DOWN ) ); out_pkt . stream_index = st -> index; out_pkt . pts = st -> parser -> pts; out_pkt . dts = st -> parser -> dts; out_pkt . pos = st -> parser -> pos; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  out_pkt . pos = st -> parser -> frame_offset; if ( st -> parser -> key_frame == 1 || st -> parser -> key_frame == - 1 && st -> parser -> pict_type == AV_PICTURE_TYPE_I )  out_pkt . flags |= 0x1; if ( st -> parser -> key_frame == - 1 && st -> parser -> pict_type == AV_PICTURE_TYPE_NONE && pkt -> flags & 0x1 )  out_pkt . flags |= 0x1; if ( out_pkt . data == pkt -> data && out_pkt . size == pkt -> size )  out_pkt . destruct = pkt -> destruct; pkt -> destruct = ( ( void * ) 0 ); if ( ( ret = av_dup_packet ( & out_pkt ) ) < 0 )  if ( ! add_to_pktbuf ( & s -> parse_queue , & out_pkt , & s -> parse_queue_end ) )  static AVPacket *add_to_pktbuf(AVPacketList **packet_buffer,AVPacket *pkt,AVPacketList **plast_pktl) AVPacketList * pktl = ( av_mallocz ( sizeof ( AVPacketList ) ) ) ; if ( ! pktl )  return ( ( void * ) 0 ) ; pktl -> pkt = * pkt; return & pktl -> pkt ; ret = - 12; return ret ; if ( pkt -> flags & 0x1 )  st -> skip_to_keyframe = 0; if ( st -> skip_to_keyframe )  if ( got_packet )  * pkt = cur_pkt; got_packet = 0; int av_add_index_entry(AVStream *st,int64_t pos,int64_t timestamp,int size,int distance,int flags) timestamp = wrap_timestamp ( st , timestamp ); static int64_t wrap_timestamp(AVStream *st,int64_t timestamp) return timestamp ; return ff_add_index_entry ( & st -> index_entries , & st -> nb_index_entries , & st -> index_entries_allocated_size , pos , timestamp , size , distance , flags ) ; int ff_add_index_entry(AVIndexEntry **index_entries,int *nb_index_entries,unsigned int *index_entries_allocated_size,int64_t pos,int64_t timestamp,int size,int distance,int flags) AVIndexEntry * entries ; AVIndexEntry * ie ; int index ; if ( ( ( ( unsigned int ) ( * nb_index_entries ) ) + 1 ) >= ( 2147483647 * 2U + 1U ) / sizeof ( AVIndexEntry ) )  if ( timestamp == ( ( int64_t ) 0x8000000000000000UL ) )  entries = ( av_fast_realloc ( ( * index_entries ) , index_entries_allocated_size , ( * nb_index_entries + 1 ) * sizeof ( AVIndexEntry ) ) ); if ( ! entries )  * index_entries = entries; index = ff_index_search_timestamp ( ( * index_entries ) , * nb_index_entries , timestamp , 4 ); int ff_index_search_timestamp(const AVIndexEntry *entries,int nb_entries,int64_t wanted_timestamp,int flags) int a ; int b ; int m ; int64_t timestamp ; a = - 1; b = nb_entries; if ( b && entries [ b - 1 ] . timestamp < wanted_timestamp )  a = b - 1; while ( b - a > 1 )  m = a + b >> 1; timestamp = entries [ m ] . timestamp; if ( timestamp >= wanted_timestamp )  b = m; if ( timestamp <= wanted_timestamp )  a = m; m = ( flags & 1 ? a : b ); if ( ! ( flags & 4 ) )  while ( m >= 0 && m < nb_entries && ! ( entries [ m ] . flags & 0x1 ) )  m += ( flags & 1 ? - 1 : 1 ); if ( m == nb_entries )  return - 1 ; return m ; if ( index < 0 )  ie = & entries [ index ]; if ( ie -> timestamp != timestamp )  if ( ie -> timestamp <= timestamp )  memmove ( ( entries + index + 1 ) , ( entries + index ) , sizeof ( AVIndexEntry ) * ( * nb_index_entries - index ) ); 