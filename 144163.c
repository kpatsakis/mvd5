void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54_bad() wchar_t * password ; password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); if ( password == NULL )  wcscpy ( password , L "Password1234!" ) CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54b_badSink ( password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54b_badSink(wchar_t * password) CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54c_badSink ( password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54c_badSink(wchar_t * password) CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54d_badSink ( password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54d_badSink(wchar_t * password) CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54e_badSink ( password ); void CWE591_Sensitive_Data_Storage_in_Improperly_Locked_Memory__w32_wchar_t_54e_badSink(wchar_t * password) if ( LogonUserW ( username , domain , password , LOGON32_LOGON_NETWORK , LOGON32_PROVIDER_DEFAULT , & pHandle ) != 0 )  free ( password ); 