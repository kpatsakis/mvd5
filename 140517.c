void bad() FILE * pFile ; pFile = fopen ( "passwords.txt" , "r" ); if ( pFile != NULL )  if ( fgets ( data , 100 , pFile ) == NULL )  data [ 0 ] = '\0'; fclose ( pFile ); data [ 0 ] = '\0'; baseObject -> action ( data ); void CWE256_Plaintext_Storage_of_Password__w32_char_82_bad::action(char * data) if ( LogonUserA ( username , domain , data , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  