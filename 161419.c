static void good1() if ( staticReturnsFalse ( ) )  static int staticReturnsFalse() return 0 ; short * goodShort = NULL ; goodShort = ( short * ) malloc ( sizeof ( * goodShort ) ); * goodShort = 6; printShortLine ( * goodShort ); void printShortLine (short shortNumber) printf ( "%hd\n" , shortNumber ); free ( goodShort ); 