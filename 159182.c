void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_06_bad() size_t data ; data = 0; if ( STATIC_CONST_FIVE == 5 )  data = rand ( ); if ( STATIC_CONST_FIVE == 5 )  wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 