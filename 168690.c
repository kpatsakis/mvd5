static void goodG2B() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , GOOD_OS_COMMAND ); CWE426_Untrusted_Search_Path__wchar_t_popen_52b_goodG2BSink ( data ); void CWE426_Untrusted_Search_Path__wchar_t_popen_52b_goodG2BSink(wchar_t * data) CWE426_Untrusted_Search_Path__wchar_t_popen_52c_goodG2BSink ( data ); void CWE426_Untrusted_Search_Path__wchar_t_popen_52c_goodG2BSink(wchar_t * data) pipe = POPEN ( data , L "wb" ) if ( pipe != NULL )  PCLOSE ( pipe ); 