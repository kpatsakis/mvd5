void bad() wchar_t * data ; data = NULL; if ( 1 )  data = new wchar_t [ 10 ]; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) delete [ ] data 