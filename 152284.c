static void goodG2B() char * data ; char * dataArray [ 5 ] ; char dataBuffer [ 100 ] ; data = dataBuffer; data [ 0 ] = '\0'; dataArray [ 2 ] = data; CWE665_Improper_Initialization__char_cat_66b_goodG2BSink ( dataArray ); void CWE665_Improper_Initialization__char_cat_66b_goodG2BSink(char * dataArray[]) char * data = dataArray [ 2 ] ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 