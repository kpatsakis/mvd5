static void goodG2B() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncat_67_structType myStruct ; char dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; myStruct . structFirst = data; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncat_67b_goodG2BSink ( myStruct ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncat_67b_goodG2BSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncat_67_structType myStruct) char * data = myStruct . structFirst ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 