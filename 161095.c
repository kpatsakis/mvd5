void bad() twoIntsStruct * data ; twoIntsStruct * dataArray [ 5 ] ; data = NULL; data = new twoIntsStruct [ 100 ]; dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(twoIntsStruct * dataArray[]) twoIntsStruct * data = dataArray [ 2 ] ; free ( data ); 