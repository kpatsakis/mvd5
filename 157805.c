void CWE78_OS_Command_Injection__char_file_system_17_bad() int i ; char * data ; char data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; for(i = 0; i < 1; i++) size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; fclose ( pFile ); if ( SYSTEM ( data ) <= 0 )  