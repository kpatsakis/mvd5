void CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_11_bad() if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; wchar_t * password = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; password [ 0 ] = L '\0' if ( fgetws ( password , 100 , stdin ) == NULL )  password [ 0 ] = L '\0' passwordLen = wcslen ( password ); if ( passwordLen > 0 )  