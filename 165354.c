void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_32_bad() char * data ; char * * dataPtr1 = & data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; char * data = * dataPtr1 ; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; * dataPtr1 = data; for (; *data != '\0'; data++) if ( * data == SEARCH_CHAR )  free ( data ); 