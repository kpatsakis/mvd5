void bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; CWE606_Unchecked_Loop_Condition__wchar_t_console_84_bad * badObject = new CWE606_Unchecked_Loop_Condition__wchar_t_console_84_bad ( data ) ; CWE606_Unchecked_Loop_Condition__wchar_t_console_84_bad::CWE606_Unchecked_Loop_Condition__wchar_t_console_84_bad(wchar_t * dataCopy) data = dataCopy; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  