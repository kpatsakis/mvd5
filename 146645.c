void CWE121_Stack_Based_Buffer_Overflow__CWE135_66_bad() void * data ; void * dataArray [ 5 ] ; data = NULL; data = ( void * ) WIDE_STRING; dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__CWE135_66b_badSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__CWE135_66b_badSink(void * dataArray[]) void * data = dataArray [ 2 ] ; size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); printLine ( ( char * ) dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); free ( dest ); 