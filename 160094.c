void bad() int data ; int & dataRef = data ; data = - 1; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = atoi ( inputBuffer ); int data = dataRef ; size_t i ; int * intPointer ; intPointer = ( int * ) malloc ( data * sizeof ( int ) ); for (i = 0; i < (size_t)data; i++) intPointer [ i ] = 0; free ( intPointer ); 