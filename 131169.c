void CWE78_OS_Command_Injection__wchar_t_file_popen_11_bad() wchar_t * data ; wchar_t data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  fclose ( pFile ); 