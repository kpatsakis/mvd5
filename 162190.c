static iseries_seek_read (wtap * wth, gint64 seek_off, struct wtap_pkthdr Buffer * buf, int *err, gchar ** err_info) if ( file_seek ( wth -> random_fh , seek_off - 1 , SEEK_SET , err ) == - 1 )  return iseries_parse_packet ( wth , wth -> random_fh , phdr , buf , err , err_info ) ; static iseries_parse_packet (wtap * wth, FILE_T fh, struct wtap_pkthdr Buffer *buf, int *err, gchar **err_info) iseries_t * iseries = ( iseries_t * ) wth -> priv ; gboolean isValid , isCurrentPacket ; int num_items_scanned , line , pktline , buflen ; char direction [ 2 ] , destmac [ 13 ] , srcmac [ 13 ] , type [ 5 ] , csec [ 9 + 1 ] ; char data [ ISERIES_LINE_LENGTH * 2 ] ; isValid = FALSE; for (line = 1; line < ISERIES_PKT_LINES_TO_CHECK; line++) if ( file_gets ( data , ISERIES_LINE_LENGTH , fh ) == NULL )  num_items_scanned sscanf ( data "%*[ \n\t]%6d%*[ *\n\t]%1s%*[ \n\t]%6d%*[ \n\t]%2d:%2d:%2d.%9[0-9]%*[ "%12s%*[ \n\t]%12s%*[ \n\t]ETHV2%*[ \n\t]TYPE:%*[ \n\t]%4s" & pktnum , direction , & pkt_len , & hr , & min , & sec , csec , destmac srcmac , type ) if ( num_items_scanned == 10 )  isValid = TRUE; if ( ! isValid )  if ( iseries -> have_date )  csec [ sizeof ( csec ) - 1 ] = '\0'; switch ( strlen ( csec ) )  