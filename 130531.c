static void goodB2G() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); data [ 0 ] = '\0'; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_84_goodB2G * goodB2GObject = new CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_84_goodB2G ( data ) ; CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_84_goodB2G::CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_84_goodB2G(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; char * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  strncat ( data + dataLen , environment , 100 - dataLen - 1 ); delete goodB2GObject CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_84_goodB2G::~CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_84_goodB2G() free ( data ); 