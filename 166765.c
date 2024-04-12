static void v9fs_renameat(void *opaque) size_t offset = 7 ; V9fsPDU * pdu = opaque ; V9fsState * s = pdu -> s ; int32_t olddirfid , newdirfid ; err = pdu_unmarshal ( pdu , offset , "dsds" , & olddirfid , & old_name , & newdirfid , & new_name ); if ( err < 0 )  err = v9fs_complete_renameat ( pdu , olddirfid , & old_name , newdirfid , & new_name ); static int v9fs_complete_renameat(V9fsPDU *pdu, int32_t V9fsString *old_name, int32_t V9fsString *new_name) olddirfidp = get_fid ( pdu , olddirfid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; return f ; return NULL ; if ( olddirfidp == NULL )  err = - ENOENT; if ( newdirfid != - 1 )  newdirfidp = get_fid ( pdu , newdirfid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; return f ; return NULL ; if ( newdirfidp == NULL )  err = - ENOENT; newdirfidp = get_fid ( pdu , olddirfid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; return f ; return NULL ; err = v9fs_co_renameat ( pdu , & olddirfidp -> path , old_name , & newdirfidp -> path , new_name ); return err ; if ( ! err )  err = offset; complete_pdu ( s , pdu , err ); static void complete_pdu(V9fsState *s, V9fsPDU *pdu, ssize_t len) if ( len < 0 )  int err = - len ; if ( s -> proto_version != V9FS_PROTO_2000L )  V9fsString str ; str . data = strerror ( err ); str . size = strlen ( str . data ); len += pdu_marshal ( pdu , len , "s" , & str ); len += pdu_marshal ( pdu , len , "d" , err ); pdu_marshal ( pdu , 0 , "dbw" , ( int32_t ) len , id , pdu -> tag ); pdu -> size = len; pdu -> id = id; virtqueue_push ( s -> vq , & pdu -> elem , len ); qemu_co_queue_next ( & pdu -> complete ); free_pdu ( s , pdu ); 