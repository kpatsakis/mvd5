static void good2() if ( 1 )  char password [ 100 ] = "" ; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & hUser ) != 0 )  passwordLen = strlen ( password ); SecureZeroMemory ( password , passwordLen * sizeof ( char ) ); 