void bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; CWE78_OS_Command_Injection__char_file_system_84_bad * badObject = new CWE78_OS_Command_Injection__char_file_system_84_bad ( data ) ; CWE78_OS_Command_Injection__char_file_system_84_bad::CWE78_OS_Command_Injection__char_file_system_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; 