static void goodB2G() void * data ; CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct ; data = NULL; wchar_t * dataBadBuffer = ( wchar_t * ) malloc ( 50 * sizeof ( wchar_t ) ) ; wmemset ( dataBadBuffer , L 'A' , 50 - 1 dataBadBuffer [ 50 - 1 ] = L '\0' data = ( void * ) dataBadBuffer; myStruct . structFirst = data; CWE122_Heap_Based_Buffer_Overflow__CWE135_67b_goodB2GSink ( myStruct ); void CWE122_Heap_Based_Buffer_Overflow__CWE135_67b_goodB2GSink(CWE122_Heap_Based_Buffer_Overflow__CWE135_67_structType myStruct) void * data = myStruct . structFirst ; size_t dataLen = wcslen ( ( wchar_t * ) data ) ; void * dest = ( void * ) calloc ( dataLen + 1 , sizeof ( wchar_t ) ) ; memcpy ( dest , data , ( dataLen + 1 ) * sizeof ( wchar_t ) ); printWLine ( ( wchar_t * ) dest ); void printWLine (const wchar_t * line) if ( line != NULL )  wprintf ( L "%ls\n" , line ) free ( dest ); 