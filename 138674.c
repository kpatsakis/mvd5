void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE606_Unchecked_Loop_Condition__wchar_t_file_84_bad * badObject = new CWE606_Unchecked_Loop_Condition__wchar_t_file_84_bad ( data ) ; CWE606_Unchecked_Loop_Condition__wchar_t_file_84_bad::CWE606_Unchecked_Loop_Condition__wchar_t_file_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; FILE * pFile ; if ( 100 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  fclose ( pFile ); 