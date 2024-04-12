svn_error_t *svn_uri_condense_targets(const char **pcommon,apr_array_header_t **pcondensed_targets,const apr_array_header_t *targets,svn_boolean_t remove_redundancies,apr_pool_t *result_pool,apr_pool_t *scratch_pool) int i ; if ( targets -> nelts <= 0 )  if ( targets -> nelts == 1 )  for (i = 1; i < targets -> nelts; ++i) const char * uri = svn_uri_canonicalize ( ( ( const char * * ) ( targets -> elts ) ) [ i ] , scratch_pool ) ; const char *svn_uri_canonicalize(const char *uri,apr_pool_t *pool) return canonicalize ( type_uri , uri , pool ) ; static const char *canonicalize(path_type_t type,const char *path,apr_pool_t *pool) char * canon ; char * dst ; const char * src ; apr_size_t seglen ; if ( path [ 0 ] == '\0' )  dst = canon = ( memset ( apr_palloc ( pool , strlen ( path ) + 1 ) , 0 , strlen ( path ) + 1 ) ); src = path; if ( type == type_uri )  while ( * src && ( * src ) != 47 && ( * src ) != ':' )  src ++; if ( ( * src ) == ':' && ( * ( src + 1 ) ) == 47 && ( * ( src + 2 ) ) == 47 )  const char * seg ; src = path; while ( ( * src ) != ':' )  * ( dst ++ ) = canonicalize_to_lower ( * ( src ++ ) ); * ( dst ++ ) = ':'; * ( dst ++ ) = 47; * ( dst ++ ) = 47; src += 3; seg = src; while ( * src && ( * src ) != 47 && ( * src ) != 64 )  src ++; if ( ( * src ) == 64 )  seglen = ( src - seg + 1 ); memcpy ( dst , seg , seglen ); dst += seglen; * ( dst ++ ) = * ( src ++ ); while ( ( * src ) == ':' || ( * src ) >= 48 && ( * src ) <= '9' || ( * src ) >= 'a' && ( * src ) <= 'f' || ( * src ) >= 65 && ( * src ) <= 'F' )  * ( dst ++ ) = canonicalize_to_lower ( * ( src ++ ) ); if ( ( * src ) == ']' )  * ( dst ++ ) = * ( src ++ ); while ( * src && ( * src ) != 47 && ( * src ) != ':' )  * ( dst ++ ) = canonicalize_to_lower ( * ( src ++ ) ); if ( ( * src ) == ':' )  if ( src [ 1 ] == 56 && src [ 2 ] == 48 && ( src [ 3 ] == 47 || ! src [ 3 ] ) && ! strncmp ( canon , "http:" , 5 ) )  src += 3; if ( src [ 1 ] == 52 && src [ 2 ] == 52 && src [ 3 ] == 51 && ( src [ 4 ] == 47 || ! src [ 4 ] ) && ! strncmp ( canon , "https:" , 6 ) )  src += 4; if ( src [ 1 ] == 51 && src [ 2 ] == '6' && src [ 3 ] == '9' && src [ 4 ] == 48 && ( src [ 5 ] == 47 || ! src [ 5 ] ) && ! strncmp ( canon , "svn:" , 4 ) )  src += 5; if ( src [ 1 ] == 47 || ! src [ 1 ] )  src += 1; while ( * src && ( * src ) != 47 )  * ( dst ++ ) = canonicalize_to_lower ( * ( src ++ ) ); * dst = * src; if ( * src )  src ++; dst ++; schema_data = dst; if ( ( * src ) == 47 )  * ( dst ++ ) = * ( src ++ ); while ( * src )  const char * next = src ; while ( * next && next [ 0 ] != 47 && ! ( type == type_uri && next [ 0 ] == 37 && next [ 1 ] == 50 && ( canonicalize_to_upper ( next [ 2 ] ) ) == 'F' ) )  if ( next [ 0 ] == 47 )  if ( type == type_uri && next [ 0 ] == 37 )  seglen = ( next - src ); if ( seglen == 0 || seglen == 1 && src [ 0 ] == 46 || type == type_uri && seglen == 3 && src [ 0 ] == 37 && src [ 1 ] == 50 && ( canonicalize_to_upper ( src [ 2 ] ) ) == 'E' )  memcpy ( dst , src , seglen ); dst += seglen; * ( dst ++ ) = 47; src = next + slash_len; if ( canon_segments > 0 && ( * ( dst - 1 ) ) == 47 && ! ( url && path [ schemelen ] == '\0' ) )  dst --; * dst = '\0'; if ( schema_data )  src = schema_data; while ( * src )  switch ( * src )  if ( ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * ( src + 1 ) ) ] & ( 0x0004 | 0x0040 ) ) ) || ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * ( src + 2 ) ) ] & ( 0x0004 | 0x0040 ) ) ) )  src += 2; if ( ! svn_uri__char_validity [ ( unsigned char ) ( * src ) ] )  src ++; apr_size_t pre_schema_size = ( apr_size_t ) ( schema_data - canon ) ; dst = ( apr_palloc ( pool , ( ( apr_size_t ) ( src - canon ) ) + need_extra + 1 ) ); memcpy ( dst , canon , pre_schema_size ); canon = dst; dst += pre_schema_size; dst = schema_data; src = schema_data; while ( * src )  switch ( * src )  * ( dst ++ ) = 47; if ( ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * ( src + 1 ) ) ] & ( 0x0004 | 0x0040 ) ) ) || ! ( 0 != ( svn_ctype_table [ ( unsigned char ) ( * ( src + 2 ) ) ] & ( 0x0004 | 0x0040 ) ) ) )  * ( dst ++ ) = 37; * ( dst ++ ) = 50; * ( dst ++ ) = '5'; digitz [ 0 ] = * ( ++ src ); digitz [ 1 ] = * ( ++ src ); digitz [ 2 ] = 0; val = ( ( int ) ( strtol ( digitz , ( ( void * ) 0 ) , 16 ) ) ); if ( svn_uri__char_validity [ ( unsigned char ) val ] )  * ( dst ++ ) = ( ( char ) val ); * ( dst ++ ) = 37; * ( dst ++ ) = canonicalize_to_upper ( digitz [ 0 ] ); * ( dst ++ ) = canonicalize_to_upper ( digitz [ 1 ] ); if ( ! svn_uri__char_validity [ ( unsigned char ) ( * src ) ] )  apr_snprintf ( dst , 4 , "%%%02X" , ( ( unsigned char ) ( * src ) ) ); dst += 3; * ( dst ++ ) = * src; src ++; * dst = '\0'; return canon ; 