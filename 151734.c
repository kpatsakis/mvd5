static int CVE_2006_2935_VULN_dvd_read_bca(struct cdrom_device_info *cdi, dvd_struct *s) int ret ; u_char buf [ 4 + 188 ] ; struct packet_command cgc ; struct cdrom_device_ops * cdo = cdi -> ops ; cgc . cmd [ 0 ] = GPCMD_READ_DVD_STRUCTURE; cgc . cmd [ 7 ] = s -> type; cgc . cmd [ 9 ] = cgc . buflen = 0xff; if ( ret = cdo -> generic_packet ( cdi , & cgc ) )  s -> bca . len = buf [ 0 ] << 8 | buf [ 1 ]; if ( s -> bca . len < 12 || s -> bca . len > 188 )  memcpy ( s -> bca . value , & buf [ 4 ] , s -> bca . len ); 