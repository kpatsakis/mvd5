void CWE328_Reversible_One_Way_Hash__w32_MD2_17_bad() int j ; for(j = 0; j < 1; j++) char password [ PASSWORD_INPUT_SIZE ] ; char * replace ; if ( fgets ( password , PASSWORD_INPUT_SIZE , stdin ) == NULL )  replace = strchr ( password , '\r' ); if ( replace )  * replace = '\0'; if ( replace )  * replace = '\0'; 