static void goodG2B() wchar_t * data ; wchar_t * dataArray [ 5 ] ; data = NULL; data = new wchar_t [ 10 + 1 ]; dataArray [ 2 ] = data; goodG2BSink ( dataArray ); void goodG2BSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 