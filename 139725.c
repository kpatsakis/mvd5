static void goodG2B() char * data ; data = NULL; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE126_Buffer_Overread__malloc_char_loop_64b_goodG2BSink ( & data ); void CWE126_Buffer_Overread__malloc_char_loop_64b_goodG2BSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; free ( data ); 