CWE122_Heap_Based_Buffer_Overflow__cpp_dest_char_cpy_83_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__cpp_dest_char_cpy_83_goodG2B() char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcpy ( data , source ); printLine ( data ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); delete [ ] data 