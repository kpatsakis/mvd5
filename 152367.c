static void goodG2B2() wchar_t * data ; wchar_t * dataBuffer = ( wchar_t * ) ALLOCA ( 100 * sizeof ( wchar_t ) ) ; data = dataBuffer; switch ( 6 )  wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 