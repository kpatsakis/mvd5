static void goodB2G() wchar_t * data ; data = ( wchar_t * ) calloc ( 20 , sizeof ( wchar_t ) ); wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; if ( data != NULL )  wcscpy ( data , L "Initialize" ) printWLine ( data ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( data ); 