void bad() wchar_t * data ; data = NULL; static wchar_t dataBuffer [ 100 ] ; wmemset ( dataBuffer , L 'A' , 100 - 1 dataBuffer [ 100 - 1 ] = L '\0' data = dataBuffer; CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_82_base * baseObject = new CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_82_bad baseObject -> action ( data ); void CWE590_Free_Memory_Not_on_Heap__free_wchar_t_static_82_bad::action(wchar_t * data) free ( data ); 