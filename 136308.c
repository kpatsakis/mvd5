int av_read_frame(AVFormatContext *s,AVPacket *pkt) const int genpts = s -> flags & 0x1 ; int ret ; if ( ! genpts )  ret = ( s -> packet_buffer ? read_from_packet_buffer ( & s -> packet_buffer , & s -> packet_buffer_end , pkt ) : read_frame_internal ( s , pkt ) ); static int read_frame_internal(AVFormatContext *s,AVPacket *pkt) int got_packet = 0 ; while ( ! got_packet && ! s -> parse_queue )  AVStream * st ; AVPacket cur_pkt ; ret = ff_read_packet ( s , & cur_pkt ); if ( ret < 0 )  st = s -> streams [ cur_pkt . stream_index ]; if ( st -> need_parsing && ! st -> parser && ! ( s -> flags & 0x20 ) )  st -> parser = av_parser_init ( ( st -> codec -> codec_id ) ); if ( ! st -> parser )  st -> need_parsing = AVSTREAM_PARSE_NONE; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_HEADERS )  st -> parser -> flags |= 0x1; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_ONCE )  st -> parser -> flags |= 0x0002; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  st -> parser -> flags |= 0x1000; if ( ! st -> need_parsing || ! st -> parser )  * pkt = cur_pkt; got_packet = 1; if ( ( st -> discard ) < AVDISCARD_ALL )  if ( ( ret = parse_packet ( s , & cur_pkt , cur_pkt . stream_index ) ) < 0 )  if ( pkt -> flags & 0x1 )  st -> skip_to_keyframe = 0; if ( st -> skip_to_keyframe )  if ( got_packet )  * pkt = cur_pkt; got_packet = 0; static int parse_packet(AVFormatContext *s,AVPacket *pkt,int stream_index) AVPacket out_pkt = { ( 0 ) } ; AVStream * st = s -> streams [ stream_index ] ; uint8_t * data = pkt ? pkt -> data : ( ( void * ) 0 ) ; int size = pkt ? pkt -> size : 0 ; int got_output = 0 ; if ( ! pkt )  pkt = & flush_pkt; got_output = 1; while ( size > 0 || pkt == & flush_pkt && got_output )  int len ; len = av_parser_parse2 ( st -> parser , st -> codec , & out_pkt . data , & out_pkt . size , data , size , pkt -> pts , pkt -> dts , pkt -> pos ); pkt -> pts = pkt -> dts = ( ( int64_t ) 0x8000000000000000UL ); pkt -> pos = ( - 1 ); data += len; size -= len; got_output = ! ( ! out_pkt . size ); if ( ! out_pkt . size )  out_pkt . duration = 0; if ( ( st -> codec -> codec_type ) == AVMEDIA_TYPE_AUDIO )  if ( st -> codec -> sample_rate > 0 )  out_pkt . duration = ( av_rescale_q_rnd ( ( st -> parser -> duration ) , ( ( AVRational ) ( 1 ) , st -> codec -> sample_rate ) , st -> time_base , AV_ROUND_DOWN ) ) if ( st -> codec -> time_base . num != 0 && st -> codec -> time_base . den != 0 )  out_pkt . duration = ( av_rescale_q_rnd ( ( st -> parser -> duration ) , st -> codec -> time_base , st -> time_base , AV_ROUND_DOWN ) ); out_pkt . stream_index = st -> index; out_pkt . pts = st -> parser -> pts; out_pkt . dts = st -> parser -> dts; out_pkt . pos = st -> parser -> pos; if ( ( st -> need_parsing ) == AVSTREAM_PARSE_FULL_RAW )  out_pkt . pos = st -> parser -> frame_offset; if ( st -> parser -> key_frame == 1 || st -> parser -> key_frame == - 1 && st -> parser -> pict_type == AV_PICTURE_TYPE_I )  out_pkt . flags |= 0x1; if ( st -> parser -> key_frame == - 1 && st -> parser -> pict_type == AV_PICTURE_TYPE_NONE && pkt -> flags & 0x1 )  out_pkt . flags |= 0x1; compute_pkt_fields ( s , st , st -> parser , & out_pkt ); if ( out_pkt . data == pkt -> data && out_pkt . size == pkt -> size )  out_pkt . destruct = pkt -> destruct; pkt -> destruct = ( ( void * ) 0 ); if ( ( ret = av_dup_packet ( & out_pkt ) ) < 0 )  if ( ! add_to_pktbuf ( & s -> parse_queue , & out_pkt , & s -> parse_queue_end ) )  static void compute_pkt_fields(AVFormatContext *s,AVStream *st,AVCodecParserContext *pc,AVPacket *pkt) int presentation_delayed ; int delay ; if ( s -> flags & 0x0010 )  if ( s -> flags & 0x0008 && pkt -> pts != ( ( int64_t ) 0x8000000000000000UL ) )  pkt -> dts = ( ( int64_t ) 0x8000000000000000UL ); if ( ( st -> codec -> codec_id ) != AV_CODEC_ID_H264 && pc && pc -> pict_type == AV_PICTURE_TYPE_B )  st -> codec -> has_b_frames = 1; delay = st -> codec -> has_b_frames; presentation_delayed = 0; if ( delay && pc && pc -> pict_type != AV_PICTURE_TYPE_B )  presentation_delayed = 1; if ( delay == 1 && pkt -> dts == pkt -> pts && pkt -> dts != ( ( int64_t ) 0x8000000000000000UL ) && presentation_delayed )  if ( strcmp ( s -> iformat -> name , "mov,mp4,m4a,3gp,3g2,mj2" ) )  