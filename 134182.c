void CWE127_Buffer_Underread__malloc_char_memcpy_67_bad() char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer - 8; myStruct . structFirst = data; CWE127_Buffer_Underread__malloc_char_memcpy_67b_badSink ( myStruct ); void CWE127_Buffer_Underread__malloc_char_memcpy_67b_badSink(CWE127_Buffer_Underread__malloc_char_memcpy_67_structType myStruct) char * data = myStruct . structFirst ; memcpy ( dest , data , 100 * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 