void CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_51_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = L '\0' CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_51b_badSink ( data ); void CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_51b_badSink(wchar_t * data) fwprintf ( stdout , data ); 