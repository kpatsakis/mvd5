void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; if ( globalTrue )  size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  fclose ( pFile ); if ( pFile != NULL )  fclose ( pFile ); 