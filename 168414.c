void CWE78_OS_Command_Injection__char_file_w32_spawnv_66_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; dataArray [ 2 ] = data; CWE78_OS_Command_Injection__char_file_w32_spawnv_66b_badSink ( dataArray ); void CWE78_OS_Command_Injection__char_file_w32_spawnv_66b_badSink(char * dataArray[]) char * data = dataArray [ 2 ] ; 