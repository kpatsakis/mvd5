static cgiParseResultType cgiParsePostMultipartInput() cgiParseResultType result ; mpStreamPtr mpp = & mp ; if ( ! cgiContentLength )  result = afterNextBoundary ( mpp , 0 , 0 , 0 , 1 ); cgiParseResultType afterNextBoundary(mpStreamPtr mpp, FILE *outf, char int *bodyLengthP, int first) int outSpace = 256 ; char workingBoundaryData [ 1024 ] ; if ( ( ! outf ) && ( outP ) )  out = ( char * ) malloc ( outSpace ); if ( ! out )  sprintf ( workingBoundaryData , "\r\n--%s" , cgiMultipartBoundary ); workingBoundary = workingBoundaryData + 2; workingBoundaryLength = strlen ( workingBoundary ); if ( d [ 0 ] == workingBoundary [ boffset ] )  if ( boffset == workingBoundaryLength )  BAPPEND ( workingBoundary [ 0 ] ); mpPutBack ( mpp , workingBoundary + 1 , boffset - 1 ); void mpPutBack(mpStreamPtr mpp, char *data, int len) mpp -> offset -= len; while ( len )  mpp -> putback [ mpp -> writePos ++ ] = * data ++; mpp -> writePos %= sizeof ( mpp -> putback ); len --; 