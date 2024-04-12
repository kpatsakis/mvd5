int av_read_frame(AVFormatContext *s,AVPacket *pkt) const int genpts = s -> flags & 0x1 ; int eof = 0 ; int ret ; if ( ! genpts )  AVPacketList * pktl = s -> packet_buffer ; if ( pktl )  AVPacket * next_pkt = & pktl -> pkt ; if ( next_pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) )  int wrap_bits = s -> streams [ next_pkt -> stream_index ] -> pts_wrap_bits ; int64_t last_dts = next_pkt -> dts ; while ( pktl && next_pkt -> pts == ( ( int64_t ) 0x8000000000000000UL ) )  if ( pktl -> pkt . stream_index == next_pkt -> stream_index && av_compare_mod ( ( next_pkt -> dts ) , pktl -> pkt . dts , ( 2 << wrap_bits - 1 ) ) < 0 )  if ( av_compare_mod ( pktl -> pkt . pts , pktl -> pkt . dts , ( 2 << wrap_bits - 1 ) ) )  next_pkt -> pts = pktl -> pkt . dts; if ( last_dts != ( ( int64_t ) 0x8000000000000000UL ) )  last_dts = pktl -> pkt . dts; pktl = pktl -> next; if ( eof && next_pkt -> pts == ( ( int64_t ) 0x8000000000000000UL ) && last_dts != ( ( int64_t ) 0x8000000000000000UL ) )  next_pkt -> pts = last_dts + ( next_pkt -> duration ); pktl = s -> packet_buffer; if ( ! ( next_pkt -> pts == ( ( int64_t ) 0x8000000000000000UL ) && next_pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) && ! eof ) )  ret = read_frame_internal ( s , pkt ); if ( ret < 0 )  if ( pktl && ret != - '\v' )  eof = 1; if ( av_dup_packet ( add_to_pktbuf ( & s -> packet_buffer , pkt , & s -> packet_buffer_end ) ) < 0 )  static AVPacket *add_to_pktbuf(AVPacketList **packet_buffer,AVPacket *pkt,AVPacketList **plast_pktl) AVPacketList * pktl = ( av_mallocz ( sizeof ( AVPacketList ) ) ) ; if ( ! pktl )  return ( ( void * ) 0 ) ; pktl -> pkt = * pkt; return & pktl -> pkt ; static int read_frame_internal(AVFormatContext *s,AVPacket *pkt) int got_packet = 0 ; while ( ! got_packet && ! s -> parse_queue )  AVStream * st ; AVPacket cur_pkt ; ret = ff_read_packet ( s , & cur_pkt ); int ff_read_packet(AVFormatContext *s,AVPacket *pkt) int ret ; AVStream * st ; AVPacketList * pktl = s -> raw_packet_buffer ; if ( pktl )  * pkt = pktl -> pkt; st = s -> streams [ pkt -> stream_index ]; if ( st -> request_probe <= 0 )  return 0 ; pkt -> data = ( ( void * ) 0 ); pkt -> size = 0; ret = ( ( s -> iformat -> read_packet ) ( s , pkt ) ); if ( ret < 0 )  if ( ! pktl || ret == - '\v' )  return ret ; if ( s -> flags & 0x0100 && pkt -> flags & 0x0002 )  if ( ( pkt -> stream_index ) >= ( ( unsigned int ) ( s -> nb_streams ) ) )  st = s -> streams [ pkt -> stream_index ]; pkt -> dts = wrap_timestamp ( st , pkt -> dts ); static int64_t wrap_timestamp(AVStream *st,int64_t timestamp) return timestamp ; pkt -> pts = wrap_timestamp ( st , pkt -> pts ); static int64_t wrap_timestamp(AVStream *st,int64_t timestamp) return timestamp ; if ( ! pktl && st -> request_probe <= 0 )  return ret ; s -> raw_packet_buffer_remaining_size -= pkt -> size; if ( ret < 0 )  st = s -> streams [ cur_pkt . stream_index ]; if ( st -> need_parsing && ! st -> parser && ! ( s -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( ! st -> parser )  st -> need_parsing = AVSTREAM_PARSE_NONE; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_ONCE )  st -> parser -> flags |= 0x0002; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; if ( ! st -> need_parsing || ! st -> parser )  * pkt = cur_pkt; got_packet = 1; if ( ( st -> discard ) < AVDISCARD_ALL )  if ( ( ret = parse_packet ( s , & cur_pkt , cur_pkt . stream_index ) ) < 0 )  if ( pkt -> flags & 0x1 )  st -> skip_to_keyframe = 0; if ( st -> skip_to_keyframe )  if ( got_packet )  * pkt = cur_pkt; got_packet = 0; static int parse_packet(AVFormatContext *s,AVPacket *pkt,int stream_index) AVStream * st = s -> streams [ stream_index ] ; int size = pkt ? pkt -> size : 0 ; if ( ! pkt )  if ( ! size && st -> parser -> flags & 0x1 )  compute_pkt_fields ( s , st , st -> parser , pkt ); static void compute_pkt_fields(AVFormatContext *s,AVStream *st,AVCodecParserContext *pc,AVPacket *pkt) int presentation_delayed ; int delay ; if ( s -> flags & 0x0010 )  if ( s -> flags & 0x0008 && pkt -> pts != ( ( int64_t ) 0x8000000000000000UL ) )  pkt -> dts = ( ( int64_t ) 0x8000000000000000UL ); if ( ( st -> codec -> codec_id ) != AV_CODEC_ID_H264 && pc && pc -> pict_type == AV_PICTURE_TYPE_B )  st -> codec -> has_b_frames = 1; delay = st -> codec -> has_b_frames; presentation_delayed = 0; if ( delay && pc && pc -> pict_type != AV_PICTURE_TYPE_B )  presentation_delayed = 1; if ( delay == 1 && pkt -> dts == pkt -> pts && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) && presentation_delayed )  if ( strcmp ( s -> iformat -> name , "mov,mp4,m4a,3gp,3g2,mj2" ) )  