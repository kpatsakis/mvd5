void CWE126_Buffer_Overread__char_declare_memcpy_52_bad() char dataBadBuffer [ 50 ] ; memset ( dataBadBuffer , 'A' , 50 - 1 ); dataBadBuffer [ 50 - 1 ] = '\0'; data = dataBadBuffer; CWE126_Buffer_Overread__char_declare_memcpy_52b_badSink ( data ); void CWE126_Buffer_Overread__char_declare_memcpy_52b_badSink(char * data) CWE126_Buffer_Overread__char_declare_memcpy_52c_badSink ( data ); void CWE126_Buffer_Overread__char_declare_memcpy_52c_badSink(char * data) memcpy ( dest , data , strlen ( dest ) * sizeof ( char ) ); dest [ 100 - 1 ] = '\0'; printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 