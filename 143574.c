static void goodG2B() size_t data ; data = 0; data = 20; goodG2BSink ( data ); static void goodG2BSink(size_t data) if ( goodG2BStatic )  char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 