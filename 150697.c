static void goodG2B() wchar_t * password ; password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( password == NULL )  if ( ! VirtualLock ( password , 100 * sizeof ( wchar_t ) ) )  wcscpy ( password , L "Password1234!" ) CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_51b_goodG2BSink ( password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_51b_goodG2BSink(wchar_t * password) if ( LogonUserW ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  free ( password ); 