void CWE78_OS_Command_Injection__wchar_t_file_execlp_17_bad() int i ; wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; for(i = 0; i < 1; i++) size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  fclose ( pFile ); 