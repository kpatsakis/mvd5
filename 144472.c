void CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_22_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  data [ dataLen - 1 ] = L '\0' data [ dataLen ] = L '\0' CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_22_badVaSink ( data , data ); void CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_22_badVaSink(wchar_t * data, ...) if ( CWE134_Uncontrolled_Format_String__wchar_t_console_w32_vsnprintf_22_badGlobal )  wchar_t dest [ 100 ] = L "" va_list args ; _vsnwprintf ( dest , 100 - 1 , data , args ); 