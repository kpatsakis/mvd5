void CWE134_Uncontrolled_Format_String__char_console_vprintf_15_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; switch ( 6 )  size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; badVaSinkB ( data , data ); static void badVaSinkB(char * data, ...) va_start ( args , data ); vprintf ( data , args ); 