static void goodG2B() char * data ; structType myStruct ; data = new char [ 100 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; myStruct . structFirst = data; goodG2BSink ( myStruct ); void goodG2BSink(structType myStruct) char * data = myStruct . structFirst ; char dest [ 50 ] = "" ; memcpy ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 