static void goodB2G() int * data ; data = NULL; data = NULL; data = ( int * ) realloc ( data , 100 * sizeof ( int ) ); goodB2GSink_b ( data ); void goodB2GSink_b(int * data) goodB2GSink_c ( data ); void goodB2GSink_c(int * data) goodB2GSink_d ( data ); void goodB2GSink_d(int * data) free ( data ); 