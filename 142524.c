static void goodG2B() list < int > dataList ; goodG2BSink ( dataList ); void goodG2BSink(list<int> dataList) int data = dataList . back ( ) ; if ( data < 100 )  char * dataBuffer = ( char * ) malloc ( data ) ; memset ( dataBuffer , 'A' , data - 1 ); dataBuffer [ data - 1 ] = '\0'; free ( dataBuffer ); 