void bad() char * data ; char * & dataRef = data ; data = NULL; data = ( char * ) malloc ( 50 * sizeof ( char ) ); data [ 0 ] = '\0'; char * data = dataRef ; char source [ 100 ] ; memset ( source , 'C' , 100 - 1 ); source [ 100 - 1 ] = '\0'; strcat ( data , source ); free ( data ); 