void CWE78_OS_Command_Injection__char_console_system_67_bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = strlen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == '\n' )  data [ dataLen - 1 ] = '\0'; data [ dataLen ] = '\0'; myStruct . structFirst = data; CWE78_OS_Command_Injection__char_console_system_67b_badSink ( myStruct ); void CWE78_OS_Command_Injection__char_console_system_67b_badSink(CWE78_OS_Command_Injection__char_console_system_67_structType myStruct) char * data = myStruct . structFirst ; if ( SYSTEM ( data ) <= 0 )  