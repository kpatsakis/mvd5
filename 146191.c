void bad() size_t data ; size_t dataArray [ 5 ] ; data = 0; data = rand ( ); dataArray [ 2 ] = data; badSink ( dataArray ); void badSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; if ( data > wcslen ( HELLO_STRING ) )  