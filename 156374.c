static void good1() int k ; for(k = 0; k < 1; k++) char * password = ( char * ) malloc ( 100 * sizeof ( char ) ) ; password [ 0 ] = '\0'; if ( fgets ( password , 100 , stdin ) == NULL )  password [ 0 ] = '\0'; passwordLen = strlen ( password ); if ( passwordLen > 0 )  password [ passwordLen - 1 ] = '\0'; if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & hUser ) != 0 )  passwordLen = strlen ( password ); SecureZeroMemory ( password , passwordLen * sizeof ( char ) ); free ( password ); 