static void goodG2B() size_t data ; data = 0; data = 20; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_52b_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_52b_goodG2BSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_52c_goodG2BSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_connect_socket_52c_goodG2BSink(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 