int create_msg(u_char *buf) char exp_dn [ 200 ] , exp_dn2 [ 200 ] ; strcpy ( exp_dn2 , "sls.lcs.mit.edu" ); * dnptrs2 ++ = ( u_char * ) exp_dn2; * dnptrs2 -- = NULL; comp_size = dn_comp ( ( const char * ) exp_dn2 , comp_dn2 , 200 , dnptrs2 , lastdnptr ); printf ( "uncomp_size = %d\n" , strlen ( exp_dn2 ) ); printf ( "comp_size = %d\n" , comp_size ); printf ( "exp_dn2 = %s, comp_dn2 = %s\n" , exp_dn2 , ( char * ) comp_dn2 ); len += comp_size; for(i=0; i<comp_size; i++) len += 16; return ( len ) ; 