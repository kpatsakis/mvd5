static void goodG2B() char * password ; password = ( char * ) malloc ( 100 * sizeof ( char ) ); if ( password == NULL )  if ( ! VirtualLock ( password , 100 * sizeof ( char ) ) )  strcpy ( password , "Password1234!" ); CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_51b_goodG2BSink ( password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_char_51b_goodG2BSink(char * password) if ( LogonUserA ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  free ( password ); 