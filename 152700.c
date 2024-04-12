int file_getc(FILE_T file) unsigned char buf [ 1 ] ; int ret ; if ( file -> err )  if ( file -> have )  file -> have --; file -> pos ++; return ( * ( file -> next ++ ) ) ; ret = file_read ( buf , 1 , file ); int file_read(void *buf,unsigned int len,FILE_T file) unsigned int n ; if ( len == 0 )  if ( file -> seek )  file -> seek = 0; if ( gz_skip ( file , file -> skip ) == - 1 )  if ( file -> have )  n = ( file -> have > len ? len : file -> have ); file -> next += n; file -> have -= n; if ( file -> err )  if ( file -> eof && file -> avail_in == 0 )  if ( fill_out_buffer ( file ) == - 1 )  len -= n; file -> pos += n; while ( len )  static int fill_out_buffer(FILE_T state) if ( state -> compression == 0 )  if ( gz_head ( state ) == - 1 )  static int gz_head(FILE_T state) if ( state -> avail_in == 0 )  if ( fill_in_buffer ( state ) == - 1 )  if ( state -> avail_in == 0 )  if ( state -> next_in [ 0 ] == 31 )  state -> avail_in --; state -> next_in ++; if ( state -> avail_in == 0 && fill_in_buffer ( state ) == - 1 )  if ( state -> avail_in && state -> next_in [ 0 ] == 139 )  guint8 cm ; guint8 flags ; guint16 len ; guint16 hcrc ; state -> avail_in --; state -> next_in ++; if ( gz_next1 ( state , & cm ) == - 1 )  if ( cm != 8 )  state -> err = - 21; state -> err_info = "unknown compression method"; if ( gz_next1 ( state , & flags ) == - 1 )  if ( flags & 0xe0 )  state -> err = - 21; state -> err_info = "reserved flag bits set"; if ( gz_skipn ( state , 4 ) == - 1 )  if ( gz_skipn ( state , 1 ) == - 1 )  if ( gz_skipn ( state , 1 ) == - 1 )  if ( flags & 4 )  if ( gz_next2 ( state , & len ) == - 1 )  if ( gz_skipn ( state , len ) == - 1 )  if ( flags & 8 )  if ( gz_skipzstr ( state ) == - 1 )  if ( flags & 16 )  if ( gz_skipzstr ( state ) == - 1 )  if ( flags & 2 )  if ( gz_next2 ( state , & hcrc ) == - 1 )  state -> strm . adler = crc32 ( 0L , 0 , 0 ); state -> compression = 2; state -> is_compressed = ! 0; if ( state -> fast_seek )  struct zlib_cur_seek_point * cur = ( struct zlib_cur_seek_point * ) ( g_malloc_n ( 1 , sizeof ( struct zlib_cur_seek_point ) ) ) ; cur -> pos = cur -> have = 0; state -> fast_seek_cur = cur; state -> out [ 0 ] = 31; state -> have = 1; state -> raw = state -> pos; state -> next = state -> out; if ( state -> avail_in )  memcpy ( ( state -> next + state -> have ) , ( state -> next_in ) , ( state -> avail_in ) ); state -> have += state -> avail_in; state -> avail_in = 0; state -> compression = 1; 