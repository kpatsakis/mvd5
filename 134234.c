static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; free ( data ); CWE416_Use_After_Free__malloc_free_char_64b_goodB2GSink ( & data ); void CWE416_Use_After_Free__malloc_free_char_64b_goodB2GSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; 