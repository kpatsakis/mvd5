void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_34_bad() size_t data ; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_34_unionType myUnion ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); myUnion . unionFirst = data; size_t data = myUnion . unionSecond ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 