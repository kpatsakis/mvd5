static void goodG2B() size_t data ; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType myStruct ; data = 0; data = 20; myStruct . structFirst = data; CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67b_goodG2BSink ( myStruct ); void CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67b_goodG2BSink(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType myStruct) size_t data = myStruct . structFirst ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 