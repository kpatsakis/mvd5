void CWE665_Improper_Initialization__char_cat_10_bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 