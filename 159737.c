static void goodG2B() char * data ; CWE127_Buffer_Underread__char_alloca_cpy_67_structType myStruct ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; memset ( dataBuffer , 'A' , 100 - 1 ); dataBuffer [ 100 - 1 ] = '\0'; data = dataBuffer; myStruct . structFirst = data; CWE127_Buffer_Underread__char_alloca_cpy_67b_goodG2BSink ( myStruct ); void CWE127_Buffer_Underread__char_alloca_cpy_67b_goodG2BSink(CWE127_Buffer_Underread__char_alloca_cpy_67_structType myStruct) char * data = myStruct . structFirst ; char dest [ 100 * 2 ] ; memset ( dest , 'C' , 100 * 2 - 1 ); dest [ 100 * 2 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 