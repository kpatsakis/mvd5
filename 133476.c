static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_84_goodB2G * goodB2GObject = new CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_84_goodB2G ( data ) ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_84_goodB2G::CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_84_goodB2G(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; printLine ( "fgets() failed" ); data [ dataLen ] = '\0'; delete goodB2GObject CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_84_goodB2G::~CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_84_goodB2G() size_t i ; for (i=0; i < strlen(data); i++) if ( data [ i ] == SEARCH_CHAR )  