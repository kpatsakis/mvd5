void CWE328_Reversible_One_Way_Hash__w32_MD5_06_bad() if ( STATIC_CONST_FIVE == 5 )  char password [ PASSWORD_INPUT_SIZE ] ; if ( fgets ( password , PASSWORD_INPUT_SIZE , stdin ) == NULL )  replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; replace = strchr ( password , '\n' ); if ( replace )  * replace = '\0'; if ( ! CryptHashData ( hHash , ( BYTE * ) password , strlen ( password ) , 0 ) )  