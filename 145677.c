static void goodG2B1() char * data ; data = NULL; if ( globalFive != 5 )  data = ( char * ) malloc ( ( 10 + 1 ) * sizeof ( char ) ); char source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = strlen ( source ); for (i = 0; i < sourceLen + 1; i++) data [ i ] = source [ i ]; free ( data ); 