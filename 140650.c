static state_num transit_state(struct dfa *d,state_num s,const unsigned char **pp) state_num s1 ; int mbclen ; int maxlen = 0 ; size_t i ; size_t nelem = d -> states [ s ] . mbps . nelem ; position_set follows ; const unsigned char * p1 = * pp ; wchar_t wc ; if ( nelem > 0 )  match_lens = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); for (i = 0; i < nelem; i++) if ( match_lens [ i ] > maxlen )  maxlen = match_lens [ i ]; if ( nelem == 0 || maxlen == 0 )  wc = inputwcs [ * pp - mbclen - buf_begin ]; s1 = state_index ( d , ( & follows ) , wchar_context ( wc ) ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; int constraint ; state_num i ; state_num j ; for (i = 0; i < s -> nelem; ++i) hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; for (i = 0; i < d -> sindex; ++i) if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  return i ; if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; d -> states [ i ] . context = context; d -> states [ i ] . backref = 0; d -> states [ i ] . constraint = 0; d -> states [ i ] . first_end = 0; if ( 1 )  d -> states [ i ] . mbps . nelem = 0; d -> states [ i ] . mbps . elems = ( ( void * ) 0 ); for (j = 0; j < s -> nelem; ++j) if ( d -> tokens [ s -> elems [ j ] . index ] < 0 )  constraint = s -> elems [ j ] . constraint; if ( ( ( ( 7 & 1 ? constraint & 0xf : 0 ) ) | ( ( 7 & 2 ? constraint >> 4 & 0xf : 0 ) ) | ( ( 7 & 4 ? constraint >> 8 & 0xf : 0 ) ) ) & context )  d -> states [ i ] . constraint |= constraint; if ( ! d -> states [ i ] . first_end )  d -> states [ i ] . first_end = d -> tokens [ s -> elems [ j ] . index ]; if ( d -> tokens [ s -> elems [ j ] . index ] == BACKREF )  d -> states [ i ] . constraint = 0x777; d -> states [ i ] . backref = 1; return i ; while ( * pp - p1 < maxlen )  transit_state_consume_1char ( d , s1 , pp , ( ( void * ) 0 ) , & mbclen , & follows ); wc = inputwcs [ * pp - mbclen - buf_begin ]; s1 = state_index ( d , ( & follows ) , wchar_context ( wc ) ); static int wchar_context(wint_t wc) if ( wc == ( ( wchar_t ) eolbyte ) || wc == 0 )  return 4 ; if ( wc == '_' || iswalnum ( wc ) )  return 2 ; return 1 ; static state_num state_index(struct dfa *d,const position_set *s,int context) size_t hash = 0 ; int constraint ; state_num i ; state_num j ; hash ^= s -> elems [ i ] . index + s -> elems [ i ] . constraint; if ( hash != d -> states [ i ] . hash || s -> nelem != d -> states [ i ] . elems . nelem || context != d -> states [ i ] . context )  if ( j == s -> nelem )  return i ; if ( d -> salloc <= d -> sindex + 1 )  size_t new_n_alloc = ( d -> sindex + 1 + ( ! d -> states ) ) ; d -> states = ( x2nrealloc ( ( d -> states ) , & new_n_alloc , sizeof ( ( * d -> states ) ) ) ); d -> salloc = new_n_alloc; while ( 0 )  d -> states [ i ] . hash = hash; d -> states [ i ] . context = context; d -> states [ i ] . backref = 0; d -> states [ i ] . constraint = 0; d -> states [ i ] . first_end = 0; if ( 1 )  d -> states [ i ] . mbps . nelem = 0; d -> states [ i ] . mbps . elems = ( ( void * ) 0 ); if ( d -> tokens [ s -> elems [ j ] . index ] < 0 )  constraint = s -> elems [ j ] . constraint; if ( ( ( ( 7 & 1 ? constraint & 0xf : 0 ) ) | ( ( 7 & 2 ? constraint >> 4 & 0xf : 0 ) ) | ( ( 7 & 4 ? constraint >> 8 & 0xf : 0 ) ) ) & context )  d -> states [ i ] . constraint |= constraint; if ( ! d -> states [ i ] . first_end )  d -> states [ i ] . first_end = d -> tokens [ s -> elems [ j ] . index ]; if ( d -> tokens [ s -> elems [ j ] . index ] == BACKREF )  d -> states [ i ] . constraint = 0x777; d -> states [ i ] . backref = 1; return i ; static status_transit_state transit_state_consume_1char(struct dfa *d,state_num s,const unsigned char **pp,int *match_lens,int *mbclen,position_set *pps) int k ; state_num s1 ; state_num s2 ; int * work_mbls ; * mbclen = ( mblen_buf [ * pp - buf_begin ] == 0 ? 1 : mblen_buf [ * pp - buf_begin ] ); s1 = s; for (k = 0; k <  *mbclen; k++) s2 = s1; rs = transit_state_singlebyte ( d , s2 , ( * pp ) ++ , & s1 ); static status_transit_state transit_state_singlebyte(struct dfa *d,state_num s,const unsigned char *p,state_num *next_state) state_num * t ; state_num works = s ; status_transit_state rval = TRANSIT_STATE_IN_PROGRESS ; while ( rval == TRANSIT_STATE_IN_PROGRESS )  if ( ( t = d -> trans [ works ] ) != ( ( void * ) 0 ) )  works = t [ * p ]; rval = TRANSIT_STATE_DONE; if ( works < 0 )  works = 0; if ( works < 0 )  works = 0; if ( d -> fails [ works ] )  works = d -> fails [ works ] [ * p ]; rval = TRANSIT_STATE_DONE; return rval ; if ( match_lens == ( ( void * ) 0 ) && d -> states [ s ] . mbps . nelem != 0 )  work_mbls = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); static int *check_matching_with_multibyte_ops(struct dfa *d,state_num s,size_t idx) size_t i ; int * rarray ; rarray = ( ( sizeof ( ( * rarray ) ) == 1 ? xmalloc ( d -> states [ s ] . mbps . nelem ) : xnmalloc ( d -> states [ s ] . mbps . nelem , sizeof ( ( * rarray ) ) ) ) ); while ( 0 )  for (i = 0; i < d -> states[s] . mbps . nelem; ++i) position pos = d -> states [ s ] . mbps . elems [ i ] ; switch ( d -> tokens [ pos . index ] )  rarray [ i ] = match_anychar ( d , s , pos , idx ); rarray [ i ] = match_mb_charset ( d , s , pos , idx ); static int match_mb_charset(struct dfa *d,state_num s,position pos,size_t idx) size_t i ; int match_len ; int op_len ; char buffer [ 128 ] ; struct mb_char_classes * work_mbc ; int context ; wchar_t wc ; wc = inputwcs [ idx ]; if ( wc == ( ( wchar_t ) eolbyte ) )  if ( ! ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 ) )  if ( wc == ( ( wchar_t ) '\0' ) )  if ( syntax_bits & ( ( unsigned long ) 1 ) << 1 << 1 << 1 << 1 << 1 << 1 << 1 )  context = wchar_context ( wc ); if ( ! ( ( ( ( context & 1 ? pos . constraint & 0xf : 0 ) ) | ( ( context & 2 ? pos . constraint >> 4 & 0xf : 0 ) ) | ( ( context & 4 ? pos . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context ) )  work_mbc = & d -> mbcsets [ d -> multibyte_prop [ pos . index ] >> 2 ]; match_len = ( mblen_buf [ idx ] == 0 ? 1 : mblen_buf [ idx ] ); if ( wc < 1 << 8 && work_mbc -> cset != ( - 1 ) && tstbit ( ( ( unsigned char ) wc ) , d -> charclasses [ work_mbc -> cset ] ) )  for (i = 0; i < work_mbc -> nch_classes; i++) if ( iswctype ( ( ( wint_t ) wc ) , work_mbc -> ch_classes [ i ] ) )  strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , match_len ); buffer [ match_len ] = '\0'; for (i = 0; i < work_mbc -> nequivs; i++) op_len = ( strlen ( work_mbc -> equivs [ i ] ) ); strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , op_len ); buffer [ op_len ] = '\0'; if ( strcoll ( work_mbc -> equivs [ i ] , buffer ) == 0 )  for (i = 0; i < work_mbc -> ncoll_elems; i++) op_len = ( strlen ( work_mbc -> coll_elems [ i ] ) ); strncpy ( buffer , ( ( const char * ) buf_begin ) + idx , op_len ); buffer [ op_len ] = '\0'; if ( strcoll ( work_mbc -> coll_elems [ i ] , buffer ) == 0 )  