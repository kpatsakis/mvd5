void CWE126_Buffer_Overread__malloc_char_memcpy_22_bad() char * data ; data = NULL; data = CWE126_Buffer_Overread__malloc_char_memcpy_22_badSource ( data ); char * CWE126_Buffer_Overread__malloc_char_memcpy_22_badSource(char * data) if ( CWE126_Buffer_Overread__malloc_char_memcpy_22_badGlobal )  data = ( char * ) malloc ( 50 * sizeof ( char ) ); memset ( data , 'A' , 50 - 1 ); data [ 50 - 1 ] = '\0'; return data ; 