void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_61_bad() size_t data ; data = 0; data = CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_61b_badSource ( data ); size_t CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fscanf_61b_badSource(size_t data) return data ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 