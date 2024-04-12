static int transcode() int ret ; int64_t timer_start ; ret = transcode_init ( ); if ( ret < 0 )  timer_start = av_gettime ( ); if ( ( ret = init_input_threads ( ) ) < 0 )  while ( ! received_sigterm )  int64_t cur_time = av_gettime ( ) ; if ( stdin_interaction )  if ( check_keyboard_interaction ( cur_time ) < 0 )  static int check_keyboard_interaction(int64_t cur_time) int key ; static int64_t last_time ; if ( received_nb_signals )  return - ( ( int ) ( ( 'E' | 'X' << 8 | 'I' << 16 ) | ( ( unsigned int ) 'T' ) << 24 ) ) ; if ( cur_time - last_time >= 100000 && ! run_as_daemon )  key = read_key ( ); static int read_key() unsigned char ch ; struct timeval tv ; fd_set rfds ; ( & rfds ) -> fds_bits [ 0 / ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ) ] |= ( ( __fd_mask ) 1 ) << 0 % ( 8 * ( ( int ) ( sizeof ( __fd_mask ) ) ) ); tv . tv_sec = 0; tv . tv_usec = 0; n = select ( 1 , & rfds , ( ( void * ) 0 ) , ( ( void * ) 0 ) , & tv ); if ( n > 0 )  n = ( read ( 0 , ( & ch ) , 1 ) ); if ( n == 1 )  return ch ; return n ; return - 1 ; key = - 1; if ( key == 'q' )  return - ( ( int ) ( ( 'E' | 'X' << 8 | 'I' << 16 ) | ( ( unsigned int ) 'T' ) << 24 ) ) ; return 0 ; if ( ! need_output ( ) )  static int need_output() int i ; for (i = 0; i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; OutputFile * of = output_files [ ost -> file_index ] ; AVFormatContext * os = output_files [ ost -> file_index ] -> ctx ; if ( ost -> finished || os -> pb && ( avio_tell ( os -> pb ) ) >= of -> limit_filesize )  if ( ( ost -> frame_number ) >= ost -> max_frames )  return 1 ; return 0 ; ret = transcode_step ( ); static int transcode_step() OutputStream * ost ; InputStream * ist ; int ret ; ost = choose_output ( ); static OutputStream *choose_output() int i ; int64_t opts_min = 9223372036854775807L ; OutputStream * ost_min = ( ( void * ) 0 ) ; for (i = 0; i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; int64_t opts = av_rescale_q ( ost -> st -> cur_dts , ost -> st -> time_base , ( ( AVRational ) ( 1 ) , ( 1000000 ) ) ) if ( ! ost -> unavailable && ! ost -> finished && opts < opts_min )  opts_min = opts; ost_min = ost; return ost_min ; if ( ! ost )  if ( got_eagain ( ) )  static int got_eagain() int i ; for (i = 0; i < nb_output_streams; i++) if ( output_streams [ i ] -> unavailable )  return 1 ; return 0 ; return 0 ; return - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) ; if ( ost -> filter )  if ( ( ret = transcode_from_filter ( ost -> filter -> graph , & ist ) ) < 0 )  static int transcode_from_filter(FilterGraph *graph,InputStream **best_ist) int ret ; ret = avfilter_graph_request_oldest ( graph -> graph ); if ( ret >= 0 )  return reap_filters ( ) ; static int reap_filters() int i ; for (i = 0; i < nb_output_streams; i++) OutputStream * ost = output_streams [ i ] ; if ( ! ost -> filter )  if ( ! ost -> filtered_frame && ! ( ost -> filtered_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; return 0 ; if ( ret == - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) )  ret = reap_filters ( ); static int reap_filters() int i ; OutputStream * ost = output_streams [ i ] ; if ( ! ost -> filter )  if ( ! ost -> filtered_frame && ! ( ost -> filtered_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; return 0 ; return ret ; if ( ret != - 11 )  return ret ; return 0 ; return ret ; if ( ! ist )  return 0 ; ist = input_streams [ ost -> source_index ]; ret = process_input ( ist -> file_index ); static int process_input(int file_index) InputFile * ifile = input_files [ file_index ] ; int ret ; ret = get_input_packet ( ifile , & pkt ); static int get_input_packet(InputFile *f,AVPacket *pkt) if ( nb_input_files > 1 )  return get_input_packet_mt ( f , pkt ) ; static int get_input_packet_mt(InputFile *f,AVPacket *pkt) int ret = 0 ; if ( av_fifo_size ( f -> fifo ) )  if ( f -> finished )  ret = - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ); ret = - 11; return ret ; return av_read_frame ( f -> ctx , pkt ) ; if ( ret == - 11 )  return ret ; if ( ret < 0 )  return - 11 ; return 0 ; if ( ret == - 11 )  return 0 ; if ( ret < 0 )  return ret == - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) ? 0 : ret ; return reap_filters ( ) ; static int reap_filters() int i ; OutputStream * ost = output_streams [ i ] ; if ( ! ost -> filter )  if ( ! ost -> filtered_frame && ! ( ost -> filtered_frame = avcodec_alloc_frame ( ) ) )  return - 12 ; return 0 ; if ( ret < 0 )  if ( ret == - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) || ret == - 11 )  print_report ( 0 , timer_start , cur_time ); static void print_report(int is_last_report,int64_t timer_start,int64_t cur_time) char buf [ 1024 ] ; OutputStream * ost ; AVCodecContext * enc ; int frame_number ; int vid ; int i ; static int64_t last_time = ( - 1 ) ; if ( ! print_stats && ! is_last_report && ! progress_avio )  if ( ! is_last_report )  if ( last_time == ( - 1 ) )  if ( cur_time - last_time < 500000 )  buf [ 0 ] = '\0'; vid = 0; for (i = 0; i < nb_output_streams; i++) float q = ( - 1 ) ; ost = output_streams [ i ]; enc = ost -> st -> codec; if ( ! ost -> stream_copy && enc -> coded_frame )  q = ( enc -> coded_frame -> quality ) / ( ( float ) 'v' ); if ( vid && ( enc -> codec_type ) == AVMEDIA_TYPE_VIDEO )  snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "q=%2.1f " , q ); if ( ! vid && ( enc -> codec_type ) == AVMEDIA_TYPE_VIDEO )  float fps ; float t = ( ( cur_time - timer_start ) / 1000000.0 ) ; frame_number = ost -> frame_number; fps = ( t > 1 ? frame_number / t : 0 ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "frame=%5d fps=%3.*f q=%3.1f " , frame_number , fps < 9.95 , fps , q ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "L" ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "%X" , ( ( int ) ( lrintf ( ( log2 ( ( qp_histogram [ j ] + 1 ) ) ) ) ) ) ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "PSNR=" ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "%c:%2.2f " , type [ j ] , p ); snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "*:%2.2f " , psnr ( error_sum / scale_sum ) ); vid = 1; snprintf ( buf + strlen ( buf ) , sizeof ( buf ) - strlen ( buf ) , "size=N/A time=" ); 