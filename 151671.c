static void good1() if ( globalFive != 5 )  char * data = ( char * ) malloc ( 100 * sizeof ( char ) ) ; char * tmpData ; strcpy ( data , "A String" ); tmpData = ( char * ) realloc ( data , ( 130000 ) * sizeof ( char ) ); if ( tmpData != NULL )  data = tmpData; strcpy ( data , "New String" ); free ( data ); 