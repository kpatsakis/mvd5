static void goodG2B2() char * data ; data = new char [ 100 ]; if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 