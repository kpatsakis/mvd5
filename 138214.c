static void goodB2G() char * data ; structType myStruct ; char * dataBadBuffer = ( char * ) malloc ( sizeof ( OneIntClass ) ) ; data = dataBadBuffer; myStruct . structFirst = data; goodB2GSink ( myStruct ); void goodB2GSink(structType myStruct) char * data = myStruct . structFirst ; free ( data ); 