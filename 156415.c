static void goodB2G() size_t data ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_34_unionType myUnion ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); myUnion . unionFirst = data; size_t data = myUnion . unionSecond ; char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 