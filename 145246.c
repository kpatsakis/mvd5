static int sctp_setsockopt(struct sock *sk, int level, int char __user *optval, unsigned int optlen) if ( level != SOL_SCTP )  switch ( optname )  retval = sctp_setsockopt_bindx ( sk , ( struct sockaddr __user * ) optval , optlen , SCTP_BINDX_REM_ADDR ); static int sctp_setsockopt_bindx(struct sock struct sockaddr __user int addrs_size, int op) struct sockaddr * kaddrs ; int err ; int addrcnt = 0 ; int walk_size = 0 ; struct sockaddr * sa_addr ; void * addr_buf ; struct sctp_af * af ; if ( unlikely ( addrs_size <= 0 ) )  if ( unlikely ( ! access_ok ( VERIFY_READ , addrs , addrs_size ) ) )  kaddrs = kmalloc ( addrs_size , GFP_USER | __GFP_NOWARN ); if ( unlikely ( ! kaddrs ) )  if ( __copy_from_user ( kaddrs , addrs , addrs_size ) )  addr_buf = kaddrs; while ( walk_size < addrs_size )  if ( walk_size + sizeof ( sa_family_t ) > addrs_size )  sa_addr = addr_buf; af = sctp_get_af_specific ( sa_addr -> sa_family ); if ( ! af || ( walk_size + af -> sockaddr_len ) > addrs_size )  addrcnt ++; addr_buf += af -> sockaddr_len; walk_size += af -> sockaddr_len; switch ( op )  err = sctp_bindx_add ( sk , kaddrs , addrcnt ); if ( err )  err = sctp_send_asconf_add_ip ( sk , kaddrs , addrcnt ); static int sctp_send_asconf_add_ip(struct struct int 			addrcnt) struct net * net = sock_net ( sk ) ; struct sctp_association * asoc ; struct sctp_bind_addr * bp ; struct sctp_chunk * chunk ; struct sctp_sockaddr_entry * laddr ; union sctp_addr * addr ; union sctp_addr saveaddr ; void * addr_buf ; struct sctp_af * af ; struct list_head * p ; int i ; if ( ! net -> sctp . addip_enable )  addr_buf = addrs; for (i = 0; i < addrcnt; i++) addr = addr_buf; af = sctp_get_af_specific ( addr -> v4 . sin_family ); if ( ! af )  if ( sctp_assoc_lookup_laddr ( asoc , addr ) )  addr_buf += af -> sockaddr_len; bp = & asoc -> base . bind_addr; p = bp -> address_list . next; laddr = list_entry ( p , struct sctp_sockaddr_entry , list ) chunk = sctp_make_asconf_update_ip ( asoc , & laddr -> a , addrs , addrcnt , SCTP_PARAM_ADD_IP ); if ( ! chunk )  addr_buf = addrs; for (i = 0; i < addrcnt; i++) addr = addr_buf; af = sctp_get_af_specific ( addr -> v4 . sin_family ); memcpy ( & saveaddr , addr , af -> sockaddr_len ); retval = sctp_add_bind_addr ( bp , & saveaddr , sizeof ( saveaddr ) , SCTP_ADDR_NEW , GFP_ATOMIC ); addr_buf += af -> sockaddr_len; return retval ; 