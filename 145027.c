static void goodG2B() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53b_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53b_goodG2BSink(char * data) CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53c_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53c_goodG2BSink(char * data) CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53d_goodG2BSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_53d_goodG2BSink(char * data) strcat ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 