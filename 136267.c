static cgiParseResultType cgiParsePostMultipartInput() cgiParseResultType result ; int got ; char tfileName [ 1024 ] ; mpStreamPtr mpp = & mp ; if ( ! cgiContentLength )  result = afterNextBoundary ( mpp , 0 , 0 , 0 , 1 ); cgiParseResultType afterNextBoundary(mpStreamPtr mpp, FILE *outf, char int *bodyLengthP, int first) int outSpace = 256 ; cgiParseResultType result ; int boffset ; int got ; char d [ 2 ] ; char workingBoundaryData [ 1024 ] ; char * workingBoundary = workingBoundaryData ; int workingBoundaryLength ; if ( ( ! outf ) && ( outP ) )  out = ( char * ) malloc ( outSpace ); if ( ! out )  boffset = 0; sprintf ( workingBoundaryData , "\r\n--%s" , cgiMultipartBoundary ); if ( first )  workingBoundary = workingBoundaryData + 2; workingBoundaryLength = strlen ( workingBoundary ); while ( 1 )  got = mpRead ( mpp , d , 1 ); int mpRead(mpStreamPtr mpp, char *buffer, int len) int ilen = len ; int got = 0 ; if ( len > ( cgiContentLength - mpp -> offset ) )  len = cgiContentLength - mpp -> offset; while ( len )  if ( mpp -> readPos != mpp -> writePos )  * buffer ++ = mpp -> putback [ mpp -> readPos ++ ]; mpp -> readPos %= sizeof ( mpp -> putback ); got ++; len --; if ( len )  int fgot = fread ( buffer , 1 , len , cgiIn ) ; if ( fgot >= 0 )  return got + fgot ; if ( got > 0 )  return got ; return fgot ; if ( got )  return got ; if ( ilen )  return EOF ; return 0 ; if ( got != 1 )  result = cgiParseIO; if ( d [ 0 ] == workingBoundary [ boffset ] )  boffset ++; if ( boffset == workingBoundaryLength )  if ( boffset > 0 )  boffset = 0; got = mpRead ( mpp , d , 2 ); int mpRead(mpStreamPtr mpp, char *buffer, int len) int ilen = len ; int got = 0 ; if ( len > ( cgiContentLength - mpp -> offset ) )  len = cgiContentLength - mpp -> offset; while ( len )  if ( mpp -> readPos != mpp -> writePos )  * buffer ++ = mpp -> putback [ mpp -> readPos ++ ]; mpp -> readPos %= sizeof ( mpp -> putback ); got ++; len --; if ( len )  int fgot = fread ( buffer , 1 , len , cgiIn ) ; if ( fgot >= 0 )  return got + fgot ; if ( got > 0 )  return got ; return fgot ; if ( got )  return got ; if ( ilen )  return EOF ; return 0 ; if ( got != 2 )  result = cgiParseIO; return cgiParseSuccess ; result = cgiParseMemory; return result ; if ( result == cgiParseIO )  if ( result != cgiParseSuccess )  while ( 1 )  char d [ 1024 ] ; char fvalue [ 1024 ] ; char fname [ 1024 ] ; int bodyLength = 0 ; char ffileName [ 1024 ] ; char fcontentType [ 1024 ] ; fvalue [ 0 ] = 0; out = 0; got = mpRead ( mpp , d , 2 ); int mpRead(mpStreamPtr mpp, char *buffer, int len) int ilen = len ; int got = 0 ; if ( len > ( cgiContentLength - mpp -> offset ) )  len = cgiContentLength - mpp -> offset; while ( len )  if ( mpp -> readPos != mpp -> writePos )  * buffer ++ = mpp -> putback [ mpp -> readPos ++ ]; mpp -> readPos %= sizeof ( mpp -> putback ); got ++; len --; if ( len )  int fgot = fread ( buffer , 1 , len , cgiIn ) ; if ( fgot >= 0 )  return got + fgot ; if ( got > 0 )  return got ; return fgot ; if ( got )  return got ; if ( ilen )  return EOF ; return 0 ; if ( got < 2 )  if ( ( d [ 0 ] == '-' ) && ( d [ 1 ] == '-' ) )  if ( ! cgiStrEqNc ( fvalue , "form-data" ) )  static int cgiStrEqNc(char *s1, char *s2) while ( 1 )  if ( ! ( * s1 ) )  if ( ! ( * s2 ) )  return 1 ; return 0 ; if ( ! ( * s2 ) )  return 0 ; if ( isalpha ( * s1 ) )  if ( tolower ( * s1 ) != tolower ( * s2 ) )  return 0 ; if ( ( * s1 ) != ( * s2 ) )  return 0 ; s1 ++; s2 ++; result = afterNextBoundary ( mpp , 0 , 0 , 0 , 0 ); cgiParseResultType afterNextBoundary(mpStreamPtr mpp, FILE *outf, char int *bodyLengthP, int first) int outSpace = 256 ; cgiParseResultType result ; int boffset ; int got ; char d [ 2 ] ; char workingBoundaryData [ 1024 ] ; char * workingBoundary = workingBoundaryData ; int workingBoundaryLength ; if ( ( ! outf ) && ( outP ) )  out = ( char * ) malloc ( outSpace ); if ( ! out )  boffset = 0; sprintf ( workingBoundaryData , "\r\n--%s" , cgiMultipartBoundary ); if ( first )  workingBoundary = workingBoundaryData + 2; workingBoundaryLength = strlen ( workingBoundary ); while ( 1 )  got = mpRead ( mpp , d , 1 ); if ( got != 1 )  result = cgiParseIO; if ( d [ 0 ] == workingBoundary [ boffset ] )  boffset ++; if ( boffset == workingBoundaryLength )  if ( boffset > 0 )  boffset = 0; got = mpRead ( mpp , d , 2 ); if ( got != 2 )  result = cgiParseIO; return cgiParseSuccess ; result = cgiParseMemory; return result ; if ( result != cgiParseSuccess )  if ( strlen ( ffileName ) )  if ( getTempFileName ( tfileName ) != cgiParseSuccess )  static cgiParseResultType getTempFileName(char *tfileName) int outfd ; strcpy ( tfileName , cgicTempDir "/cgicXXXXXX" ) outfd = mkstemp ( tfileName ); if ( outfd == - 1 )  return cgiParseIO ; if ( chmod ( tfileName , 0600 ) != 0 )  return cgiParseIO ; return cgiParseSuccess ; outf = fopen ( tfileName , "w+b" ); outf = 0; tfileName [ 0 ] = '\0'; result = afterNextBoundary ( mpp , outf , & out , & bodyLength , 0 ); cgiParseResultType afterNextBoundary(mpStreamPtr mpp, FILE *outf, char int *bodyLengthP, int first) int outSpace = 256 ; cgiParseResultType result ; int boffset ; int got ; char d [ 2 ] ; char workingBoundaryData [ 1024 ] ; char * workingBoundary = workingBoundaryData ; int workingBoundaryLength ; if ( ( ! outf ) && ( outP ) )  out = ( char * ) malloc ( outSpace ); if ( ! out )  boffset = 0; sprintf ( workingBoundaryData , "\r\n--%s" , cgiMultipartBoundary ); if ( first )  workingBoundary = workingBoundaryData + 2; workingBoundaryLength = strlen ( workingBoundary ); while ( 1 )  got = mpRead ( mpp , d , 1 ); if ( got != 1 )  result = cgiParseIO; if ( d [ 0 ] == workingBoundary [ boffset ] )  boffset ++; if ( boffset == workingBoundaryLength )  if ( boffset > 0 )  boffset = 0; got = mpRead ( mpp , d , 2 ); if ( got != 2 )  result = cgiParseIO; return cgiParseSuccess ; result = cgiParseMemory; return result ; if ( result != cgiParseSuccess )  n = ( cgiFormEntry * ) malloc ( sizeof ( cgiFormEntry ) ); if ( ! n )  memset ( n , 0 , sizeof ( cgiFormEntry ) ); n -> attr = ( char * ) malloc ( strlen ( fname ) + 1 ); if ( ! n -> attr )  if ( out )  if ( outf )  n -> value = ( char * ) malloc ( 1 ); if ( ! n -> value )  n -> value [ 0 ] = '\0'; n -> valueLength = bodyLength; n -> next = 0; n -> fileName = ( char * ) malloc ( strlen ( ffileName ) + 1 ); if ( ! n -> fileName )  strcpy ( n -> fileName , ffileName ); n -> contentType = ( char * ) malloc ( strlen ( fcontentType ) + 1 ); if ( ! n -> contentType )  strcpy ( n -> contentType , fcontentType ); n -> tfileName = ( char * ) malloc ( strlen ( tfileName ) + 1 ); if ( ! n -> tfileName )  strcpy ( n -> tfileName , tfileName ); if ( n )  if ( n -> tfileName )  free ( n -> tfileName ); 