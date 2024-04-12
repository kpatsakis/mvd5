char *dfaexec(struct dfa *d,const char *begin,char *end,int allow_nl,size_t *count,int *backref) state_num s ; state_num s1 ; const unsigned char * p ; state_num * * trans ; state_num * t ; unsigned char eol = eolbyte ; unsigned char saved_end ; s = s1 = 0; p = ( ( const unsigned char * ) begin ); trans = d -> trans; saved_end = * ( ( unsigned char * ) end ); * end = eol; if ( d -> mb_cur_max > 1 )  while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  if ( p > buf_end )  s1 = s; if ( s == 0 )  if ( ( ( char * ) p ) >= end )  if ( d -> states [ s ] . mbps . nelem == 0 )  s = t [ * ( p ++ ) ]; if ( backref )  * end = saved_end; s = transit_state ( d , s , & p ); trans = d -> trans; while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  s1 = t [ * ( p ++ ) ]; if ( ( t = trans [ s1 ] ) == ( ( void * ) 0 ) )  state_num tmp = s ; s = s1; s1 = tmp; s = t [ * ( p ++ ) ]; if ( s >= 0 && ( ( char * ) p ) <= end && d -> fails [ s ] )  if ( d -> success [ s ] & sbit [ * p ] )  s1 = s; if ( d -> mb_cur_max > 1 )  s = transit_state ( d , s , & p ); trans = d -> trans; s = d -> fails [ s ] [ * ( p ++ ) ]; if ( ( ( char * ) p ) > end )  if ( s >= 0 )  trans = d -> trans; if ( p [ - 1 ] == eol && allow_nl )  s = d -> newlines [ s1 ]; s = 0; static state_num transit_state(struct dfa *d,state_num s,const unsigned char **pp) state_num s1 ; int mbclen ; int maxlen = 0 ; size_t i ; size_t nelem = d -> states [ s ] . mbps . nelem ; position_set follows ; const unsigned char * p1 = * pp ; wchar_t wc ; if ( nelem > 0 )  match_lens = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); for (i = 0; i < nelem; i++) if ( match_lens [ i ] > maxlen )  maxlen = match_lens [ i ]; if ( nelem == 0 || maxlen == 0 )  wc = inputwcs [ * pp - mbclen - buf_begin ]; s1 = state_index ( d , ( & follows ) , wchar_context ( wc ) ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; int constraint ; state_num i ; state_num j ; for (i = 0; i < s -> nelem; ++i) hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; for (i = 0; i < d -> sindex; ++i) if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  return i ; if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; d -> states [ i ] . context = context; d -> states [ i ] . backref = 0; d -> states [ i ] . constraint = 0; d -> states [ i ] . first_end = 0; if ( 1 )  d -> states [ i ] . mbps . nelem = 0; d -> states [ i ] . mbps . elems = ( ( void * ) 0 ); for (j = 0; j < s -> nelem; ++j) if ( d -> tokens [ s -> elems [ j ] . index ] < 0 )  constraint = s -> elems [ j ] . constraint; if ( ( ( ( 7 & 1 ? constraint & 0xf : 0 ) ) | ( ( 7 & 2 ? constraint >> 4 & 0xf : 0 ) ) | ( ( 7 & 4 ? constraint >> 8 & 0xf : 0 ) ) ) & context )  d -> states [ i ] . constraint |= constraint; if ( ! d -> states [ i ] . first_end )  d -> states [ i ] . first_end = d -> tokens [ s -> elems [ j ] . index ]; if ( d -> tokens [ s -> elems [ j ] . index ] == BACKREF )  d -> states [ i ] . constraint = 0x777; d -> states [ i ] . backref = 1; return i ; while ( * pp - p1 < maxlen )  transit_state_consume_1char ( d , s1 , pp , ( ( void * ) 0 ) , & mbclen , & follows ); wc = inputwcs [ * pp - mbclen - buf_begin ]; s1 = state_index ( d , ( & follows ) , wchar_context ( wc ) ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; int constraint ; state_num i ; state_num j ; hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  return i ; if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; d -> states [ i ] . context = context; d -> states [ i ] . backref = 0; d -> states [ i ] . constraint = 0; d -> states [ i ] . first_end = 0; if ( 1 )  d -> states [ i ] . mbps . nelem = 0; d -> states [ i ] . mbps . elems = ( ( void * ) 0 ); if ( d -> tokens [ s -> elems [ j ] . index ] < 0 )  constraint = s -> elems [ j ] . constraint; if ( ( ( ( 7 & 1 ? constraint & 0xf : 0 ) ) | ( ( 7 & 2 ? constraint >> 4 & 0xf : 0 ) ) | ( ( 7 & 4 ? constraint >> 8 & 0xf : 0 ) ) ) & context )  d -> states [ i ] . constraint |= constraint; if ( ! d -> states [ i ] . first_end )  d -> states [ i ] . first_end = d -> tokens [ s -> elems [ j ] . index ]; if ( d -> tokens [ s -> elems [ j ] . index ] == BACKREF )  d -> states [ i ] . constraint = 0x777; d -> states [ i ] . backref = 1; return i ; static status_transit_state transit_state_consume_1char(struct dfa *d,state_num s,const unsigned char **pp,int *match_lens,int *mbclen,position_set *pps) state_num s1 ; s1 = s; copy ( ( & d -> states [ s1 ] . elems ) , pps ); 