static void goodG2B() wchar_t * data ; data = ( wchar_t * ) malloc ( 100 * sizeof ( wchar_t ) ); wmemset ( data , L 'A' , 50 - 1 data [ 50 - 1 ] = L '\0' wchar_t * dataCopy = data ; wchar_t * data = dataCopy ; size_t i , dataLen ; dataLen = wcslen ( data ); for (i = 0; i < dataLen; i++) 