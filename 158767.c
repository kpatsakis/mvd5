static void goodG2B() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; data = CWE665_Improper_Initialization__char_cat_61b_goodG2BSource ( data ); char * CWE665_Improper_Initialization__char_cat_61b_goodG2BSource(char * data) data [ 0 ] = '\0'; return data ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 