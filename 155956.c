static void build_state(state_num s,struct dfa *d) state_num * trans ; state_num i ; if ( d -> trcount >= 1024 )  for (i = 0; i < d -> tralloc; ++i) d -> trans [ i ] = d -> fails [ i ] = ( ( void * ) 0 ); d -> trcount = 0; d -> success [ s ] = 0; if ( ( ( ( 4 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 4; if ( ( ( ( 2 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 2; if ( ( ( ( 1 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 1; trans = ( ( sizeof ( ( * trans ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * trans ) ) ) ) ); while ( 0 )  dfastate ( s , d , trans ); void dfastate(state_num s,struct dfa *d,token trans[]) leaf_set * grps ; charclass * labels ; size_t ngrps = 0 ; position pos ; charclass matches ; int matchesf ; charclass intersect ; int intersectf ; charclass leftovers ; int leftoversf ; position_set follows ; int possible_contexts ; int separate_contexts ; state_num state ; state_num state_letter ; size_t i ; size_t j ; size_t k ; grps = ( ( sizeof ( ( * grps ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * grps ) ) ) ) ); while ( 0 )  labels = ( ( sizeof ( ( * labels ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * labels ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> states[s] . elems . nelem; ++i) pos = d -> states [ s ] . elems . elems [ i ]; if ( d -> tokens [ pos . index ] >= 0 && d -> tokens [ pos . index ] < ( 1 << 8 ) )  if ( d -> tokens [ pos . index ] >= CSET )  if ( pos . constraint != 0x777 )  if ( ! ( ( ( ( 4 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= ~newline [ j ]; if ( ! ( ( ( ( 2 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= ~letters [ j ]; if ( ! ( ( ( ( 1 & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) matches [ j ] &= letters [ j ] | newline [ j ]; if ( j == ( ( 1 << 8 ) + 8 * sizeof ( int ) - 1 ) / ( 8 * sizeof ( int ) ) )  for (j = 0; j < ngrps; ++j) if ( d -> tokens [ pos . index ] >= 0 && d -> tokens [ pos . index ] < ( 1 << 8 ) && ! tstbit ( d -> tokens [ pos . index ] , labels [ j ] ) )  static int tstbit(unsigned int b,const int c[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return c [ b / ( 8 * sizeof ( int ) ) ] & 1 << b % ( 8 * sizeof ( int ) ) ; intersectf = 0; for (k = 0; k < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++k) ( intersect [ k ] = matches [ k ] & labels [ j ] [ k ] ) ? ( intersectf = 1 ) : 0; if ( ! intersectf )  leftoversf = matchesf = 0; for (k = 0; k < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++k) int match = matches [ k ] ; int label = labels [ j ] [ k ] ; ( leftovers [ k ] = ~match & label ) ? ( leftoversf = 1 ) : 0; ( matches [ k ] = match & ~label ) ? ( matchesf = 1 ) : 0; if ( leftoversf )  grps [ ngrps ] . elems = ( ( sizeof ( ( * grps [ ngrps ] . elems ) ) == 1 ? xmalloc ( d -> nleaves ) : xnmalloc ( d -> nleaves , sizeof ( ( * grps [ ngrps ] . elems ) ) ) ) ); while ( 0 )  grps [ ngrps ] . nelem = grps [ j ] . nelem; grps [ j ] . elems [ grps [ j ] . nelem ++ ] = pos . index; if ( ! matchesf )  if ( j == ngrps )  grps [ ngrps ] . elems = ( ( sizeof ( ( * grps [ ngrps ] . elems ) ) == 1 ? xmalloc ( d -> nleaves ) : xnmalloc ( d -> nleaves , sizeof ( ( * grps [ ngrps ] . elems ) ) ) ) ); while ( 0 )  grps [ ngrps ] . nelem = 1; grps [ ngrps ] . elems [ 0 ] = pos . index; if ( d -> searchflag )  separate_contexts = state_separate_contexts ( ( & follows ) ); state = state_index ( d , ( & follows ) , separate_contexts ^ 7 ); if ( separate_contexts & 2 )  state_letter = state_index ( d , ( & follows ) , 2 ); state_letter = state; for (i = 0; i < (1 << 8); ++i) trans [ i ] = ( 1 && ( ( * __ctype_b_loc ( ) ) [ ( int ) i ] & ( ( unsigned short ) _ISalnum ) || i == '_' ) ? state_letter : state ); for (i = 0; i < (1 << 8); ++i) trans [ i ] = ( - 1 ); for (i = 0; i < ngrps; ++i) follows . nelem = 0; possible_contexts = charclass_context ( labels [ i ] ); static int charclass_context(charclass c) int context = 0 ; unsigned int j ; if ( tstbit ( eolbyte , c ) )  static int tstbit(unsigned int b,const int c[((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int ))]) return c [ b / ( 8 * sizeof ( int ) ) ] & 1 << b % ( 8 * sizeof ( int ) ) ; context |= 4; for (j = 0; j < ((1 << 8) + 8 * sizeof(int ) - 1) / (8 * sizeof(int )); ++j) if ( c [ j ] & letters [ j ] )  context |= 2; if ( c [ j ] & ~ ( letters [ j ] | newline [ j ] ) )  context |= 1; return context ; separate_contexts = state_separate_contexts ( ( & follows ) ); static int state_separate_contexts(const position_set *s) int separate_contexts = 0 ; size_t j ; for (j = 0; j < s -> nelem; ++j) if ( ( s -> elems [ j ] . constraint >> 2 & 0x111 ) != ( s -> elems [ j ] . constraint & 0x111 ) )  separate_contexts |= 4; if ( ( s -> elems [ j ] . constraint >> 1 & 0x111 ) != ( s -> elems [ j ] . constraint & 0x111 ) )  separate_contexts |= 2; return separate_contexts ; if ( separate_contexts & possible_contexts & 2 )  state_letter = state_index ( d , ( & follows ) , 2 ); static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; state_num i ; state_num j ; for (i = 0; i < s -> nelem; ++i) hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; for (i = 0; i < d -> sindex; ++i) if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; alloc_position_set ( & d -> states [ i ] . elems , s -> nelem ); static void alloc_position_set(position_set *s,size_t size) s -> elems = ( ( sizeof ( ( * s -> elems ) ) == 1 ? xmalloc ( size ) : xnmalloc ( size , sizeof ( ( * s -> elems ) ) ) ) ); while ( 0 )  s -> alloc = size; s -> nelem = 0; 