void bad() wchar_t * password ; map < int , wchar_t * > passwordMap ; password = L "" password = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wcscpy ( password , L "Password1234!" ) passwordMap [ 0 ] = password; passwordMap [ 1 ] = password; passwordMap [ 2 ] = password; badSink ( passwordMap ); void badSink(map<int, wchar_t *> passwordMap) wchar_t * password = passwordMap [ 2 ] ; free ( password ); 