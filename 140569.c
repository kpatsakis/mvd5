static int sctp_getsockopt(struct sock *sk, int level, int char __user *optval, int __user *optlen) int len ; if ( level != SOL_SCTP )  if ( get_user ( len , optlen ) )  if ( len < 0 )  switch ( optname )  retval = sctp_getsockopt_sctp_status ( sk , len , optval , optlen ); static int sctp_getsockopt_sctp_status(struct sock *sk, int char __user int __user *optlen) struct sctp_status status ; struct sctp_transport * transport ; sctp_assoc_t associd ; if ( len < sizeof ( status ) )  len = sizeof ( status ); if ( copy_from_user ( & status , optval , len ) )  associd = status . sstat_assoc_id; asoc = sctp_id2assoc ( sk , associd ); struct sctp_association *sctp_id2assoc(struct sock *sk, sctp_assoc_t id) struct sctp_association * asoc = NULL ; if ( ! sctp_style ( sk , UDP ) )  if ( ! sctp_sstate ( sk , ESTABLISHED ) && ! sctp_sstate ( sk , CLOSING ) )  return NULL ; return asoc ; if ( ! id || ( id == ( sctp_assoc_t ) - 1 ) )  return NULL ; asoc = ( struct sctp_association * ) idr_find ( & sctp_assocs_id , ( int ) id ); if ( ! asoc || ( asoc -> base . sk != sk ) || asoc -> base . dead )  return NULL ; return asoc ; if ( ! asoc )  transport = asoc -> peer . primary_path; status . sstat_assoc_id = sctp_assoc2id ( asoc ); status . sstat_state = sctp_assoc_to_state ( asoc ); status . sstat_rwnd = asoc -> peer . rwnd; status . sstat_unackdata = asoc -> unack_data; status . sstat_penddata = sctp_tsnmap_pending ( & asoc -> peer . tsn_map ); status . sstat_instrms = asoc -> c . sinit_max_instreams; status . sstat_outstrms = asoc -> c . sinit_num_ostreams; status . sstat_fragmentation_point = asoc -> frag_point; status . sstat_primary . spinfo_assoc_id = sctp_assoc2id ( transport -> asoc ); memcpy ( & status . sstat_primary . spinfo_address , & transport -> ipaddr , transport -> af_specific -> sockaddr_len ); sctp_get_pf_specific ( sk -> sk_family ) -> addr_to_user ( sctp_sk ( sk ) , ( union sctp_addr * ) & status . sstat_primary . spinfo_address ); status . sstat_primary . spinfo_state = transport -> state; status . sstat_primary . spinfo_cwnd = transport -> cwnd; status . sstat_primary . spinfo_srtt = transport -> srtt; status . sstat_primary . spinfo_rto = jiffies_to_msecs ( transport -> rto ); status . sstat_primary . spinfo_mtu = transport -> pathmtu; if ( status . sstat_primary . spinfo_state == SCTP_UNKNOWN )  status . sstat_primary . spinfo_state = SCTP_ACTIVE; pr_debug ( "%s: len:%d, state:%d, rwnd:%d, assoc_id:%d\n" , __func__ , len , status . sstat_state , status . sstat_rwnd , status . sstat_assoc_id ); 