void CWE78_OS_Command_Injection__char_file_popen_17_bad() int i ; char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; for(i = 0; i < 1; i++) size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 