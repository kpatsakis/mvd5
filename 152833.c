static void CVE_2012_4298_PATCHED_vwr_read_rec_data_ethernet(wtap *wth, guint8 *data_ptr, guint8 *rec, int rec_size, int IS_TX) vwr_t * vwr = ( vwr_t * ) wth -> priv ; int bytes_written = 0 ; register int i register guint8 * s_ptr , * m_ptr ; guint16 msdu_length , actual_octets ; m_ptr = & ( rec [ 0 ] ); s_ptr = & ( rec [ rec_size - vwr -> STATS_LEN ] ); msdu_length = pntohs ( & s_ptr [ vwr -> OCTET_OFF ] ); actual_octets = msdu_length; if ( msdu_length > ( rec_size - ( int ) vwr -> STATS_LEN ) )  msdu_length = ( rec_size - ( int ) vwr -> STATS_LEN ); bytes_written += 2; bytes_written += 2; bytes_written += 2; bytes_written += 2; bytes_written += 4; bytes_written += 2; bytes_written += 2; bytes_written += 4; bytes_written += 4; bytes_written += 8; bytes_written += 8; bytes_written += 4; bytes_written += 4; bytes_written += 2; bytes_written += 2; bytes_written += 2; bytes_written += 2; bytes_written += 4; bytes_written += 4; bytes_written += 4; if ( rec_size < ( ( int ) actual_octets + ( int ) vwr -> STATS_LEN ) )  if ( msdu_length >= 4 )  memcpy ( & data_ptr [ bytes_written ] , m_ptr , msdu_length ); 