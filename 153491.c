static void goodG2B() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; dataArray [ 2 ] = data; CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66b_goodG2BSink ( dataArray ); void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cpy_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; strcpy ( dest , data ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 