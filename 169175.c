static void goodB2G() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; size_t dataLen = wcslen ( data ) ; wchar_t * environment = GETENV ( ENV_VARIABLE ) ; if ( environment != NULL )  wcsncat ( data + dataLen , environment , 100 - dataLen - 1 ); myStruct . structFirst = data; CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_67b_goodB2GSink ( myStruct ); void CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_67b_goodB2GSink(CWE134_Uncontrolled_Format_String__wchar_t_environment_printf_67_structType myStruct) wchar_t * data = myStruct . structFirst ; 