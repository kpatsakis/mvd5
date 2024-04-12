int avio_close_dyn_buf(AVIOContext *s,uint8_t **pbuffer) static const char padbuf [ 16 ] = { ( 0 ) } ; if ( ! s -> max_packet_size )  avio_write ( s , padbuf , ( sizeof ( padbuf ) ) ); void avio_write(AVIOContext *s,const unsigned char *buf,int size) if ( s -> direct && ! s -> update_checksum )  while ( size > 0 )  int len = ( s -> buf_end - s -> buf_ptr > size ? size : s -> buf_end - s -> buf_ptr ) ; memcpy ( ( s -> buf_ptr ) , buf , len ); s -> buf_ptr += len; if ( s -> buf_ptr >= s -> buf_end )  flush_buffer ( s ); static void flush_buffer(AVIOContext *s) if ( s -> buf_ptr > s -> buffer )  writeout ( s , ( s -> buffer ) , ( s -> buf_ptr - s -> buffer ) ); static void writeout(AVIOContext *s,const uint8_t *data,int len) if ( s -> write_packet && ! s -> error )  int ret = ( s -> write_packet ) ( s -> opaque , ( ( uint8_t * ) data ) , len ) ; if ( ret < 0 )  s -> error = ret; s -> pos += len; if ( s -> update_checksum )  s -> checksum = ( ( s -> update_checksum ) ( s -> checksum , ( s -> checksum_ptr ) , ( s -> buf_ptr - s -> checksum_ptr ) ) ); s -> checksum_ptr = s -> buffer; s -> buf_ptr = s -> buffer; buf += len; size -= len; 