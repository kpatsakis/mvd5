static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_84_goodB2G * goodB2GObject = new CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_84_goodB2G ( data ) ; CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_84_goodB2G::CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_84_goodB2G(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  fclose ( pFile ); 