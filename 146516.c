static void goodB2G() size_t data ; data = 0; data = rand ( ); CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_52b_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_52b_goodB2GSink(size_t data) CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_52c_goodB2GSink ( data ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_52c_goodB2GSink(size_t data) wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 