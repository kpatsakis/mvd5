static void goodB2G() size_t data ; map < int , size_t > dataMap ; data = 0; char inputBuffer [ CHAR_ARRAY_SIZE ] = "" ; if ( fgets ( inputBuffer , CHAR_ARRAY_SIZE , stdin ) != NULL )  data = strtoul ( inputBuffer , NULL , 0 ); dataMap [ 0 ] = data; dataMap [ 1 ] = data; dataMap [ 2 ] = data; goodB2GSink ( dataMap ); void goodB2GSink(map<int, size_t> dataMap) size_t data = dataMap [ 2 ] ; if ( data > wcslen ( HELLO_STRING ) && data < 100 )  