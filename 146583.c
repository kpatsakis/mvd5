static void goodG2B() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_ncat_34_unionType myUnion ; char dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strncat ( data , source , 100 ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 