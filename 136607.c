static void goodG2B() wchar_t * data ; data = new wchar_t [ 100 ]; wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' goodG2BSink ( & data ); void goodG2BSink(void * dataVoidPtr) wchar_t * * dataPtr = ( wchar_t * * ) dataVoidPtr ; wchar_t * data = ( * dataPtr ) ; wchar_t dest [ 50 ] = L "" wcscpy ( dest , data ); 