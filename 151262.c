void bad() list < char * > dataList ; badSink ( dataList ); void badSink(list<char *> dataList) char * data = dataList . back ( ) ; char source [ 10 + 1 ] = SRC_STRING ; memmove ( data , source , ( strlen ( source ) + 1 ) * sizeof ( char ) ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( data ); 