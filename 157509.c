int av_copy_packet(AVPacket *dst,AVPacket *src) * dst = * src; return copy_packet_data ( dst , src ) ; static int copy_packet_data(AVPacket *dst,AVPacket *src) dst -> data = ( ( void * ) 0 ); dst -> side_data = ( ( void * ) 0 ); void * data ; if ( 1 )  if ( ( ( unsigned int ) ( dst -> size ) ) > ( ( unsigned int ) ( dst -> size ) ) + 16 )  data = av_malloc ( ( dst -> size + 16 ) ); data = av_malloc ( ( dst -> size ) ); if ( ! data )  memcpy ( data , ( src -> data ) , ( dst -> size ) ); if ( 1 )  memset ( ( ( ( uint8_t * ) data ) + dst -> size ) , 0 , 16 ); dst -> data = data; while ( 0 )  dst -> destruct = av_destruct_packet; if ( dst -> side_data_elems )  void * data ; if ( 0 )  if ( ( ( unsigned int ) ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) ) > ( ( unsigned int ) ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) ) + 16 )  data = av_malloc ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) + 16 ); data = av_malloc ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ); if ( ! data )  memcpy ( data , ( src -> side_data ) , ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ); if ( 0 )  memset ( ( ( ( uint8_t * ) data ) + ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) , 0 , 16 ); dst -> side_data = data; while ( 0 )  memset ( ( ( ( uint8_t * ) data ) + src -> side_data [ i ] . size ) , 0 , 16 ); 