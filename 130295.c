static void goodB2G() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wcscpy ( data , BAD_SOURCE_FIXED_STRING ); dataArray [ 2 ] = data; CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_66b_goodB2GSink ( dataArray ); void CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_66b_goodB2GSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; for (i=0; i < wcslen(data); i++) if ( data [ i ] == SEARCH_CHAR )  free ( data ); 