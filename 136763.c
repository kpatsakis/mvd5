void CWE426_Untrusted_Search_Path__char_system_54_bad() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , BAD_OS_COMMAND ); CWE426_Untrusted_Search_Path__char_system_54b_badSink ( data ); void CWE426_Untrusted_Search_Path__char_system_54b_badSink(char * data) CWE426_Untrusted_Search_Path__char_system_54c_badSink ( data ); void CWE426_Untrusted_Search_Path__char_system_54c_badSink(char * data) CWE426_Untrusted_Search_Path__char_system_54d_badSink ( data ); void CWE426_Untrusted_Search_Path__char_system_54d_badSink(char * data) CWE426_Untrusted_Search_Path__char_system_54e_badSink ( data ); void CWE426_Untrusted_Search_Path__char_system_54e_badSink(char * data) if ( SYSTEM ( data ) <= 0 )  