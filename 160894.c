static void goodB2G() size_t data ; size_t dataArray [ 5 ] ; data = 0; data = rand ( ); dataArray [ 2 ] = data; CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_66b_goodB2GSink ( dataArray ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_rand_66b_goodB2GSink(size_t dataArray[]) size_t data = dataArray [ 2 ] ; char * myString ; if ( data > strlen ( HELLO_STRING ) && data < 100 )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 