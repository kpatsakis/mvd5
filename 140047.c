static void goodB2G() list < size_t > dataList ; goodB2GSink ( dataList ); void goodB2GSink(list<size_t> dataList) size_t data = dataList . back ( ) ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 