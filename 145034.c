void bad() size_t data ; data = rand ( ); dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; if ( data > wcslen ( HELLO_STRING ) )  myString = new wchar_t [ data ]; wcscpy ( myString , HELLO_STRING ); printWLine ( myString ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] myString 