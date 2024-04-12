static int CVE_2013_1828_PATCHED_sctp_getsockopt_assoc_stats(struct sock *sk, int char __user int __user *optlen) struct sctp_assoc_stats sas ; if ( len < sizeof ( sctp_assoc_t ) )  len = min_t ( size_t , len , sizeof ( sas ) ); if ( copy_from_user ( & sas , optval , len ) )  asoc = sctp_id2assoc ( sk , sas . sas_assoc_id ); if ( ! asoc )  sas . sas_rtxchunks = asoc -> stats . rtxchunks; sas . sas_gapcnt = asoc -> stats . gapcnt; sas . sas_outofseqtsns = asoc -> stats . outofseqtsns; sas . sas_osacks = asoc -> stats . osacks; sas . sas_isacks = asoc -> stats . isacks; sas . sas_octrlchunks = asoc -> stats . octrlchunks; sas . sas_ictrlchunks = asoc -> stats . ictrlchunks; sas . sas_oodchunks = asoc -> stats . oodchunks; sas . sas_iodchunks = asoc -> stats . iodchunks; sas . sas_ouodchunks = asoc -> stats . ouodchunks; sas . sas_iuodchunks = asoc -> stats . iuodchunks; sas . sas_idupchunks = asoc -> stats . idupchunks; sas . sas_opackets = asoc -> stats . opackets; sas . sas_ipackets = asoc -> stats . ipackets; sas . sas_maxrto = asoc -> stats . max_obs_rto; memcpy ( & sas . sas_obs_rto_ipaddr , & asoc -> stats . obs_rto_ipaddr , sizeof ( struct sockaddr_storage ) ); SCTP_DEBUG_PRINTK ( "sctp_getsockopt_assoc_stat(%d): %d\n" , len , sas . sas_assoc_id ); if ( copy_to_user ( optval , & sas , len ) )  