void bad() char * data ; char dataBuffer [ 100 ] ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_82_bad baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_declare_cat_82_bad::action(char * data) char dest [ 50 ] = "" ; strcat ( dest , data ); 