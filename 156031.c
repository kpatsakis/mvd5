void CWE134_Uncontrolled_Format_String__char_console_vfprintf_67_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__char_console_vfprintf_67b_badSink ( myStruct ); void CWE134_Uncontrolled_Format_String__char_console_vfprintf_67b_badSink(CWE134_Uncontrolled_Format_String__char_console_vfprintf_67_structType myStruct) char * data = myStruct . structFirst ; badVaSink ( data , data ); static void badVaSink(char * data, ...) va_start ( args , data ); vfprintf ( stdout , data , args ); 