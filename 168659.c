static void goodG2B() vector < wchar_t * > dataVector ; goodG2BSink ( dataVector ); void goodG2BSink(vector<wchar_t *> dataVector) wchar_t * data = dataVector [ 2 ] ; wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) 