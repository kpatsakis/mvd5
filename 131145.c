static void good2() if ( STATIC_CONST_TRUE )  char password [ PASSWORD_INPUT_SIZE ] ; char * replace ; if ( fgets ( password , PASSWORD_INPUT_SIZE , stdin ) == NULL )  replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; if ( replace )  * replace = '\0'; 