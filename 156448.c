static void goodG2B2() wchar_t * password ; wchar_t passwordBuffer [ 100 ] = L "" password = passwordBuffer; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; if ( fgetws ( password , 100 , stdin ) == NULL )  password [ 0 ] = L '\0' passwordLen = wcslen ( password ); if ( passwordLen > 0 )  