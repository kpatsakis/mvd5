void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE134_Uncontrolled_Format_String__wchar_t_file_snprintf_84_bad * badObject = new CWE134_Uncontrolled_Format_String__wchar_t_file_snprintf_84_bad ( data ) ; CWE134_Uncontrolled_Format_String__wchar_t_file_snprintf_84_bad::CWE134_Uncontrolled_Format_String__wchar_t_file_snprintf_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , pFile ) == NULL )  