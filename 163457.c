void CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_66_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); dataArray [ 2 ] = data; CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_66b_badSink ( dataArray ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_66b_badSink(wchar_t * dataArray[]) wchar_t * data = dataArray [ 2 ] ; wprintf ( data ); 