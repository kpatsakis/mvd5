void bad() char * data ; data = ( char * ) malloc ( 100 * sizeof ( char ) ); CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_bad * badObject = new CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_bad ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_bad::CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_bad(char * dataCopy) data = dataCopy; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; delete badObject CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_bad::~CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_84_bad() char dest [ 50 ] = "" ; strcpy ( dest , data ); 