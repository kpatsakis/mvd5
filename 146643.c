static void goodG2B() size_t data ; CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_67_structType myStruct ; data = 0; data = 20; myStruct . structFirst = data; CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_67b_goodG2BSink ( myStruct ); void CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_67b_goodG2BSink(CWE789_Uncontrolled_Mem_Alloc__malloc_char_connect_socket_67_structType myStruct) size_t data = myStruct . structFirst ; char * myString ; if ( data > strlen ( HELLO_STRING ) )  myString = ( char * ) malloc ( data * sizeof ( char ) ); strcpy ( myString , HELLO_STRING ); free ( myString ); 