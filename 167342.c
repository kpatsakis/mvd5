static int dyn_packet_buf_write(void *opaque,uint8_t *buf,int buf_size) unsigned char buf1 [ 4 ] ; int ret ; ( ( union unaligned_32 * ) buf1 ) -> l = av_bswap32 ( buf_size ); ret = dyn_buf_write ( opaque , buf1 , 4 ); if ( ret < 0 )  return dyn_buf_write ( opaque , buf , buf_size ) ; static int dyn_buf_write(void *opaque,uint8_t *buf,int buf_size) DynBuffer * d = opaque ; unsigned int new_size ; unsigned int new_allocated_size ; new_size = ( d -> pos + buf_size ); new_allocated_size = ( d -> allocated_size ); if ( new_size < ( d -> pos ) || new_size > ( 2147483647 / 2 ) )  while ( new_size > new_allocated_size )  if ( ! new_allocated_size )  new_allocated_size = new_size; new_allocated_size += new_allocated_size / 2 + 1; if ( new_allocated_size > ( d -> allocated_size ) )  d -> buffer = ( av_realloc_f ( ( d -> buffer ) , 1 , new_allocated_size ) ); if ( d -> buffer == ( ( void * ) 0 ) )  d -> allocated_size = new_allocated_size; memcpy ( ( d -> buffer + d -> pos ) , buf , buf_size ); d -> pos = new_size; if ( d -> pos > d -> size )  d -> size = d -> pos; 