void bad() TwoIntsClass * data ; data = NULL; data = NULL; data = ( TwoIntsClass * ) realloc ( data , 100 * sizeof ( TwoIntsClass ) ); badSink_b ( data ); void badSink_b(TwoIntsClass * data) badSink_c ( data ); void badSink_c(TwoIntsClass * data) delete [ ] data 