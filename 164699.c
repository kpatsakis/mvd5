static void goodG2B() wchar_t * data ; data = NULL; data = new wchar_t [ 100 ]; data [ 0 ] = L CWE122_Heap_Based_Buffer_Overflow__cpp_dest_wchar_t_cpy_82_base * baseObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_dest_wchar_t_cpy_82_goodG2B baseObject -> action ( data ); void CWE122_Heap_Based_Buffer_Overflow__cpp_dest_wchar_t_cpy_82_goodG2B::action(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 