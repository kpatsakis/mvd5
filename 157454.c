static void goodG2B() char * data ; char dataGoodBuffer [ 100 ] ; data = dataGoodBuffer; data [ 0 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_82_base * baseObject = new CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_82_goodG2B baseObject -> action ( data ); void CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_snprintf_82_goodG2B::action(char * data) char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; SNPRINTF ( data , 100 , "%s" , source ); 