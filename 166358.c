static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , GOOD_OS_COMMAND ); CWE426_Untrusted_Search_Path__char_popen_63b_goodG2BSink ( & data ); void CWE426_Untrusted_Search_Path__char_popen_63b_goodG2BSink(char * * dataPtr) char * data = * dataPtr ; pipe = POPEN ( data , "wb" ); if ( pipe != NULL )  PCLOSE ( pipe ); 