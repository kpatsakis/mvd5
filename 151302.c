void dfacomp(const char *s,size_t len,struct dfa *d,int searchflag) dfaanalyze ( d , searchflag ); void dfaanalyze(struct dfa *d,int searchflag) position_set merged ; d -> searchflag = searchflag; d -> follows = ( ( sizeof ( ( * d -> follows ) ) == 1 ? xzalloc ( d -> tindex ) : xcalloc ( d -> tindex , sizeof ( ( * d -> follows ) ) ) ) ); while ( 0 )  merged . nelem = 0; epsclosure ( & merged , d ); static void epsclosure(position_set *s,const struct dfa *d) char * visited ; visited = ( ( sizeof ( ( * visited ) ) == 1 ? xzalloc ( d -> tindex ) : xcalloc ( d -> tindex , sizeof ( ( * visited ) ) ) ) ); while ( 0 )  p . constraint = old . constraint; if ( visited [ old . index ] )  visited [ old . index ] = 1; switch ( d -> tokens [ old . index ] )  p . constraint &= 0x444; p . constraint &= 0x700; p . constraint &= 0x050; p . constraint &= 0x202; p . constraint &= 0x252; p . constraint &= 0x525; for (j = 0; j < d -> follows[old . index] . nelem; ++j) p . index = d -> follows [ old . index ] . elems [ j ] . index; insert ( p , s ); free ( visited ); 