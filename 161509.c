void CWE467_Use_of_sizeof_on_Pointer_Type__short_04_bad() if ( STATIC_CONST_TRUE )  badShort = ( short * ) malloc ( sizeof ( badShort ) ); * badShort = 5; printShortLine ( * badShort ); void printShortLine (short shortNumber) printf ( "%hd\n" , shortNumber ); free ( badShort ); 