static void goodG2B1() wchar_t * data ; if ( STATIC_CONST_FALSE )  data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); SNPRINTF ( data , 100 , L "%s" , source ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 