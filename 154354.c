int av_dup_packet(AVPacket *pkt) AVPacket tmp_pkt ; if ( pkt -> destruct == ( ( void * ) 0 ) && pkt -> data )  return copy_packet_data ( pkt , & tmp_pkt ) ; static int copy_packet_data(AVPacket *dst,AVPacket *src) dst -> data = ( ( void * ) 0 ); dst -> side_data = ( ( void * ) 0 ); void * data ; if ( 1 )  if ( ( ( unsigned int ) ( dst -> size ) ) > ( ( unsigned int ) ( dst -> size ) ) + 16 )  data = av_malloc ( ( dst -> size + 16 ) ); data = av_malloc ( ( dst -> size ) ); if ( ! data )  memcpy ( data , ( src -> data ) , ( dst -> size ) ); memset ( ( ( ( uint8_t * ) data ) + dst -> size ) , 0 , 16 ); dst -> data = data; while ( 0 )  dst -> destruct = av_destruct_packet; if ( dst -> side_data_elems )  if ( ( ( unsigned int ) ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) ) > ( ( unsigned int ) ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) ) + 16 )  data = av_malloc ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) + 16 ); data = av_malloc ( ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ); if ( ! data )  memcpy ( data , ( src -> side_data ) , ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ); memset ( ( ( ( uint8_t * ) data ) + ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ) , 0 , 16 ); dst -> side_data = data; memset ( ( dst -> side_data ) , 0 , ( dst -> side_data_elems ) * sizeof ( ( * dst -> side_data ) ) ); for (i = 0; i < dst -> side_data_elems; i++) if ( ( ( unsigned int ) src -> side_data [ i ] . size ) > ( ( unsigned int ) src -> side_data [ i ] . size ) + 16 )  data = av_malloc ( ( src -> side_data [ i ] . size + 16 ) ); data = av_malloc ( src -> side_data [ i ] . size ); if ( ! data )  memcpy ( data , src -> side_data [ i ] . data , src -> side_data [ i ] . size ); memset ( ( ( ( uint8_t * ) data ) + src -> side_data [ i ] . size ) , 0 , 16 ); dst -> side_data [ i ] . data = data; dst -> side_data [ i ] . size = src -> side_data [ i ] . size; dst -> side_data [ i ] . type = src -> side_data [ i ] . type; av_destruct_packet ( dst ); 