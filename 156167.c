static void goodB2G() wchar_t * data ; wchar_t * * dataPtr1 = & data ; wchar_t * * dataPtr2 = & data ; data = NULL; wchar_t * data = * dataPtr1 ; data = ( wchar_t * ) realloc ( data , 100 * sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) wchar_t * data = * dataPtr2 ; free ( data ); 