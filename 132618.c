void CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_66_bad() int data ; int dataArray [ 5 ] ; data = - 1; data = - 1; dataArray [ 2 ] = data; CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_66b_badSink ( dataArray ); void CWE195_Signed_to_Unsigned_Conversion_Error__negative_strncpy_66b_badSink(int dataArray[]) int data = dataArray [ 2 ] ; char source [ 100 ] ; char dest [ 100 ] = "" ; memset ( source , 'A' , 100 - 1 ); source [ 100 - 1 ] = '\0'; if ( data < 100 )  strncpy ( dest , source , data ); dest [ data ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 