static void goodB2G() wchar_t * data ; data = NULL; data = NULL; data = ( wchar_t * ) realloc ( data , 100 * sizeof ( wchar_t ) ); myStruct . structFirst = data; goodB2GSink ( myStruct ); void goodB2GSink(structType myStruct) wchar_t * data = myStruct . structFirst ; free ( data ); 