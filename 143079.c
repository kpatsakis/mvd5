static cgiParseResultType cgiParsePostMultipartInput() cgiParseResultType result ; mpStreamPtr mpp = & mp ; if ( ! cgiContentLength )  result = afterNextBoundary ( mpp , 0 , 0 , 0 , 1 ); cgiParseResultType afterNextBoundary(mpStreamPtr mpp, FILE *outf, char int *bodyLengthP, int first) int outSpace = 256 ; int boffset ; int got ; char d [ 2 ] ; char workingBoundaryData [ 1024 ] ; char * workingBoundary = workingBoundaryData ; int workingBoundaryLength ; if ( ( ! outf ) && ( outP ) )  out = ( char * ) malloc ( outSpace ); if ( ! out )  boffset = 0; sprintf ( workingBoundaryData , "\r\n--%s" , cgiMultipartBoundary ); if ( first )  workingBoundary = workingBoundaryData + 2; workingBoundaryLength = strlen ( workingBoundary ); while ( 1 )  got = mpRead ( mpp , d , 1 ); if ( got != 1 )  if ( d [ 0 ] == workingBoundary [ boffset ] )  boffset ++; if ( boffset == workingBoundaryLength )  if ( boffset > 0 )  boffset = 0; int mpRead(mpStreamPtr mpp, char *buffer, int len) if ( len > ( cgiContentLength - mpp -> offset ) )  len = cgiContentLength - mpp -> offset; while ( len )  if ( mpp -> readPos != mpp -> writePos )  * buffer ++ = mpp -> putback [ mpp -> readPos ++ ]; mpp -> readPos %= sizeof ( mpp -> putback ); len --; if ( len )  int fgot = fread ( buffer , 1 , len , cgiIn ) ; if ( fgot >= 0 )  mpp -> offset += ( got + fgot ); return got + fgot ; return fgot ; 