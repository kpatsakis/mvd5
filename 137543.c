static void goodG2B() char * data ; CWE124_Buffer_Underwrite__malloc_char_memcpy_67_structType myStruct ; data = NULL; char * dataBuffer = ( char * ) malloc ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; myStruct . structFirst = data; CWE124_Buffer_Underwrite__malloc_char_memcpy_67b_goodG2BSink ( myStruct ); void CWE124_Buffer_Underwrite__malloc_char_memcpy_67b_goodG2BSink(CWE124_Buffer_Underwrite__malloc_char_memcpy_67_structType myStruct) char * data = myStruct . structFirst ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; memcpy ( data , source , 100 * sizeof ( char ) ); data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 