static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_54b_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_54b_goodB2GSink(char * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_54c_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_54c_goodB2GSink(char * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_54d_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_54d_goodB2GSink(char * data) CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_54e_goodB2GSink ( data ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_54e_goodB2GSink(char * data) for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 