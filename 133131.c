static int CVE_2008_2826_PATCHED_sctp_getsockopt_local_addrs_old(struct sock *sk, int char __user *optval, int __user *optlen) struct sctp_bind_addr * bp ; struct sctp_association * asoc ; struct sctp_getaddrs_old getaddrs ; struct sctp_sockaddr_entry * addr ; union sctp_addr temp ; void * addrs ; if ( len < sizeof ( struct sctp_getaddrs_old ) )  len = sizeof ( struct sctp_getaddrs_old ); if ( copy_from_user ( & getaddrs , optval , len ) )  if ( getaddrs . addr_num <= 0 || getaddrs . addr_num >= ( INT_MAX / sizeof ( union sctp_addr ) ) )  if ( 0 == getaddrs . assoc_id )  bp = & sctp_sk ( sk ) -> ep -> base . bind_addr; asoc = sctp_id2assoc ( sk , getaddrs . assoc_id ); if ( ! asoc )  bp = & asoc -> base . bind_addr; addrs = kmalloc ( sizeof ( union sctp_addr ) * getaddrs . addr_num , GFP_KERNEL ); if ( ! addrs )  if ( sctp_list_single_entry ( & bp -> address_list ) )  addr = list_entry ( bp -> address_list . next struct sctp_sockaddr_entry , list ) if ( sctp_is_any ( & addr -> a ) )  memcpy ( & temp , & addr -> a , sizeof ( temp ) ); sctp_get_pf_specific ( sk -> sk_family ) -> addr_v4map ( sp , & temp ); addrlen = sctp_get_af_specific ( temp . sa . sa_family ) -> sockaddr_len; memcpy ( buf , & temp , addrlen ); buf += addrlen; bytes_copied += addrlen; if ( copy_to_user ( to , addrs , bytes_copied ) )  