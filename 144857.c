void bad() list < size_t > dataList ; badSink ( dataList ); void badSink(list<size_t> dataList) size_t data = dataList . back ( ) ; wchar_t * myString ; if ( data > wcslen ( HELLO_STRING ) )  myString = ( wchar_t * ) malloc ( data * sizeof ( wchar_t ) ); wcscpy ( myString , HELLO_STRING ); free ( myString ); 