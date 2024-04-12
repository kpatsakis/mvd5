static ssize_t nic_receive(NetClientState *nc, const uint8_t * buf, size_t size) uint8_t min_buf [ 60 ] ; if ( size < sizeof ( min_buf ) )  memcpy ( min_buf , buf , size ); memset ( & min_buf [ size ] , 0 , sizeof ( min_buf ) - size ); buf = min_buf; if ( memcmp ( buf , s -> conf . macaddr . a , 6 ) == 0 )  if ( memcmp ( buf , broadcast_macaddr , 6 ) == 0 )  if ( buf [ 0 ] & 0x01 )  TRACE ( RXTX , logout ( "%p received multicast, len=%zu,%s\n" , s , size , nic_dump ( buf , size ) ) ); static const char *nic_dump(const uint8_t * buf, unsigned size) if ( size > 16 )  size = 16; while ( size -- > 0 )  p += sprintf ( p , " %02x" , * buf ++ ); unsigned mcast_idx = e100_compute_mcast_idx ( buf ) ; static unsigned e100_compute_mcast_idx(const uint8_t *ep) b = * ep ++; carry = ( ( crc & 0x80000000L ) ? 1 : 0 ) ^ ( b & 0x01 ); crc <<= 1; b >>= 1; if ( carry )  crc = ( ( crc ^ POLYNOMIAL ) | carry ); return ( crc & BITS ( 7 , 2 ) ) >> 2 ; assert ( mcast_idx < 64 ); if ( s -> mult [ mcast_idx >> 3 ] & ( 1 << ( mcast_idx & 7 ) ) )  unsigned mcast_idx = compute_mcast_idx ( buf ) ; assert ( mcast_idx < 64 ); if ( s -> mult [ mcast_idx >> 3 ] & ( 1 << ( mcast_idx & 7 ) ) )  TRACE ( RXTX , logout ( "%p received frame, ignored, len=%zu,%s\n" , s , size , nic_dump ( buf , size ) ) ); static const char *nic_dump(const uint8_t * buf, unsigned size) if ( size > 16 )  size = 16; while ( size -- > 0 )  p += sprintf ( p , " %02x" , * buf ++ ); pci_dma_write ( & s -> dev , s -> ru_base + s -> ru_offset + sizeof ( eepro100_rx_t ) , buf , size ); 