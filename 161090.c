void CWE122_Heap_Based_Buffer_Overflow__CWE135_13_bad() void * data ; data = NULL; if ( GLOBAL_CONST_FIVE == 5 )  wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L '\0' data = ( void * ) dataBadBuffer; if ( GLOBAL_CONST_FIVE == 5 )  size_t dataLen = strlen ( ( char * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , 1 ) ; memcpy ( dest , data , ( dataLen + 1 ) ); free ( dest ); 