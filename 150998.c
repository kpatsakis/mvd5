char **split(char *str,char *delim,int *nwrds) int n = 128 ; char * * w = ( xmalloc ( sizeof ( char * ) * n ) ) ; w [ * nwrds = 0 ] = strtok ( str , delim ); while ( w [ * nwrds ] )  if ( * nwrds == n - 2 )  w = ( xrealloc ( w , sizeof ( char * ) * ( n += 256 ) ) ); w [ ++ * nwrds ] = strtok ( ( ( void * ) 0 ) , delim ); w [ * nwrds ] = ( ( void * ) 0 ); return w ; 