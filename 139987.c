void bad() wchar_t * data ; wchar_t dataBuffer [ FILENAME_MAX ] = BASEPATH ; data = dataBuffer; data = badSource ( data ); static wchar_t * badSource(wchar_t * data) if ( badStatic )  size_t dataLen = wcslen ( data ) ; if ( FILENAME_MAX - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( FILENAME_MAX - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' return data ; FILE * pFile = NULL ; pFile = FOPEN ( data , L "wb+" ) if ( pFile != NULL )  fclose ( pFile ); 