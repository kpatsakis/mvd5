void bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; CWE78_OS_Command_Injection__char_file_w32_spawnv_84_bad * badObject = new CWE78_OS_Command_Injection__char_file_w32_spawnv_84_bad ( data ) ; CWE78_OS_Command_Injection__char_file_w32_spawnv_84_bad::CWE78_OS_Command_Injection__char_file_w32_spawnv_84_bad(char * dataCopy) data = dataCopy; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; 