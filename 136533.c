void CWE121_Stack_Based_Buffer_Overflow__CWE806_char_alloca_ncpy_21_bad() char * data ; char * dataBuffer = ( char * ) ALLOCA ( 100 * sizeof ( char ) ) ; data = dataBuffer; data = badSource ( data ); static char * badSource(char * data) if ( badStatic )  memset ( data , 'A' , 100 - 1 ); data [ 100 - 1 ] = '\0'; return data ; char dest [ 50 ] = "" ; strncpy ( dest , data , strlen ( data ) ); dest [ 50 - 1 ] = '\0'; 