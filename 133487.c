void CWE78_OS_Command_Injection__wchar_t_console_popen_04_bad() wchar_t * data ; wchar_t data_buf [ 100 ] = FULL_COMMAND ; data = data_buf; if ( STATIC_CONST_TRUE )  size_t dataLen = wcslen ( data ) ; if ( 100 - dataLen > 1 )  if ( fgetws ( data + dataLen , ( int ) ( 100 - dataLen ) , stdin ) != NULL )  dataLen = wcslen ( data ); if ( dataLen > 0 && data [ dataLen - 1 ] == L '\n' ) 