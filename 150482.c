static void goodB2G() wchar_t * data ; map < int , wchar_t * > dataMap ; data = NULL; data = ( wchar_t * ) calloc ( 100 , sizeof ( wchar_t ) ); wcscpy ( data , L "A String" ) dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, wchar_t *> dataMap) wchar_t * data = dataMap [ 2 ] ; free ( data ); 