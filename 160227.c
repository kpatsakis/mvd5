static void goodG2B1() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; data = CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_22_goodG2B1Source ( data ); char * CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_22_goodG2B1Source(char * data) if ( CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncat_22_goodG2B1Global )  memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; 