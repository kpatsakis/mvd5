void CWE134_Uncontrolled_Format_String__char_console_fprintf_64_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen ] = '\0'; CWE134_Uncontrolled_Format_String__char_console_fprintf_64b_badSink ( & data ); void CWE134_Uncontrolled_Format_String__char_console_fprintf_64b_badSink(void * dataVoidPtr) char * * dataPtr = ( char * * ) dataVoidPtr ; char * data = ( * dataPtr ) ; fprintf ( stdout , data ); 