void CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_15_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; switch ( 6 )  size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = L '\0' switch ( 7 )  fwprintf ( stdout , data ); 