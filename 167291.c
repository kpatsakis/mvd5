int avformat_open_input(AVFormatContext **ps,const char *filename,AVInputFormat *fmt,AVDictionary **options) AVFormatContext * s = * ps ; if ( ! s && ! ( s = avformat_alloc_context ( ) ) )  if ( ! s -> av_class )  if ( fmt )  s -> iformat = fmt; if ( ( ret = av_opt_set_dict ( s , & tmp ) ) < 0 )  if ( ( ret = init_input ( s , filename , & tmp ) ) < 0 )  static int init_input(AVFormatContext *s,const char *filename,AVDictionary **options) int ret ; if ( s -> pb )  if ( s -> iformat && s -> iformat -> flags & 0x1 || ! s -> iformat && ( s -> iformat = av_probe_input_format2 ( & pd , 0 , & score ) ) )  AVInputFormat *av_probe_input_format2(AVProbeData *pd,int is_opened,int *score_max) int score_ret ; AVInputFormat * fmt = av_probe_input_format3 ( pd , is_opened , & score_ret ) ; if ( score_ret > * score_max )  return fmt ; return ( ( void * ) 0 ) ; if ( ( ret = avio_open2 ( & s -> pb , filename , 1 | s -> avio_flags , ( & s -> interrupt_callback ) , options ) ) < 0 )  if ( s -> iformat )  return av_probe_input_buffer ( s -> pb , & s -> iformat , filename , s , 0 , s -> probesize ) ; int av_probe_input_buffer(AVIOContext *pb,AVInputFormat **fmt,const char *filename,void *logctx,unsigned int offset,unsigned int max_probe_size) AVProbeData pd = { ( filename ? filename : "" ) , ( ( ( void * ) 0 ) ) , ( - offset ) } ; unsigned char * buf = ( ( void * ) 0 ) ; uint8_t * mime_type ; int probe_size ; int buf_offset = 0 ; if ( ! max_probe_size )  max_probe_size = ( 1 << 20 ); if ( max_probe_size > ( 1 << 20 ) )  max_probe_size = ( 1 << 20 ); if ( max_probe_size < 2048 )  if ( offset >= max_probe_size )  if ( ! ( * fmt ) && pb -> av_class && av_opt_get ( pb , "mime_type" , 0x1 , & mime_type ) >= 0 && mime_type )  if ( ! av_strcasecmp ( mime_type , "audio/aacp" ) )  * fmt = av_find_input_format ( "aac" ); for (probe_size = 2048; probe_size <= max_probe_size && !( *fmt); probe_size = (((probe_size << 1) > ((max_probe_size > (probe_size + 1)?max_probe_size : (probe_size + 1)))?((max_probe_size > (probe_size + 1)?max_probe_size : (probe_size + 1))) : (probe_size << 1)))) void * buftmp ; if ( probe_size < offset )  buftmp = av_realloc ( buf , ( probe_size + 32 ) ); if ( ! buftmp )  buf = buftmp; if ( ( ret = avio_read ( pb , buf + buf_offset , probe_size - buf_offset ) ) < 0 )  if ( ret != - ( ( int ) ( ( 'E' | 'O' << 8 | 'F' << 16 ) | ( ( unsigned int ) 32 ) << 24 ) ) )  score = 0; ret = 0; pd . buf_size = buf_offset += ret; pd . buf = & buf [ offset ]; memset ( ( pd . buf + pd . buf_size ) , 0 , 32 ); * fmt = av_probe_input_format2 ( & pd , 1 , & score ); if ( * fmt )  av_log ( logctx , 24 , "Format %s detected only with low score of %d, misdetection possible!\n" , ( * fmt ) -> name , score ); av_log ( logctx , 48 , "Format %s probed with size=%d and score=%d\n" , ( * fmt ) -> name , probe_size , score ); if ( ! ( * fmt ) )  ret = ffio_rewind_with_probe_data ( pb , & buf , pd . buf_size ); return ret ; 