void bad() char * data ; data = NULL; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_84_bad::CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_84_bad(char * dataCopy) data = dataCopy; data = new char [ 10 ]; delete badObject CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_84_bad::~CWE122_Heap_Based_Buffer_Overflow__cpp_CWE193_char_loop_84_bad() char source [ 10 + 1 ] = SRC_STRING ; size_t i , sourceLen ; sourceLen = strlen ( source ); for (i = 0; i < sourceLen + 1; i++) 