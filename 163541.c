void bad() wchar_t * data ; data = NULL; data = new wchar_t [ 50 ]; data [ 0 ] = L CWE122_Heap_Based_Buffer_Overflow__cpp_dest_wchar_t_cat_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_dest_wchar_t_cat_82_bad baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_dest_wchar_t_cat_82_bad::action(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscat ( data , source ); 