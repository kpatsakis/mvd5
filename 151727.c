void CWE90_LDAP_Injection__w32_char_file_34_bad() char * data ; CWE90_LDAP_Injection__w32_char_file_34_unionType myUnion ; char dataBuffer [ 256 ] = "" ; data = dataBuffer; size_t dataLen = strlen ( data ) ; FILE * pFile ; if ( 256 - dataLen > 1 )  pFile = fopen ( FILENAME , "r" ); if ( pFile != NULL )  if ( fgets ( data + dataLen , ( int ) ( 256 - dataLen ) , pFile ) == NULL )  data [ dataLen ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char filter [ 256 ] ; _snprintf ( filter , 256 - 1 , "(cn=%s)" , data ); searchSuccess = ldap_search_ext_sA ( pLdapConnection , "base" , LDAP_SCOPE_SUBTREE , filter , NULL , 0 , NULL , NULL , LDAP_NO_LIMIT , LDAP_NO_LIMIT , & pMessage ); if ( searchSuccess != LDAP_SUCCESS )  