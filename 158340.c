static void goodG2B1() wchar_t * data ; if ( globalFive != 5 )  data = ( wchar_t * ) malloc ( ( 10 + 1 ) * sizeof ( wchar_t ) ); wcscpy ( data , source ); printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 