void CWE127_Buffer_Underread__malloc_char_cpy_54b_badSink(char * data) CWE127_Buffer_Underread__malloc_char_cpy_54c_badSink ( data ); void CWE127_Buffer_Underread__malloc_char_cpy_54c_badSink(char * data) CWE127_Buffer_Underread__malloc_char_cpy_54d_badSink ( data ); void CWE127_Buffer_Underread__malloc_char_cpy_54d_badSink(char * data) CWE127_Buffer_Underread__malloc_char_cpy_54e_badSink ( data ); void CWE127_Buffer_Underread__malloc_char_cpy_54e_badSink(char * data) char dest [ 100 * 2 ] ; memset ( dest , 'C' , 100 * 2 - 1 ); dest [ 100 * 2 - 1 ] = '\0'; strcpy ( dest , data ); printLine ( dest ); void printLine (const char * line) if ( line != NULL )  printf ( "%s\n" , line ); 