static void goodB2G1() char * data ; data = NULL; if ( staticReturnsTrue ( ) )  static int staticReturnsTrue() return 1 ; data = ( char * ) calloc ( 100 , sizeof ( char ) ); strcpy ( data , "A String" ); if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; free ( data ); 