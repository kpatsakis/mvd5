static void goodG2B() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; strcpy ( data , "fixedstringtest" ); CWE134_Uncontrolled_Format_String__char_console_printf_52b_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_printf_52b_goodG2BSink(char * data) CWE134_Uncontrolled_Format_String__char_console_printf_52c_goodG2BSink ( data ); void CWE134_Uncontrolled_Format_String__char_console_printf_52c_goodG2BSink(char * data) printf ( data ); 