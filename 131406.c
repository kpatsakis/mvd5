AVOutputFormat *av_guess_format(const char *short_name,const char *filename,const char *mime_type) if ( ! short_name && filename && av_filename_number_test ( filename ) && ( ff_guess_image2_codec ( filename ) ) != AV_CODEC_ID_NONE )  return av_guess_format ( "image2" , ( ( void * ) 0 ) , ( ( void * ) 0 ) ) ; AVOutputFormat *av_guess_format(const char *short_name,const char *filename,const char *mime_type) if ( ! short_name && filename && av_filename_number_test ( filename ) && ( ff_guess_image2_codec ( filename ) ) != AV_CODEC_ID_NONE )  int av_filename_number_test(const char *filename) char buf [ 1024 ] ; return filename && av_get_frame_filename ( buf , ( sizeof ( buf ) ) , filename , 1 ) >= 0 ; int av_get_frame_filename(char *buf,int buf_size,const char *path,int number) const char * p ; char * q ; char buf1 [ 20 ] ; char c ; int nd ; int len ; int percentd_found ; q = buf; p = path; percentd_found = 0; c = * ( p ++ ); if ( c == '\0' )  if ( c == '%' )  nd = 0; while ( av_isdigit ( ( * p ) ) )  nd = nd * '\n' + ( * ( p ++ ) ) - 48; c = * ( p ++ ); while ( av_isdigit ( c ) )  switch ( c )  if ( percentd_found )  percentd_found = 1; snprintf ( buf1 , sizeof ( buf1 ) , "%0*d" , nd , number ); len = ( strlen ( buf1 ) ); if ( q - buf + len > ( buf_size - 1 ) )  memcpy ( q , buf1 , len ); q += len; if ( q - buf < ( buf_size - 1 ) )  * ( q ++ ) = c; * q = '\0'; * q = '\0'; 