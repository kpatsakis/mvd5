void CWE126_Buffer_Overread__char_alloca_memmove_63_bad() char * data ; char * dataBadBuffer = ( char * ) ALLOCA ( 50 * sizeof ( char ) ) ; memset ( dataBadBuffer , 'A' , 50 - 1 ); dataBadBuffer [ 50 - 1 ] = '\0'; data = dataBadBuffer; CWE126_Buffer_Overread__char_alloca_memmove_63b_badSink ( & data ); void CWE126_Buffer_Overread__char_alloca_memmove_63b_badSink(char * * dataPtr) char * data = * dataPtr ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; memmove ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 