static void goodG2B() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_67b_goodG2BSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_67b_goodG2BSink(CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_67_structType myStruct) char * data = myStruct . structFirst ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 