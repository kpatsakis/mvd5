void CWE328_Reversible_One_Way_Hash__w32_SHA1_15_bad() switch ( 6 )  char password [ PASSWORD_INPUT_SIZE ] ; char * replace ; if ( fgets ( password , PASSWORD_INPUT_SIZE , stdin ) == NULL )  replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; if ( replace )  * replace = '\0'; 