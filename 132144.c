void bad() long * data ; data = NULL; data = new long [ 100 ]; badSink_b ( data ); void badSink_b(long * data) badSink_c ( data ); void badSink_c(long * data) badSink_d ( data ); void badSink_d(long * data) free ( data ); 