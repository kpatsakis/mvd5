void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfainit ( d ); void dfainit(struct dfa *d) memset ( d , 0 , sizeof ( ( * d ) ) ); d -> calloc = 1; d -> charclasses = ( ( sizeof ( ( * d -> charclasses ) ) == 1 ? xmalloc ( d -> calloc ) : xnmalloc ( d -> calloc , sizeof ( ( * d -> charclasses ) ) ) ) ); while ( 0 )  d -> talloc = 1; d -> tokens = ( ( sizeof ( ( * d -> tokens ) ) == 1 ? xmalloc ( d -> talloc ) : xnmalloc ( d -> talloc , sizeof ( ( * d -> tokens ) ) ) ) ); while ( 0 )  d -> mb_cur_max = ( __ctype_get_mb_cur_max ( ) ); if ( d -> mb_cur_max > 1 )  d -> nmultibyte_prop = 1; d -> multibyte_prop = ( ( sizeof ( ( * d -> multibyte_prop ) ) == 1 ? xmalloc ( d -> nmultibyte_prop ) : xnmalloc ( d -> nmultibyte_prop , sizeof ( ( * d -> multibyte_prop ) ) ) ) ); while ( 0 )  d -> mbcsets_alloc = 1; d -> mbcsets = ( ( sizeof ( ( * d -> mbcsets ) ) == 1 ? xmalloc ( d -> mbcsets_alloc ) : xnmalloc ( d -> mbcsets_alloc , sizeof ( ( * d -> mbcsets ) ) ) ) ); 