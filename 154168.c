void CWE127_Buffer_Underread__char_alloca_memmove_67_bad() char * data ; CWE127_Buffer_Underread__char_alloca_memmove_67_structType myStruct ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; myStruct . structFirst = data; CWE127_Buffer_Underread__char_alloca_memmove_67b_badSink ( myStruct ); void CWE127_Buffer_Underread__char_alloca_memmove_67b_badSink(CWE127_Buffer_Underread__char_alloca_memmove_67_structType myStruct) char * data = myStruct . structFirst ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 