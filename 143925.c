static int CVE_2011_2987_PATCHED_GrowAtomTable(AtomTable *atable, int size) int * newmap , * newrev ; if ( atable -> size < size )  if ( atable -> amap )  newrev = malloc ( sizeof ( int ) * size ); if ( ! newmap || ! newrev )  if ( newrev )  atable -> arev = newrev; memset ( & newrev [ atable -> size ] , 0 , ( size - atable -> size ) * sizeof ( int ) ); atable -> arev = newrev; atable -> size = size; 