void bad() wchar_t * data ; data = NULL; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = NULL; data = ( wchar_t * ) realloc ( data , 100 * sizeof ( wchar_t ) ); delete [ ] data free ( data ); 