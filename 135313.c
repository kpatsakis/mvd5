void CWE124_Buffer_Underwrite__char_alloca_loop_67_bad() char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; myStruct . structFirst = data; CWE124_Buffer_Underwrite__char_alloca_loop_67b_badSink ( myStruct ); void CWE124_Buffer_Underwrite__char_alloca_loop_67b_badSink(CWE124_Buffer_Underwrite__char_alloca_loop_67_structType myStruct) char * data = myStruct . structFirst ; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 