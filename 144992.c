static void goodG2B1() char * data ; char dataBuffer [ 100 ] = "" ; data = dataBuffer; if ( globalReturnsFalse ( ) )  int globalReturnsFalse() return 0 ; strcpy ( data , "15" ); if ( globalReturnsTrue ( ) )  int globalReturnsTrue() return 1 ; if ( sscanf ( data , "%d" , & n ) == 1 )  