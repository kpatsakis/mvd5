static void goodG2B2() wchar_t * data ; data = NULL; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); wchar_t source [ 10 + 1 ] = SRC_STRING ; wcsncpy ( data , source , wcslen ( source ) + 1 ); free ( data ); 