void CWE194_Unexpected_Sign_Extension__fscanf_memmove_67_bad() short data ; CWE194_Unexpected_Sign_Extension__fscanf_memmove_67_structType myStruct ; data = 0; myStruct . structFirst = data; CWE194_Unexpected_Sign_Extension__fscanf_memmove_67b_badSink ( myStruct ); void CWE194_Unexpected_Sign_Extension__fscanf_memmove_67b_badSink(CWE194_Unexpected_Sign_Extension__fscanf_memmove_67_structType myStruct) short data = myStruct . structFirst ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  memmove ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 