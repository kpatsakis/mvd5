char *dfaexec(struct dfa *d,const char *begin,char *end,int allow_nl,size_t *count,int *backref) if ( ! d -> tralloc )  build_state_zero ( d ); static void build_state_zero(struct dfa *d) d -> tralloc = 1; d -> trcount = 0; d -> realtrans = ( ( sizeof ( ( * d -> realtrans ) ) == 1 ? xzalloc ( ( d -> tralloc + 1 ) ) : xcalloc ( ( d -> tralloc + 1 ) , sizeof ( ( * d -> realtrans ) ) ) ) ); while ( 0 )  d -> trans = d -> realtrans + 1; d -> fails = ( ( sizeof ( ( * d -> fails ) ) == 1 ? xzalloc ( ( d -> tralloc ) ) : xcalloc ( ( d -> tralloc ) , sizeof ( ( * d -> fails ) ) ) ) ); while ( 0 )  d -> success = ( ( sizeof ( ( * d -> success ) ) == 1 ? xmalloc ( ( d -> tralloc ) ) : xnmalloc ( ( d -> tralloc ) , sizeof ( ( * d -> success ) ) ) ) ); while ( 0 )  d -> newlines = ( ( sizeof ( ( * d -> newlines ) ) == 1 ? xmalloc ( ( d -> tralloc ) ) : xnmalloc ( ( d -> tralloc ) , sizeof ( ( * d -> newlines ) ) ) ) ); while ( 0 )  build_state ( 0 , d ); static void build_state(state_num s,struct dfa *d) state_num i ; if ( d -> trcount >= 1024 )  for (i = 0; i < d -> tralloc; ++i) free ( d -> trans [ i ] ); d -> trans [ i ] = d -> fails [ i ] = ( ( void * ) 0 ); 