char *dfaexec(struct dfa *d,const char *begin,char *end,int allow_nl,size_t *count,int *backref) state_num s ; state_num s1 ; const unsigned char * p ; state_num * * trans ; state_num * t ; unsigned char eol = eolbyte ; unsigned char saved_end ; s = s1 = 0; p = ( ( const unsigned char * ) begin ); trans = d -> trans; saved_end = * ( ( unsigned char * ) end ); * end = eol; if ( d -> mb_cur_max > 1 )  while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  if ( p > buf_end )  s1 = s; if ( s == 0 )  if ( ( ( char * ) p ) >= end )  if ( d -> states [ s ] . mbps . nelem == 0 )  s = t [ * ( p ++ ) ]; if ( backref )  * end = saved_end; s = transit_state ( d , s , & p ); trans = d -> trans; while ( ( t = trans [ s ] ) != ( ( void * ) 0 ) )  s1 = t [ * ( p ++ ) ]; if ( ( t = trans [ s1 ] ) == ( ( void * ) 0 ) )  state_num tmp = s ; s = s1; s1 = tmp; s = t [ * ( p ++ ) ]; if ( s >= 0 && ( ( char * ) p ) <= end && d -> fails [ s ] )  if ( d -> success [ s ] & sbit [ * p ] )  s1 = s; if ( d -> mb_cur_max > 1 )  s = transit_state ( d , s , & p ); trans = d -> trans; s = d -> fails [ s ] [ * ( p ++ ) ]; if ( ( ( char * ) p ) > end )  if ( s >= 0 )  build_state ( s , d ); trans = d -> trans; if ( p [ - 1 ] == eol && allow_nl )  s = d -> newlines [ s1 ]; s = 0; static void build_state(state_num s,struct dfa *d) state_num * trans ; state_num i ; if ( d -> trcount >= 1024 )  for (i = 0; i < d -> tralloc; ++i) d -> trans [ i ] = d -> fails [ i ] = ( ( void * ) 0 ); d -> trcount = 0; d -> success [ s ] = 0; if ( ( ( ( 4 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 4 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 4 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 4; if ( ( ( ( 2 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 2 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 2 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 2; if ( ( ( ( 1 & 1 ? ( * d ) . states [ s ] . constraint & 0xf : 0 ) ) | ( ( 1 & 2 ? ( * d ) . states [ s ] . constraint >> 4 & 0xf : 0 ) ) | ( ( 1 & 4 ? ( * d ) . states [ s ] . constraint >> 8 & 0xf : 0 ) ) ) & d -> states [ s ] . context )  d -> success [ s ] |= 1; trans = ( ( sizeof ( ( * trans ) ) == 1 ? xmalloc ( ( 1 << 8 ) ) : xnmalloc ( ( 1 << 8 ) , sizeof ( ( * trans ) ) ) ) ); while ( 0 )  dfastate ( s , d , trans ); void dfastate(state_num s,struct dfa *d,token trans[]) position_set follows ; if ( d -> searchflag )  copy ( ( & d -> states [ 0 ] . elems ) , & follows ); static void copy(const position_set *src,position_set *dst) if ( dst -> alloc <= src -> nelem )  size_t new_n_alloc = src -> nelem + ( ! dst -> elems ) ; dst -> elems = ( x2nrealloc ( ( dst -> elems ) , & new_n_alloc , sizeof ( ( * dst -> elems ) ) ) ); dst -> alloc = new_n_alloc; while ( 0 )  memcpy ( ( dst -> elems ) , ( src -> elems ) , sizeof ( dst -> elems [ 0 ] ) * src -> nelem ); dst -> nelem = src -> nelem; 