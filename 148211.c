static void v9fs_xattrwalk(void *opaque) int64_t size ; V9fsString name ; size_t offset = 7 ; int32_t fid , newfid ; V9fsFidState * file_fidp ; V9fsPDU * pdu = opaque ; V9fsState * s = pdu -> s ; err = pdu_unmarshal ( pdu , offset , "dds" , & fid , & newfid , & name ); if ( err < 0 )  file_fidp = get_fid ( pdu , fid ); static V9fsFidState *get_fid(V9fsPDU *pdu, int32_t fid) int err ; V9fsFidState * f ; V9fsState * s = pdu -> s ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  f -> ref ++; err = v9fs_reopen_fid ( pdu , f ); if ( err < 0 )  return NULL ; f -> flags |= FID_REFERENCED; return f ; return NULL ; if ( file_fidp == NULL )  err = - ENOENT; xattr_fidp = alloc_fid ( s , newfid ); static V9fsFidState *alloc_fid(V9fsState *s, int32_t fid) V9fsFidState * f ; for (f = s->fid_list; f; f = f->next) if ( f -> fid == fid )  return NULL ; f = g_malloc0 ( sizeof ( V9fsFidState ) ); f -> fid = fid; f -> fid_type = P9_FID_NONE; f -> ref = 1; f -> flags |= FID_REFERENCED; f -> next = s -> fid_list; return f ; if ( xattr_fidp == NULL )  err = - EINVAL; if ( name . data == NULL )  size = v9fs_co_llistxattr ( pdu , & xattr_fidp -> path , NULL , 0 ); if ( size < 0 )  err = size; xattr_fidp -> fs . xattr . len = size; xattr_fidp -> fid_type = P9_FID_XATTR; xattr_fidp -> fs . xattr . copied_len = - 1; if ( size )  xattr_fidp -> fs . xattr . value = g_malloc ( size ); err = v9fs_co_llistxattr ( pdu , & xattr_fidp -> path , xattr_fidp -> fs . xattr . value , xattr_fidp -> fs . xattr . len ); if ( err < 0 )  err = pdu_marshal ( pdu , offset , "q" , size ); if ( err < 0 )  err += offset; size = v9fs_co_lgetxattr ( pdu , & xattr_fidp -> path , & name , NULL , 0 ); if ( size < 0 )  err = size; xattr_fidp -> fs . xattr . len = size; xattr_fidp -> fid_type = P9_FID_XATTR; xattr_fidp -> fs . xattr . copied_len = - 1; if ( size )  xattr_fidp -> fs . xattr . value = g_malloc ( size ); err = v9fs_co_lgetxattr ( pdu , & xattr_fidp -> path , & name , xattr_fidp -> fs . xattr . value , xattr_fidp -> fs . xattr . len ); if ( err < 0 )  err = pdu_marshal ( pdu , offset , "q" , size ); if ( err < 0 )  err += offset; complete_pdu ( s , pdu , err ); static void complete_pdu(V9fsState *s, V9fsPDU *pdu, ssize_t len) if ( len < 0 )  int err = - len ; if ( s -> proto_version != V9FS_PROTO_2000L )  V9fsString str ; str . data = strerror ( err ); str . size = strlen ( str . data ); len += pdu_marshal ( pdu , len , "s" , & str ); len += pdu_marshal ( pdu , len , "d" , err ); pdu_marshal ( pdu , 0 , "dbw" , ( int32_t ) len , id , pdu -> tag ); pdu -> size = len; pdu -> id = id; virtqueue_push ( s -> vq , & pdu -> elem , len ); qemu_co_queue_next ( & pdu -> complete ); free_pdu ( s , pdu ); 