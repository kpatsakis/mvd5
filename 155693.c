static void goodG2B() wchar_t * data ; data = NULL; data = new wchar_t [ 100 ]; data [ 0 ] = L '\0' goodG2BSink_b ( data ); void goodG2BSink_b(wchar_t * data) goodG2BSink_c ( data ); void goodG2BSink_c(wchar_t * data) goodG2BSink_d ( data ); void goodG2BSink_d(wchar_t * data) wchar_t source [ 100 ] ; wmemset ( source , L 'C' , 100 - 1 source [ 100 - 1 ] = L '\0' wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 