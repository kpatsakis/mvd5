void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_loop_67b_goodG2BSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_loop_67_structType myStruct) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; data [ i ] = source [ i ]; data [ 100 - 1 ] = '\0'; printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 