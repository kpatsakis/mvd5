void bad() char * data ; data = NULL; data = new char [ 50 ]; memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; CWE126_Buffer_Overread__new_char_loop_82_base * baseObject = new CWE126_Buffer_Overread__new_char_loop_82_bad baseObject -> action ( data ); void CWE126_Buffer_Overread__new_char_loop_82_bad::action(char * data) size_t i , destLen ; char dest [ 100 ] ; memset ( dest , 'C' , 100 - 1 ); dest [ 100 - 1 ] = '\0'; destLen = strlen ( dest ); for (i = 0; i < destLen; i++) 