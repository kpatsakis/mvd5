void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = L "" data = dataBuffer; data = badSource ( data ); wchar_t * badSource(wchar_t * data) if ( badGlobal )  size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( FILENAME_MAX - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , pFile ) == NULL )  data [ dataLen ] = L '\0' return data ; FILE * pFile = NULL ; pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 