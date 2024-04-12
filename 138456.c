static void v9fs_remove(void *opaque) int32_t fid ; size_t offset = 7 ; V9fsFidState * fidp ; V9fsPDU * pdu = opaque ; err = pdu_unmarshal ( pdu , offset , "d" , & fid ); if ( err < 0 )  fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; f -> flags |= FID_REFERENCED; return f ; return NULL ; if ( fidp == NULL )  err = - EINVAL; if ( ! ( pdu -> s -> ctx . export_flags & V9FS_PATHNAME_FSCONTEXT ) )  err = - EOPNOTSUPP; err = v9fs_mark_fids_unreclaim ( pdu , & fidp -> path ); static int v9fs_mark_fids_unreclaim(V9fsPDU *pdu, V9fsPath *path) int err ; V9fsState * s = pdu -> s ; V9fsFidState * fidp , head_fid ; head_fid . next = s -> fid_list; for (fidp = s->fid_list; fidp; fidp = fidp->next) if ( fidp -> path . size != path -> size )  if ( ! memcmp ( fidp -> path . data , path -> data , path -> size ) )  fidp -> flags |= FID_NON_RECLAIMABLE; err = v9fs_reopen_fid ( pdu , fidp ); if ( err < 0 )  return - 1 ; if ( err == 0 )  fidp = & head_fid; return 0 ; if ( err < 0 )  err = v9fs_co_remove ( pdu , & fidp -> path ); if ( ! err )  err = offset; complete_pdu ( pdu -> s , pdu , err ); static void complete_pdu(V9fsState *s, V9fsPDU *pdu, ssize_t len) if ( len < 0 )  int err = - len ; if ( s -> proto_version != V9FS_PROTO_2000L )  V9fsString str ; str . data = strerror ( err ); str . size = strlen ( str . data ); len += pdu_marshal ( pdu , len , "s" , & str ); len += pdu_marshal ( pdu , len , "d" , err ); pdu_marshal ( pdu , 0 , "dbw" , ( int32_t ) len , id , pdu -> tag ); pdu -> size = len; pdu -> id = id; virtqueue_push ( s -> vq , & pdu -> elem , len ); qemu_co_queue_next ( & pdu -> complete ); free_pdu ( s , pdu ); 