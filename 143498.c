static void goodB2G() int data ; data = - 1; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_84_goodB2G * goodB2GObject = new CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_84_goodB2G ( data ) ; CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_84_goodB2G::CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_84_goodB2G(int dataCopy) data = dataCopy; fscanf ( stdin , "%d" , & data ); delete goodB2GObject CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_84_goodB2G::~CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_84_goodB2G() int i ; int * buffer = ( int * ) malloc ( 10 * sizeof ( int ) ) ; for (i = 0; i < 10; i++) buffer [ i ] = 0; if ( data >= 0 && data < ( 10 ) )  buffer [ data ] = 1; free ( buffer ); 