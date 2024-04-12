char *dfaexec(struct dfa *d,const char *begin,char *end,int allow_nl,size_t *count,int *backref) state_num s ; state_num s1 ; const unsigned char * p ; state_num * * trans ; state_num * t ; unsigned char eol = eolbyte ; unsigned char saved_end ; s = s1 = 0; p = ( ( const unsigned char * ) begin ); trans = d -> trans; saved_end = * ( ( unsigned char * ) end ); * end = eol; if ( d -> mb_cur_max > 1 )  while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  if ( p > buf_end )  s1 = s; if ( s == 0 )  if ( ( ( char * ) p ) >= end )  if ( d -> states [ s ] . mbps . nelem == 0 )  s = t [ * ( p ++ ) ]; if ( backref )  * end = saved_end; s = transit_state ( d , s , & p ); trans = d -> trans; while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  s1 = t [ * ( p ++ ) ]; if ( ( t = trans [ s1 ] ) == ( ( void * ) 0 ) )  state_num tmp = s ; s = s1; s1 = tmp; s = t [ * ( p ++ ) ]; if ( s >= 0 && ( ( char * ) p ) <= end && d -> fails [ s ] )  if ( d -> success [ s ] & sbit [ * p ] )  s1 = s; if ( d -> mb_cur_max > 1 )  s = transit_state ( d , s , & p ); trans = d -> trans; s = d -> fails [ s ] [ * ( p ++ ) ]; if ( ( ( char * ) p ) > end )  if ( s >= 0 )  trans = d -> trans; if ( p [ - 1 ] == eol && allow_nl )  s = d -> newlines [ s1 ]; s = 0; static state_num transit_state(struct dfa *d,state_num s,const unsigned char **pp) int mbclen ; int maxlen = 0 ; size_t i ; int * match_lens = ( ( void * ) 0 ) ; size_t nelem = d -> states [ s ] . mbps . nelem ; position_set follows ; if ( nelem > 0 )  match_lens = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); for (i = 0; i < nelem; i++) if ( match_lens [ i ] > maxlen )  maxlen = match_lens [ i ]; if ( nelem == 0 || maxlen == 0 )  transit_state_consume_1char ( d , s , pp , match_lens , & mbclen , & follows ); static status_transit_state transit_state_consume_1char(struct dfa *d,state_num s,const unsigned char **pp,int *match_lens,int *mbclen,position_set *pps) int k ; state_num s1 ; state_num s2 ; int * work_mbls ; * mbclen = ( mblen_buf [ * pp - buf_begin ] == 0 ? 1 : mblen_buf [ * pp - buf_begin ] ); s1 = s; for (k = 0; k <  *mbclen; k++) s2 = s1; rs = transit_state_singlebyte ( d , s2 , ( * pp ) ++ , & s1 ); static status_transit_state transit_state_singlebyte(struct dfa *d,state_num s,const unsigned char *p,state_num *next_state) state_num * t ; state_num works = s ; status_transit_state rval = TRANSIT_STATE_IN_PROGRESS ; while ( rval == TRANSIT_STATE_IN_PROGRESS )  if ( ( t = d -> trans [ works ] ) != ( ( void * ) 0 ) )  works = t [ * p ]; rval = TRANSIT_STATE_DONE; if ( works < 0 )  works = 0; if ( works < 0 )  works = 0; if ( d -> fails [ works ] )  works = d -> fails [ works ] [ * p ]; rval = TRANSIT_STATE_DONE; return rval ; if ( match_lens == ( ( void * ) 0 ) && d -> states [ s ] . mbps . nelem != 0 )  work_mbls = check_matching_with_multibyte_ops ( d , s , ( * pp - buf_begin ) ); static int *check_matching_with_multibyte_ops(struct dfa *d,state_num s,size_t idx) int * rarray ; rarray = ( ( sizeof ( ( * rarray ) ) == 1 ? xmalloc ( d -> states [ s ] . mbps . nelem ) : xnmalloc ( d -> states [ s ] . mbps . nelem , sizeof ( ( * rarray ) ) ) ) ); while ( 0 )  position pos = d -> states [ s ] . mbps . elems [ i ] ; switch ( d -> tokens [ pos . index ] )  rarray [ i ] = match_anychar ( d , s , pos , idx ); rarray [ i ] = match_mb_charset ( d , s , pos , idx ); return rarray ; 