void CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_53_bad() wchar_t * data ; wchar_t dataBuffer [ 250 ] = L "PATH=" data = dataBuffer; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 250 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 250 - dataLen ) , pFile ) == NULL )  fclose ( pFile ); 