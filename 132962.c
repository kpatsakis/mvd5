void CWE126_Buffer_Overread__malloc_char_memmove_12_bad() char * data ; if ( globalReturnsTrueOrFalse ( ) )  int globalReturnsTrueOrFalse() return ( rand ( ) % 2 ) ; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data = ( char * ) malloc ( 100 * sizeof ( char ) ); memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; free ( data ); 