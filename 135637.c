void bad() wchar_t * data ; wchar_t * * dataPtr2 = & data ; data = NULL; data = new wchar_t [ 50 ]; data [ 0 ] = L '\0' wchar_t * data = * dataPtr2 ; wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscat ( data , source ); 