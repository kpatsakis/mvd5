void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_badSink ( data ); void CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_41_badSink(char * data) char dest [ 50 ] = "" ; strcat ( dest , data ); 