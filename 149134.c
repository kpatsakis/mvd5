void bad() char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; size_t dataLen = strlen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; baseObject -> action ( data ); void CWE78_OS_Command_Injection__char_file_system_82_bad::action(char * data) if ( SYSTEM ( data ) <= 0 )  