static void goodB2G1() wchar_t * data ; data = NULL; data = ( wchar_t * ) malloc ( 20 * sizeof ( wchar_t ) ); if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; if ( data != NULL )  wcscpy ( data , L "Initialize" ) free ( data ); 