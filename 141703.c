void CWE426_Untrusted_Search_Path__wchar_t_popen_52_bad() wchar_t * data ; wchar_t dataBuffer [ 100 ] = L "" data = dataBuffer; wcscpy ( data , BAD_OS_COMMAND ); CWE426_Untrusted_Search_Path__wchar_t_popen_52b_badSink ( data ); void CWE426_Untrusted_Search_Path__wchar_t_popen_52b_badSink(wchar_t * data) CWE426_Untrusted_Search_Path__wchar_t_popen_52c_badSink ( data ); void CWE426_Untrusted_Search_Path__wchar_t_popen_52c_badSink(wchar_t * data) pipe = POPEN ( data , L "wb" ) if ( pipe != NULL )  PCLOSE ( pipe ); 