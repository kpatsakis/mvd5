void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfamust ( d ); static void dfamust(struct dfa *d) must * musts ; must * mp ; size_t ri ; size_t i ; token t ; static must must0 ; musts = ( ( sizeof ( ( * musts ) ) == 1 ? xmalloc ( d -> tindex + 1 ) : xnmalloc ( d -> tindex + 1 , sizeof ( ( * musts ) ) ) ) ); while ( 0 )  mp = musts; for (i = 0; i <= d -> tindex; ++i) mp [ i ] = must0; for (i = 0; i <= d -> tindex; ++i) mp [ i ] . in = ( xmalloc ( sizeof ( ( * mp [ i ] . in ) ) ) ); mp [ i ] . left = ( xmalloc ( 2 ) ); mp [ i ] . right = ( xmalloc ( 2 ) ); mp [ i ] . is = ( xmalloc ( 2 ) ); mp [ i ] . left [ 0 ] = mp [ i ] . right [ 0 ] = mp [ i ] . is [ 0 ] = '\0'; mp [ i ] . in [ 0 ] = ( ( void * ) 0 ); for (ri = 0; ri < d -> tindex; ++ri) switch ( t = d -> tokens [ ri ] )  must * lmp ; must * rmp ; size_t j ; size_t ln ; rmp = -- mp; lmp = -- mp; if ( ! ( strcmp ( ( lmp -> is ) , ( rmp -> is ) ) == 0 ) )  lmp -> is [ 0 ] = '\0'; i = 0; while ( lmp -> left [ i ] != '\0' && lmp -> left [ i ] == rmp -> left [ i ] )  lmp -> left [ i ] = '\0'; ln = strlen ( ( lmp -> right ) ); n = ln; if ( n > rn )  for (i = 0; i < n; ++i) if ( lmp -> right [ ln - i - 1 ] != rmp -> right [ rn - i - 1 ] )  for (j = 0; j < i; ++j) lmp -> right [ j ] = lmp -> right [ ln - i + j ]; lmp -> right [ j ] = '\0'; new = inboth ( lmp -> in , rmp -> in if ( new == ( ( void * ) 0 ) ) static char **inboth(char **left,char **right) char * * both ; char * * temp ; size_t lnum ; size_t rnum ; if ( left == ( ( void * ) 0 ) || right == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; both = ( malloc ( sizeof ( ( * both ) ) ) ); if ( both == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; both [ 0 ] = ( ( void * ) 0 ); for (lnum = 0; left[lnum] != ((void *)0); ++lnum) for (rnum = 0; right[rnum] != ((void *)0); ++rnum) temp = comsubs ( left [ lnum ] , right [ rnum ] ); static char **comsubs(char *left,const char *right) char * * cpp ; char * lcp ; char * rcp ; size_t i ; size_t len ; if ( left == ( ( void * ) 0 ) || right == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; cpp = ( malloc ( sizeof ( ( * cpp ) ) ) ); if ( cpp == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; cpp [ 0 ] = ( ( void * ) 0 ); for (lcp = left; ( *lcp) != '\0'; ++lcp) len = 0; rcp = strchr ( right , ( * lcp ) ); while ( rcp != ( ( void * ) 0 ) )  if ( i > len )  len = i; rcp = strchr ( ( rcp + 1 ) , ( * lcp ) ); if ( len == 0 )  char * * p = enlist ( cpp , lcp , len ) ; if ( p == ( ( void * ) 0 ) )  cpp = ( ( void * ) 0 ); cpp = p; return cpp ; if ( temp == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; both = addlists ( both , temp ); if ( both == ( ( void * ) 0 ) )  return ( ( void * ) 0 ) ; return both ; mp -> is [ 0 ] = '\0'; for (i = 0; musts[0] . in[i] != ((void *)0); ++i) if ( strlen ( musts [ 0 ] . in [ i ] ) > strlen ( result ) )  result = musts [ 0 ] . in [ i ]; if ( strcmp ( result , musts [ 0 ] . is ) == 0 )  must * lmp ; must * rmp ; rmp = -- mp; lmp = -- mp; lmp -> in = addlists ( lmp -> in , rmp -> in ); if ( lmp -> in == ( ( void * ) 0 ) )  if ( lmp -> right [ 0 ] != '\0' && rmp -> left [ 0 ] != '\0' )  char * tp ; tp = icpyalloc ( ( lmp -> right ) ); static char *icpyalloc(const char *string) return icatalloc ( ( ( void * ) 0 ) , string ) ; tp = icatalloc ( tp , ( rmp -> left ) ); lmp -> in = enlist ( lmp -> in , tp , strlen ( tp ) ); free ( tp ); if ( lmp -> in == ( ( void * ) 0 ) )  if ( lmp -> is [ 0 ] != '\0' )  lmp -> left = icatalloc ( lmp -> left , ( rmp -> left ) ); if ( lmp -> left == ( ( void * ) 0 ) )  if ( rmp -> is [ 0 ] == '\0' )  lmp -> right [ 0 ] = '\0'; lmp -> right = icatalloc ( lmp -> right , ( rmp -> right ) ); if ( lmp -> right == ( ( void * ) 0 ) )  if ( lmp -> is [ 0 ] != '\0' && rmp -> is [ 0 ] != '\0' )  lmp -> is = icatalloc ( lmp -> is , ( rmp -> is ) ); if ( lmp -> is == ( ( void * ) 0 ) )  lmp -> is [ 0 ] = '\0'; if ( t < END )  if ( t == '\0' )  if ( t >= CSET || ! 1 || t == ANYCHAR || t == MBCSET )  mp -> is [ 0 ] = mp -> left [ 0 ] = mp -> right [ 0 ] = t; mp -> is [ 1 ] = mp -> left [ 1 ] = mp -> right [ 1 ] = '\0'; mp -> in = enlist ( mp -> in , mp -> is , ( ( size_t ) 1 ) ); if ( mp -> in == ( ( void * ) 0 ) )  if ( strlen ( result ) )  dm -> must = ( xmemdup ( result , strlen ( result ) + 1 ) ); dm -> next = d -> musts; d -> musts = dm; for (i = 0; i <= d -> tindex; ++i) freelist ( mp [ i ] . in ); static void freelist(char **cpp) if ( cpp == ( ( void * ) 0 ) )  for (i = 0; cpp[i] != ((void *)0); ++i) free ( cpp [ i ] ); cpp [ i ] = ( ( void * ) 0 ); free ( mp [ i ] . in ); free ( mp [ i ] . left ); free ( mp [ i ] . right ); free ( mp [ i ] . is ); 