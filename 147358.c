void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode) if ( ! buf || buf_size <= 0 )  switch ( enc -> codec_type )  char detail [ 256 ] = "(" ; if ( strlen ( detail ) > 1 )  detail [ strlen ( detail ) - 2 ] = 0; if ( encode )  if ( enc -> properties & FF_CODEC_PROPERTY_CLOSED_CAPTIONS )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", Closed Captions" ); if ( enc -> properties & FF_CODEC_PROPERTY_LOSSLESS )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", lossless" ); if ( enc -> sample_rate )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , "%d Hz, " , enc -> sample_rate ); if ( enc -> sample_fmt != AV_SAMPLE_FMT_NONE )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %s" , av_get_sample_fmt_name ( enc -> sample_fmt ) ); if ( enc -> bits_per_raw_sample > 0 && enc -> bits_per_raw_sample != av_get_bytes_per_sample ( enc -> sample_fmt ) * 8 )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , " (%d bit)" , enc -> bits_per_raw_sample ); if ( av_log_get_level ( ) >= AV_LOG_DEBUG )  int g = av_gcd ( enc -> time_base . num , enc -> time_base . den ) ; if ( g )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %d/%d" , enc -> time_base . num / g , enc -> time_base . den / g ); if ( enc -> width )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %dx%d" , enc -> width , enc -> height ); if ( encode )  if ( enc -> flags & AV_CODEC_FLAG_PASS1 )  snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", pass 1" ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", pass 2" ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", %d kb/s" , bitrate / 1000 ); snprintf ( buf + strlen ( buf ) , buf_size - strlen ( buf ) , ", max. %d kb/s" , enc -> rc_max_rate / 1000 ); 