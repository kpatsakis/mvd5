void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_34_bad() char * data ; CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_memmove_34_unionType myUnion ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; myUnion . unionFirst = data; char * data = myUnion . unionSecond ; char dest [ 50 ] = "" ; memmove ( dest , data , strlen ( data ) * sizeof ( char ) ); dest [ 50 - 1 ] = '\0'; 