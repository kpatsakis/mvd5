void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_64_bad() size_t data ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_64b_badSink ( & data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_64b_badSink(void * dataVoidPtr) size_t * dataPtr = ( size_t * ) dataVoidPtr ; size_t data = ( * dataPtr ) ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 