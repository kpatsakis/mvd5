void bad() char charArraySource [ 2 ] ; charArraySource [ 0 ] = ( char ) getc ( stdin ); charArraySource [ 1 ] = '\0'; data = ( char ) atoi ( charArraySource ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; badSink ( dataMap ); void badSink(map<int, char> dataMap) char data = dataMap [ 2 ] ; charArraySink [ 1 ] = data; charArraySink [ 2 ] = 'z'; charArraySink [ 3 ] = '\0'; printLine ( charArraySink ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 