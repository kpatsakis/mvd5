static void goodG2B() int * data ; data = ( int * ) malloc ( 100 * sizeof ( int ) ); goodG2BSink_b ( data ); void goodG2BSink_b(int * data) goodG2BSink_c ( data ); void goodG2BSink_c(int * data) goodG2BSink_d ( data ); void goodG2BSink_d(int * data) free ( data ); 