void av_dump_format(AVFormatContext *ic,int index,const char *url,int is_output) uint8_t * printed = ( ic -> nb_streams ? av_mallocz ( ( ic -> nb_streams ) ) : ( ( void * ) 0 ) ) ; if ( ic -> nb_streams && ! printed )  if ( ic -> nb_programs )  int j ; int k ; for (j = 0; j < ic -> nb_programs; j++) for (k = 0; k < ic -> programs[j] -> nb_stream_indexes; k++) dump_stream_format ( ic , ic -> programs [ j ] -> stream_index [ k ] , index , is_output ); static void dump_stream_format(AVFormatContext *ic,int i,int index,int is_output) AVStream * st = ic -> streams [ i ] ; dump_metadata ( ( ( void * ) 0 ) , st -> metadata , "    " ); static void dump_metadata(void *ctx,AVDictionary *m,const char *indent) if ( m && ! ( av_dict_count ( m ) == 1 && av_dict_get ( m , "language" , ( ( void * ) 0 ) , 0 ) ) )  AVDictionaryEntry * tag = ( ( void * ) 0 ) ; while ( tag = av_dict_get ( m , "" , tag , 2 ) )  if ( strcmp ( "language" , ( tag -> key ) ) )  const char * p = ( tag -> value ) ; while ( * p )  size_t len = strcspn ( p , "\010\n\v\f\r" ) ; av_strlcpy ( tmp , p , ( sizeof ( tmp ) > len + 1 ? len + 1 : sizeof ( tmp ) ) ); p += len; if ( ( * p ) == 0xd )  if ( ( * p ) == 0xa )  if ( * p )  p ++; 